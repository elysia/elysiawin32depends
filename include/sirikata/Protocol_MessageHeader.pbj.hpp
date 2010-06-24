#ifndef Protocol_home_daniel_sirikata_libcore_src_Protocol_MessageHeader
#define Protocol_home_daniel_sirikata_libcore_src_Protocol_MessageHeader
#include "pbj.hpp"
#include "/home/daniel/sirikata/libcore/src/Protocol_MessageHeader.pb.h"
namespace Sirikata {
namespace Protocol {
    class IHeader : public PBJ::Message< IHeader > {
    protected:
        Protocol::Header *super;
    public:
        Protocol::Header* _PBJSuper(){ return super; }
        const Protocol::Header* _PBJSuper()const{ return super; }
        typedef Protocol::Header _PBJ_SubType;
        IHeader(Protocol::Header &reference):PBJ::Message< IHeader >(&reference) {
            super=&reference;
        }
        template <class T> IHeader(const PBJ::RefClass<T> &other) : PBJ::Message<IHeader>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IHeader& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IHeader(IHeader &reference):PBJ::Message< IHeader >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IHeader& operator=(IHeader &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IHeader& default_instance() {
            static Protocol::Header def_inst=Protocol::Header::default_instance();
            static IHeader _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return Protocol::Header::descriptor();
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
        inline void clear_source_object() {return super->clear_source_object();}
        enum {
            source_object_field_tag=1
        };
        inline bool has_source_object() const {return super->has_source_object()&&_PBJValidate<PBJ::UUID>()(super->source_object());}
        inline PBJ::UUID source_object() const {
            if (has_source_object()) {
                return (PBJ::UUID)_PBJCast< PBJ::UUID>()(super->source_object());
            } else {
                return _PBJCast < PBJ::UUID> ()();
            }
        }
        inline void set_source_object(const PBJ::UUID &value) const {
            super->set_source_object(_PBJConstruct< PBJ::UUID>()(value));
        }
        inline void clear_source_port() {return super->clear_source_port();}
        enum {
            source_port_field_tag=3
        };
        inline bool has_source_port() const {return super->has_source_port()&&_PBJValidate<PBJ::uint32>()(super->source_port());}
        inline PBJ::uint32 source_port() const {
            if (has_source_port()) {
                return (PBJ::uint32)_PBJCast< PBJ::uint32>()(super->source_port());
            } else {
                return _PBJCast < PBJ::uint32> ()();
            }
        }
        inline void set_source_port(const PBJ::uint32 &value) const {
            super->set_source_port(_PBJConstruct< PBJ::uint32>()(value));
        }
        inline void clear_source_space() {return super->clear_source_space();}
        enum {
            source_space_field_tag=1536
        };
        inline bool has_source_space() const {return super->has_source_space()&&_PBJValidate<PBJ::UUID>()(super->source_space());}
        inline PBJ::UUID source_space() const {
            if (has_source_space()) {
                return (PBJ::UUID)_PBJCast< PBJ::UUID>()(super->source_space());
            } else {
                return _PBJCast < PBJ::UUID> ()();
            }
        }
        inline void set_source_space(const PBJ::UUID &value) const {
            super->set_source_space(_PBJConstruct< PBJ::UUID>()(value));
        }
        inline void clear_destination_object() {return super->clear_destination_object();}
        enum {
            destination_object_field_tag=2
        };
        inline bool has_destination_object() const {return super->has_destination_object()&&_PBJValidate<PBJ::UUID>()(super->destination_object());}
        inline PBJ::UUID destination_object() const {
            if (has_destination_object()) {
                return (PBJ::UUID)_PBJCast< PBJ::UUID>()(super->destination_object());
            } else {
                return _PBJCast < PBJ::UUID> ()();
            }
        }
        inline void set_destination_object(const PBJ::UUID &value) const {
            super->set_destination_object(_PBJConstruct< PBJ::UUID>()(value));
        }
        inline void clear_destination_port() {return super->clear_destination_port();}
        enum {
            destination_port_field_tag=4
        };
        inline bool has_destination_port() const {return super->has_destination_port()&&_PBJValidate<PBJ::uint32>()(super->destination_port());}
        inline PBJ::uint32 destination_port() const {
            if (has_destination_port()) {
                return (PBJ::uint32)_PBJCast< PBJ::uint32>()(super->destination_port());
            } else {
                return _PBJCast < PBJ::uint32> ()();
            }
        }
        inline void set_destination_port(const PBJ::uint32 &value) const {
            super->set_destination_port(_PBJConstruct< PBJ::uint32>()(value));
        }
        inline void clear_destination_space() {return super->clear_destination_space();}
        enum {
            destination_space_field_tag=1537
        };
        inline bool has_destination_space() const {return super->has_destination_space()&&_PBJValidate<PBJ::UUID>()(super->destination_space());}
        inline PBJ::UUID destination_space() const {
            if (has_destination_space()) {
                return (PBJ::UUID)_PBJCast< PBJ::UUID>()(super->destination_space());
            } else {
                return _PBJCast < PBJ::UUID> ()();
            }
        }
        inline void set_destination_space(const PBJ::UUID &value) const {
            super->set_destination_space(_PBJConstruct< PBJ::UUID>()(value));
        }
        inline void clear_id() {return super->clear_id();}
        enum {
            id_field_tag=7
        };
        inline bool has_id() const {return super->has_id()&&_PBJValidate<PBJ::int64>()(super->id());}
        inline PBJ::int64 id() const {
            if (has_id()) {
                return (PBJ::int64)_PBJCast< PBJ::int64>()(super->id());
            } else {
                return _PBJCast < PBJ::int64> ()();
            }
        }
        inline void set_id(const PBJ::int64 &value) const {
            super->set_id(_PBJConstruct< PBJ::int64>()(value));
        }
        inline void clear_reply_id() {return super->clear_reply_id();}
        enum {
            reply_id_field_tag=8
        };
        inline bool has_reply_id() const {return super->has_reply_id()&&_PBJValidate<PBJ::int64>()(super->reply_id());}
        inline PBJ::int64 reply_id() const {
            if (has_reply_id()) {
                return (PBJ::int64)_PBJCast< PBJ::int64>()(super->reply_id());
            } else {
                return _PBJCast < PBJ::int64> ()();
            }
        }
        inline void set_reply_id(const PBJ::int64 &value) const {
            super->set_reply_id(_PBJConstruct< PBJ::int64>()(value));
        }
        enum ReturnStatus {
            SUCCESS=Protocol::Header::SUCCESS,
            NETWORK_FAILURE=Protocol::Header::NETWORK_FAILURE,
            TIMEOUT_FAILURE=Protocol::Header::TIMEOUT_FAILURE,
            PROTOCOL_ERROR=Protocol::Header::PROTOCOL_ERROR,
            PORT_FAILURE=Protocol::Header::PORT_FAILURE,
            UNKNOWN_OBJECT=Protocol::Header::UNKNOWN_OBJECT
        };
        inline void clear_return_status() {return super->clear_return_status();}
        enum {
            return_status_field_tag=1792
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
            super->set_return_status((Protocol::Header::ReturnStatus)value);
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
    class Header : public IHeader {
    protected:
        Protocol::Header superconstructed;
    public:
        Header():IHeader(superconstructed) {
            super=&superconstructed;
        }
        Header(const Protocol::Header &copy):IHeader(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        Header(Protocol::Header &reference):IHeader(reference) {
        }
        Header(const IHeader &copy):IHeader(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        Header(const Header &copy):IHeader(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        Header& operator=(const IHeader &copy) {
            this->PBJ::Message<IHeader>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        Header& operator=(const Header &copy) {
            this->PBJ::Message<IHeader>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        Header* New()const{ return new Header; }
    };
}
}
#endif
