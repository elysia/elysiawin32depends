#ifndef _PBJ_Internal_home_daniel_sirikata_libcore_src_Subscription
#define _PBJ_Internal_home_daniel_sirikata_libcore_src_Subscription
#include "pbj.hpp"
#include "/home/daniel/sirikata/libcore/src/Subscription.pb.h"
namespace Sirikata {
namespace SubscriptionPBJ {
namespace Protocol {
    class ISubscribe : public PBJ::Message< ISubscribe > {
    protected:
        _PBJ_Internal::Subscribe *super;
    public:
        _PBJ_Internal::Subscribe* _PBJSuper(){ return super; }
        const _PBJ_Internal::Subscribe* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::Subscribe _PBJ_SubType;
        ISubscribe(_PBJ_Internal::Subscribe &reference):PBJ::Message< ISubscribe >(&reference) {
            super=&reference;
        }
        template <class T> ISubscribe(const PBJ::RefClass<T> &other) : PBJ::Message<ISubscribe>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> ISubscribe& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        ISubscribe(ISubscribe &reference):PBJ::Message< ISubscribe >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        ISubscribe& operator=(ISubscribe &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const ISubscribe& default_instance() {
            static _PBJ_Internal::Subscribe def_inst=_PBJ_Internal::Subscribe::default_instance();
            static ISubscribe _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::Subscribe::descriptor();
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
        inline void clear_broadcast_name() {return super->clear_broadcast_name();}
        enum {
            broadcast_name_field_tag=9
        };
        inline bool has_broadcast_name() const {return super->has_broadcast_name()&&_PBJValidate<PBJ::int32>()(super->broadcast_name());}
        inline PBJ::int32 broadcast_name() const {
            if (has_broadcast_name()) {
                return (PBJ::int32)_PBJCast< PBJ::int32>()(super->broadcast_name());
            } else {
                return _PBJCast < PBJ::int32> ()();
            }
        }
        inline void set_broadcast_name(const PBJ::int32 &value) const {
            super->set_broadcast_name(_PBJConstruct< PBJ::int32>()(value));
        }
        inline void clear_update_period() {return super->clear_update_period();}
        enum {
            update_period_field_tag=10
        };
        inline bool has_update_period() const {return super->has_update_period()&&_PBJValidate<PBJ::Duration>()(super->update_period());}
        inline PBJ::Duration update_period() const {
            if (has_update_period()) {
                return (PBJ::Duration)_PBJCast< PBJ::Duration>()(super->update_period());
            } else {
                return _PBJCast < PBJ::Duration> ()();
            }
        }
        inline void set_update_period(const PBJ::Duration &value) const {
            super->set_update_period(_PBJConstruct< PBJ::Duration>()(value));
        }
        inline void clear_object() {return super->clear_object();}
        enum {
            object_field_tag=11
        };
        inline bool has_object() const {return super->has_object()&&_PBJValidate<PBJ::UUID>()(super->object());}
        inline PBJ::UUID object() const {
            if (has_object()) {
                return (PBJ::UUID)_PBJCast< PBJ::UUID>()(super->object());
            } else {
                return _PBJCast < PBJ::UUID> ()();
            }
        }
        inline void set_object(const PBJ::UUID &value) const {
            super->set_object(_PBJConstruct< PBJ::UUID>()(value));
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
    class Subscribe : public ISubscribe {
    protected:
        _PBJ_Internal::Subscribe superconstructed;
    public:
        Subscribe():ISubscribe(superconstructed) {
            super=&superconstructed;
        }
        Subscribe(const _PBJ_Internal::Subscribe &copy):ISubscribe(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        Subscribe(_PBJ_Internal::Subscribe &reference):ISubscribe(reference) {
        }
        Subscribe(const ISubscribe &copy):ISubscribe(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        Subscribe(const Subscribe &copy):ISubscribe(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        Subscribe& operator=(const ISubscribe &copy) {
            this->PBJ::Message<ISubscribe>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        Subscribe& operator=(const Subscribe &copy) {
            this->PBJ::Message<ISubscribe>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        Subscribe* New()const{ return new Subscribe; }
    };
}
}
}
namespace Sirikata {
namespace SubscriptionPBJ {
namespace Protocol {
    class IBroadcast : public PBJ::Message< IBroadcast > {
    protected:
        _PBJ_Internal::Broadcast *super;
    public:
        _PBJ_Internal::Broadcast* _PBJSuper(){ return super; }
        const _PBJ_Internal::Broadcast* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::Broadcast _PBJ_SubType;
        IBroadcast(_PBJ_Internal::Broadcast &reference):PBJ::Message< IBroadcast >(&reference) {
            super=&reference;
        }
        template <class T> IBroadcast(const PBJ::RefClass<T> &other) : PBJ::Message<IBroadcast>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IBroadcast& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IBroadcast(IBroadcast &reference):PBJ::Message< IBroadcast >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IBroadcast& operator=(IBroadcast &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IBroadcast& default_instance() {
            static _PBJ_Internal::Broadcast def_inst=_PBJ_Internal::Broadcast::default_instance();
            static IBroadcast _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::Broadcast::descriptor();
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
        inline void clear_broadcast_name() {return super->clear_broadcast_name();}
        enum {
            broadcast_name_field_tag=9
        };
        inline bool has_broadcast_name() const {return super->has_broadcast_name()&&_PBJValidate<PBJ::int32>()(super->broadcast_name());}
        inline PBJ::int32 broadcast_name() const {
            if (has_broadcast_name()) {
                return (PBJ::int32)_PBJCast< PBJ::int32>()(super->broadcast_name());
            } else {
                return _PBJCast < PBJ::int32> ()();
            }
        }
        inline void set_broadcast_name(const PBJ::int32 &value) const {
            super->set_broadcast_name(_PBJConstruct< PBJ::int32>()(value));
        }
        inline void clear_data() {return super->clear_data();}
        enum {
            data_field_tag=10
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
        inline void clear_object() {return super->clear_object();}
        enum {
            object_field_tag=11
        };
        inline bool has_object() const {return super->has_object()&&_PBJValidate<PBJ::UUID>()(super->object());}
        inline PBJ::UUID object() const {
            if (has_object()) {
                return (PBJ::UUID)_PBJCast< PBJ::UUID>()(super->object());
            } else {
                return _PBJCast < PBJ::UUID> ()();
            }
        }
        inline void set_object(const PBJ::UUID &value) const {
            super->set_object(_PBJConstruct< PBJ::UUID>()(value));
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
    class Broadcast : public IBroadcast {
    protected:
        _PBJ_Internal::Broadcast superconstructed;
    public:
        Broadcast():IBroadcast(superconstructed) {
            super=&superconstructed;
        }
        Broadcast(const _PBJ_Internal::Broadcast &copy):IBroadcast(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        Broadcast(_PBJ_Internal::Broadcast &reference):IBroadcast(reference) {
        }
        Broadcast(const IBroadcast &copy):IBroadcast(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        Broadcast(const Broadcast &copy):IBroadcast(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        Broadcast& operator=(const IBroadcast &copy) {
            this->PBJ::Message<IBroadcast>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        Broadcast& operator=(const Broadcast &copy) {
            this->PBJ::Message<IBroadcast>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        Broadcast* New()const{ return new Broadcast; }
    };
}
}
}
#endif
