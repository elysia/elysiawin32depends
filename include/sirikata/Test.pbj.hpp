#ifndef _PBJ_Internal_home_daniel_sirikata_libcore_src_Test
#define _PBJ_Internal_home_daniel_sirikata_libcore_src_Test
#include "pbj.hpp"
#include "/home/daniel/sirikata/libcore/src/Test.pb.h"
namespace Sirikata {
namespace PB {
    class IExternalMessage : public PBJ::Message< IExternalMessage > {
    protected:
        _PBJ_Internal::ExternalMessage *super;
    public:
        _PBJ_Internal::ExternalMessage* _PBJSuper(){ return super; }
        const _PBJ_Internal::ExternalMessage* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::ExternalMessage _PBJ_SubType;
        IExternalMessage(_PBJ_Internal::ExternalMessage &reference):PBJ::Message< IExternalMessage >(&reference) {
            super=&reference;
        }
        template <class T> IExternalMessage(const PBJ::RefClass<T> &other) : PBJ::Message<IExternalMessage>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IExternalMessage& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IExternalMessage(IExternalMessage &reference):PBJ::Message< IExternalMessage >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IExternalMessage& operator=(IExternalMessage &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IExternalMessage& default_instance() {
            static _PBJ_Internal::ExternalMessage def_inst=_PBJ_Internal::ExternalMessage::default_instance();
            static IExternalMessage _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::ExternalMessage::descriptor();
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
        class ISubMessage : public PBJ::Message< ISubMessage > {
        protected:
            _PBJ_Internal::ExternalMessage::SubMessage *super;
        public:
            _PBJ_Internal::ExternalMessage::SubMessage* _PBJSuper(){ return super; }
            const _PBJ_Internal::ExternalMessage::SubMessage* _PBJSuper()const{ return super; }
            typedef _PBJ_Internal::ExternalMessage::SubMessage _PBJ_SubType;
            ISubMessage(_PBJ_Internal::ExternalMessage::SubMessage &reference):PBJ::Message< ISubMessage >(&reference) {
                super=&reference;
            }
            template <class T> ISubMessage(const PBJ::RefClass<T> &other) : PBJ::Message<ISubMessage>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
                super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            }
            template <class T> ISubMessage& operator=(const PBJ::RefClass<T> &other){
                setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
                super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
                return *this;
            }
            ISubMessage(ISubMessage &reference):PBJ::Message< ISubMessage >(reference._PBJSuper()) {
                super=reference._PBJSuper();
            }
            ISubMessage& operator=(ISubMessage &reference){
                setMessageRepresentation(reference._PBJSuper());
                super=reference._PBJSuper();
                return *this;
            }
            inline static const ISubMessage& default_instance() {
                static _PBJ_Internal::ExternalMessage::SubMessage def_inst=_PBJ_Internal::ExternalMessage::SubMessage::default_instance();
                static ISubMessage _internalStaticVar(def_inst);
                return _internalStaticVar;
            }
            static const ::google::protobuf::Descriptor* descriptor(){
                return _PBJ_Internal::ExternalMessage::SubMessage::descriptor();
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
            inline void clear_subuuid() {return super->clear_subuuid();}
            enum {
                subuuid_field_tag=1
            };
            inline bool has_subuuid() const {return super->has_subuuid()&&_PBJValidate<PBJ::UUID>()(super->subuuid());}
            inline PBJ::UUID subuuid() const {
                if (has_subuuid()) {
                    return (PBJ::UUID)_PBJCast< PBJ::UUID>()(super->subuuid());
                } else {
                    return _PBJCast < PBJ::UUID> ()();
                }
            }
            inline void set_subuuid(const PBJ::UUID &value) const {
                super->set_subuuid(_PBJConstruct< PBJ::UUID>()(value));
            }
            inline void clear_subvector() {return super->clear_subvector();}
            enum {
                subvector_field_tag=2
            };
            inline bool has_subvector() const {return super->subvector_size()>=3;}
            inline PBJ::Vector3d subvector() const {
                if (has_subvector()) {
                    return _PBJCast< PBJ::Vector3d>()(super->subvector(0),super->subvector(1),super->subvector(2));
                } else {
                    return _PBJCast< PBJ::Vector3d>()();
                }
            }
            inline void set_subvector(const PBJ::Vector3d &value) {
                super->clear_subvector();
                _PBJConstruct< PBJ::Vector3d>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector3d>()(value);
                super->add_subvector(_PBJtempArray[0]);
                super->add_subvector(_PBJtempArray[1]);
                super->add_subvector(_PBJtempArray[2]);
            }
            inline void clear_subduration() {return super->clear_subduration();}
            enum {
                subduration_field_tag=3
            };
            inline bool has_subduration() const {return super->has_subduration()&&_PBJValidate<PBJ::Duration>()(super->subduration());}
            inline PBJ::Duration subduration() const {
                if (has_subduration()) {
                    return (PBJ::Duration)_PBJCast< PBJ::Duration>()(super->subduration());
                } else {
                    return _PBJCast < PBJ::Duration> ()();
                }
            }
            inline void set_subduration(const PBJ::Duration &value) const {
                super->set_subduration(_PBJConstruct< PBJ::Duration>()(value));
            }
            inline void clear_subnormal() {return super->clear_subnormal();}
            enum {
                subnormal_field_tag=4
            };
            inline bool has_subnormal() const {return super->subnormal_size()>=2;}
            inline PBJ::Vector3f subnormal() const {
                if (has_subnormal()) {
                    return _PBJCast< PBJ::normal>()(super->subnormal(0),super->subnormal(1));
                } else {
                    return _PBJCast< PBJ::normal>()();
                }
            }
            inline void set_subnormal(const PBJ::Vector3f &value) {
                super->clear_subnormal();
                _PBJConstruct< PBJ::normal>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::normal>()(value);
                super->add_subnormal(_PBJtempArray[0]);
                super->add_subnormal(_PBJtempArray[1]);
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
        class SubMessage : public ISubMessage {
        protected:
            _PBJ_Internal::ExternalMessage::SubMessage superconstructed;
        public:
            SubMessage():ISubMessage(superconstructed) {
                super=&superconstructed;
            }
            SubMessage(const _PBJ_Internal::ExternalMessage::SubMessage &copy):ISubMessage(superconstructed), superconstructed(copy) {
                super=&superconstructed;
            }
            SubMessage(_PBJ_Internal::ExternalMessage::SubMessage &reference):ISubMessage(reference) {
            }
            SubMessage(const ISubMessage &copy):ISubMessage(superconstructed) {
                super=&superconstructed;
                *super=*copy._PBJSuper();
            }
            SubMessage(const SubMessage &copy):ISubMessage(superconstructed) {
                super=&superconstructed;
                *super=*copy._PBJSuper();
            }
            SubMessage& operator=(const ISubMessage &copy) {
                this->PBJ::Message<ISubMessage>::setMessageRepresentation(&superconstructed);
                super=&superconstructed;
                *super=*copy._PBJSuper();
                return *this;
            }
            SubMessage& operator=(const SubMessage &copy) {
                this->PBJ::Message<ISubMessage>::setMessageRepresentation(&superconstructed);
                super=&superconstructed;
                *super=*copy._PBJSuper();
                return *this;
            }
            SubMessage* New()const{ return new SubMessage; }
        };
        inline void clear_is_true() {return super->clear_is_true();}
        enum {
            is_true_field_tag=40
        };
        inline bool has_is_true() const {return super->has_is_true()&&_PBJValidate<bool>()(super->is_true());}
        inline bool is_true() const {
            if (has_is_true()) {
                return (bool)_PBJCast< bool>()(super->is_true());
            } else {
                return bool(true);
            }
        }
        inline void set_is_true(const bool &value) const {
            super->set_is_true(_PBJConstruct< bool>()(value));
        }
        inline void clear_v2f() {return super->clear_v2f();}
        enum {
            v2f_field_tag=2
        };
        inline bool has_v2f() const {return super->v2f_size()>=2;}
        inline PBJ::Vector2f v2f() const {
            if (has_v2f()) {
                return _PBJCast< PBJ::Vector2f>()(super->v2f(0),super->v2f(1));
            } else {
                return _PBJCast< PBJ::Vector2f>()();
            }
        }
        inline void set_v2f(const PBJ::Vector2f &value) {
            super->clear_v2f();
            _PBJConstruct< PBJ::Vector2f>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector2f>()(value);
            super->add_v2f(_PBJtempArray[0]);
            super->add_v2f(_PBJtempArray[1]);
        }
        inline void clear_sub_mes() {return super->clear_sub_mes();}
        enum {
            sub_mes_field_tag=30
        };
        inline bool has_sub_mes() const {return super->has_sub_mes();}
        inline SubMessage sub_mes() const {
            if (has_sub_mes()) {
                return SubMessage(*const_cast<_PBJ_Internal::ExternalMessage::SubMessage*>(&super->sub_mes()));
            } else {
                return _PBJCastMessage< SubMessage,ISubMessage> ()();
            }
        }
        inline PBJ::RefClass<ISubMessage> mutable_sub_mes() {
            ISubMessage retval(*super->mutable_sub_mes());
            return retval;
        }
        inline void clear_submessers() {return super->clear_submessers();}
        enum {
            submessers_field_tag=31
        };
        inline int submessers_size() const {return super->submessers_size();}
        inline bool has_submessers(int index) const {assert(index>=0&&index<submessers_size()); return true;}
        inline SubMessage submessers(int index) const {
            return SubMessage(*const_cast<_PBJ_Internal::ExternalMessage::SubMessage*>(&super->submessers(index)));
        }
        inline PBJ::RefClass<ISubMessage> mutable_submessers(int index) {
            ISubMessage retval(*super->mutable_submessers(index));
            return retval;
        }
        inline PBJ::RefClass<ISubMessage> add_submessers() {
            ISubMessage retval(*super->add_submessers());
            return retval;
        }
        inline void clear_sha() {return super->clear_sha();}
        enum {
            sha_field_tag=32
        };
        inline bool has_sha() const {return super->has_sha()&&_PBJValidate<PBJ::SHA256>()(super->sha());}
        inline PBJ::SHA256 sha() const {
            if (has_sha()) {
                return (PBJ::SHA256)_PBJCast< PBJ::SHA256>()(super->sha());
            } else {
                return _PBJCast < PBJ::SHA256> ()();
            }
        }
        inline void set_sha(const PBJ::SHA256 &value) const {
            super->set_sha(_PBJConstruct< PBJ::SHA256>()(value));
        }
        inline void clear_shas() {return super->clear_shas();}
        enum {
            shas_field_tag=33
        };
        inline int shas_size() const {return super->shas_size();}
        inline bool has_shas(int index) const {assert(index>=0&&index<shas_size()); return _PBJValidate< PBJ::SHA256>()(super->shas(index));}
        inline PBJ::SHA256 shas(int index) const {
            return _PBJCast< PBJ::SHA256>()(super->shas(index));
        }
        inline void set_shas(int index, const PBJ::SHA256 &value) const {
            return super->set_shas(index,_PBJConstruct< PBJ::SHA256>()(value));
        }
        inline void add_shas(const PBJ::SHA256 &value) const {
            super->add_shas(_PBJConstruct< PBJ::SHA256>()(value));
        }
        inline void clear_v3f() {return super->clear_v3f();}
        enum {
            v3f_field_tag=4
        };
        inline bool has_v3f() const {return super->v3f_size()>=3;}
        inline PBJ::Vector3f v3f() const {
            if (has_v3f()) {
                return _PBJCast< PBJ::Vector3f>()(super->v3f(0),super->v3f(1),super->v3f(2));
            } else {
                return _PBJCast< PBJ::Vector3f>()();
            }
        }
        inline void set_v3f(const PBJ::Vector3f &value) {
            super->clear_v3f();
            _PBJConstruct< PBJ::Vector3f>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector3f>()(value);
            super->add_v3f(_PBJtempArray[0]);
            super->add_v3f(_PBJtempArray[1]);
            super->add_v3f(_PBJtempArray[2]);
        }
        inline void clear_v3ff() {return super->clear_v3ff();}
        enum {
            v3ff_field_tag=5
        };
        inline int v3ff_size() const {return super->v3ff_size()/3;}
        inline bool has_v3ff(int index) const {assert(index<v3ff_size()&&index>=0);return true;}
        inline PBJ::Vector3f v3ff(int index) const {
            if (has_v3ff(index)) {
                return _PBJCast< PBJ::Vector3f>()(super->v3ff(index*3+0),super->v3ff(index*3+1),super->v3ff(index*3+2));
            } else {
                return _PBJCast< PBJ::Vector3f>()();
            }
        }
        inline void add_v3ff(const PBJ::Vector3f &value) {
            _PBJConstruct< PBJ::Vector3f>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector3f>()(value);
            super->add_v3ff(_PBJtempArray[0]);
            super->add_v3ff(_PBJtempArray[1]);
            super->add_v3ff(_PBJtempArray[2]);
        }
        inline void set_v3ff(int index, const PBJ::Vector3f &value) {
            _PBJConstruct< PBJ::Vector3f>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector3f>()(value);
            super->set_v3ff(index*3+0,_PBJtempArray[0]);
            super->set_v3ff(index*3+1,_PBJtempArray[1]);
            super->set_v3ff(index*3+2,_PBJtempArray[2]);
        }
        bool _HasAllPBJFields() const {
            return true
                &&has_v3f()
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
    class ExternalMessage : public IExternalMessage {
    protected:
        _PBJ_Internal::ExternalMessage superconstructed;
    public:
        ExternalMessage():IExternalMessage(superconstructed) {
            super=&superconstructed;
        }
        ExternalMessage(const _PBJ_Internal::ExternalMessage &copy):IExternalMessage(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        ExternalMessage(_PBJ_Internal::ExternalMessage &reference):IExternalMessage(reference) {
        }
        ExternalMessage(const IExternalMessage &copy):IExternalMessage(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        ExternalMessage(const ExternalMessage &copy):IExternalMessage(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        ExternalMessage& operator=(const IExternalMessage &copy) {
            this->PBJ::Message<IExternalMessage>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        ExternalMessage& operator=(const ExternalMessage &copy) {
            this->PBJ::Message<IExternalMessage>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        ExternalMessage* New()const{ return new ExternalMessage; }
    };
}
}
namespace Sirikata {
namespace PB {
    class ITestMessage : public PBJ::Message< ITestMessage > {
    protected:
        _PBJ_Internal::TestMessage *super;
    public:
        _PBJ_Internal::TestMessage* _PBJSuper(){ return super; }
        const _PBJ_Internal::TestMessage* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::TestMessage _PBJ_SubType;
        ITestMessage(_PBJ_Internal::TestMessage &reference):PBJ::Message< ITestMessage >(&reference) {
            super=&reference;
        }
        template <class T> ITestMessage(const PBJ::RefClass<T> &other) : PBJ::Message<ITestMessage>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> ITestMessage& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        ITestMessage(ITestMessage &reference):PBJ::Message< ITestMessage >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        ITestMessage& operator=(ITestMessage &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const ITestMessage& default_instance() {
            static _PBJ_Internal::TestMessage def_inst=_PBJ_Internal::TestMessage::default_instance();
            static ITestMessage _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::TestMessage::descriptor();
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
        inline void clear_xxd() {return super->clear_xxd();}
        enum {
            xxd_field_tag=20
        };
        inline bool has_xxd() const {return super->has_xxd()&&_PBJValidate<double>()(super->xxd());}
        inline double xxd() const {
            if (has_xxd()) {
                return (double)_PBJCast< double>()(super->xxd());
            } else {
                return double(10.3);
            }
        }
        inline void set_xxd(const double &value) const {
            super->set_xxd(_PBJConstruct< double>()(value));
        }
        inline void clear_xxf() {return super->clear_xxf();}
        enum {
            xxf_field_tag=21
        };
        inline bool has_xxf() const {return super->has_xxf()&&_PBJValidate<float>()(super->xxf());}
        inline float xxf() const {
            if (has_xxf()) {
                return (float)_PBJCast< float>()(super->xxf());
            } else {
                return _PBJCast < float> ()();
            }
        }
        inline void set_xxf(const float &value) const {
            super->set_xxf(_PBJConstruct< float>()(value));
        }
        inline void clear_xxu32() {return super->clear_xxu32();}
        enum {
            xxu32_field_tag=22
        };
        inline bool has_xxu32() const {return super->has_xxu32()&&_PBJValidate<PBJ::uint32>()(super->xxu32());}
        inline PBJ::uint32 xxu32() const {
            if (has_xxu32()) {
                return (PBJ::uint32)_PBJCast< PBJ::uint32>()(super->xxu32());
            } else {
                return _PBJCast < PBJ::uint32> ()();
            }
        }
        inline void set_xxu32(const PBJ::uint32 &value) const {
            super->set_xxu32(_PBJConstruct< PBJ::uint32>()(value));
        }
        inline void clear_xxs() {return super->clear_xxs();}
        enum {
            xxs_field_tag=23
        };
        inline void set_xxs(const char *value) const {
            super->set_xxs(value);
        }
        inline bool has_xxs() const {return super->has_xxs()&&_PBJValidate<PBJ::utf8string>()(super->xxs());}
        inline ::std::string xxs() const {
            if (has_xxs()) {
                return (::std::string)_PBJCast< PBJ::utf8string>()(super->xxs());
            } else {
                return _PBJCast < PBJ::utf8string> ()();
            }
        }
        inline void set_xxs(const ::std::string &value) const {
            super->set_xxs(_PBJConstruct< PBJ::utf8string>()(value));
        }
        inline void clear_xxb() {return super->clear_xxb();}
        enum {
            xxb_field_tag=24
        };
        inline void set_xxb(const char *value) const {
            super->set_xxb(value);
        }
        inline void set_xxb(const void *value, size_t size) const {
            super->set_xxb(value,size);
        }
        inline bool has_xxb() const {return super->has_xxb()&&_PBJValidate<PBJ::bytes>()(super->xxb());}
        inline ::std::string xxb() const {
            if (has_xxb()) {
                return (::std::string)_PBJCast< PBJ::bytes>()(super->xxb());
            } else {
                return _PBJCast < PBJ::bytes> ()();
            }
        }
        inline void set_xxb(const ::std::string &value) const {
            super->set_xxb(_PBJConstruct< PBJ::bytes>()(value));
        }
        inline void clear_xxss() {return super->clear_xxss();}
        enum {
            xxss_field_tag=25
        };
        inline int xxss_size() const {return super->xxss_size();}
        inline std::string& xxss(int index) {
            return *super->mutable_xxss(index);
        }
        inline void set_xxss(int index, const char *value) const {
            super->set_xxss(index,value);
        }
        inline void add_xxss(const char *value) const {
            super->add_xxss(value);
        }
        inline bool has_xxss(int index) const {assert(index>=0&&index<xxss_size()); return _PBJValidate< PBJ::utf8string>()(super->xxss(index));}
        inline const std::string& xxss(int index) const {
            return _PBJCast< PBJ::utf8string>()(super->xxss(index));
        }
        inline void set_xxss(int index, const ::std::string &value) const {
            return super->set_xxss(index,_PBJConstruct< PBJ::utf8string>()(value));
        }
        inline void add_xxss(const ::std::string &value) const {
            super->add_xxss(_PBJConstruct< PBJ::utf8string>()(value));
        }
        inline void clear_xxbb() {return super->clear_xxbb();}
        enum {
            xxbb_field_tag=26
        };
        inline int xxbb_size() const {return super->xxbb_size();}
        inline std::string& xxbb(int index) {
            return *super->mutable_xxbb(index);
        }
        inline void set_xxbb(int index, const char *value) const {
            super->set_xxbb(index,value);
        }
        inline void add_xxbb(const char *value) const {
            super->add_xxbb(value);
        }
        inline void set_xxbb(int index, const void *value, size_t size) const {
            super->set_xxbb(index,value,size);
        }
        inline void add_xxbb(const void *value, size_t size) const {
            super->add_xxbb(value,size);
        }
        inline bool has_xxbb(int index) const {assert(index>=0&&index<xxbb_size()); return _PBJValidate< PBJ::bytes>()(super->xxbb(index));}
        inline const std::string& xxbb(int index) const {
            return _PBJCast< PBJ::bytes>()(super->xxbb(index));
        }
        inline void set_xxbb(int index, const ::std::string &value) const {
            return super->set_xxbb(index,_PBJConstruct< PBJ::bytes>()(value));
        }
        inline void add_xxbb(const ::std::string &value) const {
            super->add_xxbb(_PBJConstruct< PBJ::bytes>()(value));
        }
        inline void clear_xxff() {return super->clear_xxff();}
        enum {
            xxff_field_tag=27
        };
        inline int xxff_size() const {return super->xxff_size();}
        inline bool has_xxff(int index) const {assert(index>=0&&index<xxff_size()); return _PBJValidate< float>()(super->xxff(index));}
        inline float xxff(int index) const {
            return _PBJCast< float>()(super->xxff(index));
        }
        inline void set_xxff(int index, const float &value) const {
            return super->set_xxff(index,_PBJConstruct< float>()(value));
        }
        inline void add_xxff(const float &value) const {
            super->add_xxff(_PBJConstruct< float>()(value));
        }
        inline void clear_xxnn() {return super->clear_xxnn();}
        enum {
            xxnn_field_tag=29
        };
        inline int xxnn_size() const {return super->xxnn_size()/2;}
        inline bool has_xxnn(int index) const {assert(index<xxnn_size()&&index>=0);return true;}
        inline PBJ::Vector3f xxnn(int index) const {
            if (has_xxnn(index)) {
                return _PBJCast< PBJ::normal>()(super->xxnn(index*2+0),super->xxnn(index*2+1));
            } else {
                return _PBJCast< PBJ::normal>()();
            }
        }
        inline void add_xxnn(const PBJ::Vector3f &value) {
            _PBJConstruct< PBJ::normal>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::normal>()(value);
            super->add_xxnn(_PBJtempArray[0]);
            super->add_xxnn(_PBJtempArray[1]);
        }
        inline void set_xxnn(int index, const PBJ::Vector3f &value) {
            _PBJConstruct< PBJ::normal>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::normal>()(value);
            super->set_xxnn(index*2+0,_PBJtempArray[0]);
            super->set_xxnn(index*2+1,_PBJtempArray[1]);
        }
        inline void clear_xxfr() {return super->clear_xxfr();}
        enum {
            xxfr_field_tag=28
        };
        inline bool has_xxfr() const {return super->has_xxfr()&&_PBJValidate<float>()(super->xxfr());}
        inline float xxfr() const {
            if (has_xxfr()) {
                return (float)_PBJCast< float>()(super->xxfr());
            } else {
                return _PBJCast < float> ()();
            }
        }
        inline void set_xxfr(const float &value) const {
            super->set_xxfr(_PBJConstruct< float>()(value));
        }
        inline void clear_n() {return super->clear_n();}
        enum {
            n_field_tag=1
        };
        inline bool has_n() const {return super->n_size()>=2;}
        inline PBJ::Vector3f n() const {
            if (has_n()) {
                return _PBJCast< PBJ::normal>()(super->n(0),super->n(1));
            } else {
                return _PBJCast< PBJ::normal>()();
            }
        }
        inline void set_n(const PBJ::Vector3f &value) {
            super->clear_n();
            _PBJConstruct< PBJ::normal>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::normal>()(value);
            super->add_n(_PBJtempArray[0]);
            super->add_n(_PBJtempArray[1]);
        }
        inline void clear_v2f() {return super->clear_v2f();}
        enum {
            v2f_field_tag=2
        };
        inline bool has_v2f() const {return super->v2f_size()>=2;}
        inline PBJ::Vector2f v2f() const {
            if (has_v2f()) {
                return _PBJCast< PBJ::Vector2f>()(super->v2f(0),super->v2f(1));
            } else {
                return _PBJCast< PBJ::Vector2f>()();
            }
        }
        inline void set_v2f(const PBJ::Vector2f &value) {
            super->clear_v2f();
            _PBJConstruct< PBJ::Vector2f>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector2f>()(value);
            super->add_v2f(_PBJtempArray[0]);
            super->add_v2f(_PBJtempArray[1]);
        }
        inline void clear_v2d() {return super->clear_v2d();}
        enum {
            v2d_field_tag=3
        };
        inline bool has_v2d() const {return super->v2d_size()>=2;}
        inline PBJ::Vector2d v2d() const {
            if (has_v2d()) {
                return _PBJCast< PBJ::Vector2d>()(super->v2d(0),super->v2d(1));
            } else {
                return _PBJCast< PBJ::Vector2d>()();
            }
        }
        inline void set_v2d(const PBJ::Vector2d &value) {
            super->clear_v2d();
            _PBJConstruct< PBJ::Vector2d>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector2d>()(value);
            super->add_v2d(_PBJtempArray[0]);
            super->add_v2d(_PBJtempArray[1]);
        }
        inline void clear_v3f() {return super->clear_v3f();}
        enum {
            v3f_field_tag=4
        };
        inline bool has_v3f() const {return super->v3f_size()>=3;}
        inline PBJ::Vector3f v3f() const {
            if (has_v3f()) {
                return _PBJCast< PBJ::Vector3f>()(super->v3f(0),super->v3f(1),super->v3f(2));
            } else {
                return _PBJCast< PBJ::Vector3f>()();
            }
        }
        inline void set_v3f(const PBJ::Vector3f &value) {
            super->clear_v3f();
            _PBJConstruct< PBJ::Vector3f>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector3f>()(value);
            super->add_v3f(_PBJtempArray[0]);
            super->add_v3f(_PBJtempArray[1]);
            super->add_v3f(_PBJtempArray[2]);
        }
        inline void clear_v3d() {return super->clear_v3d();}
        enum {
            v3d_field_tag=5
        };
        inline bool has_v3d() const {return super->v3d_size()>=3;}
        inline PBJ::Vector3d v3d() const {
            if (has_v3d()) {
                return _PBJCast< PBJ::Vector3d>()(super->v3d(0),super->v3d(1),super->v3d(2));
            } else {
                return _PBJCast< PBJ::Vector3d>()();
            }
        }
        inline void set_v3d(const PBJ::Vector3d &value) {
            super->clear_v3d();
            _PBJConstruct< PBJ::Vector3d>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector3d>()(value);
            super->add_v3d(_PBJtempArray[0]);
            super->add_v3d(_PBJtempArray[1]);
            super->add_v3d(_PBJtempArray[2]);
        }
        inline void clear_v4f() {return super->clear_v4f();}
        enum {
            v4f_field_tag=6
        };
        inline bool has_v4f() const {return super->v4f_size()>=4;}
        inline PBJ::Vector4f v4f() const {
            if (has_v4f()) {
                return _PBJCast< PBJ::Vector4f>()(super->v4f(0),super->v4f(1),super->v4f(2),super->v4f(3));
            } else {
                return _PBJCast< PBJ::Vector4f>()();
            }
        }
        inline void set_v4f(const PBJ::Vector4f &value) {
            super->clear_v4f();
            _PBJConstruct< PBJ::Vector4f>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector4f>()(value);
            super->add_v4f(_PBJtempArray[0]);
            super->add_v4f(_PBJtempArray[1]);
            super->add_v4f(_PBJtempArray[2]);
            super->add_v4f(_PBJtempArray[3]);
        }
        inline void clear_v4d() {return super->clear_v4d();}
        enum {
            v4d_field_tag=7
        };
        inline bool has_v4d() const {return super->v4d_size()>=4;}
        inline PBJ::Vector4d v4d() const {
            if (has_v4d()) {
                return _PBJCast< PBJ::Vector4d>()(super->v4d(0),super->v4d(1),super->v4d(2),super->v4d(3));
            } else {
                return _PBJCast< PBJ::Vector4d>()();
            }
        }
        inline void set_v4d(const PBJ::Vector4d &value) {
            super->clear_v4d();
            _PBJConstruct< PBJ::Vector4d>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector4d>()(value);
            super->add_v4d(_PBJtempArray[0]);
            super->add_v4d(_PBJtempArray[1]);
            super->add_v4d(_PBJtempArray[2]);
            super->add_v4d(_PBJtempArray[3]);
        }
        inline void clear_q() {return super->clear_q();}
        enum {
            q_field_tag=8
        };
        inline bool has_q() const {return super->q_size()>=3;}
        inline PBJ::Quaternion q() const {
            if (has_q()) {
                return _PBJCast< PBJ::Quaternion>()(super->q(0),super->q(1),super->q(2));
            } else {
                return _PBJCast< PBJ::Quaternion>()();
            }
        }
        inline void set_q(const PBJ::Quaternion &value) {
            super->clear_q();
            _PBJConstruct< PBJ::Quaternion>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Quaternion>()(value);
            super->add_q(_PBJtempArray[0]);
            super->add_q(_PBJtempArray[1]);
            super->add_q(_PBJtempArray[2]);
        }
        inline void clear_u() {return super->clear_u();}
        enum {
            u_field_tag=9
        };
        inline bool has_u() const {return super->has_u()&&_PBJValidate<PBJ::UUID>()(super->u());}
        inline PBJ::UUID u() const {
            if (has_u()) {
                return (PBJ::UUID)_PBJCast< PBJ::UUID>()(super->u());
            } else {
                return _PBJCast < PBJ::UUID> ()();
            }
        }
        inline void set_u(const PBJ::UUID &value) const {
            super->set_u(_PBJConstruct< PBJ::UUID>()(value));
        }
        inline void clear_a() {return super->clear_a();}
        enum {
            a_field_tag=10
        };
        inline bool has_a() const {return super->has_a()&&_PBJValidate<PBJ::angle>()(super->a());}
        inline float a() const {
            if (has_a()) {
                return (float)_PBJCast< PBJ::angle>()(super->a());
            } else {
                return _PBJCast < PBJ::angle> ()();
            }
        }
        inline void set_a(const float &value) const {
            super->set_a(_PBJConstruct< PBJ::angle>()(value));
        }
        inline void clear_t() {return super->clear_t();}
        enum {
            t_field_tag=11
        };
        inline bool has_t() const {return super->has_t()&&_PBJValidate<PBJ::Time>()(super->t());}
        inline PBJ::Time t() const {
            if (has_t()) {
                return (PBJ::Time)_PBJCast< PBJ::Time>()(super->t());
            } else {
                return _PBJCast < PBJ::Time> ()();
            }
        }
        inline void set_t(const PBJ::Time &value) const {
            super->set_t(_PBJConstruct< PBJ::Time>()(value));
        }
        inline void clear_d() {return super->clear_d();}
        enum {
            d_field_tag=12
        };
        inline bool has_d() const {return super->has_d()&&_PBJValidate<PBJ::Duration>()(super->d());}
        inline PBJ::Duration d() const {
            if (has_d()) {
                return (PBJ::Duration)_PBJCast< PBJ::Duration>()(super->d());
            } else {
                return _PBJCast < PBJ::Duration> ()();
            }
        }
        inline void set_d(const PBJ::Duration &value) const {
            super->set_d(_PBJConstruct< PBJ::Duration>()(value));
        }
        enum Flagsf32 {
            UNIVERSA=_PBJ_Internal::TestMessage::UNIVERSA,
            WE=_PBJ_Internal::TestMessage::WE,
            IMAGE=_PBJ_Internal::TestMessage::IMAGE,
            LOCA=_PBJ_Internal::TestMessage::LOCA
        };
        inline void clear_f32() {return super->clear_f32();}
        enum {
            f32_field_tag=13
        };
        inline bool has_f32() const {
            if (!super->has_f32()) return false;
            return _PBJValidateFlags< PBJ::uint32>()(super->f32(),0|UNIVERSA|WE|IMAGE|LOCA);
        }
        inline PBJ::uint32 f32() const {
            if (has_f32()) {
                return _PBJCastFlags< PBJ::uint32>()(super->f32(),0|UNIVERSA|WE|IMAGE|LOCA);
            } else {
                return _PBJCast < PBJ::uint32> ()();
            }
        }
        inline void set_f32(const PBJ::uint32 &value) const {
            super->set_f32(_PBJConstruct< PBJ::uint32>()(value));
        }
        enum Flagsf64 {
            UNIVERSAL=_PBJ_Internal::TestMessage::UNIVERSAL,
            WEB=_PBJ_Internal::TestMessage::WEB,
            IMAGES=_PBJ_Internal::TestMessage::IMAGES,
            LOCAL=_PBJ_Internal::TestMessage::LOCAL
        };
        enum Enum32 {
            UNIVERSAL1=_PBJ_Internal::TestMessage::UNIVERSAL1,
            WEB1=_PBJ_Internal::TestMessage::WEB1,
            IMAGES1=_PBJ_Internal::TestMessage::IMAGES1,
            LOCAL1=_PBJ_Internal::TestMessage::LOCAL1
        };
        inline void clear_f64() {return super->clear_f64();}
        enum {
            f64_field_tag=14
        };
        inline bool has_f64() const {
            if (!super->has_f64()) return false;
            return _PBJValidateFlags< PBJ::uint64>()(super->f64(),0|UNIVERSAL|WEB|IMAGES|LOCAL);
        }
        inline PBJ::uint64 f64() const {
            if (has_f64()) {
                return _PBJCastFlags< PBJ::uint64>()(super->f64(),0|UNIVERSAL|WEB|IMAGES|LOCAL);
            } else {
                return _PBJCast < PBJ::uint64> ()();
            }
        }
        inline void set_f64(const PBJ::uint64 &value) const {
            super->set_f64(_PBJConstruct< PBJ::uint64>()(value));
        }
        inline void clear_bsf() {return super->clear_bsf();}
        enum {
            bsf_field_tag=15
        };
        inline bool has_bsf() const {return super->bsf_size()>=4;}
        inline PBJ::BoundingSphere3f bsf() const {
            if (has_bsf()) {
                return _PBJCast< PBJ::BoundingSphere3f>()(super->bsf(0),super->bsf(1),super->bsf(2),super->bsf(3));
            } else {
                return _PBJCast< PBJ::BoundingSphere3f>()();
            }
        }
        inline void set_bsf(const PBJ::BoundingSphere3f &value) {
            super->clear_bsf();
            _PBJConstruct< PBJ::BoundingSphere3f>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::BoundingSphere3f>()(value);
            super->add_bsf(_PBJtempArray[0]);
            super->add_bsf(_PBJtempArray[1]);
            super->add_bsf(_PBJtempArray[2]);
            super->add_bsf(_PBJtempArray[3]);
        }
        inline void clear_bsd() {return super->clear_bsd();}
        enum {
            bsd_field_tag=16
        };
        inline bool has_bsd() const {return super->bsd_size()>=4;}
        inline PBJ::BoundingSphere3d bsd() const {
            if (has_bsd()) {
                return _PBJCast< PBJ::BoundingSphere3d>()(super->bsd(0),super->bsd(1),super->bsd(2),super->bsd(3));
            } else {
                return _PBJCast< PBJ::BoundingSphere3d>()();
            }
        }
        inline void set_bsd(const PBJ::BoundingSphere3d &value) {
            super->clear_bsd();
            _PBJConstruct< PBJ::BoundingSphere3d>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::BoundingSphere3d>()(value);
            super->add_bsd(_PBJtempArray[0]);
            super->add_bsd(_PBJtempArray[1]);
            super->add_bsd(_PBJtempArray[2]);
            super->add_bsd(_PBJtempArray[3]);
        }
        inline void clear_bbf() {return super->clear_bbf();}
        enum {
            bbf_field_tag=17
        };
        inline bool has_bbf() const {return super->bbf_size()>=6;}
        inline PBJ::BoundingBox3f3f bbf() const {
            if (has_bbf()) {
                return _PBJCast< PBJ::BoundingBox3f3f>()(super->bbf(0),super->bbf(1),super->bbf(2),super->bbf(3),super->bbf(4),super->bbf(5));
            } else {
                return _PBJCast< PBJ::BoundingBox3f3f>()();
            }
        }
        inline void set_bbf(const PBJ::BoundingBox3f3f &value) {
            super->clear_bbf();
            _PBJConstruct< PBJ::BoundingBox3f3f>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::BoundingBox3f3f>()(value);
            super->add_bbf(_PBJtempArray[0]);
            super->add_bbf(_PBJtempArray[1]);
            super->add_bbf(_PBJtempArray[2]);
            super->add_bbf(_PBJtempArray[3]);
            super->add_bbf(_PBJtempArray[4]);
            super->add_bbf(_PBJtempArray[5]);
        }
        inline void clear_bbd() {return super->clear_bbd();}
        enum {
            bbd_field_tag=18
        };
        inline bool has_bbd() const {return super->bbd_size()>=6;}
        inline PBJ::BoundingBox3d3f bbd() const {
            if (has_bbd()) {
                return _PBJCast< PBJ::BoundingBox3d3f>()(super->bbd(0),super->bbd(1),super->bbd(2),super->bbd(3),super->bbd(4),super->bbd(5));
            } else {
                return _PBJCast< PBJ::BoundingBox3d3f>()();
            }
        }
        inline void set_bbd(const PBJ::BoundingBox3d3f &value) {
            super->clear_bbd();
            _PBJConstruct< PBJ::BoundingBox3d3f>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::BoundingBox3d3f>()(value);
            super->add_bbd(_PBJtempArray[0]);
            super->add_bbd(_PBJtempArray[1]);
            super->add_bbd(_PBJtempArray[2]);
            super->add_bbd(_PBJtempArray[3]);
            super->add_bbd(_PBJtempArray[4]);
            super->add_bbd(_PBJtempArray[5]);
        }
        inline void clear_e32() {return super->clear_e32();}
        enum {
            e32_field_tag=19
        };
        inline bool has_e32() const {return super->has_e32();}
        inline Enum32 e32() const {
            if (has_e32()) {
                return (Enum32)(super->e32());
            } else {
                return _PBJCast < Enum32> ()();
            }
        }
        inline void set_e32(const Enum32 &value) const {
            super->set_e32((_PBJ_Internal::TestMessage::Enum32)value);
        }
        class ISubMessage : public PBJ::Message< ISubMessage > {
        protected:
            _PBJ_Internal::TestMessage::SubMessage *super;
        public:
            _PBJ_Internal::TestMessage::SubMessage* _PBJSuper(){ return super; }
            const _PBJ_Internal::TestMessage::SubMessage* _PBJSuper()const{ return super; }
            typedef _PBJ_Internal::TestMessage::SubMessage _PBJ_SubType;
            ISubMessage(_PBJ_Internal::TestMessage::SubMessage &reference):PBJ::Message< ISubMessage >(&reference) {
                super=&reference;
            }
            template <class T> ISubMessage(const PBJ::RefClass<T> &other) : PBJ::Message<ISubMessage>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
                super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            }
            template <class T> ISubMessage& operator=(const PBJ::RefClass<T> &other){
                setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
                super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
                return *this;
            }
            ISubMessage(ISubMessage &reference):PBJ::Message< ISubMessage >(reference._PBJSuper()) {
                super=reference._PBJSuper();
            }
            ISubMessage& operator=(ISubMessage &reference){
                setMessageRepresentation(reference._PBJSuper());
                super=reference._PBJSuper();
                return *this;
            }
            inline static const ISubMessage& default_instance() {
                static _PBJ_Internal::TestMessage::SubMessage def_inst=_PBJ_Internal::TestMessage::SubMessage::default_instance();
                static ISubMessage _internalStaticVar(def_inst);
                return _internalStaticVar;
            }
            static const ::google::protobuf::Descriptor* descriptor(){
                return _PBJ_Internal::TestMessage::SubMessage::descriptor();
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
            inline void clear_subuuid() {return super->clear_subuuid();}
            enum {
                subuuid_field_tag=1
            };
            inline bool has_subuuid() const {return super->has_subuuid()&&_PBJValidate<PBJ::UUID>()(super->subuuid());}
            inline PBJ::UUID subuuid() const {
                if (has_subuuid()) {
                    return (PBJ::UUID)_PBJCast< PBJ::UUID>()(super->subuuid());
                } else {
                    return _PBJCast < PBJ::UUID> ()();
                }
            }
            inline void set_subuuid(const PBJ::UUID &value) const {
                super->set_subuuid(_PBJConstruct< PBJ::UUID>()(value));
            }
            inline void clear_subvector() {return super->clear_subvector();}
            enum {
                subvector_field_tag=2
            };
            inline bool has_subvector() const {return super->subvector_size()>=3;}
            inline PBJ::Vector3d subvector() const {
                if (has_subvector()) {
                    return _PBJCast< PBJ::Vector3d>()(super->subvector(0),super->subvector(1),super->subvector(2));
                } else {
                    return _PBJCast< PBJ::Vector3d>()();
                }
            }
            inline void set_subvector(const PBJ::Vector3d &value) {
                super->clear_subvector();
                _PBJConstruct< PBJ::Vector3d>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector3d>()(value);
                super->add_subvector(_PBJtempArray[0]);
                super->add_subvector(_PBJtempArray[1]);
                super->add_subvector(_PBJtempArray[2]);
            }
            inline void clear_subduration() {return super->clear_subduration();}
            enum {
                subduration_field_tag=3
            };
            inline bool has_subduration() const {return super->has_subduration()&&_PBJValidate<PBJ::Duration>()(super->subduration());}
            inline PBJ::Duration subduration() const {
                if (has_subduration()) {
                    return (PBJ::Duration)_PBJCast< PBJ::Duration>()(super->subduration());
                } else {
                    return _PBJCast < PBJ::Duration> ()();
                }
            }
            inline void set_subduration(const PBJ::Duration &value) const {
                super->set_subduration(_PBJConstruct< PBJ::Duration>()(value));
            }
            inline void clear_subnormal() {return super->clear_subnormal();}
            enum {
                subnormal_field_tag=4
            };
            inline bool has_subnormal() const {return super->subnormal_size()>=2;}
            inline PBJ::Vector3f subnormal() const {
                if (has_subnormal()) {
                    return _PBJCast< PBJ::normal>()(super->subnormal(0),super->subnormal(1));
                } else {
                    return _PBJCast< PBJ::normal>()();
                }
            }
            inline void set_subnormal(const PBJ::Vector3f &value) {
                super->clear_subnormal();
                _PBJConstruct< PBJ::normal>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::normal>()(value);
                super->add_subnormal(_PBJtempArray[0]);
                super->add_subnormal(_PBJtempArray[1]);
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
        class SubMessage : public ISubMessage {
        protected:
            _PBJ_Internal::TestMessage::SubMessage superconstructed;
        public:
            SubMessage():ISubMessage(superconstructed) {
                super=&superconstructed;
            }
            SubMessage(const _PBJ_Internal::TestMessage::SubMessage &copy):ISubMessage(superconstructed), superconstructed(copy) {
                super=&superconstructed;
            }
            SubMessage(_PBJ_Internal::TestMessage::SubMessage &reference):ISubMessage(reference) {
            }
            SubMessage(const ISubMessage &copy):ISubMessage(superconstructed) {
                super=&superconstructed;
                *super=*copy._PBJSuper();
            }
            SubMessage(const SubMessage &copy):ISubMessage(superconstructed) {
                super=&superconstructed;
                *super=*copy._PBJSuper();
            }
            SubMessage& operator=(const ISubMessage &copy) {
                this->PBJ::Message<ISubMessage>::setMessageRepresentation(&superconstructed);
                super=&superconstructed;
                *super=*copy._PBJSuper();
                return *this;
            }
            SubMessage& operator=(const SubMessage &copy) {
                this->PBJ::Message<ISubMessage>::setMessageRepresentation(&superconstructed);
                super=&superconstructed;
                *super=*copy._PBJSuper();
                return *this;
            }
            SubMessage* New()const{ return new SubMessage; }
        };
        inline void clear_submes() {return super->clear_submes();}
        enum {
            submes_field_tag=30
        };
        inline bool has_submes() const {return super->has_submes();}
        inline SubMessage submes() const {
            if (has_submes()) {
                return SubMessage(*const_cast<_PBJ_Internal::TestMessage::SubMessage*>(&super->submes()));
            } else {
                return _PBJCastMessage< SubMessage,ISubMessage> ()();
            }
        }
        inline PBJ::RefClass<ISubMessage> mutable_submes() {
            ISubMessage retval(*super->mutable_submes());
            return retval;
        }
        inline void clear_submessers() {return super->clear_submessers();}
        enum {
            submessers_field_tag=31
        };
        inline int submessers_size() const {return super->submessers_size();}
        inline bool has_submessers(int index) const {assert(index>=0&&index<submessers_size()); return true;}
        inline SubMessage submessers(int index) const {
            return SubMessage(*const_cast<_PBJ_Internal::TestMessage::SubMessage*>(&super->submessers(index)));
        }
        inline PBJ::RefClass<ISubMessage> mutable_submessers(int index) {
            ISubMessage retval(*super->mutable_submessers(index));
            return retval;
        }
        inline PBJ::RefClass<ISubMessage> add_submessers() {
            ISubMessage retval(*super->add_submessers());
            return retval;
        }
        inline void clear_sha() {return super->clear_sha();}
        enum {
            sha_field_tag=32
        };
        inline bool has_sha() const {return super->has_sha()&&_PBJValidate<PBJ::SHA256>()(super->sha());}
        inline PBJ::SHA256 sha() const {
            if (has_sha()) {
                return (PBJ::SHA256)_PBJCast< PBJ::SHA256>()(super->sha());
            } else {
                return _PBJCast < PBJ::SHA256> ()();
            }
        }
        inline void set_sha(const PBJ::SHA256 &value) const {
            super->set_sha(_PBJConstruct< PBJ::SHA256>()(value));
        }
        inline void clear_shas() {return super->clear_shas();}
        enum {
            shas_field_tag=33
        };
        inline int shas_size() const {return super->shas_size();}
        inline bool has_shas(int index) const {assert(index>=0&&index<shas_size()); return _PBJValidate< PBJ::SHA256>()(super->shas(index));}
        inline PBJ::SHA256 shas(int index) const {
            return _PBJCast< PBJ::SHA256>()(super->shas(index));
        }
        inline void set_shas(int index, const PBJ::SHA256 &value) const {
            return super->set_shas(index,_PBJConstruct< PBJ::SHA256>()(value));
        }
        inline void add_shas(const PBJ::SHA256 &value) const {
            super->add_shas(_PBJConstruct< PBJ::SHA256>()(value));
        }
        inline void clear_extmes() {return super->clear_extmes();}
        enum {
            extmes_field_tag=34
        };
        inline bool has_extmes() const {return super->has_extmes();}
        inline ExternalMessage extmes() const {
            if (has_extmes()) {
                return ExternalMessage(*const_cast<_PBJ_Internal::ExternalMessage*>(&super->extmes()));
            } else {
                return _PBJCastMessage< ExternalMessage,IExternalMessage> ()();
            }
        }
        inline PBJ::RefClass<IExternalMessage> mutable_extmes() {
            IExternalMessage retval(*super->mutable_extmes());
            return retval;
        }
        inline void clear_extmessers() {return super->clear_extmessers();}
        enum {
            extmessers_field_tag=35
        };
        inline int extmessers_size() const {return super->extmessers_size();}
        inline bool has_extmessers(int index) const {assert(index>=0&&index<extmessers_size()); return true;}
        inline ExternalMessage extmessers(int index) const {
            return ExternalMessage(*const_cast<_PBJ_Internal::ExternalMessage*>(&super->extmessers(index)));
        }
        inline PBJ::RefClass<IExternalMessage> mutable_extmessers(int index) {
            IExternalMessage retval(*super->mutable_extmessers(index));
            return retval;
        }
        inline PBJ::RefClass<IExternalMessage> add_extmessers() {
            IExternalMessage retval(*super->add_extmessers());
            return retval;
        }
        inline void clear_extmesser() {return super->clear_extmesser();}
        enum {
            extmesser_field_tag=36
        };
        inline bool has_extmesser() const {return super->has_extmesser();}
        inline ExternalMessage extmesser() const {
            if (has_extmesser()) {
                return ExternalMessage(*const_cast<_PBJ_Internal::ExternalMessage*>(&super->extmesser()));
            } else {
                return _PBJCastMessage< ExternalMessage,IExternalMessage> ()();
            }
        }
        inline PBJ::RefClass<IExternalMessage> mutable_extmesser() {
            IExternalMessage retval(*super->mutable_extmesser());
            return retval;
        }
        bool _HasAllPBJFields() const {
            return true
                &&has_v3f()
                ;
        }
        static bool within_reserved_field_tag_range(int field_tag) {
            return false;
        }
        static bool within_extension_field_tag_range(int field_tag) {
            return false||(field_tag>=100&&field_tag<=199);
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
            num_extension_field_tag_ranges=1,
            extension_field_tag_start_0=100,
            extension_field_tag_end_0=200,
            extension_field_tag_start_1=0,
            extension_field_tag_end_1=0,
            extension_field_tag_start_2=0,
            extension_field_tag_end_2=0,
            extension_field_tag_start_3=0,
            extension_field_tag_end_3=0
        };
    };
    class TestMessage : public ITestMessage {
    protected:
        _PBJ_Internal::TestMessage superconstructed;
    public:
        TestMessage():ITestMessage(superconstructed) {
            super=&superconstructed;
        }
        TestMessage(const _PBJ_Internal::TestMessage &copy):ITestMessage(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        TestMessage(_PBJ_Internal::TestMessage &reference):ITestMessage(reference) {
        }
        TestMessage(const ITestMessage &copy):ITestMessage(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        TestMessage(const TestMessage &copy):ITestMessage(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        TestMessage& operator=(const ITestMessage &copy) {
            this->PBJ::Message<ITestMessage>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        TestMessage& operator=(const TestMessage &copy) {
            this->PBJ::Message<ITestMessage>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        TestMessage* New()const{ return new TestMessage; }
    };
}
}
namespace Sirikata {
namespace PB {
using _PBJ_Internal::extensionbbox;
using _PBJ_Internal::extensionvector;
}
}
#endif
