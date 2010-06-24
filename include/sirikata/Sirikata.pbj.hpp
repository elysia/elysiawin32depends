#ifndef _PBJ_Internal_home_daniel_sirikata_libcore_src_Sirikata
#define _PBJ_Internal_home_daniel_sirikata_libcore_src_Sirikata
#include "pbj.hpp"
#include "/home/daniel/sirikata/libcore/src/Sirikata.pb.h"
namespace Sirikata {
namespace Protocol {
    class IMessageBody : public PBJ::Message< IMessageBody > {
    protected:
        _PBJ_Internal::MessageBody *super;
    public:
        _PBJ_Internal::MessageBody* _PBJSuper(){ return super; }
        const _PBJ_Internal::MessageBody* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::MessageBody _PBJ_SubType;
        IMessageBody(_PBJ_Internal::MessageBody &reference):PBJ::Message< IMessageBody >(&reference) {
            super=&reference;
        }
        template <class T> IMessageBody(const PBJ::RefClass<T> &other) : PBJ::Message<IMessageBody>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IMessageBody& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IMessageBody(IMessageBody &reference):PBJ::Message< IMessageBody >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IMessageBody& operator=(IMessageBody &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IMessageBody& default_instance() {
            static _PBJ_Internal::MessageBody def_inst=_PBJ_Internal::MessageBody::default_instance();
            static IMessageBody _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::MessageBody::descriptor();
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
        inline void clear_message_names() {return super->clear_message_names();}
        enum {
            message_names_field_tag=9
        };
        inline int message_names_size() const {return super->message_names_size();}
        inline std::string& message_names(int index) {
            return *super->mutable_message_names(index);
        }
        inline void set_message_names(int index, const char *value) const {
            super->set_message_names(index,value);
        }
        inline void add_message_names(const char *value) const {
            super->add_message_names(value);
        }
        inline bool has_message_names(int index) const {assert(index>=0&&index<message_names_size()); return _PBJValidate< PBJ::utf8string>()(super->message_names(index));}
        inline const std::string& message_names(int index) const {
            return _PBJCast< PBJ::utf8string>()(super->message_names(index));
        }
        inline void set_message_names(int index, const ::std::string &value) const {
            return super->set_message_names(index,_PBJConstruct< PBJ::utf8string>()(value));
        }
        inline void add_message_names(const ::std::string &value) const {
            super->add_message_names(_PBJConstruct< PBJ::utf8string>()(value));
        }
        inline void clear_message_arguments() {return super->clear_message_arguments();}
        enum {
            message_arguments_field_tag=10
        };
        inline int message_arguments_size() const {return super->message_arguments_size();}
        inline std::string& message_arguments(int index) {
            return *super->mutable_message_arguments(index);
        }
        inline void set_message_arguments(int index, const char *value) const {
            super->set_message_arguments(index,value);
        }
        inline void add_message_arguments(const char *value) const {
            super->add_message_arguments(value);
        }
        inline void set_message_arguments(int index, const void *value, size_t size) const {
            super->set_message_arguments(index,value,size);
        }
        inline void add_message_arguments(const void *value, size_t size) const {
            super->add_message_arguments(value,size);
        }
        inline bool has_message_arguments(int index) const {assert(index>=0&&index<message_arguments_size()); return _PBJValidate< PBJ::bytes>()(super->message_arguments(index));}
        inline const std::string& message_arguments(int index) const {
            return _PBJCast< PBJ::bytes>()(super->message_arguments(index));
        }
        inline void set_message_arguments(int index, const ::std::string &value) const {
            return super->set_message_arguments(index,_PBJConstruct< PBJ::bytes>()(value));
        }
        inline void add_message_arguments(const ::std::string &value) const {
            super->add_message_arguments(_PBJConstruct< PBJ::bytes>()(value));
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
    class MessageBody : public IMessageBody {
    protected:
        _PBJ_Internal::MessageBody superconstructed;
    public:
        MessageBody():IMessageBody(superconstructed) {
            super=&superconstructed;
        }
        MessageBody(const _PBJ_Internal::MessageBody &copy):IMessageBody(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        MessageBody(_PBJ_Internal::MessageBody &reference):IMessageBody(reference) {
        }
        MessageBody(const IMessageBody &copy):IMessageBody(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        MessageBody(const MessageBody &copy):IMessageBody(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        MessageBody& operator=(const IMessageBody &copy) {
            this->PBJ::Message<IMessageBody>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        MessageBody& operator=(const MessageBody &copy) {
            this->PBJ::Message<IMessageBody>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        MessageBody* New()const{ return new MessageBody; }
    };
}
}
namespace Sirikata {
namespace Protocol {
    class IReadOnlyMessage : public PBJ::Message< IReadOnlyMessage > {
    protected:
        _PBJ_Internal::ReadOnlyMessage *super;
    public:
        _PBJ_Internal::ReadOnlyMessage* _PBJSuper(){ return super; }
        const _PBJ_Internal::ReadOnlyMessage* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::ReadOnlyMessage _PBJ_SubType;
        IReadOnlyMessage(_PBJ_Internal::ReadOnlyMessage &reference):PBJ::Message< IReadOnlyMessage >(&reference) {
            super=&reference;
        }
        template <class T> IReadOnlyMessage(const PBJ::RefClass<T> &other) : PBJ::Message<IReadOnlyMessage>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IReadOnlyMessage& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IReadOnlyMessage(IReadOnlyMessage &reference):PBJ::Message< IReadOnlyMessage >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IReadOnlyMessage& operator=(IReadOnlyMessage &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IReadOnlyMessage& default_instance() {
            static _PBJ_Internal::ReadOnlyMessage def_inst=_PBJ_Internal::ReadOnlyMessage::default_instance();
            static IReadOnlyMessage _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::ReadOnlyMessage::descriptor();
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
            SUCCESS=_PBJ_Internal::ReadOnlyMessage::SUCCESS,
            NETWORK_FAILURE=_PBJ_Internal::ReadOnlyMessage::NETWORK_FAILURE,
            TIMEOUT_FAILURE=_PBJ_Internal::ReadOnlyMessage::TIMEOUT_FAILURE,
            PROTOCOL_ERROR=_PBJ_Internal::ReadOnlyMessage::PROTOCOL_ERROR,
            PORT_FAILURE=_PBJ_Internal::ReadOnlyMessage::PORT_FAILURE
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
            super->set_return_status((_PBJ_Internal::ReadOnlyMessage::ReturnStatus)value);
        }
        inline void clear_message_names() {return super->clear_message_names();}
        enum {
            message_names_field_tag=9
        };
        inline int message_names_size() const {return super->message_names_size();}
        inline std::string& message_names(int index) {
            return *super->mutable_message_names(index);
        }
        inline void set_message_names(int index, const char *value) const {
            super->set_message_names(index,value);
        }
        inline void add_message_names(const char *value) const {
            super->add_message_names(value);
        }
        inline bool has_message_names(int index) const {assert(index>=0&&index<message_names_size()); return _PBJValidate< PBJ::utf8string>()(super->message_names(index));}
        inline const std::string& message_names(int index) const {
            return _PBJCast< PBJ::utf8string>()(super->message_names(index));
        }
        inline void set_message_names(int index, const ::std::string &value) const {
            return super->set_message_names(index,_PBJConstruct< PBJ::utf8string>()(value));
        }
        inline void add_message_names(const ::std::string &value) const {
            super->add_message_names(_PBJConstruct< PBJ::utf8string>()(value));
        }
        inline void clear_message_arguments() {return super->clear_message_arguments();}
        enum {
            message_arguments_field_tag=10
        };
        inline int message_arguments_size() const {return super->message_arguments_size();}
        inline std::string& message_arguments(int index) {
            return *super->mutable_message_arguments(index);
        }
        inline void set_message_arguments(int index, const char *value) const {
            super->set_message_arguments(index,value);
        }
        inline void add_message_arguments(const char *value) const {
            super->add_message_arguments(value);
        }
        inline void set_message_arguments(int index, const void *value, size_t size) const {
            super->set_message_arguments(index,value,size);
        }
        inline void add_message_arguments(const void *value, size_t size) const {
            super->add_message_arguments(value,size);
        }
        inline bool has_message_arguments(int index) const {assert(index>=0&&index<message_arguments_size()); return _PBJValidate< PBJ::bytes>()(super->message_arguments(index));}
        inline const std::string& message_arguments(int index) const {
            return _PBJCast< PBJ::bytes>()(super->message_arguments(index));
        }
        inline void set_message_arguments(int index, const ::std::string &value) const {
            return super->set_message_arguments(index,_PBJConstruct< PBJ::bytes>()(value));
        }
        inline void add_message_arguments(const ::std::string &value) const {
            super->add_message_arguments(_PBJConstruct< PBJ::bytes>()(value));
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
    class ReadOnlyMessage : public IReadOnlyMessage {
    protected:
        _PBJ_Internal::ReadOnlyMessage superconstructed;
    public:
        ReadOnlyMessage():IReadOnlyMessage(superconstructed) {
            super=&superconstructed;
        }
        ReadOnlyMessage(const _PBJ_Internal::ReadOnlyMessage &copy):IReadOnlyMessage(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        ReadOnlyMessage(_PBJ_Internal::ReadOnlyMessage &reference):IReadOnlyMessage(reference) {
        }
        ReadOnlyMessage(const IReadOnlyMessage &copy):IReadOnlyMessage(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        ReadOnlyMessage(const ReadOnlyMessage &copy):IReadOnlyMessage(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        ReadOnlyMessage& operator=(const IReadOnlyMessage &copy) {
            this->PBJ::Message<IReadOnlyMessage>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        ReadOnlyMessage& operator=(const ReadOnlyMessage &copy) {
            this->PBJ::Message<IReadOnlyMessage>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        ReadOnlyMessage* New()const{ return new ReadOnlyMessage; }
    };
}
}
namespace Sirikata {
namespace Protocol {
    class ISpaceServices : public PBJ::Message< ISpaceServices > {
    protected:
        _PBJ_Internal::SpaceServices *super;
    public:
        _PBJ_Internal::SpaceServices* _PBJSuper(){ return super; }
        const _PBJ_Internal::SpaceServices* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::SpaceServices _PBJ_SubType;
        ISpaceServices(_PBJ_Internal::SpaceServices &reference):PBJ::Message< ISpaceServices >(&reference) {
            super=&reference;
        }
        template <class T> ISpaceServices(const PBJ::RefClass<T> &other) : PBJ::Message<ISpaceServices>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> ISpaceServices& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        ISpaceServices(ISpaceServices &reference):PBJ::Message< ISpaceServices >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        ISpaceServices& operator=(ISpaceServices &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const ISpaceServices& default_instance() {
            static _PBJ_Internal::SpaceServices def_inst=_PBJ_Internal::SpaceServices::default_instance();
            static ISpaceServices _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::SpaceServices::descriptor();
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
        inline void clear_rpc_port() {return super->clear_rpc_port();}
        enum {
            rpc_port_field_tag=32
        };
        inline bool has_rpc_port() const {return super->has_rpc_port()&&_PBJValidate<PBJ::uint32>()(super->rpc_port());}
        inline PBJ::uint32 rpc_port() const {
            if (has_rpc_port()) {
                return (PBJ::uint32)_PBJCast< PBJ::uint32>()(super->rpc_port());
            } else {
                return _PBJCast < PBJ::uint32> ()();
            }
        }
        inline void set_rpc_port(const PBJ::uint32 &value) const {
            super->set_rpc_port(_PBJConstruct< PBJ::uint32>()(value));
        }
        inline void clear_registration_port() {return super->clear_registration_port();}
        enum {
            registration_port_field_tag=33
        };
        inline bool has_registration_port() const {return super->has_registration_port()&&_PBJValidate<PBJ::uint32>()(super->registration_port());}
        inline PBJ::uint32 registration_port() const {
            if (has_registration_port()) {
                return (PBJ::uint32)_PBJCast< PBJ::uint32>()(super->registration_port());
            } else {
                return _PBJCast < PBJ::uint32> ()();
            }
        }
        inline void set_registration_port(const PBJ::uint32 &value) const {
            super->set_registration_port(_PBJConstruct< PBJ::uint32>()(value));
        }
        inline void clear_loc_port() {return super->clear_loc_port();}
        enum {
            loc_port_field_tag=34
        };
        inline bool has_loc_port() const {return super->has_loc_port()&&_PBJValidate<PBJ::uint32>()(super->loc_port());}
        inline PBJ::uint32 loc_port() const {
            if (has_loc_port()) {
                return (PBJ::uint32)_PBJCast< PBJ::uint32>()(super->loc_port());
            } else {
                return _PBJCast < PBJ::uint32> ()();
            }
        }
        inline void set_loc_port(const PBJ::uint32 &value) const {
            super->set_loc_port(_PBJConstruct< PBJ::uint32>()(value));
        }
        inline void clear_geom_port() {return super->clear_geom_port();}
        enum {
            geom_port_field_tag=35
        };
        inline bool has_geom_port() const {return super->has_geom_port()&&_PBJValidate<PBJ::uint32>()(super->geom_port());}
        inline PBJ::uint32 geom_port() const {
            if (has_geom_port()) {
                return (PBJ::uint32)_PBJCast< PBJ::uint32>()(super->geom_port());
            } else {
                return _PBJCast < PBJ::uint32> ()();
            }
        }
        inline void set_geom_port(const PBJ::uint32 &value) const {
            super->set_geom_port(_PBJConstruct< PBJ::uint32>()(value));
        }
        inline void clear_oseg_port() {return super->clear_oseg_port();}
        enum {
            oseg_port_field_tag=36
        };
        inline bool has_oseg_port() const {return super->has_oseg_port()&&_PBJValidate<PBJ::uint32>()(super->oseg_port());}
        inline PBJ::uint32 oseg_port() const {
            if (has_oseg_port()) {
                return (PBJ::uint32)_PBJCast< PBJ::uint32>()(super->oseg_port());
            } else {
                return _PBJCast < PBJ::uint32> ()();
            }
        }
        inline void set_oseg_port(const PBJ::uint32 &value) const {
            super->set_oseg_port(_PBJConstruct< PBJ::uint32>()(value));
        }
        inline void clear_cseg_port() {return super->clear_cseg_port();}
        enum {
            cseg_port_field_tag=37
        };
        inline bool has_cseg_port() const {return super->has_cseg_port()&&_PBJValidate<PBJ::uint32>()(super->cseg_port());}
        inline PBJ::uint32 cseg_port() const {
            if (has_cseg_port()) {
                return (PBJ::uint32)_PBJCast< PBJ::uint32>()(super->cseg_port());
            } else {
                return _PBJCast < PBJ::uint32> ()();
            }
        }
        inline void set_cseg_port(const PBJ::uint32 &value) const {
            super->set_cseg_port(_PBJConstruct< PBJ::uint32>()(value));
        }
        inline void clear_router_port() {return super->clear_router_port();}
        enum {
            router_port_field_tag=38
        };
        inline bool has_router_port() const {return super->has_router_port()&&_PBJValidate<PBJ::uint32>()(super->router_port());}
        inline PBJ::uint32 router_port() const {
            if (has_router_port()) {
                return (PBJ::uint32)_PBJCast< PBJ::uint32>()(super->router_port());
            } else {
                return _PBJCast < PBJ::uint32> ()();
            }
        }
        inline void set_router_port(const PBJ::uint32 &value) const {
            super->set_router_port(_PBJConstruct< PBJ::uint32>()(value));
        }
        inline void clear_persistence_port() {return super->clear_persistence_port();}
        enum {
            persistence_port_field_tag=39
        };
        inline bool has_persistence_port() const {return super->has_persistence_port()&&_PBJValidate<PBJ::uint32>()(super->persistence_port());}
        inline PBJ::uint32 persistence_port() const {
            if (has_persistence_port()) {
                return (PBJ::uint32)_PBJCast< PBJ::uint32>()(super->persistence_port());
            } else {
                return _PBJCast < PBJ::uint32> ()();
            }
        }
        inline void set_persistence_port(const PBJ::uint32 &value) const {
            super->set_persistence_port(_PBJConstruct< PBJ::uint32>()(value));
        }
        inline void clear_physics_port() {return super->clear_physics_port();}
        enum {
            physics_port_field_tag=40
        };
        inline bool has_physics_port() const {return super->has_physics_port()&&_PBJValidate<PBJ::uint32>()(super->physics_port());}
        inline PBJ::uint32 physics_port() const {
            if (has_physics_port()) {
                return (PBJ::uint32)_PBJCast< PBJ::uint32>()(super->physics_port());
            } else {
                return _PBJCast < PBJ::uint32> ()();
            }
        }
        inline void set_physics_port(const PBJ::uint32 &value) const {
            super->set_physics_port(_PBJConstruct< PBJ::uint32>()(value));
        }
        inline void clear_pre_connection_buffer() {return super->clear_pre_connection_buffer();}
        enum {
            pre_connection_buffer_field_tag=64
        };
        inline bool has_pre_connection_buffer() const {return super->has_pre_connection_buffer()&&_PBJValidate<PBJ::uint64>()(super->pre_connection_buffer());}
        inline PBJ::uint64 pre_connection_buffer() const {
            if (has_pre_connection_buffer()) {
                return (PBJ::uint64)_PBJCast< PBJ::uint64>()(super->pre_connection_buffer());
            } else {
                return _PBJCast < PBJ::uint64> ()();
            }
        }
        inline void set_pre_connection_buffer(const PBJ::uint64 &value) const {
            super->set_pre_connection_buffer(_PBJConstruct< PBJ::uint64>()(value));
        }
        inline void clear_max_pre_connection_messages() {return super->clear_max_pre_connection_messages();}
        enum {
            max_pre_connection_messages_field_tag=65
        };
        inline bool has_max_pre_connection_messages() const {return super->has_max_pre_connection_messages()&&_PBJValidate<PBJ::uint64>()(super->max_pre_connection_messages());}
        inline PBJ::uint64 max_pre_connection_messages() const {
            if (has_max_pre_connection_messages()) {
                return (PBJ::uint64)_PBJCast< PBJ::uint64>()(super->max_pre_connection_messages());
            } else {
                return _PBJCast < PBJ::uint64> ()();
            }
        }
        inline void set_max_pre_connection_messages(const PBJ::uint64 &value) const {
            super->set_max_pre_connection_messages(_PBJConstruct< PBJ::uint64>()(value));
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
    class SpaceServices : public ISpaceServices {
    protected:
        _PBJ_Internal::SpaceServices superconstructed;
    public:
        SpaceServices():ISpaceServices(superconstructed) {
            super=&superconstructed;
        }
        SpaceServices(const _PBJ_Internal::SpaceServices &copy):ISpaceServices(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        SpaceServices(_PBJ_Internal::SpaceServices &reference):ISpaceServices(reference) {
        }
        SpaceServices(const ISpaceServices &copy):ISpaceServices(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        SpaceServices(const SpaceServices &copy):ISpaceServices(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        SpaceServices& operator=(const ISpaceServices &copy) {
            this->PBJ::Message<ISpaceServices>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        SpaceServices& operator=(const SpaceServices &copy) {
            this->PBJ::Message<ISpaceServices>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        SpaceServices* New()const{ return new SpaceServices; }
    };
}
}
namespace Sirikata {
namespace Protocol {
    class IObjLoc : public PBJ::Message< IObjLoc > {
    protected:
        _PBJ_Internal::ObjLoc *super;
    public:
        _PBJ_Internal::ObjLoc* _PBJSuper(){ return super; }
        const _PBJ_Internal::ObjLoc* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::ObjLoc _PBJ_SubType;
        IObjLoc(_PBJ_Internal::ObjLoc &reference):PBJ::Message< IObjLoc >(&reference) {
            super=&reference;
        }
        template <class T> IObjLoc(const PBJ::RefClass<T> &other) : PBJ::Message<IObjLoc>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IObjLoc& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IObjLoc(IObjLoc &reference):PBJ::Message< IObjLoc >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IObjLoc& operator=(IObjLoc &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IObjLoc& default_instance() {
            static _PBJ_Internal::ObjLoc def_inst=_PBJ_Internal::ObjLoc::default_instance();
            static IObjLoc _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::ObjLoc::descriptor();
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
        inline void clear_timestamp() {return super->clear_timestamp();}
        enum {
            timestamp_field_tag=2
        };
        inline bool has_timestamp() const {return super->has_timestamp()&&_PBJValidate<PBJ::Time>()(super->timestamp());}
        inline PBJ::Time timestamp() const {
            if (has_timestamp()) {
                return (PBJ::Time)_PBJCast< PBJ::Time>()(super->timestamp());
            } else {
                return _PBJCast < PBJ::Time> ()();
            }
        }
        inline void set_timestamp(const PBJ::Time &value) const {
            super->set_timestamp(_PBJConstruct< PBJ::Time>()(value));
        }
        inline void clear_position() {return super->clear_position();}
        enum {
            position_field_tag=3
        };
        inline bool has_position() const {return super->position_size()>=3;}
        inline PBJ::Vector3d position() const {
            if (has_position()) {
                return _PBJCast< PBJ::Vector3d>()(super->position(0),super->position(1),super->position(2));
            } else {
                return _PBJCast< PBJ::Vector3d>()();
            }
        }
        inline void set_position(const PBJ::Vector3d &value) {
            super->clear_position();
            _PBJConstruct< PBJ::Vector3d>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector3d>()(value);
            super->add_position(_PBJtempArray[0]);
            super->add_position(_PBJtempArray[1]);
            super->add_position(_PBJtempArray[2]);
        }
        inline void clear_orientation() {return super->clear_orientation();}
        enum {
            orientation_field_tag=4
        };
        inline bool has_orientation() const {return super->orientation_size()>=3;}
        inline PBJ::Quaternion orientation() const {
            if (has_orientation()) {
                return _PBJCast< PBJ::Quaternion>()(super->orientation(0),super->orientation(1),super->orientation(2));
            } else {
                return _PBJCast< PBJ::Quaternion>()();
            }
        }
        inline void set_orientation(const PBJ::Quaternion &value) {
            super->clear_orientation();
            _PBJConstruct< PBJ::Quaternion>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Quaternion>()(value);
            super->add_orientation(_PBJtempArray[0]);
            super->add_orientation(_PBJtempArray[1]);
            super->add_orientation(_PBJtempArray[2]);
        }
        inline void clear_velocity() {return super->clear_velocity();}
        enum {
            velocity_field_tag=5
        };
        inline bool has_velocity() const {return super->velocity_size()>=3;}
        inline PBJ::Vector3f velocity() const {
            if (has_velocity()) {
                return _PBJCast< PBJ::Vector3f>()(super->velocity(0),super->velocity(1),super->velocity(2));
            } else {
                return _PBJCast< PBJ::Vector3f>()();
            }
        }
        inline void set_velocity(const PBJ::Vector3f &value) {
            super->clear_velocity();
            _PBJConstruct< PBJ::Vector3f>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector3f>()(value);
            super->add_velocity(_PBJtempArray[0]);
            super->add_velocity(_PBJtempArray[1]);
            super->add_velocity(_PBJtempArray[2]);
        }
        inline void clear_rotational_axis() {return super->clear_rotational_axis();}
        enum {
            rotational_axis_field_tag=7
        };
        inline bool has_rotational_axis() const {return super->rotational_axis_size()>=2;}
        inline PBJ::Vector3f rotational_axis() const {
            if (has_rotational_axis()) {
                return _PBJCast< PBJ::normal>()(super->rotational_axis(0),super->rotational_axis(1));
            } else {
                return _PBJCast< PBJ::normal>()();
            }
        }
        inline void set_rotational_axis(const PBJ::Vector3f &value) {
            super->clear_rotational_axis();
            _PBJConstruct< PBJ::normal>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::normal>()(value);
            super->add_rotational_axis(_PBJtempArray[0]);
            super->add_rotational_axis(_PBJtempArray[1]);
        }
        inline void clear_angular_speed() {return super->clear_angular_speed();}
        enum {
            angular_speed_field_tag=8
        };
        inline bool has_angular_speed() const {return super->has_angular_speed()&&_PBJValidate<float>()(super->angular_speed());}
        inline float angular_speed() const {
            if (has_angular_speed()) {
                return (float)_PBJCast< float>()(super->angular_speed());
            } else {
                return _PBJCast < float> ()();
            }
        }
        inline void set_angular_speed(const float &value) const {
            super->set_angular_speed(_PBJConstruct< float>()(value));
        }
        enum UpdateFlags {
            FORCE=_PBJ_Internal::ObjLoc::FORCE
        };
        inline void clear_update_flags() {return super->clear_update_flags();}
        enum {
            update_flags_field_tag=6
        };
        inline bool has_update_flags() const {
            if (!super->has_update_flags()) return false;
            return _PBJValidateFlags< PBJ::uint8>()(super->update_flags(),0|FORCE);
        }
        inline PBJ::uint8 update_flags() const {
            if (has_update_flags()) {
                return _PBJCastFlags< PBJ::uint8>()(super->update_flags(),0|FORCE);
            } else {
                return _PBJCast < PBJ::uint8> ()();
            }
        }
        inline void set_update_flags(const PBJ::uint8 &value) const {
            super->set_update_flags(_PBJConstruct< PBJ::uint8>()(value));
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
    class ObjLoc : public IObjLoc {
    protected:
        _PBJ_Internal::ObjLoc superconstructed;
    public:
        ObjLoc():IObjLoc(superconstructed) {
            super=&superconstructed;
        }
        ObjLoc(const _PBJ_Internal::ObjLoc &copy):IObjLoc(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        ObjLoc(_PBJ_Internal::ObjLoc &reference):IObjLoc(reference) {
        }
        ObjLoc(const IObjLoc &copy):IObjLoc(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        ObjLoc(const ObjLoc &copy):IObjLoc(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        ObjLoc& operator=(const IObjLoc &copy) {
            this->PBJ::Message<IObjLoc>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        ObjLoc& operator=(const ObjLoc &copy) {
            this->PBJ::Message<IObjLoc>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        ObjLoc* New()const{ return new ObjLoc; }
    };
}
}
namespace Sirikata {
namespace Protocol {
    class ILocRequest : public PBJ::Message< ILocRequest > {
    protected:
        _PBJ_Internal::LocRequest *super;
    public:
        _PBJ_Internal::LocRequest* _PBJSuper(){ return super; }
        const _PBJ_Internal::LocRequest* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::LocRequest _PBJ_SubType;
        ILocRequest(_PBJ_Internal::LocRequest &reference):PBJ::Message< ILocRequest >(&reference) {
            super=&reference;
        }
        template <class T> ILocRequest(const PBJ::RefClass<T> &other) : PBJ::Message<ILocRequest>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> ILocRequest& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        ILocRequest(ILocRequest &reference):PBJ::Message< ILocRequest >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        ILocRequest& operator=(ILocRequest &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const ILocRequest& default_instance() {
            static _PBJ_Internal::LocRequest def_inst=_PBJ_Internal::LocRequest::default_instance();
            static ILocRequest _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::LocRequest::descriptor();
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
        enum Fields {
            POSITION=_PBJ_Internal::LocRequest::POSITION,
            ORIENTATION=_PBJ_Internal::LocRequest::ORIENTATION,
            VELOCITY=_PBJ_Internal::LocRequest::VELOCITY,
            ROTATIONAL_AXIS=_PBJ_Internal::LocRequest::ROTATIONAL_AXIS,
            ANGULAR_SPEED=_PBJ_Internal::LocRequest::ANGULAR_SPEED
        };
        inline void clear_requested_fields() {return super->clear_requested_fields();}
        enum {
            requested_fields_field_tag=2
        };
        inline bool has_requested_fields() const {
            if (!super->has_requested_fields()) return false;
            return _PBJValidateFlags< PBJ::uint32>()(super->requested_fields(),0|POSITION|ORIENTATION|VELOCITY|ROTATIONAL_AXIS|ANGULAR_SPEED);
        }
        inline PBJ::uint32 requested_fields() const {
            if (has_requested_fields()) {
                return _PBJCastFlags< PBJ::uint32>()(super->requested_fields(),0|POSITION|ORIENTATION|VELOCITY|ROTATIONAL_AXIS|ANGULAR_SPEED);
            } else {
                return _PBJCast < PBJ::uint32> ()();
            }
        }
        inline void set_requested_fields(const PBJ::uint32 &value) const {
            super->set_requested_fields(_PBJConstruct< PBJ::uint32>()(value));
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
    class LocRequest : public ILocRequest {
    protected:
        _PBJ_Internal::LocRequest superconstructed;
    public:
        LocRequest():ILocRequest(superconstructed) {
            super=&superconstructed;
        }
        LocRequest(const _PBJ_Internal::LocRequest &copy):ILocRequest(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        LocRequest(_PBJ_Internal::LocRequest &reference):ILocRequest(reference) {
        }
        LocRequest(const ILocRequest &copy):ILocRequest(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        LocRequest(const LocRequest &copy):ILocRequest(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        LocRequest& operator=(const ILocRequest &copy) {
            this->PBJ::Message<ILocRequest>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        LocRequest& operator=(const LocRequest &copy) {
            this->PBJ::Message<ILocRequest>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        LocRequest* New()const{ return new LocRequest; }
    };
}
}
namespace Sirikata {
namespace Protocol {
    class INewObj : public PBJ::Message< INewObj > {
    protected:
        _PBJ_Internal::NewObj *super;
    public:
        _PBJ_Internal::NewObj* _PBJSuper(){ return super; }
        const _PBJ_Internal::NewObj* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::NewObj _PBJ_SubType;
        INewObj(_PBJ_Internal::NewObj &reference):PBJ::Message< INewObj >(&reference) {
            super=&reference;
        }
        template <class T> INewObj(const PBJ::RefClass<T> &other) : PBJ::Message<INewObj>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> INewObj& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        INewObj(INewObj &reference):PBJ::Message< INewObj >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        INewObj& operator=(INewObj &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const INewObj& default_instance() {
            static _PBJ_Internal::NewObj def_inst=_PBJ_Internal::NewObj::default_instance();
            static INewObj _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::NewObj::descriptor();
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
        inline void clear_object_uuid_evidence() {return super->clear_object_uuid_evidence();}
        enum {
            object_uuid_evidence_field_tag=2
        };
        inline bool has_object_uuid_evidence() const {return super->has_object_uuid_evidence()&&_PBJValidate<PBJ::UUID>()(super->object_uuid_evidence());}
        inline PBJ::UUID object_uuid_evidence() const {
            if (has_object_uuid_evidence()) {
                return (PBJ::UUID)_PBJCast< PBJ::UUID>()(super->object_uuid_evidence());
            } else {
                return _PBJCast < PBJ::UUID> ()();
            }
        }
        inline void set_object_uuid_evidence(const PBJ::UUID &value) const {
            super->set_object_uuid_evidence(_PBJConstruct< PBJ::UUID>()(value));
        }
        inline void clear_requested_object_loc() {return super->clear_requested_object_loc();}
        enum {
            requested_object_loc_field_tag=3
        };
        inline bool has_requested_object_loc() const {return super->has_requested_object_loc();}
        inline ObjLoc requested_object_loc() const {
            if (has_requested_object_loc()) {
                return ObjLoc(*const_cast<_PBJ_Internal::ObjLoc*>(&super->requested_object_loc()));
            } else {
                return _PBJCastMessage< ObjLoc,IObjLoc> ()();
            }
        }
        inline PBJ::RefClass<IObjLoc> mutable_requested_object_loc() {
            IObjLoc retval(*super->mutable_requested_object_loc());
            return retval;
        }
        inline void clear_bounding_sphere() {return super->clear_bounding_sphere();}
        enum {
            bounding_sphere_field_tag=4
        };
        inline bool has_bounding_sphere() const {return super->bounding_sphere_size()>=4;}
        inline PBJ::BoundingSphere3f bounding_sphere() const {
            if (has_bounding_sphere()) {
                return _PBJCast< PBJ::BoundingSphere3f>()(super->bounding_sphere(0),super->bounding_sphere(1),super->bounding_sphere(2),super->bounding_sphere(3));
            } else {
                return _PBJCast< PBJ::BoundingSphere3f>()();
            }
        }
        inline void set_bounding_sphere(const PBJ::BoundingSphere3f &value) {
            super->clear_bounding_sphere();
            _PBJConstruct< PBJ::BoundingSphere3f>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::BoundingSphere3f>()(value);
            super->add_bounding_sphere(_PBJtempArray[0]);
            super->add_bounding_sphere(_PBJtempArray[1]);
            super->add_bounding_sphere(_PBJtempArray[2]);
            super->add_bounding_sphere(_PBJtempArray[3]);
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
    class NewObj : public INewObj {
    protected:
        _PBJ_Internal::NewObj superconstructed;
    public:
        NewObj():INewObj(superconstructed) {
            super=&superconstructed;
        }
        NewObj(const _PBJ_Internal::NewObj &copy):INewObj(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        NewObj(_PBJ_Internal::NewObj &reference):INewObj(reference) {
        }
        NewObj(const INewObj &copy):INewObj(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        NewObj(const NewObj &copy):INewObj(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        NewObj& operator=(const INewObj &copy) {
            this->PBJ::Message<INewObj>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        NewObj& operator=(const NewObj &copy) {
            this->PBJ::Message<INewObj>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        NewObj* New()const{ return new NewObj; }
    };
}
}
namespace Sirikata {
namespace Protocol {
    class IRetObj : public PBJ::Message< IRetObj > {
    protected:
        _PBJ_Internal::RetObj *super;
    public:
        _PBJ_Internal::RetObj* _PBJSuper(){ return super; }
        const _PBJ_Internal::RetObj* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::RetObj _PBJ_SubType;
        IRetObj(_PBJ_Internal::RetObj &reference):PBJ::Message< IRetObj >(&reference) {
            super=&reference;
        }
        template <class T> IRetObj(const PBJ::RefClass<T> &other) : PBJ::Message<IRetObj>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IRetObj& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IRetObj(IRetObj &reference):PBJ::Message< IRetObj >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IRetObj& operator=(IRetObj &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IRetObj& default_instance() {
            static _PBJ_Internal::RetObj def_inst=_PBJ_Internal::RetObj::default_instance();
            static IRetObj _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::RetObj::descriptor();
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
        inline void clear_object_reference() {return super->clear_object_reference();}
        enum {
            object_reference_field_tag=2
        };
        inline bool has_object_reference() const {return super->has_object_reference()&&_PBJValidate<PBJ::UUID>()(super->object_reference());}
        inline PBJ::UUID object_reference() const {
            if (has_object_reference()) {
                return (PBJ::UUID)_PBJCast< PBJ::UUID>()(super->object_reference());
            } else {
                return _PBJCast < PBJ::UUID> ()();
            }
        }
        inline void set_object_reference(const PBJ::UUID &value) const {
            super->set_object_reference(_PBJConstruct< PBJ::UUID>()(value));
        }
        inline void clear_location() {return super->clear_location();}
        enum {
            location_field_tag=3
        };
        inline bool has_location() const {return super->has_location();}
        inline ObjLoc location() const {
            if (has_location()) {
                return ObjLoc(*const_cast<_PBJ_Internal::ObjLoc*>(&super->location()));
            } else {
                return _PBJCastMessage< ObjLoc,IObjLoc> ()();
            }
        }
        inline PBJ::RefClass<IObjLoc> mutable_location() {
            IObjLoc retval(*super->mutable_location());
            return retval;
        }
        inline void clear_bounding_sphere() {return super->clear_bounding_sphere();}
        enum {
            bounding_sphere_field_tag=4
        };
        inline bool has_bounding_sphere() const {return super->bounding_sphere_size()>=4;}
        inline PBJ::BoundingSphere3f bounding_sphere() const {
            if (has_bounding_sphere()) {
                return _PBJCast< PBJ::BoundingSphere3f>()(super->bounding_sphere(0),super->bounding_sphere(1),super->bounding_sphere(2),super->bounding_sphere(3));
            } else {
                return _PBJCast< PBJ::BoundingSphere3f>()();
            }
        }
        inline void set_bounding_sphere(const PBJ::BoundingSphere3f &value) {
            super->clear_bounding_sphere();
            _PBJConstruct< PBJ::BoundingSphere3f>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::BoundingSphere3f>()(value);
            super->add_bounding_sphere(_PBJtempArray[0]);
            super->add_bounding_sphere(_PBJtempArray[1]);
            super->add_bounding_sphere(_PBJtempArray[2]);
            super->add_bounding_sphere(_PBJtempArray[3]);
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
    class RetObj : public IRetObj {
    protected:
        _PBJ_Internal::RetObj superconstructed;
    public:
        RetObj():IRetObj(superconstructed) {
            super=&superconstructed;
        }
        RetObj(const _PBJ_Internal::RetObj &copy):IRetObj(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        RetObj(_PBJ_Internal::RetObj &reference):IRetObj(reference) {
        }
        RetObj(const IRetObj &copy):IRetObj(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        RetObj(const RetObj &copy):IRetObj(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        RetObj& operator=(const IRetObj &copy) {
            this->PBJ::Message<IRetObj>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        RetObj& operator=(const RetObj &copy) {
            this->PBJ::Message<IRetObj>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        RetObj* New()const{ return new RetObj; }
    };
}
}
namespace Sirikata {
namespace Protocol {
    class IDelObj : public PBJ::Message< IDelObj > {
    protected:
        _PBJ_Internal::DelObj *super;
    public:
        _PBJ_Internal::DelObj* _PBJSuper(){ return super; }
        const _PBJ_Internal::DelObj* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::DelObj _PBJ_SubType;
        IDelObj(_PBJ_Internal::DelObj &reference):PBJ::Message< IDelObj >(&reference) {
            super=&reference;
        }
        template <class T> IDelObj(const PBJ::RefClass<T> &other) : PBJ::Message<IDelObj>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IDelObj& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IDelObj(IDelObj &reference):PBJ::Message< IDelObj >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IDelObj& operator=(IDelObj &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IDelObj& default_instance() {
            static _PBJ_Internal::DelObj def_inst=_PBJ_Internal::DelObj::default_instance();
            static IDelObj _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::DelObj::descriptor();
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
        inline void clear_object_reference() {return super->clear_object_reference();}
        enum {
            object_reference_field_tag=2
        };
        inline bool has_object_reference() const {return super->has_object_reference()&&_PBJValidate<PBJ::UUID>()(super->object_reference());}
        inline PBJ::UUID object_reference() const {
            if (has_object_reference()) {
                return (PBJ::UUID)_PBJCast< PBJ::UUID>()(super->object_reference());
            } else {
                return _PBJCast < PBJ::UUID> ()();
            }
        }
        inline void set_object_reference(const PBJ::UUID &value) const {
            super->set_object_reference(_PBJConstruct< PBJ::UUID>()(value));
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
    class DelObj : public IDelObj {
    protected:
        _PBJ_Internal::DelObj superconstructed;
    public:
        DelObj():IDelObj(superconstructed) {
            super=&superconstructed;
        }
        DelObj(const _PBJ_Internal::DelObj &copy):IDelObj(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        DelObj(_PBJ_Internal::DelObj &reference):IDelObj(reference) {
        }
        DelObj(const IDelObj &copy):IDelObj(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        DelObj(const DelObj &copy):IDelObj(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        DelObj& operator=(const IDelObj &copy) {
            this->PBJ::Message<IDelObj>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        DelObj& operator=(const DelObj &copy) {
            this->PBJ::Message<IDelObj>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        DelObj* New()const{ return new DelObj; }
    };
}
}
namespace Sirikata {
namespace Protocol {
    class INewProxQuery : public PBJ::Message< INewProxQuery > {
    protected:
        _PBJ_Internal::NewProxQuery *super;
    public:
        _PBJ_Internal::NewProxQuery* _PBJSuper(){ return super; }
        const _PBJ_Internal::NewProxQuery* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::NewProxQuery _PBJ_SubType;
        INewProxQuery(_PBJ_Internal::NewProxQuery &reference):PBJ::Message< INewProxQuery >(&reference) {
            super=&reference;
        }
        template <class T> INewProxQuery(const PBJ::RefClass<T> &other) : PBJ::Message<INewProxQuery>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> INewProxQuery& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        INewProxQuery(INewProxQuery &reference):PBJ::Message< INewProxQuery >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        INewProxQuery& operator=(INewProxQuery &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const INewProxQuery& default_instance() {
            static _PBJ_Internal::NewProxQuery def_inst=_PBJ_Internal::NewProxQuery::default_instance();
            static INewProxQuery _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::NewProxQuery::descriptor();
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
        inline void clear_query_id() {return super->clear_query_id();}
        enum {
            query_id_field_tag=2
        };
        inline bool has_query_id() const {return super->has_query_id()&&_PBJValidate<PBJ::uint32>()(super->query_id());}
        inline PBJ::uint32 query_id() const {
            if (has_query_id()) {
                return (PBJ::uint32)_PBJCast< PBJ::uint32>()(super->query_id());
            } else {
                return _PBJCast < PBJ::uint32> ()();
            }
        }
        inline void set_query_id(const PBJ::uint32 &value) const {
            super->set_query_id(_PBJConstruct< PBJ::uint32>()(value));
        }
        inline void clear_stateless() {return super->clear_stateless();}
        enum {
            stateless_field_tag=3
        };
        inline bool has_stateless() const {return super->has_stateless()&&_PBJValidate<bool>()(super->stateless());}
        inline bool stateless() const {
            if (has_stateless()) {
                return (bool)_PBJCast< bool>()(super->stateless());
            } else {
                return _PBJCast < bool> ()();
            }
        }
        inline void set_stateless(const bool &value) const {
            super->set_stateless(_PBJConstruct< bool>()(value));
        }
        inline void clear_relative_center() {return super->clear_relative_center();}
        enum {
            relative_center_field_tag=4
        };
        inline bool has_relative_center() const {return super->relative_center_size()>=3;}
        inline PBJ::Vector3f relative_center() const {
            if (has_relative_center()) {
                return _PBJCast< PBJ::Vector3f>()(super->relative_center(0),super->relative_center(1),super->relative_center(2));
            } else {
                return _PBJCast< PBJ::Vector3f>()();
            }
        }
        inline void set_relative_center(const PBJ::Vector3f &value) {
            super->clear_relative_center();
            _PBJConstruct< PBJ::Vector3f>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector3f>()(value);
            super->add_relative_center(_PBJtempArray[0]);
            super->add_relative_center(_PBJtempArray[1]);
            super->add_relative_center(_PBJtempArray[2]);
        }
        inline void clear_absolute_center() {return super->clear_absolute_center();}
        enum {
            absolute_center_field_tag=5
        };
        inline bool has_absolute_center() const {return super->absolute_center_size()>=3;}
        inline PBJ::Vector3d absolute_center() const {
            if (has_absolute_center()) {
                return _PBJCast< PBJ::Vector3d>()(super->absolute_center(0),super->absolute_center(1),super->absolute_center(2));
            } else {
                return _PBJCast< PBJ::Vector3d>()();
            }
        }
        inline void set_absolute_center(const PBJ::Vector3d &value) {
            super->clear_absolute_center();
            _PBJConstruct< PBJ::Vector3d>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector3d>()(value);
            super->add_absolute_center(_PBJtempArray[0]);
            super->add_absolute_center(_PBJtempArray[1]);
            super->add_absolute_center(_PBJtempArray[2]);
        }
        inline void clear_max_radius() {return super->clear_max_radius();}
        enum {
            max_radius_field_tag=6
        };
        inline bool has_max_radius() const {return super->has_max_radius()&&_PBJValidate<float>()(super->max_radius());}
        inline float max_radius() const {
            if (has_max_radius()) {
                return (float)_PBJCast< float>()(super->max_radius());
            } else {
                return _PBJCast < float> ()();
            }
        }
        inline void set_max_radius(const float &value) const {
            super->set_max_radius(_PBJConstruct< float>()(value));
        }
        inline void clear_min_solid_angle() {return super->clear_min_solid_angle();}
        enum {
            min_solid_angle_field_tag=7
        };
        inline bool has_min_solid_angle() const {return super->has_min_solid_angle()&&_PBJValidate<PBJ::angle>()(super->min_solid_angle());}
        inline float min_solid_angle() const {
            if (has_min_solid_angle()) {
                return (float)_PBJCast< PBJ::angle>()(super->min_solid_angle());
            } else {
                return _PBJCast < PBJ::angle> ()();
            }
        }
        inline void set_min_solid_angle(const float &value) const {
            super->set_min_solid_angle(_PBJConstruct< PBJ::angle>()(value));
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
    class NewProxQuery : public INewProxQuery {
    protected:
        _PBJ_Internal::NewProxQuery superconstructed;
    public:
        NewProxQuery():INewProxQuery(superconstructed) {
            super=&superconstructed;
        }
        NewProxQuery(const _PBJ_Internal::NewProxQuery &copy):INewProxQuery(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        NewProxQuery(_PBJ_Internal::NewProxQuery &reference):INewProxQuery(reference) {
        }
        NewProxQuery(const INewProxQuery &copy):INewProxQuery(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        NewProxQuery(const NewProxQuery &copy):INewProxQuery(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        NewProxQuery& operator=(const INewProxQuery &copy) {
            this->PBJ::Message<INewProxQuery>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        NewProxQuery& operator=(const NewProxQuery &copy) {
            this->PBJ::Message<INewProxQuery>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        NewProxQuery* New()const{ return new NewProxQuery; }
    };
}
}
namespace Sirikata {
namespace Protocol {
    class IProxCall : public PBJ::Message< IProxCall > {
    protected:
        _PBJ_Internal::ProxCall *super;
    public:
        _PBJ_Internal::ProxCall* _PBJSuper(){ return super; }
        const _PBJ_Internal::ProxCall* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::ProxCall _PBJ_SubType;
        IProxCall(_PBJ_Internal::ProxCall &reference):PBJ::Message< IProxCall >(&reference) {
            super=&reference;
        }
        template <class T> IProxCall(const PBJ::RefClass<T> &other) : PBJ::Message<IProxCall>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IProxCall& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IProxCall(IProxCall &reference):PBJ::Message< IProxCall >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IProxCall& operator=(IProxCall &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IProxCall& default_instance() {
            static _PBJ_Internal::ProxCall def_inst=_PBJ_Internal::ProxCall::default_instance();
            static IProxCall _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::ProxCall::descriptor();
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
        inline void clear_query_id() {return super->clear_query_id();}
        enum {
            query_id_field_tag=2
        };
        inline bool has_query_id() const {return super->has_query_id()&&_PBJValidate<PBJ::uint32>()(super->query_id());}
        inline PBJ::uint32 query_id() const {
            if (has_query_id()) {
                return (PBJ::uint32)_PBJCast< PBJ::uint32>()(super->query_id());
            } else {
                return _PBJCast < PBJ::uint32> ()();
            }
        }
        inline void set_query_id(const PBJ::uint32 &value) const {
            super->set_query_id(_PBJConstruct< PBJ::uint32>()(value));
        }
        inline void clear_proximate_object() {return super->clear_proximate_object();}
        enum {
            proximate_object_field_tag=3
        };
        inline bool has_proximate_object() const {return super->has_proximate_object()&&_PBJValidate<PBJ::UUID>()(super->proximate_object());}
        inline PBJ::UUID proximate_object() const {
            if (has_proximate_object()) {
                return (PBJ::UUID)_PBJCast< PBJ::UUID>()(super->proximate_object());
            } else {
                return _PBJCast < PBJ::UUID> ()();
            }
        }
        inline void set_proximate_object(const PBJ::UUID &value) const {
            super->set_proximate_object(_PBJConstruct< PBJ::UUID>()(value));
        }
        enum ProximityEvent {
            EXITED_PROXIMITY=_PBJ_Internal::ProxCall::EXITED_PROXIMITY,
            ENTERED_PROXIMITY=_PBJ_Internal::ProxCall::ENTERED_PROXIMITY,
            STATELESS_PROXIMITY=_PBJ_Internal::ProxCall::STATELESS_PROXIMITY
        };
        inline void clear_proximity_event() {return super->clear_proximity_event();}
        enum {
            proximity_event_field_tag=4
        };
        inline bool has_proximity_event() const {return super->has_proximity_event();}
        inline ProximityEvent proximity_event() const {
            if (has_proximity_event()) {
                return (ProximityEvent)(super->proximity_event());
            } else {
                return _PBJCast < ProximityEvent> ()();
            }
        }
        inline void set_proximity_event(const ProximityEvent &value) const {
            super->set_proximity_event((_PBJ_Internal::ProxCall::ProximityEvent)value);
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
    class ProxCall : public IProxCall {
    protected:
        _PBJ_Internal::ProxCall superconstructed;
    public:
        ProxCall():IProxCall(superconstructed) {
            super=&superconstructed;
        }
        ProxCall(const _PBJ_Internal::ProxCall &copy):IProxCall(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        ProxCall(_PBJ_Internal::ProxCall &reference):IProxCall(reference) {
        }
        ProxCall(const IProxCall &copy):IProxCall(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        ProxCall(const ProxCall &copy):IProxCall(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        ProxCall& operator=(const IProxCall &copy) {
            this->PBJ::Message<IProxCall>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        ProxCall& operator=(const ProxCall &copy) {
            this->PBJ::Message<IProxCall>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        ProxCall* New()const{ return new ProxCall; }
    };
}
}
namespace Sirikata {
namespace Protocol {
    class IDelProxQuery : public PBJ::Message< IDelProxQuery > {
    protected:
        _PBJ_Internal::DelProxQuery *super;
    public:
        _PBJ_Internal::DelProxQuery* _PBJSuper(){ return super; }
        const _PBJ_Internal::DelProxQuery* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::DelProxQuery _PBJ_SubType;
        IDelProxQuery(_PBJ_Internal::DelProxQuery &reference):PBJ::Message< IDelProxQuery >(&reference) {
            super=&reference;
        }
        template <class T> IDelProxQuery(const PBJ::RefClass<T> &other) : PBJ::Message<IDelProxQuery>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IDelProxQuery& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IDelProxQuery(IDelProxQuery &reference):PBJ::Message< IDelProxQuery >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IDelProxQuery& operator=(IDelProxQuery &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IDelProxQuery& default_instance() {
            static _PBJ_Internal::DelProxQuery def_inst=_PBJ_Internal::DelProxQuery::default_instance();
            static IDelProxQuery _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::DelProxQuery::descriptor();
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
        inline void clear_query_id() {return super->clear_query_id();}
        enum {
            query_id_field_tag=2
        };
        inline bool has_query_id() const {return super->has_query_id()&&_PBJValidate<PBJ::uint32>()(super->query_id());}
        inline PBJ::uint32 query_id() const {
            if (has_query_id()) {
                return (PBJ::uint32)_PBJCast< PBJ::uint32>()(super->query_id());
            } else {
                return _PBJCast < PBJ::uint32> ()();
            }
        }
        inline void set_query_id(const PBJ::uint32 &value) const {
            super->set_query_id(_PBJConstruct< PBJ::uint32>()(value));
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
    class DelProxQuery : public IDelProxQuery {
    protected:
        _PBJ_Internal::DelProxQuery superconstructed;
    public:
        DelProxQuery():IDelProxQuery(superconstructed) {
            super=&superconstructed;
        }
        DelProxQuery(const _PBJ_Internal::DelProxQuery &copy):IDelProxQuery(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        DelProxQuery(_PBJ_Internal::DelProxQuery &reference):IDelProxQuery(reference) {
        }
        DelProxQuery(const IDelProxQuery &copy):IDelProxQuery(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        DelProxQuery(const DelProxQuery &copy):IDelProxQuery(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        DelProxQuery& operator=(const IDelProxQuery &copy) {
            this->PBJ::Message<IDelProxQuery>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        DelProxQuery& operator=(const DelProxQuery &copy) {
            this->PBJ::Message<IDelProxQuery>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        DelProxQuery* New()const{ return new DelProxQuery; }
    };
}
}
namespace Sirikata {
namespace Protocol {
    class IVector3fProperty : public PBJ::Message< IVector3fProperty > {
    protected:
        _PBJ_Internal::Vector3fProperty *super;
    public:
        _PBJ_Internal::Vector3fProperty* _PBJSuper(){ return super; }
        const _PBJ_Internal::Vector3fProperty* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::Vector3fProperty _PBJ_SubType;
        IVector3fProperty(_PBJ_Internal::Vector3fProperty &reference):PBJ::Message< IVector3fProperty >(&reference) {
            super=&reference;
        }
        template <class T> IVector3fProperty(const PBJ::RefClass<T> &other) : PBJ::Message<IVector3fProperty>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IVector3fProperty& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IVector3fProperty(IVector3fProperty &reference):PBJ::Message< IVector3fProperty >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IVector3fProperty& operator=(IVector3fProperty &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IVector3fProperty& default_instance() {
            static _PBJ_Internal::Vector3fProperty def_inst=_PBJ_Internal::Vector3fProperty::default_instance();
            static IVector3fProperty _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::Vector3fProperty::descriptor();
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
        inline void clear_value() {return super->clear_value();}
        enum {
            value_field_tag=10
        };
        inline bool has_value() const {return super->value_size()>=3;}
        inline PBJ::Vector3f value() const {
            if (has_value()) {
                return _PBJCast< PBJ::Vector3f>()(super->value(0),super->value(1),super->value(2));
            } else {
                return _PBJCast< PBJ::Vector3f>()();
            }
        }
        inline void set_value(const PBJ::Vector3f &value) {
            super->clear_value();
            _PBJConstruct< PBJ::Vector3f>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector3f>()(value);
            super->add_value(_PBJtempArray[0]);
            super->add_value(_PBJtempArray[1]);
            super->add_value(_PBJtempArray[2]);
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
    class Vector3fProperty : public IVector3fProperty {
    protected:
        _PBJ_Internal::Vector3fProperty superconstructed;
    public:
        Vector3fProperty():IVector3fProperty(superconstructed) {
            super=&superconstructed;
        }
        Vector3fProperty(const _PBJ_Internal::Vector3fProperty &copy):IVector3fProperty(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        Vector3fProperty(_PBJ_Internal::Vector3fProperty &reference):IVector3fProperty(reference) {
        }
        Vector3fProperty(const IVector3fProperty &copy):IVector3fProperty(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        Vector3fProperty(const Vector3fProperty &copy):IVector3fProperty(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        Vector3fProperty& operator=(const IVector3fProperty &copy) {
            this->PBJ::Message<IVector3fProperty>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        Vector3fProperty& operator=(const Vector3fProperty &copy) {
            this->PBJ::Message<IVector3fProperty>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        Vector3fProperty* New()const{ return new Vector3fProperty; }
    };
}
}
namespace Sirikata {
namespace Protocol {
    class IStringProperty : public PBJ::Message< IStringProperty > {
    protected:
        _PBJ_Internal::StringProperty *super;
    public:
        _PBJ_Internal::StringProperty* _PBJSuper(){ return super; }
        const _PBJ_Internal::StringProperty* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::StringProperty _PBJ_SubType;
        IStringProperty(_PBJ_Internal::StringProperty &reference):PBJ::Message< IStringProperty >(&reference) {
            super=&reference;
        }
        template <class T> IStringProperty(const PBJ::RefClass<T> &other) : PBJ::Message<IStringProperty>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IStringProperty& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IStringProperty(IStringProperty &reference):PBJ::Message< IStringProperty >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IStringProperty& operator=(IStringProperty &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IStringProperty& default_instance() {
            static _PBJ_Internal::StringProperty def_inst=_PBJ_Internal::StringProperty::default_instance();
            static IStringProperty _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::StringProperty::descriptor();
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
        inline void clear_value() {return super->clear_value();}
        enum {
            value_field_tag=10
        };
        inline void set_value(const char *value) const {
            super->set_value(value);
        }
        inline bool has_value() const {return super->has_value()&&_PBJValidate<PBJ::utf8string>()(super->value());}
        inline ::std::string value() const {
            if (has_value()) {
                return (::std::string)_PBJCast< PBJ::utf8string>()(super->value());
            } else {
                return _PBJCast < PBJ::utf8string> ()();
            }
        }
        inline void set_value(const ::std::string &value) const {
            super->set_value(_PBJConstruct< PBJ::utf8string>()(value));
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
    class StringProperty : public IStringProperty {
    protected:
        _PBJ_Internal::StringProperty superconstructed;
    public:
        StringProperty():IStringProperty(superconstructed) {
            super=&superconstructed;
        }
        StringProperty(const _PBJ_Internal::StringProperty &copy):IStringProperty(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        StringProperty(_PBJ_Internal::StringProperty &reference):IStringProperty(reference) {
        }
        StringProperty(const IStringProperty &copy):IStringProperty(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        StringProperty(const StringProperty &copy):IStringProperty(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        StringProperty& operator=(const IStringProperty &copy) {
            this->PBJ::Message<IStringProperty>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        StringProperty& operator=(const StringProperty &copy) {
            this->PBJ::Message<IStringProperty>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        StringProperty* New()const{ return new StringProperty; }
    };
}
}
namespace Sirikata {
namespace Protocol {
    class IStringMapProperty : public PBJ::Message< IStringMapProperty > {
    protected:
        _PBJ_Internal::StringMapProperty *super;
    public:
        _PBJ_Internal::StringMapProperty* _PBJSuper(){ return super; }
        const _PBJ_Internal::StringMapProperty* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::StringMapProperty _PBJ_SubType;
        IStringMapProperty(_PBJ_Internal::StringMapProperty &reference):PBJ::Message< IStringMapProperty >(&reference) {
            super=&reference;
        }
        template <class T> IStringMapProperty(const PBJ::RefClass<T> &other) : PBJ::Message<IStringMapProperty>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IStringMapProperty& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IStringMapProperty(IStringMapProperty &reference):PBJ::Message< IStringMapProperty >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IStringMapProperty& operator=(IStringMapProperty &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IStringMapProperty& default_instance() {
            static _PBJ_Internal::StringMapProperty def_inst=_PBJ_Internal::StringMapProperty::default_instance();
            static IStringMapProperty _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::StringMapProperty::descriptor();
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
        inline void clear_keys() {return super->clear_keys();}
        enum {
            keys_field_tag=2
        };
        inline int keys_size() const {return super->keys_size();}
        inline std::string& keys(int index) {
            return *super->mutable_keys(index);
        }
        inline void set_keys(int index, const char *value) const {
            super->set_keys(index,value);
        }
        inline void add_keys(const char *value) const {
            super->add_keys(value);
        }
        inline bool has_keys(int index) const {assert(index>=0&&index<keys_size()); return _PBJValidate< PBJ::utf8string>()(super->keys(index));}
        inline const std::string& keys(int index) const {
            return _PBJCast< PBJ::utf8string>()(super->keys(index));
        }
        inline void set_keys(int index, const ::std::string &value) const {
            return super->set_keys(index,_PBJConstruct< PBJ::utf8string>()(value));
        }
        inline void add_keys(const ::std::string &value) const {
            super->add_keys(_PBJConstruct< PBJ::utf8string>()(value));
        }
        inline void clear_values() {return super->clear_values();}
        enum {
            values_field_tag=3
        };
        inline int values_size() const {return super->values_size();}
        inline std::string& values(int index) {
            return *super->mutable_values(index);
        }
        inline void set_values(int index, const char *value) const {
            super->set_values(index,value);
        }
        inline void add_values(const char *value) const {
            super->add_values(value);
        }
        inline bool has_values(int index) const {assert(index>=0&&index<values_size()); return _PBJValidate< PBJ::utf8string>()(super->values(index));}
        inline const std::string& values(int index) const {
            return _PBJCast< PBJ::utf8string>()(super->values(index));
        }
        inline void set_values(int index, const ::std::string &value) const {
            return super->set_values(index,_PBJConstruct< PBJ::utf8string>()(value));
        }
        inline void add_values(const ::std::string &value) const {
            super->add_values(_PBJConstruct< PBJ::utf8string>()(value));
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
    class StringMapProperty : public IStringMapProperty {
    protected:
        _PBJ_Internal::StringMapProperty superconstructed;
    public:
        StringMapProperty():IStringMapProperty(superconstructed) {
            super=&superconstructed;
        }
        StringMapProperty(const _PBJ_Internal::StringMapProperty &copy):IStringMapProperty(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        StringMapProperty(_PBJ_Internal::StringMapProperty &reference):IStringMapProperty(reference) {
        }
        StringMapProperty(const IStringMapProperty &copy):IStringMapProperty(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        StringMapProperty(const StringMapProperty &copy):IStringMapProperty(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        StringMapProperty& operator=(const IStringMapProperty &copy) {
            this->PBJ::Message<IStringMapProperty>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        StringMapProperty& operator=(const StringMapProperty &copy) {
            this->PBJ::Message<IStringMapProperty>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        StringMapProperty* New()const{ return new StringMapProperty; }
    };
}
}
namespace Sirikata {
namespace Protocol {
    class IPhysicalParameters : public PBJ::Message< IPhysicalParameters > {
    protected:
        _PBJ_Internal::PhysicalParameters *super;
    public:
        _PBJ_Internal::PhysicalParameters* _PBJSuper(){ return super; }
        const _PBJ_Internal::PhysicalParameters* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::PhysicalParameters _PBJ_SubType;
        IPhysicalParameters(_PBJ_Internal::PhysicalParameters &reference):PBJ::Message< IPhysicalParameters >(&reference) {
            super=&reference;
        }
        template <class T> IPhysicalParameters(const PBJ::RefClass<T> &other) : PBJ::Message<IPhysicalParameters>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IPhysicalParameters& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IPhysicalParameters(IPhysicalParameters &reference):PBJ::Message< IPhysicalParameters >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IPhysicalParameters& operator=(IPhysicalParameters &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IPhysicalParameters& default_instance() {
            static _PBJ_Internal::PhysicalParameters def_inst=_PBJ_Internal::PhysicalParameters::default_instance();
            static IPhysicalParameters _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::PhysicalParameters::descriptor();
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
        enum Mode {
            NONPHYSICAL=_PBJ_Internal::PhysicalParameters::NONPHYSICAL,
            STATIC=_PBJ_Internal::PhysicalParameters::STATIC,
            DYNAMICBOX=_PBJ_Internal::PhysicalParameters::DYNAMICBOX,
            DYNAMICSPHERE=_PBJ_Internal::PhysicalParameters::DYNAMICSPHERE,
            DYNAMICCYLINDER=_PBJ_Internal::PhysicalParameters::DYNAMICCYLINDER,
            CHARACTER=_PBJ_Internal::PhysicalParameters::CHARACTER
        };
        inline void clear_mode() {return super->clear_mode();}
        enum {
            mode_field_tag=2
        };
        inline bool has_mode() const {return super->has_mode();}
        inline Mode mode() const {
            if (has_mode()) {
                return (Mode)(super->mode());
            } else {
                return _PBJCast < Mode> ()();
            }
        }
        inline void set_mode(const Mode &value) const {
            super->set_mode((_PBJ_Internal::PhysicalParameters::Mode)value);
        }
        inline void clear_density() {return super->clear_density();}
        enum {
            density_field_tag=3
        };
        inline bool has_density() const {return super->has_density()&&_PBJValidate<float>()(super->density());}
        inline float density() const {
            if (has_density()) {
                return (float)_PBJCast< float>()(super->density());
            } else {
                return _PBJCast < float> ()();
            }
        }
        inline void set_density(const float &value) const {
            super->set_density(_PBJConstruct< float>()(value));
        }
        inline void clear_friction() {return super->clear_friction();}
        enum {
            friction_field_tag=4
        };
        inline bool has_friction() const {return super->has_friction()&&_PBJValidate<float>()(super->friction());}
        inline float friction() const {
            if (has_friction()) {
                return (float)_PBJCast< float>()(super->friction());
            } else {
                return _PBJCast < float> ()();
            }
        }
        inline void set_friction(const float &value) const {
            super->set_friction(_PBJConstruct< float>()(value));
        }
        inline void clear_bounce() {return super->clear_bounce();}
        enum {
            bounce_field_tag=5
        };
        inline bool has_bounce() const {return super->has_bounce()&&_PBJValidate<float>()(super->bounce());}
        inline float bounce() const {
            if (has_bounce()) {
                return (float)_PBJCast< float>()(super->bounce());
            } else {
                return _PBJCast < float> ()();
            }
        }
        inline void set_bounce(const float &value) const {
            super->set_bounce(_PBJConstruct< float>()(value));
        }
        inline void clear_hull() {return super->clear_hull();}
        enum {
            hull_field_tag=6
        };
        inline bool has_hull() const {return super->hull_size()>=3;}
        inline PBJ::Vector3f hull() const {
            if (has_hull()) {
                return _PBJCast< PBJ::Vector3f>()(super->hull(0),super->hull(1),super->hull(2));
            } else {
                return _PBJCast< PBJ::Vector3f>()();
            }
        }
        inline void set_hull(const PBJ::Vector3f &value) {
            super->clear_hull();
            _PBJConstruct< PBJ::Vector3f>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector3f>()(value);
            super->add_hull(_PBJtempArray[0]);
            super->add_hull(_PBJtempArray[1]);
            super->add_hull(_PBJtempArray[2]);
        }
        inline void clear_collide_msg() {return super->clear_collide_msg();}
        enum {
            collide_msg_field_tag=16
        };
        inline bool has_collide_msg() const {return super->has_collide_msg()&&_PBJValidate<PBJ::uint32>()(super->collide_msg());}
        inline PBJ::uint32 collide_msg() const {
            if (has_collide_msg()) {
                return (PBJ::uint32)_PBJCast< PBJ::uint32>()(super->collide_msg());
            } else {
                return _PBJCast < PBJ::uint32> ()();
            }
        }
        inline void set_collide_msg(const PBJ::uint32 &value) const {
            super->set_collide_msg(_PBJConstruct< PBJ::uint32>()(value));
        }
        inline void clear_collide_mask() {return super->clear_collide_mask();}
        enum {
            collide_mask_field_tag=17
        };
        inline bool has_collide_mask() const {return super->has_collide_mask()&&_PBJValidate<PBJ::uint32>()(super->collide_mask());}
        inline PBJ::uint32 collide_mask() const {
            if (has_collide_mask()) {
                return (PBJ::uint32)_PBJCast< PBJ::uint32>()(super->collide_mask());
            } else {
                return _PBJCast < PBJ::uint32> ()();
            }
        }
        inline void set_collide_mask(const PBJ::uint32 &value) const {
            super->set_collide_mask(_PBJConstruct< PBJ::uint32>()(value));
        }
        inline void clear_gravity() {return super->clear_gravity();}
        enum {
            gravity_field_tag=18
        };
        inline bool has_gravity() const {return super->has_gravity()&&_PBJValidate<float>()(super->gravity());}
        inline float gravity() const {
            if (has_gravity()) {
                return (float)_PBJCast< float>()(super->gravity());
            } else {
                return _PBJCast < float> ()();
            }
        }
        inline void set_gravity(const float &value) const {
            super->set_gravity(_PBJConstruct< float>()(value));
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
    class PhysicalParameters : public IPhysicalParameters {
    protected:
        _PBJ_Internal::PhysicalParameters superconstructed;
    public:
        PhysicalParameters():IPhysicalParameters(superconstructed) {
            super=&superconstructed;
        }
        PhysicalParameters(const _PBJ_Internal::PhysicalParameters &copy):IPhysicalParameters(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        PhysicalParameters(_PBJ_Internal::PhysicalParameters &reference):IPhysicalParameters(reference) {
        }
        PhysicalParameters(const IPhysicalParameters &copy):IPhysicalParameters(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        PhysicalParameters(const PhysicalParameters &copy):IPhysicalParameters(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        PhysicalParameters& operator=(const IPhysicalParameters &copy) {
            this->PBJ::Message<IPhysicalParameters>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        PhysicalParameters& operator=(const PhysicalParameters &copy) {
            this->PBJ::Message<IPhysicalParameters>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        PhysicalParameters* New()const{ return new PhysicalParameters; }
    };
}
}
namespace Sirikata {
namespace Protocol {
    class ILightInfoProperty : public PBJ::Message< ILightInfoProperty > {
    protected:
        _PBJ_Internal::LightInfoProperty *super;
    public:
        _PBJ_Internal::LightInfoProperty* _PBJSuper(){ return super; }
        const _PBJ_Internal::LightInfoProperty* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::LightInfoProperty _PBJ_SubType;
        ILightInfoProperty(_PBJ_Internal::LightInfoProperty &reference):PBJ::Message< ILightInfoProperty >(&reference) {
            super=&reference;
        }
        template <class T> ILightInfoProperty(const PBJ::RefClass<T> &other) : PBJ::Message<ILightInfoProperty>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> ILightInfoProperty& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        ILightInfoProperty(ILightInfoProperty &reference):PBJ::Message< ILightInfoProperty >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        ILightInfoProperty& operator=(ILightInfoProperty &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const ILightInfoProperty& default_instance() {
            static _PBJ_Internal::LightInfoProperty def_inst=_PBJ_Internal::LightInfoProperty::default_instance();
            static ILightInfoProperty _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::LightInfoProperty::descriptor();
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
        inline void clear_diffuse_color() {return super->clear_diffuse_color();}
        enum {
            diffuse_color_field_tag=3
        };
        inline bool has_diffuse_color() const {return super->diffuse_color_size()>=3;}
        inline PBJ::Vector3f diffuse_color() const {
            if (has_diffuse_color()) {
                return _PBJCast< PBJ::Vector3f>()(super->diffuse_color(0),super->diffuse_color(1),super->diffuse_color(2));
            } else {
                return _PBJCast< PBJ::Vector3f>()();
            }
        }
        inline void set_diffuse_color(const PBJ::Vector3f &value) {
            super->clear_diffuse_color();
            _PBJConstruct< PBJ::Vector3f>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector3f>()(value);
            super->add_diffuse_color(_PBJtempArray[0]);
            super->add_diffuse_color(_PBJtempArray[1]);
            super->add_diffuse_color(_PBJtempArray[2]);
        }
        inline void clear_specular_color() {return super->clear_specular_color();}
        enum {
            specular_color_field_tag=4
        };
        inline bool has_specular_color() const {return super->specular_color_size()>=3;}
        inline PBJ::Vector3f specular_color() const {
            if (has_specular_color()) {
                return _PBJCast< PBJ::Vector3f>()(super->specular_color(0),super->specular_color(1),super->specular_color(2));
            } else {
                return _PBJCast< PBJ::Vector3f>()();
            }
        }
        inline void set_specular_color(const PBJ::Vector3f &value) {
            super->clear_specular_color();
            _PBJConstruct< PBJ::Vector3f>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector3f>()(value);
            super->add_specular_color(_PBJtempArray[0]);
            super->add_specular_color(_PBJtempArray[1]);
            super->add_specular_color(_PBJtempArray[2]);
        }
        inline void clear_power() {return super->clear_power();}
        enum {
            power_field_tag=5
        };
        inline bool has_power() const {return super->has_power()&&_PBJValidate<float>()(super->power());}
        inline float power() const {
            if (has_power()) {
                return (float)_PBJCast< float>()(super->power());
            } else {
                return _PBJCast < float> ()();
            }
        }
        inline void set_power(const float &value) const {
            super->set_power(_PBJConstruct< float>()(value));
        }
        inline void clear_ambient_color() {return super->clear_ambient_color();}
        enum {
            ambient_color_field_tag=6
        };
        inline bool has_ambient_color() const {return super->ambient_color_size()>=3;}
        inline PBJ::Vector3f ambient_color() const {
            if (has_ambient_color()) {
                return _PBJCast< PBJ::Vector3f>()(super->ambient_color(0),super->ambient_color(1),super->ambient_color(2));
            } else {
                return _PBJCast< PBJ::Vector3f>()();
            }
        }
        inline void set_ambient_color(const PBJ::Vector3f &value) {
            super->clear_ambient_color();
            _PBJConstruct< PBJ::Vector3f>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector3f>()(value);
            super->add_ambient_color(_PBJtempArray[0]);
            super->add_ambient_color(_PBJtempArray[1]);
            super->add_ambient_color(_PBJtempArray[2]);
        }
        inline void clear_shadow_color() {return super->clear_shadow_color();}
        enum {
            shadow_color_field_tag=7
        };
        inline bool has_shadow_color() const {return super->shadow_color_size()>=3;}
        inline PBJ::Vector3f shadow_color() const {
            if (has_shadow_color()) {
                return _PBJCast< PBJ::Vector3f>()(super->shadow_color(0),super->shadow_color(1),super->shadow_color(2));
            } else {
                return _PBJCast< PBJ::Vector3f>()();
            }
        }
        inline void set_shadow_color(const PBJ::Vector3f &value) {
            super->clear_shadow_color();
            _PBJConstruct< PBJ::Vector3f>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector3f>()(value);
            super->add_shadow_color(_PBJtempArray[0]);
            super->add_shadow_color(_PBJtempArray[1]);
            super->add_shadow_color(_PBJtempArray[2]);
        }
        inline void clear_light_range() {return super->clear_light_range();}
        enum {
            light_range_field_tag=8
        };
        inline bool has_light_range() const {return super->has_light_range()&&_PBJValidate<double>()(super->light_range());}
        inline double light_range() const {
            if (has_light_range()) {
                return (double)_PBJCast< double>()(super->light_range());
            } else {
                return _PBJCast < double> ()();
            }
        }
        inline void set_light_range(const double &value) const {
            super->set_light_range(_PBJConstruct< double>()(value));
        }
        inline void clear_constant_falloff() {return super->clear_constant_falloff();}
        enum {
            constant_falloff_field_tag=9
        };
        inline bool has_constant_falloff() const {return super->has_constant_falloff()&&_PBJValidate<float>()(super->constant_falloff());}
        inline float constant_falloff() const {
            if (has_constant_falloff()) {
                return (float)_PBJCast< float>()(super->constant_falloff());
            } else {
                return _PBJCast < float> ()();
            }
        }
        inline void set_constant_falloff(const float &value) const {
            super->set_constant_falloff(_PBJConstruct< float>()(value));
        }
        inline void clear_linear_falloff() {return super->clear_linear_falloff();}
        enum {
            linear_falloff_field_tag=10
        };
        inline bool has_linear_falloff() const {return super->has_linear_falloff()&&_PBJValidate<float>()(super->linear_falloff());}
        inline float linear_falloff() const {
            if (has_linear_falloff()) {
                return (float)_PBJCast< float>()(super->linear_falloff());
            } else {
                return _PBJCast < float> ()();
            }
        }
        inline void set_linear_falloff(const float &value) const {
            super->set_linear_falloff(_PBJConstruct< float>()(value));
        }
        inline void clear_quadratic_falloff() {return super->clear_quadratic_falloff();}
        enum {
            quadratic_falloff_field_tag=11
        };
        inline bool has_quadratic_falloff() const {return super->has_quadratic_falloff()&&_PBJValidate<float>()(super->quadratic_falloff());}
        inline float quadratic_falloff() const {
            if (has_quadratic_falloff()) {
                return (float)_PBJCast< float>()(super->quadratic_falloff());
            } else {
                return _PBJCast < float> ()();
            }
        }
        inline void set_quadratic_falloff(const float &value) const {
            super->set_quadratic_falloff(_PBJConstruct< float>()(value));
        }
        inline void clear_cone_inner_radians() {return super->clear_cone_inner_radians();}
        enum {
            cone_inner_radians_field_tag=12
        };
        inline bool has_cone_inner_radians() const {return super->has_cone_inner_radians()&&_PBJValidate<float>()(super->cone_inner_radians());}
        inline float cone_inner_radians() const {
            if (has_cone_inner_radians()) {
                return (float)_PBJCast< float>()(super->cone_inner_radians());
            } else {
                return _PBJCast < float> ()();
            }
        }
        inline void set_cone_inner_radians(const float &value) const {
            super->set_cone_inner_radians(_PBJConstruct< float>()(value));
        }
        inline void clear_cone_outer_radians() {return super->clear_cone_outer_radians();}
        enum {
            cone_outer_radians_field_tag=13
        };
        inline bool has_cone_outer_radians() const {return super->has_cone_outer_radians()&&_PBJValidate<float>()(super->cone_outer_radians());}
        inline float cone_outer_radians() const {
            if (has_cone_outer_radians()) {
                return (float)_PBJCast< float>()(super->cone_outer_radians());
            } else {
                return _PBJCast < float> ()();
            }
        }
        inline void set_cone_outer_radians(const float &value) const {
            super->set_cone_outer_radians(_PBJConstruct< float>()(value));
        }
        inline void clear_cone_falloff() {return super->clear_cone_falloff();}
        enum {
            cone_falloff_field_tag=14
        };
        inline bool has_cone_falloff() const {return super->has_cone_falloff()&&_PBJValidate<float>()(super->cone_falloff());}
        inline float cone_falloff() const {
            if (has_cone_falloff()) {
                return (float)_PBJCast< float>()(super->cone_falloff());
            } else {
                return _PBJCast < float> ()();
            }
        }
        inline void set_cone_falloff(const float &value) const {
            super->set_cone_falloff(_PBJConstruct< float>()(value));
        }
        enum LightTypes {
            POINT=_PBJ_Internal::LightInfoProperty::POINT,
            SPOTLIGHT=_PBJ_Internal::LightInfoProperty::SPOTLIGHT,
            DIRECTIONAL=_PBJ_Internal::LightInfoProperty::DIRECTIONAL
        };
        inline void clear_type() {return super->clear_type();}
        enum {
            type_field_tag=15
        };
        inline bool has_type() const {return super->has_type();}
        inline LightTypes type() const {
            if (has_type()) {
                return (LightTypes)(super->type());
            } else {
                return _PBJCast < LightTypes> ()();
            }
        }
        inline void set_type(const LightTypes &value) const {
            super->set_type((_PBJ_Internal::LightInfoProperty::LightTypes)value);
        }
        inline void clear_casts_shadow() {return super->clear_casts_shadow();}
        enum {
            casts_shadow_field_tag=16
        };
        inline bool has_casts_shadow() const {return super->has_casts_shadow()&&_PBJValidate<bool>()(super->casts_shadow());}
        inline bool casts_shadow() const {
            if (has_casts_shadow()) {
                return (bool)_PBJCast< bool>()(super->casts_shadow());
            } else {
                return _PBJCast < bool> ()();
            }
        }
        inline void set_casts_shadow(const bool &value) const {
            super->set_casts_shadow(_PBJConstruct< bool>()(value));
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
    class LightInfoProperty : public ILightInfoProperty {
    protected:
        _PBJ_Internal::LightInfoProperty superconstructed;
    public:
        LightInfoProperty():ILightInfoProperty(superconstructed) {
            super=&superconstructed;
        }
        LightInfoProperty(const _PBJ_Internal::LightInfoProperty &copy):ILightInfoProperty(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        LightInfoProperty(_PBJ_Internal::LightInfoProperty &reference):ILightInfoProperty(reference) {
        }
        LightInfoProperty(const ILightInfoProperty &copy):ILightInfoProperty(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        LightInfoProperty(const LightInfoProperty &copy):ILightInfoProperty(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        LightInfoProperty& operator=(const ILightInfoProperty &copy) {
            this->PBJ::Message<ILightInfoProperty>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        LightInfoProperty& operator=(const LightInfoProperty &copy) {
            this->PBJ::Message<ILightInfoProperty>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        LightInfoProperty* New()const{ return new LightInfoProperty; }
    };
}
}
namespace Sirikata {
namespace Protocol {
    class IParentProperty : public PBJ::Message< IParentProperty > {
    protected:
        _PBJ_Internal::ParentProperty *super;
    public:
        _PBJ_Internal::ParentProperty* _PBJSuper(){ return super; }
        const _PBJ_Internal::ParentProperty* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::ParentProperty _PBJ_SubType;
        IParentProperty(_PBJ_Internal::ParentProperty &reference):PBJ::Message< IParentProperty >(&reference) {
            super=&reference;
        }
        template <class T> IParentProperty(const PBJ::RefClass<T> &other) : PBJ::Message<IParentProperty>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IParentProperty& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IParentProperty(IParentProperty &reference):PBJ::Message< IParentProperty >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IParentProperty& operator=(IParentProperty &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IParentProperty& default_instance() {
            static _PBJ_Internal::ParentProperty def_inst=_PBJ_Internal::ParentProperty::default_instance();
            static IParentProperty _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::ParentProperty::descriptor();
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
        inline void clear_value() {return super->clear_value();}
        enum {
            value_field_tag=10
        };
        inline bool has_value() const {return super->has_value()&&_PBJValidate<PBJ::UUID>()(super->value());}
        inline PBJ::UUID value() const {
            if (has_value()) {
                return (PBJ::UUID)_PBJCast< PBJ::UUID>()(super->value());
            } else {
                return _PBJCast < PBJ::UUID> ()();
            }
        }
        inline void set_value(const PBJ::UUID &value) const {
            super->set_value(_PBJConstruct< PBJ::UUID>()(value));
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
    class ParentProperty : public IParentProperty {
    protected:
        _PBJ_Internal::ParentProperty superconstructed;
    public:
        ParentProperty():IParentProperty(superconstructed) {
            super=&superconstructed;
        }
        ParentProperty(const _PBJ_Internal::ParentProperty &copy):IParentProperty(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        ParentProperty(_PBJ_Internal::ParentProperty &reference):IParentProperty(reference) {
        }
        ParentProperty(const IParentProperty &copy):IParentProperty(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        ParentProperty(const ParentProperty &copy):IParentProperty(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        ParentProperty& operator=(const IParentProperty &copy) {
            this->PBJ::Message<IParentProperty>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        ParentProperty& operator=(const ParentProperty &copy) {
            this->PBJ::Message<IParentProperty>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        ParentProperty* New()const{ return new ParentProperty; }
    };
}
}
namespace Sirikata {
namespace Protocol {
    class IUUIDListProperty : public PBJ::Message< IUUIDListProperty > {
    protected:
        _PBJ_Internal::UUIDListProperty *super;
    public:
        _PBJ_Internal::UUIDListProperty* _PBJSuper(){ return super; }
        const _PBJ_Internal::UUIDListProperty* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::UUIDListProperty _PBJ_SubType;
        IUUIDListProperty(_PBJ_Internal::UUIDListProperty &reference):PBJ::Message< IUUIDListProperty >(&reference) {
            super=&reference;
        }
        template <class T> IUUIDListProperty(const PBJ::RefClass<T> &other) : PBJ::Message<IUUIDListProperty>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IUUIDListProperty& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IUUIDListProperty(IUUIDListProperty &reference):PBJ::Message< IUUIDListProperty >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IUUIDListProperty& operator=(IUUIDListProperty &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IUUIDListProperty& default_instance() {
            static _PBJ_Internal::UUIDListProperty def_inst=_PBJ_Internal::UUIDListProperty::default_instance();
            static IUUIDListProperty _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::UUIDListProperty::descriptor();
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
        inline void clear_value() {return super->clear_value();}
        enum {
            value_field_tag=10
        };
        inline int value_size() const {return super->value_size();}
        inline bool has_value(int index) const {assert(index>=0&&index<value_size()); return _PBJValidate< PBJ::UUID>()(super->value(index));}
        inline PBJ::UUID value(int index) const {
            return _PBJCast< PBJ::UUID>()(super->value(index));
        }
        inline void set_value(int index, const PBJ::UUID &value) const {
            return super->set_value(index,_PBJConstruct< PBJ::UUID>()(value));
        }
        inline void add_value(const PBJ::UUID &value) const {
            super->add_value(_PBJConstruct< PBJ::UUID>()(value));
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
    class UUIDListProperty : public IUUIDListProperty {
    protected:
        _PBJ_Internal::UUIDListProperty superconstructed;
    public:
        UUIDListProperty():IUUIDListProperty(superconstructed) {
            super=&superconstructed;
        }
        UUIDListProperty(const _PBJ_Internal::UUIDListProperty &copy):IUUIDListProperty(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        UUIDListProperty(_PBJ_Internal::UUIDListProperty &reference):IUUIDListProperty(reference) {
        }
        UUIDListProperty(const IUUIDListProperty &copy):IUUIDListProperty(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        UUIDListProperty(const UUIDListProperty &copy):IUUIDListProperty(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        UUIDListProperty& operator=(const IUUIDListProperty &copy) {
            this->PBJ::Message<IUUIDListProperty>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        UUIDListProperty& operator=(const UUIDListProperty &copy) {
            this->PBJ::Message<IUUIDListProperty>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        UUIDListProperty* New()const{ return new UUIDListProperty; }
    };
}
}
namespace Sirikata {
namespace Protocol {
    class IConnectToSpace : public PBJ::Message< IConnectToSpace > {
    protected:
        _PBJ_Internal::ConnectToSpace *super;
    public:
        _PBJ_Internal::ConnectToSpace* _PBJSuper(){ return super; }
        const _PBJ_Internal::ConnectToSpace* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::ConnectToSpace _PBJ_SubType;
        IConnectToSpace(_PBJ_Internal::ConnectToSpace &reference):PBJ::Message< IConnectToSpace >(&reference) {
            super=&reference;
        }
        template <class T> IConnectToSpace(const PBJ::RefClass<T> &other) : PBJ::Message<IConnectToSpace>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IConnectToSpace& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IConnectToSpace(IConnectToSpace &reference):PBJ::Message< IConnectToSpace >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IConnectToSpace& operator=(IConnectToSpace &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IConnectToSpace& default_instance() {
            static _PBJ_Internal::ConnectToSpace def_inst=_PBJ_Internal::ConnectToSpace::default_instance();
            static IConnectToSpace _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::ConnectToSpace::descriptor();
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
        inline void clear_space_id() {return super->clear_space_id();}
        enum {
            space_id_field_tag=1
        };
        inline bool has_space_id() const {return super->has_space_id()&&_PBJValidate<PBJ::UUID>()(super->space_id());}
        inline PBJ::UUID space_id() const {
            if (has_space_id()) {
                return (PBJ::UUID)_PBJCast< PBJ::UUID>()(super->space_id());
            } else {
                return _PBJCast < PBJ::UUID> ()();
            }
        }
        inline void set_space_id(const PBJ::UUID &value) const {
            super->set_space_id(_PBJConstruct< PBJ::UUID>()(value));
        }
        inline void clear_object_uuid_evidence() {return super->clear_object_uuid_evidence();}
        enum {
            object_uuid_evidence_field_tag=2
        };
        inline bool has_object_uuid_evidence() const {return super->has_object_uuid_evidence()&&_PBJValidate<PBJ::UUID>()(super->object_uuid_evidence());}
        inline PBJ::UUID object_uuid_evidence() const {
            if (has_object_uuid_evidence()) {
                return (PBJ::UUID)_PBJCast< PBJ::UUID>()(super->object_uuid_evidence());
            } else {
                return _PBJCast < PBJ::UUID> ()();
            }
        }
        inline void set_object_uuid_evidence(const PBJ::UUID &value) const {
            super->set_object_uuid_evidence(_PBJConstruct< PBJ::UUID>()(value));
        }
        inline void clear_requested_object_loc() {return super->clear_requested_object_loc();}
        enum {
            requested_object_loc_field_tag=3
        };
        inline bool has_requested_object_loc() const {return super->has_requested_object_loc();}
        inline ObjLoc requested_object_loc() const {
            if (has_requested_object_loc()) {
                return ObjLoc(*const_cast<_PBJ_Internal::ObjLoc*>(&super->requested_object_loc()));
            } else {
                return _PBJCastMessage< ObjLoc,IObjLoc> ()();
            }
        }
        inline PBJ::RefClass<IObjLoc> mutable_requested_object_loc() {
            IObjLoc retval(*super->mutable_requested_object_loc());
            return retval;
        }
        inline void clear_bounding_sphere() {return super->clear_bounding_sphere();}
        enum {
            bounding_sphere_field_tag=4
        };
        inline bool has_bounding_sphere() const {return super->bounding_sphere_size()>=4;}
        inline PBJ::BoundingSphere3f bounding_sphere() const {
            if (has_bounding_sphere()) {
                return _PBJCast< PBJ::BoundingSphere3f>()(super->bounding_sphere(0),super->bounding_sphere(1),super->bounding_sphere(2),super->bounding_sphere(3));
            } else {
                return _PBJCast< PBJ::BoundingSphere3f>()();
            }
        }
        inline void set_bounding_sphere(const PBJ::BoundingSphere3f &value) {
            super->clear_bounding_sphere();
            _PBJConstruct< PBJ::BoundingSphere3f>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::BoundingSphere3f>()(value);
            super->add_bounding_sphere(_PBJtempArray[0]);
            super->add_bounding_sphere(_PBJtempArray[1]);
            super->add_bounding_sphere(_PBJtempArray[2]);
            super->add_bounding_sphere(_PBJtempArray[3]);
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
    class ConnectToSpace : public IConnectToSpace {
    protected:
        _PBJ_Internal::ConnectToSpace superconstructed;
    public:
        ConnectToSpace():IConnectToSpace(superconstructed) {
            super=&superconstructed;
        }
        ConnectToSpace(const _PBJ_Internal::ConnectToSpace &copy):IConnectToSpace(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        ConnectToSpace(_PBJ_Internal::ConnectToSpace &reference):IConnectToSpace(reference) {
        }
        ConnectToSpace(const IConnectToSpace &copy):IConnectToSpace(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        ConnectToSpace(const ConnectToSpace &copy):IConnectToSpace(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        ConnectToSpace& operator=(const IConnectToSpace &copy) {
            this->PBJ::Message<IConnectToSpace>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        ConnectToSpace& operator=(const ConnectToSpace &copy) {
            this->PBJ::Message<IConnectToSpace>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        ConnectToSpace* New()const{ return new ConnectToSpace; }
    };
}
}
namespace Sirikata {
namespace Protocol {
    class IDisconnectFromSpace : public PBJ::Message< IDisconnectFromSpace > {
    protected:
        _PBJ_Internal::DisconnectFromSpace *super;
    public:
        _PBJ_Internal::DisconnectFromSpace* _PBJSuper(){ return super; }
        const _PBJ_Internal::DisconnectFromSpace* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::DisconnectFromSpace _PBJ_SubType;
        IDisconnectFromSpace(_PBJ_Internal::DisconnectFromSpace &reference):PBJ::Message< IDisconnectFromSpace >(&reference) {
            super=&reference;
        }
        template <class T> IDisconnectFromSpace(const PBJ::RefClass<T> &other) : PBJ::Message<IDisconnectFromSpace>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> IDisconnectFromSpace& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        IDisconnectFromSpace(IDisconnectFromSpace &reference):PBJ::Message< IDisconnectFromSpace >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        IDisconnectFromSpace& operator=(IDisconnectFromSpace &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const IDisconnectFromSpace& default_instance() {
            static _PBJ_Internal::DisconnectFromSpace def_inst=_PBJ_Internal::DisconnectFromSpace::default_instance();
            static IDisconnectFromSpace _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::DisconnectFromSpace::descriptor();
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
        inline void clear_space_id() {return super->clear_space_id();}
        enum {
            space_id_field_tag=1
        };
        inline bool has_space_id() const {return super->has_space_id()&&_PBJValidate<PBJ::UUID>()(super->space_id());}
        inline PBJ::UUID space_id() const {
            if (has_space_id()) {
                return (PBJ::UUID)_PBJCast< PBJ::UUID>()(super->space_id());
            } else {
                return _PBJCast < PBJ::UUID> ()();
            }
        }
        inline void set_space_id(const PBJ::UUID &value) const {
            super->set_space_id(_PBJConstruct< PBJ::UUID>()(value));
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
    class DisconnectFromSpace : public IDisconnectFromSpace {
    protected:
        _PBJ_Internal::DisconnectFromSpace superconstructed;
    public:
        DisconnectFromSpace():IDisconnectFromSpace(superconstructed) {
            super=&superconstructed;
        }
        DisconnectFromSpace(const _PBJ_Internal::DisconnectFromSpace &copy):IDisconnectFromSpace(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        DisconnectFromSpace(_PBJ_Internal::DisconnectFromSpace &reference):IDisconnectFromSpace(reference) {
        }
        DisconnectFromSpace(const IDisconnectFromSpace &copy):IDisconnectFromSpace(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        DisconnectFromSpace(const DisconnectFromSpace &copy):IDisconnectFromSpace(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        DisconnectFromSpace& operator=(const IDisconnectFromSpace &copy) {
            this->PBJ::Message<IDisconnectFromSpace>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        DisconnectFromSpace& operator=(const DisconnectFromSpace &copy) {
            this->PBJ::Message<IDisconnectFromSpace>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        DisconnectFromSpace* New()const{ return new DisconnectFromSpace; }
    };
}
}
namespace Sirikata {
namespace Protocol {
    class ICreateObject : public PBJ::Message< ICreateObject > {
    protected:
        _PBJ_Internal::CreateObject *super;
    public:
        _PBJ_Internal::CreateObject* _PBJSuper(){ return super; }
        const _PBJ_Internal::CreateObject* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::CreateObject _PBJ_SubType;
        ICreateObject(_PBJ_Internal::CreateObject &reference):PBJ::Message< ICreateObject >(&reference) {
            super=&reference;
        }
        template <class T> ICreateObject(const PBJ::RefClass<T> &other) : PBJ::Message<ICreateObject>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> ICreateObject& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        ICreateObject(ICreateObject &reference):PBJ::Message< ICreateObject >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        ICreateObject& operator=(ICreateObject &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const ICreateObject& default_instance() {
            static _PBJ_Internal::CreateObject def_inst=_PBJ_Internal::CreateObject::default_instance();
            static ICreateObject _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::CreateObject::descriptor();
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
            object_uuid_field_tag=1
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
        inline void clear_space_properties() {return super->clear_space_properties();}
        enum {
            space_properties_field_tag=2
        };
        inline int space_properties_size() const {return super->space_properties_size();}
        inline bool has_space_properties(int index) const {assert(index>=0&&index<space_properties_size()); return true;}
        inline ConnectToSpace space_properties(int index) const {
            return ConnectToSpace(*const_cast<_PBJ_Internal::ConnectToSpace*>(&super->space_properties(index)));
        }
        inline PBJ::RefClass<IConnectToSpace> mutable_space_properties(int index) {
            IConnectToSpace retval(*super->mutable_space_properties(index));
            return retval;
        }
        inline PBJ::RefClass<IConnectToSpace> add_space_properties() {
            IConnectToSpace retval(*super->add_space_properties());
            return retval;
        }
        inline void clear_mesh() {return super->clear_mesh();}
        enum {
            mesh_field_tag=3
        };
        inline void set_mesh(const char *value) const {
            super->set_mesh(value);
        }
        inline bool has_mesh() const {return super->has_mesh()&&_PBJValidate<PBJ::utf8string>()(super->mesh());}
        inline ::std::string mesh() const {
            if (has_mesh()) {
                return (::std::string)_PBJCast< PBJ::utf8string>()(super->mesh());
            } else {
                return _PBJCast < PBJ::utf8string> ()();
            }
        }
        inline void set_mesh(const ::std::string &value) const {
            super->set_mesh(_PBJConstruct< PBJ::utf8string>()(value));
        }
        inline void clear_scale() {return super->clear_scale();}
        enum {
            scale_field_tag=4
        };
        inline bool has_scale() const {return super->scale_size()>=3;}
        inline PBJ::Vector3f scale() const {
            if (has_scale()) {
                return _PBJCast< PBJ::Vector3f>()(super->scale(0),super->scale(1),super->scale(2));
            } else {
                return _PBJCast< PBJ::Vector3f>()();
            }
        }
        inline void set_scale(const PBJ::Vector3f &value) {
            super->clear_scale();
            _PBJConstruct< PBJ::Vector3f>::ArrayType _PBJtempArray=_PBJConstruct< PBJ::Vector3f>()(value);
            super->add_scale(_PBJtempArray[0]);
            super->add_scale(_PBJtempArray[1]);
            super->add_scale(_PBJtempArray[2]);
        }
        inline void clear_weburl() {return super->clear_weburl();}
        enum {
            weburl_field_tag=5
        };
        inline void set_weburl(const char *value) const {
            super->set_weburl(value);
        }
        inline bool has_weburl() const {return super->has_weburl()&&_PBJValidate<PBJ::utf8string>()(super->weburl());}
        inline ::std::string weburl() const {
            if (has_weburl()) {
                return (::std::string)_PBJCast< PBJ::utf8string>()(super->weburl());
            } else {
                return _PBJCast < PBJ::utf8string> ()();
            }
        }
        inline void set_weburl(const ::std::string &value) const {
            super->set_weburl(_PBJConstruct< PBJ::utf8string>()(value));
        }
        inline void clear_light_info() {return super->clear_light_info();}
        enum {
            light_info_field_tag=6
        };
        inline bool has_light_info() const {return super->has_light_info();}
        inline LightInfoProperty light_info() const {
            if (has_light_info()) {
                return LightInfoProperty(*const_cast<_PBJ_Internal::LightInfoProperty*>(&super->light_info()));
            } else {
                return _PBJCastMessage< LightInfoProperty,ILightInfoProperty> ()();
            }
        }
        inline PBJ::RefClass<ILightInfoProperty> mutable_light_info() {
            ILightInfoProperty retval(*super->mutable_light_info());
            return retval;
        }
        inline void clear_camera() {return super->clear_camera();}
        enum {
            camera_field_tag=7
        };
        inline bool has_camera() const {return super->has_camera()&&_PBJValidate<bool>()(super->camera());}
        inline bool camera() const {
            if (has_camera()) {
                return (bool)_PBJCast< bool>()(super->camera());
            } else {
                return _PBJCast < bool> ()();
            }
        }
        inline void set_camera(const bool &value) const {
            super->set_camera(_PBJConstruct< bool>()(value));
        }
        inline void clear_physical() {return super->clear_physical();}
        enum {
            physical_field_tag=8
        };
        inline bool has_physical() const {return super->has_physical();}
        inline PhysicalParameters physical() const {
            if (has_physical()) {
                return PhysicalParameters(*const_cast<_PBJ_Internal::PhysicalParameters*>(&super->physical()));
            } else {
                return _PBJCastMessage< PhysicalParameters,IPhysicalParameters> ()();
            }
        }
        inline PBJ::RefClass<IPhysicalParameters> mutable_physical() {
            IPhysicalParameters retval(*super->mutable_physical());
            return retval;
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
    class CreateObject : public ICreateObject {
    protected:
        _PBJ_Internal::CreateObject superconstructed;
    public:
        CreateObject():ICreateObject(superconstructed) {
            super=&superconstructed;
        }
        CreateObject(const _PBJ_Internal::CreateObject &copy):ICreateObject(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        CreateObject(_PBJ_Internal::CreateObject &reference):ICreateObject(reference) {
        }
        CreateObject(const ICreateObject &copy):ICreateObject(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        CreateObject(const CreateObject &copy):ICreateObject(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        CreateObject& operator=(const ICreateObject &copy) {
            this->PBJ::Message<ICreateObject>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        CreateObject& operator=(const CreateObject &copy) {
            this->PBJ::Message<ICreateObject>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        CreateObject* New()const{ return new CreateObject; }
    };
}
}
#endif
