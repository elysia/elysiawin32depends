#ifndef _PBJ_Internal_home_daniel_sirikata_libcore_src_Persistence
#define _PBJ_Internal_home_daniel_sirikata_libcore_src_Persistence
#include "pbj.hpp"
#include "/home/daniel/sirikata/libcore/src/Persistence.pb.h"
namespace Sirikata {
namespace Persistence {
namespace Protocol {
    class IStorageKey : public PBJ::Message< IStorageKey > {
    protected:
        _PBJ_Internal::StorageKey *super;
    public:
        _PBJ_Internal::StorageKey* _PBJSuper(){ return super; }
        const _PBJ_Internal::StorageKey* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::StorageKey _PBJ_SubType;
        IStorageKey(_PBJ_Internal::StorageKey &reference):PBJ::Message< IStorageKey >(&reference) {
            super=&reference;
        }
        template <class T> IStorageKey(const PBJ::RefClass<T> &other) : PBJ::Message<IStorageKey>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IStorageKey& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IStorageKey(IStorageKey &reference):PBJ::Message< IStorageKey >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IStorageKey& operator=(IStorageKey &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IStorageKey& default_instance() {
            static _PBJ_Internal::StorageKey def_inst=_PBJ_Internal::StorageKey::default_instance();
            static IStorageKey _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::StorageKey::descriptor();
        }
        inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const{
            return super->unknown_fields();
        }
        inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields(){
            return super->mutable_unknown_fields();
        }
        const ::google::protobuf::Descriptor* GetDescriptor() const {
            return super->GetDescriptor();
        }
        const ::google::protobuf::Reflection* GetReflection() const {
            return super->GetReflection();
        }
        int GetCachedSize()const{ return super->GetCachedSize(); }
        inline void clear_object_uuid() {return super->clear_object_uuid();}
        enum {
            object_uuid_field_tag=9
        };
        inline bool has_object_uuid() const {return super->has_object_uuid()&&_PBJValidate<PBJ::UUID>()(super->object_uuid());}
        inline PBJ::UUID object_uuid() const {
            if (has_object_uuid()) {
                return (PBJ::UUID)_PBJCast< PBJ::UUID>()(super->object_uuid());
            } else {
                return _PBJCast < PBJ::UUID> ()();
            }
        }
        inline void set_object_uuid(const PBJ::UUID &value) const {
            super->set_object_uuid(_PBJConstruct< PBJ::UUID>()(value));
        }
        inline void clear_field_id() {return super->clear_field_id();}
        enum {
            field_id_field_tag=10
        };
        inline bool has_field_id() const {return super->has_field_id()&&_PBJValidate<PBJ::uint64>()(super->field_id());}
        inline PBJ::uint64 field_id() const {
            if (has_field_id()) {
                return (PBJ::uint64)_PBJCast< PBJ::uint64>()(super->field_id());
            } else {
                return _PBJCast < PBJ::uint64> ()();
            }
        }
        inline void set_field_id(const PBJ::uint64 &value) const {
            super->set_field_id(_PBJConstruct< PBJ::uint64>()(value));
        }
        inline void clear_field_name() {return super->clear_field_name();}
        enum {
            field_name_field_tag=11
        };
        inline void set_field_name(const char *value) const {
            super->set_field_name(value);
        }
        inline bool has_field_name() const {return super->has_field_name()&&_PBJValidate<PBJ::utf8string>()(super->field_name());}
        inline ::std::string field_name() const {
            if (has_field_name()) {
                return (::std::string)_PBJCast< PBJ::utf8string>()(super->field_name());
            } else {
                return _PBJCast < PBJ::utf8string> ()();
            }
        }
        inline void set_field_name(const ::std::string &value) const {
            super->set_field_name(_PBJConstruct< PBJ::utf8string>()(value));
        }
        bool _HasAllPBJFields() const {
            return true
                ;
        }
        static bool within_reserved_field_tag_range(int field_tag) {
            return false||(field_tag>=1&&field_tag<=8)||(field_tag>=1536&&field_tag<=2560)||(field_tag>=229376&&field_tag<=294912);
        }
        static bool within_extension_field_tag_range(int field_tag) {
            return false;
        }
        enum {
            num_reserved_field_tag_ranges=3,
            reserved_field_tag_start_0=1,
            reserved_field_tag_end_0=9,
            reserved_field_tag_start_1=1536,
            reserved_field_tag_end_1=2561,
            reserved_field_tag_start_2=229376,
            reserved_field_tag_end_2=294913,
            reserved_field_tag_start_3=0,
            reserved_field_tag_end_3=0
        };
        enum {
            num_extension_field_tag_ranges=0,
            extension_field_tag_start_0=0,
            extension_field_tag_end_0=0,
            extension_field_tag_start_1=0,
            extension_field_tag_end_1=0,
            extension_field_tag_start_2=0,
            extension_field_tag_end_2=0,
            extension_field_tag_start_3=0,
            extension_field_tag_end_3=0
        };
    };
    class StorageKey : public IStorageKey {
    protected:
        _PBJ_Internal::StorageKey superconstructed;
    public:
        StorageKey():IStorageKey(superconstructed) {
            super=&superconstructed;
        }
        StorageKey(const _PBJ_Internal::StorageKey &copy):IStorageKey(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        StorageKey(_PBJ_Internal::StorageKey &reference):IStorageKey(reference) {
        }
        StorageKey(const IStorageKey &copy):IStorageKey(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        StorageKey(const StorageKey &copy):IStorageKey(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        StorageKey& operator=(const IStorageKey &copy) {
            this->PBJ::Message<IStorageKey>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        StorageKey& operator=(const StorageKey &copy) {
            this->PBJ::Message<IStorageKey>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        StorageKey* New()const{ return new StorageKey; }
    };
}
}
}
namespace Sirikata {
namespace Persistence {
namespace Protocol {
    class IStorageValue : public PBJ::Message< IStorageValue > {
    protected:
        _PBJ_Internal::StorageValue *super;
    public:
        _PBJ_Internal::StorageValue* _PBJSuper(){ return super; }
        const _PBJ_Internal::StorageValue* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::StorageValue _PBJ_SubType;
        IStorageValue(_PBJ_Internal::StorageValue &reference):PBJ::Message< IStorageValue >(&reference) {
            super=&reference;
        }
        template <class T> IStorageValue(const PBJ::RefClass<T> &other) : PBJ::Message<IStorageValue>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IStorageValue& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IStorageValue(IStorageValue &reference):PBJ::Message< IStorageValue >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IStorageValue& operator=(IStorageValue &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IStorageValue& default_instance() {
            static _PBJ_Internal::StorageValue def_inst=_PBJ_Internal::StorageValue::default_instance();
            static IStorageValue _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::StorageValue::descriptor();
        }
        inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const{
            return super->unknown_fields();
        }
        inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields(){
            return super->mutable_unknown_fields();
        }
        const ::google::protobuf::Descriptor* GetDescriptor() const {
            return super->GetDescriptor();
        }
        const ::google::protobuf::Reflection* GetReflection() const {
            return super->GetReflection();
        }
        int GetCachedSize()const{ return super->GetCachedSize(); }
        inline void clear_data() {return super->clear_data();}
        enum {
            data_field_tag=12
        };
        inline void set_data(const char *value) const {
            super->set_data(value);
        }
        inline void set_data(const void *value, size_t size) const {
            super->set_data(value,size);
        }
        inline bool has_data() const {return super->has_data()&&_PBJValidate<PBJ::bytes>()(super->data());}
        inline ::std::string data() const {
            if (has_data()) {
                return (::std::string)_PBJCast< PBJ::bytes>()(super->data());
            } else {
                return _PBJCast < PBJ::bytes> ()();
            }
        }
        inline void set_data(const ::std::string &value) const {
            super->set_data(_PBJConstruct< PBJ::bytes>()(value));
        }
        bool _HasAllPBJFields() const {
            return true
                ;
        }
        static bool within_reserved_field_tag_range(int field_tag) {
            return false||(field_tag>=1&&field_tag<=8)||(field_tag>=1536&&field_tag<=2560)||(field_tag>=229376&&field_tag<=294912);
        }
        static bool within_extension_field_tag_range(int field_tag) {
            return false;
        }
        enum {
            num_reserved_field_tag_ranges=3,
            reserved_field_tag_start_0=1,
            reserved_field_tag_end_0=9,
            reserved_field_tag_start_1=1536,
            reserved_field_tag_end_1=2561,
            reserved_field_tag_start_2=229376,
            reserved_field_tag_end_2=294913,
            reserved_field_tag_start_3=0,
            reserved_field_tag_end_3=0
        };
        enum {
            num_extension_field_tag_ranges=0,
            extension_field_tag_start_0=0,
            extension_field_tag_end_0=0,
            extension_field_tag_start_1=0,
            extension_field_tag_end_1=0,
            extension_field_tag_start_2=0,
            extension_field_tag_end_2=0,
            extension_field_tag_start_3=0,
            extension_field_tag_end_3=0
        };
    };
    class StorageValue : public IStorageValue {
    protected:
        _PBJ_Internal::StorageValue superconstructed;
    public:
        StorageValue():IStorageValue(superconstructed) {
            super=&superconstructed;
        }
        StorageValue(const _PBJ_Internal::StorageValue &copy):IStorageValue(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        StorageValue(_PBJ_Internal::StorageValue &reference):IStorageValue(reference) {
        }
        StorageValue(const IStorageValue &copy):IStorageValue(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        StorageValue(const StorageValue &copy):IStorageValue(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        StorageValue& operator=(const IStorageValue &copy) {
            this->PBJ::Message<IStorageValue>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        StorageValue& operator=(const StorageValue &copy) {
            this->PBJ::Message<IStorageValue>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        StorageValue* New()const{ return new StorageValue; }
    };
}
}
}
namespace Sirikata {
namespace Persistence {
namespace Protocol {
    class IStorageElement : public PBJ::Message< IStorageElement > {
    protected:
        _PBJ_Internal::StorageElement *super;
    public:
        _PBJ_Internal::StorageElement* _PBJSuper(){ return super; }
        const _PBJ_Internal::StorageElement* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::StorageElement _PBJ_SubType;
        IStorageElement(_PBJ_Internal::StorageElement &reference):PBJ::Message< IStorageElement >(&reference) {
            super=&reference;
        }
        template <class T> IStorageElement(const PBJ::RefClass<T> &other) : PBJ::Message<IStorageElement>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IStorageElement& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IStorageElement(IStorageElement &reference):PBJ::Message< IStorageElement >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IStorageElement& operator=(IStorageElement &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IStorageElement& default_instance() {
            static _PBJ_Internal::StorageElement def_inst=_PBJ_Internal::StorageElement::default_instance();
            static IStorageElement _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::StorageElement::descriptor();
        }
        inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const{
            return super->unknown_fields();
        }
        inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields(){
            return super->mutable_unknown_fields();
        }
        const ::google::protobuf::Descriptor* GetDescriptor() const {
            return super->GetDescriptor();
        }
        const ::google::protobuf::Reflection* GetReflection() const {
            return super->GetReflection();
        }
        int GetCachedSize()const{ return super->GetCachedSize(); }
        inline void clear_object_uuid() {return super->clear_object_uuid();}
        enum {
            object_uuid_field_tag=9
        };
        inline bool has_object_uuid() const {return super->has_object_uuid()&&_PBJValidate<PBJ::UUID>()(super->object_uuid());}
        inline PBJ::UUID object_uuid() const {
            if (has_object_uuid()) {
                return (PBJ::UUID)_PBJCast< PBJ::UUID>()(super->object_uuid());
            } else {
                return _PBJCast < PBJ::UUID> ()();
            }
        }
        inline void set_object_uuid(const PBJ::UUID &value) const {
            super->set_object_uuid(_PBJConstruct< PBJ::UUID>()(value));
        }
        inline void clear_field_id() {return super->clear_field_id();}
        enum {
            field_id_field_tag=10
        };
        inline bool has_field_id() const {return super->has_field_id()&&_PBJValidate<PBJ::uint64>()(super->field_id());}
        inline PBJ::uint64 field_id() const {
            if (has_field_id()) {
                return (PBJ::uint64)_PBJCast< PBJ::uint64>()(super->field_id());
            } else {
                return _PBJCast < PBJ::uint64> ()();
            }
        }
        inline void set_field_id(const PBJ::uint64 &value) const {
            super->set_field_id(_PBJConstruct< PBJ::uint64>()(value));
        }
        inline void clear_field_name() {return super->clear_field_name();}
        enum {
            field_name_field_tag=11
        };
        inline void set_field_name(const char *value) const {
            super->set_field_name(value);
        }
        inline bool has_field_name() const {return super->has_field_name()&&_PBJValidate<PBJ::utf8string>()(super->field_name());}
        inline ::std::string field_name() const {
            if (has_field_name()) {
                return (::std::string)_PBJCast< PBJ::utf8string>()(super->field_name());
            } else {
                return _PBJCast < PBJ::utf8string> ()();
            }
        }
        inline void set_field_name(const ::std::string &value) const {
            super->set_field_name(_PBJConstruct< PBJ::utf8string>()(value));
        }
        inline void clear_data() {return super->clear_data();}
        enum {
            data_field_tag=12
        };
        inline void set_data(const char *value) const {
            super->set_data(value);
        }
        inline void set_data(const void *value, size_t size) const {
            super->set_data(value,size);
        }
        inline bool has_data() const {return super->has_data()&&_PBJValidate<PBJ::bytes>()(super->data());}
        inline ::std::string data() const {
            if (has_data()) {
                return (::std::string)_PBJCast< PBJ::bytes>()(super->data());
            } else {
                return _PBJCast < PBJ::bytes> ()();
            }
        }
        inline void set_data(const ::std::string &value) const {
            super->set_data(_PBJConstruct< PBJ::bytes>()(value));
        }
        inline void clear_index() {return super->clear_index();}
        enum {
            index_field_tag=13
        };
        inline bool has_index() const {return super->has_index()&&_PBJValidate<PBJ::int32>()(super->index());}
        inline PBJ::int32 index() const {
            if (has_index()) {
                return (PBJ::int32)_PBJCast< PBJ::int32>()(super->index());
            } else {
                return _PBJCast < PBJ::int32> ()();
            }
        }
        inline void set_index(const PBJ::int32 &value) const {
            super->set_index(_PBJConstruct< PBJ::int32>()(value));
        }
        enum ReturnStatus {
            KEY_MISSING=_PBJ_Internal::StorageElement::KEY_MISSING,
            INTERNAL_ERROR=_PBJ_Internal::StorageElement::INTERNAL_ERROR
        };
        inline void clear_return_status() {return super->clear_return_status();}
        enum {
            return_status_field_tag=15
        };
        inline bool has_return_status() const {return super->has_return_status();}
        inline ReturnStatus return_status() const {
            if (has_return_status()) {
                return (ReturnStatus)(super->return_status());
            } else {
                return _PBJCast < ReturnStatus> ()();
            }
        }
        inline void set_return_status(const ReturnStatus &value) const {
            super->set_return_status((_PBJ_Internal::StorageElement::ReturnStatus)value);
        }
        inline void clear_ttl() {return super->clear_ttl();}
        enum {
            ttl_field_tag=16
        };
        inline bool has_ttl() const {return super->has_ttl()&&_PBJValidate<PBJ::Duration>()(super->ttl());}
        inline PBJ::Duration ttl() const {
            if (has_ttl()) {
                return (PBJ::Duration)_PBJCast< PBJ::Duration>()(super->ttl());
            } else {
                return _PBJCast < PBJ::Duration> ()();
            }
        }
        inline void set_ttl(const PBJ::Duration &value) const {
            super->set_ttl(_PBJConstruct< PBJ::Duration>()(value));
        }
        inline void clear_subscription_id() {return super->clear_subscription_id();}
        enum {
            subscription_id_field_tag=17
        };
        inline bool has_subscription_id() const {return super->has_subscription_id()&&_PBJValidate<PBJ::int32>()(super->subscription_id());}
        inline PBJ::int32 subscription_id() const {
            if (has_subscription_id()) {
                return (PBJ::int32)_PBJCast< PBJ::int32>()(super->subscription_id());
            } else {
                return _PBJCast < PBJ::int32> ()();
            }
        }
        inline void set_subscription_id(const PBJ::int32 &value) const {
            super->set_subscription_id(_PBJConstruct< PBJ::int32>()(value));
        }
        bool _HasAllPBJFields() const {
            return true
                ;
        }
        static bool within_reserved_field_tag_range(int field_tag) {
            return false||(field_tag>=1&&field_tag<=8)||(field_tag>=1536&&field_tag<=2560)||(field_tag>=229376&&field_tag<=294912);
        }
        static bool within_extension_field_tag_range(int field_tag) {
            return false;
        }
        enum {
            num_reserved_field_tag_ranges=3,
            reserved_field_tag_start_0=1,
            reserved_field_tag_end_0=9,
            reserved_field_tag_start_1=1536,
            reserved_field_tag_end_1=2561,
            reserved_field_tag_start_2=229376,
            reserved_field_tag_end_2=294913,
            reserved_field_tag_start_3=0,
            reserved_field_tag_end_3=0
        };
        enum {
            num_extension_field_tag_ranges=0,
            extension_field_tag_start_0=0,
            extension_field_tag_end_0=0,
            extension_field_tag_start_1=0,
            extension_field_tag_end_1=0,
            extension_field_tag_start_2=0,
            extension_field_tag_end_2=0,
            extension_field_tag_start_3=0,
            extension_field_tag_end_3=0
        };
    };
    class StorageElement : public IStorageElement {
    protected:
        _PBJ_Internal::StorageElement superconstructed;
    public:
        StorageElement():IStorageElement(superconstructed) {
            super=&superconstructed;
        }
        StorageElement(const _PBJ_Internal::StorageElement &copy):IStorageElement(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        StorageElement(_PBJ_Internal::StorageElement &reference):IStorageElement(reference) {
        }
        StorageElement(const IStorageElement &copy):IStorageElement(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        StorageElement(const StorageElement &copy):IStorageElement(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        StorageElement& operator=(const IStorageElement &copy) {
            this->PBJ::Message<IStorageElement>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        StorageElement& operator=(const StorageElement &copy) {
            this->PBJ::Message<IStorageElement>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        StorageElement* New()const{ return new StorageElement; }
    };
}
}
}
namespace Sirikata {
namespace Persistence {
namespace Protocol {
    class ICompareElement : public PBJ::Message< ICompareElement > {
    protected:
        _PBJ_Internal::CompareElement *super;
    public:
        _PBJ_Internal::CompareElement* _PBJSuper(){ return super; }
        const _PBJ_Internal::CompareElement* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::CompareElement _PBJ_SubType;
        ICompareElement(_PBJ_Internal::CompareElement &reference):PBJ::Message< ICompareElement >(&reference) {
            super=&reference;
        }
        template <class T> ICompareElement(const PBJ::RefClass<T> &other) : PBJ::Message<ICompareElement>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> ICompareElement& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        ICompareElement(ICompareElement &reference):PBJ::Message< ICompareElement >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        ICompareElement& operator=(ICompareElement &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const ICompareElement& default_instance() {
            static _PBJ_Internal::CompareElement def_inst=_PBJ_Internal::CompareElement::default_instance();
            static ICompareElement _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::CompareElement::descriptor();
        }
        inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const{
            return super->unknown_fields();
        }
        inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields(){
            return super->mutable_unknown_fields();
        }
        const ::google::protobuf::Descriptor* GetDescriptor() const {
            return super->GetDescriptor();
        }
        const ::google::protobuf::Reflection* GetReflection() const {
            return super->GetReflection();
        }
        int GetCachedSize()const{ return super->GetCachedSize(); }
        inline void clear_object_uuid() {return super->clear_object_uuid();}
        enum {
            object_uuid_field_tag=9
        };
        inline bool has_object_uuid() const {return super->has_object_uuid()&&_PBJValidate<PBJ::UUID>()(super->object_uuid());}
        inline PBJ::UUID object_uuid() const {
            if (has_object_uuid()) {
                return (PBJ::UUID)_PBJCast< PBJ::UUID>()(super->object_uuid());
            } else {
                return _PBJCast < PBJ::UUID> ()();
            }
        }
        inline void set_object_uuid(const PBJ::UUID &value) const {
            super->set_object_uuid(_PBJConstruct< PBJ::UUID>()(value));
        }
        inline void clear_field_id() {return super->clear_field_id();}
        enum {
            field_id_field_tag=10
        };
        inline bool has_field_id() const {return super->has_field_id()&&_PBJValidate<PBJ::uint64>()(super->field_id());}
        inline PBJ::uint64 field_id() const {
            if (has_field_id()) {
                return (PBJ::uint64)_PBJCast< PBJ::uint64>()(super->field_id());
            } else {
                return _PBJCast < PBJ::uint64> ()();
            }
        }
        inline void set_field_id(const PBJ::uint64 &value) const {
            super->set_field_id(_PBJConstruct< PBJ::uint64>()(value));
        }
        inline void clear_field_name() {return super->clear_field_name();}
        enum {
            field_name_field_tag=11
        };
        inline void set_field_name(const char *value) const {
            super->set_field_name(value);
        }
        inline bool has_field_name() const {return super->has_field_name()&&_PBJValidate<PBJ::utf8string>()(super->field_name());}
        inline ::std::string field_name() const {
            if (has_field_name()) {
                return (::std::string)_PBJCast< PBJ::utf8string>()(super->field_name());
            } else {
                return _PBJCast < PBJ::utf8string> ()();
            }
        }
        inline void set_field_name(const ::std::string &value) const {
            super->set_field_name(_PBJConstruct< PBJ::utf8string>()(value));
        }
        inline void clear_data() {return super->clear_data();}
        enum {
            data_field_tag=12
        };
        inline void set_data(const char *value) const {
            super->set_data(value);
        }
        inline void set_data(const void *value, size_t size) const {
            super->set_data(value,size);
        }
        inline bool has_data() const {return super->has_data()&&_PBJValidate<PBJ::bytes>()(super->data());}
        inline ::std::string data() const {
            if (has_data()) {
                return (::std::string)_PBJCast< PBJ::bytes>()(super->data());
            } else {
                return _PBJCast < PBJ::bytes> ()();
            }
        }
        inline void set_data(const ::std::string &value) const {
            super->set_data(_PBJConstruct< PBJ::bytes>()(value));
        }
        enum COMPARATOR {
            EQUAL=_PBJ_Internal::CompareElement::EQUAL,
            NEQUAL=_PBJ_Internal::CompareElement::NEQUAL
        };
        inline void clear_comparator() {return super->clear_comparator();}
        enum {
            comparator_field_tag=14
        };
        inline bool has_comparator() const {return super->has_comparator();}
        inline COMPARATOR comparator() const {
            if (has_comparator()) {
                return (COMPARATOR)(super->comparator());
            } else {
                return _PBJCast < COMPARATOR> ()();
            }
        }
        inline void set_comparator(const COMPARATOR &value) const {
            super->set_comparator((_PBJ_Internal::CompareElement::COMPARATOR)value);
        }
        bool _HasAllPBJFields() const {
            return true
                ;
        }
        static bool within_reserved_field_tag_range(int field_tag) {
            return false||(field_tag>=1&&field_tag<=8)||(field_tag>=1536&&field_tag<=2560)||(field_tag>=229376&&field_tag<=294912);
        }
        static bool within_extension_field_tag_range(int field_tag) {
            return false;
        }
        enum {
            num_reserved_field_tag_ranges=3,
            reserved_field_tag_start_0=1,
            reserved_field_tag_end_0=9,
            reserved_field_tag_start_1=1536,
            reserved_field_tag_end_1=2561,
            reserved_field_tag_start_2=229376,
            reserved_field_tag_end_2=294913,
            reserved_field_tag_start_3=0,
            reserved_field_tag_end_3=0
        };
        enum {
            num_extension_field_tag_ranges=0,
            extension_field_tag_start_0=0,
            extension_field_tag_end_0=0,
            extension_field_tag_start_1=0,
            extension_field_tag_end_1=0,
            extension_field_tag_start_2=0,
            extension_field_tag_end_2=0,
            extension_field_tag_start_3=0,
            extension_field_tag_end_3=0
        };
    };
    class CompareElement : public ICompareElement {
    protected:
        _PBJ_Internal::CompareElement superconstructed;
    public:
        CompareElement():ICompareElement(superconstructed) {
            super=&superconstructed;
        }
        CompareElement(const _PBJ_Internal::CompareElement &copy):ICompareElement(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        CompareElement(_PBJ_Internal::CompareElement &reference):ICompareElement(reference) {
        }
        CompareElement(const ICompareElement &copy):ICompareElement(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        CompareElement(const CompareElement &copy):ICompareElement(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        CompareElement& operator=(const ICompareElement &copy) {
            this->PBJ::Message<ICompareElement>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        CompareElement& operator=(const CompareElement &copy) {
            this->PBJ::Message<ICompareElement>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        CompareElement* New()const{ return new CompareElement; }
    };
}
}
}
namespace Sirikata {
namespace Persistence {
namespace Protocol {
    class IStorageSet : public PBJ::Message< IStorageSet > {
    protected:
        _PBJ_Internal::StorageSet *super;
    public:
        _PBJ_Internal::StorageSet* _PBJSuper(){ return super; }
        const _PBJ_Internal::StorageSet* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::StorageSet _PBJ_SubType;
        IStorageSet(_PBJ_Internal::StorageSet &reference):PBJ::Message< IStorageSet >(&reference) {
            super=&reference;
        }
        template <class T> IStorageSet(const PBJ::RefClass<T> &other) : PBJ::Message<IStorageSet>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IStorageSet& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IStorageSet(IStorageSet &reference):PBJ::Message< IStorageSet >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IStorageSet& operator=(IStorageSet &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IStorageSet& default_instance() {
            static _PBJ_Internal::StorageSet def_inst=_PBJ_Internal::StorageSet::default_instance();
            static IStorageSet _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::StorageSet::descriptor();
        }
        inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const{
            return super->unknown_fields();
        }
        inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields(){
            return super->mutable_unknown_fields();
        }
        const ::google::protobuf::Descriptor* GetDescriptor() const {
            return super->GetDescriptor();
        }
        const ::google::protobuf::Reflection* GetReflection() const {
            return super->GetReflection();
        }
        int GetCachedSize()const{ return super->GetCachedSize(); }
        inline void clear_reads() {return super->clear_reads();}
        enum {
            reads_field_tag=9
        };
        inline int reads_size() const {return super->reads_size();}
        inline bool has_reads(int index) const {assert(index>=0&&index<reads_size()); return true;}
        inline StorageElement reads(int index) const {
            return StorageElement(*const_cast<_PBJ_Internal::StorageElement*>(&super->reads(index)));
        }
        inline PBJ::RefClass<IStorageElement> mutable_reads(int index) {
            IStorageElement retval(*super->mutable_reads(index));
            return retval;
        }
        inline PBJ::RefClass<IStorageElement> add_reads() {
            IStorageElement retval(*super->add_reads());
            return retval;
        }
        bool _HasAllPBJFields() const {
            return true
                ;
        }
        static bool within_reserved_field_tag_range(int field_tag) {
            return false||(field_tag>=1&&field_tag<=8)||(field_tag>=1536&&field_tag<=2560)||(field_tag>=229376&&field_tag<=294912);
        }
        static bool within_extension_field_tag_range(int field_tag) {
            return false;
        }
        enum {
            num_reserved_field_tag_ranges=3,
            reserved_field_tag_start_0=1,
            reserved_field_tag_end_0=9,
            reserved_field_tag_start_1=1536,
            reserved_field_tag_end_1=2561,
            reserved_field_tag_start_2=229376,
            reserved_field_tag_end_2=294913,
            reserved_field_tag_start_3=0,
            reserved_field_tag_end_3=0
        };
        enum {
            num_extension_field_tag_ranges=0,
            extension_field_tag_start_0=0,
            extension_field_tag_end_0=0,
            extension_field_tag_start_1=0,
            extension_field_tag_end_1=0,
            extension_field_tag_start_2=0,
            extension_field_tag_end_2=0,
            extension_field_tag_start_3=0,
            extension_field_tag_end_3=0
        };
    };
    class StorageSet : public IStorageSet {
    protected:
        _PBJ_Internal::StorageSet superconstructed;
    public:
        StorageSet():IStorageSet(superconstructed) {
            super=&superconstructed;
        }
        StorageSet(const _PBJ_Internal::StorageSet &copy):IStorageSet(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        StorageSet(_PBJ_Internal::StorageSet &reference):IStorageSet(reference) {
        }
        StorageSet(const IStorageSet &copy):IStorageSet(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        StorageSet(const StorageSet &copy):IStorageSet(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        StorageSet& operator=(const IStorageSet &copy) {
            this->PBJ::Message<IStorageSet>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        StorageSet& operator=(const StorageSet &copy) {
            this->PBJ::Message<IStorageSet>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        StorageSet* New()const{ return new StorageSet; }
    };
}
}
}
namespace Sirikata {
namespace Persistence {
namespace Protocol {
    class IReadSet : public PBJ::Message< IReadSet > {
    protected:
        _PBJ_Internal::ReadSet *super;
    public:
        _PBJ_Internal::ReadSet* _PBJSuper(){ return super; }
        const _PBJ_Internal::ReadSet* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::ReadSet _PBJ_SubType;
        IReadSet(_PBJ_Internal::ReadSet &reference):PBJ::Message< IReadSet >(&reference) {
            super=&reference;
        }
        template <class T> IReadSet(const PBJ::RefClass<T> &other) : PBJ::Message<IReadSet>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IReadSet& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IReadSet(IReadSet &reference):PBJ::Message< IReadSet >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IReadSet& operator=(IReadSet &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IReadSet& default_instance() {
            static _PBJ_Internal::ReadSet def_inst=_PBJ_Internal::ReadSet::default_instance();
            static IReadSet _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::ReadSet::descriptor();
        }
        inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const{
            return super->unknown_fields();
        }
        inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields(){
            return super->mutable_unknown_fields();
        }
        const ::google::protobuf::Descriptor* GetDescriptor() const {
            return super->GetDescriptor();
        }
        const ::google::protobuf::Reflection* GetReflection() const {
            return super->GetReflection();
        }
        int GetCachedSize()const{ return super->GetCachedSize(); }
        inline void clear_reads() {return super->clear_reads();}
        enum {
            reads_field_tag=9
        };
        inline int reads_size() const {return super->reads_size();}
        inline bool has_reads(int index) const {assert(index>=0&&index<reads_size()); return true;}
        inline StorageElement reads(int index) const {
            return StorageElement(*const_cast<_PBJ_Internal::StorageElement*>(&super->reads(index)));
        }
        inline PBJ::RefClass<IStorageElement> mutable_reads(int index) {
            IStorageElement retval(*super->mutable_reads(index));
            return retval;
        }
        inline PBJ::RefClass<IStorageElement> add_reads() {
            IStorageElement retval(*super->add_reads());
            return retval;
        }
        bool _HasAllPBJFields() const {
            return true
                ;
        }
        static bool within_reserved_field_tag_range(int field_tag) {
            return false||(field_tag>=1&&field_tag<=8)||(field_tag>=1536&&field_tag<=2560)||(field_tag>=229376&&field_tag<=294912);
        }
        static bool within_extension_field_tag_range(int field_tag) {
            return false;
        }
        enum {
            num_reserved_field_tag_ranges=3,
            reserved_field_tag_start_0=1,
            reserved_field_tag_end_0=9,
            reserved_field_tag_start_1=1536,
            reserved_field_tag_end_1=2561,
            reserved_field_tag_start_2=229376,
            reserved_field_tag_end_2=294913,
            reserved_field_tag_start_3=0,
            reserved_field_tag_end_3=0
        };
        enum {
            num_extension_field_tag_ranges=0,
            extension_field_tag_start_0=0,
            extension_field_tag_end_0=0,
            extension_field_tag_start_1=0,
            extension_field_tag_end_1=0,
            extension_field_tag_start_2=0,
            extension_field_tag_end_2=0,
            extension_field_tag_start_3=0,
            extension_field_tag_end_3=0
        };
    };
    class ReadSet : public IReadSet {
    protected:
        _PBJ_Internal::ReadSet superconstructed;
    public:
        ReadSet():IReadSet(superconstructed) {
            super=&superconstructed;
        }
        ReadSet(const _PBJ_Internal::ReadSet &copy):IReadSet(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        ReadSet(_PBJ_Internal::ReadSet &reference):IReadSet(reference) {
        }
        ReadSet(const IReadSet &copy):IReadSet(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        ReadSet(const ReadSet &copy):IReadSet(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        ReadSet& operator=(const IReadSet &copy) {
            this->PBJ::Message<IReadSet>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        ReadSet& operator=(const ReadSet &copy) {
            this->PBJ::Message<IReadSet>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        ReadSet* New()const{ return new ReadSet; }
    };
}
}
}
namespace Sirikata {
namespace Persistence {
namespace Protocol {
    class IWriteSet : public PBJ::Message< IWriteSet > {
    protected:
        _PBJ_Internal::WriteSet *super;
    public:
        _PBJ_Internal::WriteSet* _PBJSuper(){ return super; }
        const _PBJ_Internal::WriteSet* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::WriteSet _PBJ_SubType;
        IWriteSet(_PBJ_Internal::WriteSet &reference):PBJ::Message< IWriteSet >(&reference) {
            super=&reference;
        }
        template <class T> IWriteSet(const PBJ::RefClass<T> &other) : PBJ::Message<IWriteSet>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IWriteSet& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IWriteSet(IWriteSet &reference):PBJ::Message< IWriteSet >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IWriteSet& operator=(IWriteSet &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IWriteSet& default_instance() {
            static _PBJ_Internal::WriteSet def_inst=_PBJ_Internal::WriteSet::default_instance();
            static IWriteSet _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::WriteSet::descriptor();
        }
        inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const{
            return super->unknown_fields();
        }
        inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields(){
            return super->mutable_unknown_fields();
        }
        const ::google::protobuf::Descriptor* GetDescriptor() const {
            return super->GetDescriptor();
        }
        const ::google::protobuf::Reflection* GetReflection() const {
            return super->GetReflection();
        }
        int GetCachedSize()const{ return super->GetCachedSize(); }
        inline void clear_writes() {return super->clear_writes();}
        enum {
            writes_field_tag=10
        };
        inline int writes_size() const {return super->writes_size();}
        inline bool has_writes(int index) const {assert(index>=0&&index<writes_size()); return true;}
        inline StorageElement writes(int index) const {
            return StorageElement(*const_cast<_PBJ_Internal::StorageElement*>(&super->writes(index)));
        }
        inline PBJ::RefClass<IStorageElement> mutable_writes(int index) {
            IStorageElement retval(*super->mutable_writes(index));
            return retval;
        }
        inline PBJ::RefClass<IStorageElement> add_writes() {
            IStorageElement retval(*super->add_writes());
            return retval;
        }
        bool _HasAllPBJFields() const {
            return true
                ;
        }
        static bool within_reserved_field_tag_range(int field_tag) {
            return false||(field_tag>=1&&field_tag<=8)||(field_tag>=1536&&field_tag<=2560)||(field_tag>=229376&&field_tag<=294912);
        }
        static bool within_extension_field_tag_range(int field_tag) {
            return false;
        }
        enum {
            num_reserved_field_tag_ranges=3,
            reserved_field_tag_start_0=1,
            reserved_field_tag_end_0=9,
            reserved_field_tag_start_1=1536,
            reserved_field_tag_end_1=2561,
            reserved_field_tag_start_2=229376,
            reserved_field_tag_end_2=294913,
            reserved_field_tag_start_3=0,
            reserved_field_tag_end_3=0
        };
        enum {
            num_extension_field_tag_ranges=0,
            extension_field_tag_start_0=0,
            extension_field_tag_end_0=0,
            extension_field_tag_start_1=0,
            extension_field_tag_end_1=0,
            extension_field_tag_start_2=0,
            extension_field_tag_end_2=0,
            extension_field_tag_start_3=0,
            extension_field_tag_end_3=0
        };
    };
    class WriteSet : public IWriteSet {
    protected:
        _PBJ_Internal::WriteSet superconstructed;
    public:
        WriteSet():IWriteSet(superconstructed) {
            super=&superconstructed;
        }
        WriteSet(const _PBJ_Internal::WriteSet &copy):IWriteSet(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        WriteSet(_PBJ_Internal::WriteSet &reference):IWriteSet(reference) {
        }
        WriteSet(const IWriteSet &copy):IWriteSet(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        WriteSet(const WriteSet &copy):IWriteSet(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        WriteSet& operator=(const IWriteSet &copy) {
            this->PBJ::Message<IWriteSet>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        WriteSet& operator=(const WriteSet &copy) {
            this->PBJ::Message<IWriteSet>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        WriteSet* New()const{ return new WriteSet; }
    };
}
}
}
namespace Sirikata {
namespace Persistence {
namespace Protocol {
    class IReadWriteSet : public PBJ::Message< IReadWriteSet > {
    protected:
        _PBJ_Internal::ReadWriteSet *super;
    public:
        _PBJ_Internal::ReadWriteSet* _PBJSuper(){ return super; }
        const _PBJ_Internal::ReadWriteSet* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::ReadWriteSet _PBJ_SubType;
        IReadWriteSet(_PBJ_Internal::ReadWriteSet &reference):PBJ::Message< IReadWriteSet >(&reference) {
            super=&reference;
        }
        template <class T> IReadWriteSet(const PBJ::RefClass<T> &other) : PBJ::Message<IReadWriteSet>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IReadWriteSet& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IReadWriteSet(IReadWriteSet &reference):PBJ::Message< IReadWriteSet >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IReadWriteSet& operator=(IReadWriteSet &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IReadWriteSet& default_instance() {
            static _PBJ_Internal::ReadWriteSet def_inst=_PBJ_Internal::ReadWriteSet::default_instance();
            static IReadWriteSet _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::ReadWriteSet::descriptor();
        }
        inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const{
            return super->unknown_fields();
        }
        inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields(){
            return super->mutable_unknown_fields();
        }
        const ::google::protobuf::Descriptor* GetDescriptor() const {
            return super->GetDescriptor();
        }
        const ::google::protobuf::Reflection* GetReflection() const {
            return super->GetReflection();
        }
        int GetCachedSize()const{ return super->GetCachedSize(); }
        inline void clear_reads() {return super->clear_reads();}
        enum {
            reads_field_tag=9
        };
        inline int reads_size() const {return super->reads_size();}
        inline bool has_reads(int index) const {assert(index>=0&&index<reads_size()); return true;}
        inline StorageElement reads(int index) const {
            return StorageElement(*const_cast<_PBJ_Internal::StorageElement*>(&super->reads(index)));
        }
        inline PBJ::RefClass<IStorageElement> mutable_reads(int index) {
            IStorageElement retval(*super->mutable_reads(index));
            return retval;
        }
        inline PBJ::RefClass<IStorageElement> add_reads() {
            IStorageElement retval(*super->add_reads());
            return retval;
        }
        inline void clear_writes() {return super->clear_writes();}
        enum {
            writes_field_tag=10
        };
        inline int writes_size() const {return super->writes_size();}
        inline bool has_writes(int index) const {assert(index>=0&&index<writes_size()); return true;}
        inline StorageElement writes(int index) const {
            return StorageElement(*const_cast<_PBJ_Internal::StorageElement*>(&super->writes(index)));
        }
        inline PBJ::RefClass<IStorageElement> mutable_writes(int index) {
            IStorageElement retval(*super->mutable_writes(index));
            return retval;
        }
        inline PBJ::RefClass<IStorageElement> add_writes() {
            IStorageElement retval(*super->add_writes());
            return retval;
        }
        enum ReadWriteSetOptions {
            RETURN_READ_NAMES=_PBJ_Internal::ReadWriteSet::RETURN_READ_NAMES
        };
        inline void clear_options() {return super->clear_options();}
        enum {
            options_field_tag=14
        };
        inline bool has_options() const {
            if (!super->has_options()) return false;
            return _PBJValidateFlags< PBJ::uint64>()(super->options(),0|RETURN_READ_NAMES);
        }
        inline PBJ::uint64 options() const {
            if (has_options()) {
                return _PBJCastFlags< PBJ::uint64>()(super->options(),0|RETURN_READ_NAMES);
            } else {
                return _PBJCast < PBJ::uint64> ()();
            }
        }
        inline void set_options(const PBJ::uint64 &value) const {
            super->set_options(_PBJConstruct< PBJ::uint64>()(value));
        }
        bool _HasAllPBJFields() const {
            return true
                ;
        }
        static bool within_reserved_field_tag_range(int field_tag) {
            return false||(field_tag>=1&&field_tag<=8)||(field_tag>=1536&&field_tag<=2560)||(field_tag>=229376&&field_tag<=294912);
        }
        static bool within_extension_field_tag_range(int field_tag) {
            return false;
        }
        enum {
            num_reserved_field_tag_ranges=3,
            reserved_field_tag_start_0=1,
            reserved_field_tag_end_0=9,
            reserved_field_tag_start_1=1536,
            reserved_field_tag_end_1=2561,
            reserved_field_tag_start_2=229376,
            reserved_field_tag_end_2=294913,
            reserved_field_tag_start_3=0,
            reserved_field_tag_end_3=0
        };
        enum {
            num_extension_field_tag_ranges=0,
            extension_field_tag_start_0=0,
            extension_field_tag_end_0=0,
            extension_field_tag_start_1=0,
            extension_field_tag_end_1=0,
            extension_field_tag_start_2=0,
            extension_field_tag_end_2=0,
            extension_field_tag_start_3=0,
            extension_field_tag_end_3=0
        };
    };
    class ReadWriteSet : public IReadWriteSet {
    protected:
        _PBJ_Internal::ReadWriteSet superconstructed;
    public:
        ReadWriteSet():IReadWriteSet(superconstructed) {
            super=&superconstructed;
        }
        ReadWriteSet(const _PBJ_Internal::ReadWriteSet &copy):IReadWriteSet(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        ReadWriteSet(_PBJ_Internal::ReadWriteSet &reference):IReadWriteSet(reference) {
        }
        ReadWriteSet(const IReadWriteSet &copy):IReadWriteSet(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        ReadWriteSet(const ReadWriteSet &copy):IReadWriteSet(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        ReadWriteSet& operator=(const IReadWriteSet &copy) {
            this->PBJ::Message<IReadWriteSet>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        ReadWriteSet& operator=(const ReadWriteSet &copy) {
            this->PBJ::Message<IReadWriteSet>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        ReadWriteSet* New()const{ return new ReadWriteSet; }
    };
}
}
}
namespace Sirikata {
namespace Persistence {
namespace Protocol {
    class IMinitransaction : public PBJ::Message< IMinitransaction > {
    protected:
        _PBJ_Internal::Minitransaction *super;
    public:
        _PBJ_Internal::Minitransaction* _PBJSuper(){ return super; }
        const _PBJ_Internal::Minitransaction* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::Minitransaction _PBJ_SubType;
        IMinitransaction(_PBJ_Internal::Minitransaction &reference):PBJ::Message< IMinitransaction >(&reference) {
            super=&reference;
        }
        template <class T> IMinitransaction(const PBJ::RefClass<T> &other) : PBJ::Message<IMinitransaction>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IMinitransaction& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IMinitransaction(IMinitransaction &reference):PBJ::Message< IMinitransaction >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IMinitransaction& operator=(IMinitransaction &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IMinitransaction& default_instance() {
            static _PBJ_Internal::Minitransaction def_inst=_PBJ_Internal::Minitransaction::default_instance();
            static IMinitransaction _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::Minitransaction::descriptor();
        }
        inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const{
            return super->unknown_fields();
        }
        inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields(){
            return super->mutable_unknown_fields();
        }
        const ::google::protobuf::Descriptor* GetDescriptor() const {
            return super->GetDescriptor();
        }
        const ::google::protobuf::Reflection* GetReflection() const {
            return super->GetReflection();
        }
        int GetCachedSize()const{ return super->GetCachedSize(); }
        inline void clear_reads() {return super->clear_reads();}
        enum {
            reads_field_tag=9
        };
        inline int reads_size() const {return super->reads_size();}
        inline bool has_reads(int index) const {assert(index>=0&&index<reads_size()); return true;}
        inline StorageElement reads(int index) const {
            return StorageElement(*const_cast<_PBJ_Internal::StorageElement*>(&super->reads(index)));
        }
        inline PBJ::RefClass<IStorageElement> mutable_reads(int index) {
            IStorageElement retval(*super->mutable_reads(index));
            return retval;
        }
        inline PBJ::RefClass<IStorageElement> add_reads() {
            IStorageElement retval(*super->add_reads());
            return retval;
        }
        inline void clear_writes() {return super->clear_writes();}
        enum {
            writes_field_tag=10
        };
        inline int writes_size() const {return super->writes_size();}
        inline bool has_writes(int index) const {assert(index>=0&&index<writes_size()); return true;}
        inline StorageElement writes(int index) const {
            return StorageElement(*const_cast<_PBJ_Internal::StorageElement*>(&super->writes(index)));
        }
        inline PBJ::RefClass<IStorageElement> mutable_writes(int index) {
            IStorageElement retval(*super->mutable_writes(index));
            return retval;
        }
        inline PBJ::RefClass<IStorageElement> add_writes() {
            IStorageElement retval(*super->add_writes());
            return retval;
        }
        inline void clear_compares() {return super->clear_compares();}
        enum {
            compares_field_tag=11
        };
        inline int compares_size() const {return super->compares_size();}
        inline bool has_compares(int index) const {assert(index>=0&&index<compares_size()); return true;}
        inline CompareElement compares(int index) const {
            return CompareElement(*const_cast<_PBJ_Internal::CompareElement*>(&super->compares(index)));
        }
        inline PBJ::RefClass<ICompareElement> mutable_compares(int index) {
            ICompareElement retval(*super->mutable_compares(index));
            return retval;
        }
        inline PBJ::RefClass<ICompareElement> add_compares() {
            ICompareElement retval(*super->add_compares());
            return retval;
        }
        enum TransactionOptions {
            RETURN_READ_NAMES=_PBJ_Internal::Minitransaction::RETURN_READ_NAMES
        };
        inline void clear_options() {return super->clear_options();}
        enum {
            options_field_tag=14
        };
        inline bool has_options() const {
            if (!super->has_options()) return false;
            return _PBJValidateFlags< PBJ::uint64>()(super->options(),0|RETURN_READ_NAMES);
        }
        inline PBJ::uint64 options() const {
            if (has_options()) {
                return _PBJCastFlags< PBJ::uint64>()(super->options(),0|RETURN_READ_NAMES);
            } else {
                return _PBJCast < PBJ::uint64> ()();
            }
        }
        inline void set_options(const PBJ::uint64 &value) const {
            super->set_options(_PBJConstruct< PBJ::uint64>()(value));
        }
        bool _HasAllPBJFields() const {
            return true
                ;
        }
        static bool within_reserved_field_tag_range(int field_tag) {
            return false;
        }
        static bool within_extension_field_tag_range(int field_tag) {
            return false;
        }
        enum {
            num_reserved_field_tag_ranges=0,
            reserved_field_tag_start_0=0,
            reserved_field_tag_end_0=0,
            reserved_field_tag_start_1=0,
            reserved_field_tag_end_1=0,
            reserved_field_tag_start_2=0,
            reserved_field_tag_end_2=0,
            reserved_field_tag_start_3=0,
            reserved_field_tag_end_3=0
        };
        enum {
            num_extension_field_tag_ranges=0,
            extension_field_tag_start_0=0,
            extension_field_tag_end_0=0,
            extension_field_tag_start_1=0,
            extension_field_tag_end_1=0,
            extension_field_tag_start_2=0,
            extension_field_tag_end_2=0,
            extension_field_tag_start_3=0,
            extension_field_tag_end_3=0
        };
    };
    class Minitransaction : public IMinitransaction {
    protected:
        _PBJ_Internal::Minitransaction superconstructed;
    public:
        Minitransaction():IMinitransaction(superconstructed) {
            super=&superconstructed;
        }
        Minitransaction(const _PBJ_Internal::Minitransaction &copy):IMinitransaction(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        Minitransaction(_PBJ_Internal::Minitransaction &reference):IMinitransaction(reference) {
        }
        Minitransaction(const IMinitransaction &copy):IMinitransaction(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        Minitransaction(const Minitransaction &copy):IMinitransaction(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        Minitransaction& operator=(const IMinitransaction &copy) {
            this->PBJ::Message<IMinitransaction>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        Minitransaction& operator=(const Minitransaction &copy) {
            this->PBJ::Message<IMinitransaction>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        Minitransaction* New()const{ return new Minitransaction; }
    };
}
}
}
namespace Sirikata {
namespace Persistence {
namespace Protocol {
    class IResponse : public PBJ::Message< IResponse > {
    protected:
        _PBJ_Internal::Response *super;
    public:
        _PBJ_Internal::Response* _PBJSuper(){ return super; }
        const _PBJ_Internal::Response* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::Response _PBJ_SubType;
        IResponse(_PBJ_Internal::Response &reference):PBJ::Message< IResponse >(&reference) {
            super=&reference;
        }
        template <class T> IResponse(const PBJ::RefClass<T> &other) : PBJ::Message<IResponse>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IResponse& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IResponse(IResponse &reference):PBJ::Message< IResponse >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IResponse& operator=(IResponse &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IResponse& default_instance() {
            static _PBJ_Internal::Response def_inst=_PBJ_Internal::Response::default_instance();
            static IResponse _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::Response::descriptor();
        }
        inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const{
            return super->unknown_fields();
        }
        inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields(){
            return super->mutable_unknown_fields();
        }
        const ::google::protobuf::Descriptor* GetDescriptor() const {
            return super->GetDescriptor();
        }
        const ::google::protobuf::Reflection* GetReflection() const {
            return super->GetReflection();
        }
        int GetCachedSize()const{ return super->GetCachedSize(); }
        inline void clear_reads() {return super->clear_reads();}
        enum {
            reads_field_tag=9
        };
        inline int reads_size() const {return super->reads_size();}
        inline bool has_reads(int index) const {assert(index>=0&&index<reads_size()); return true;}
        inline StorageElement reads(int index) const {
            return StorageElement(*const_cast<_PBJ_Internal::StorageElement*>(&super->reads(index)));
        }
        inline PBJ::RefClass<IStorageElement> mutable_reads(int index) {
            IStorageElement retval(*super->mutable_reads(index));
            return retval;
        }
        inline PBJ::RefClass<IStorageElement> add_reads() {
            IStorageElement retval(*super->add_reads());
            return retval;
        }
        enum ReturnStatus {
            SUCCESS=_PBJ_Internal::Response::SUCCESS,
            DATABASE_LOCKED=_PBJ_Internal::Response::DATABASE_LOCKED,
            KEY_MISSING=_PBJ_Internal::Response::KEY_MISSING,
            COMPARISON_FAILED=_PBJ_Internal::Response::COMPARISON_FAILED,
            INTERNAL_ERROR=_PBJ_Internal::Response::INTERNAL_ERROR
        };
        inline void clear_return_status() {return super->clear_return_status();}
        enum {
            return_status_field_tag=15
        };
        inline bool has_return_status() const {return super->has_return_status();}
        inline ReturnStatus return_status() const {
            if (has_return_status()) {
                return (ReturnStatus)(super->return_status());
            } else {
                return _PBJCast < ReturnStatus> ()();
            }
        }
        inline void set_return_status(const ReturnStatus &value) const {
            super->set_return_status((_PBJ_Internal::Response::ReturnStatus)value);
        }
        bool _HasAllPBJFields() const {
            return true
                ;
        }
        static bool within_reserved_field_tag_range(int field_tag) {
            return false||(field_tag>=1&&field_tag<=8);
        }
        static bool within_extension_field_tag_range(int field_tag) {
            return false;
        }
        enum {
            num_reserved_field_tag_ranges=1,
            reserved_field_tag_start_0=1,
            reserved_field_tag_end_0=9,
            reserved_field_tag_start_1=0,
            reserved_field_tag_end_1=0,
            reserved_field_tag_start_2=0,
            reserved_field_tag_end_2=0,
            reserved_field_tag_start_3=0,
            reserved_field_tag_end_3=0
        };
        enum {
            num_extension_field_tag_ranges=0,
            extension_field_tag_start_0=0,
            extension_field_tag_end_0=0,
            extension_field_tag_start_1=0,
            extension_field_tag_end_1=0,
            extension_field_tag_start_2=0,
            extension_field_tag_end_2=0,
            extension_field_tag_start_3=0,
            extension_field_tag_end_3=0
        };
    };
    class Response : public IResponse {
    protected:
        _PBJ_Internal::Response superconstructed;
    public:
        Response():IResponse(superconstructed) {
            super=&superconstructed;
        }
        Response(const _PBJ_Internal::Response &copy):IResponse(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        Response(_PBJ_Internal::Response &reference):IResponse(reference) {
        }
        Response(const IResponse &copy):IResponse(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        Response(const Response &copy):IResponse(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        Response& operator=(const IResponse &copy) {
            this->PBJ::Message<IResponse>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        Response& operator=(const Response &copy) {
            this->PBJ::Message<IResponse>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        Response* New()const{ return new Response; }
    };
}
}
}
#endif
