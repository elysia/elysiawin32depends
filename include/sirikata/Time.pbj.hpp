#ifndef _PBJ_Internal_home_daniel_sirikata_libcore_src_Time
#define _PBJ_Internal_home_daniel_sirikata_libcore_src_Time
#include "pbj.hpp"
#include "/home/daniel/sirikata/libcore/src/Time.pb.h"
namespace Sirikata {
namespace Network {
namespace Protocol {
    class ITimeSync : public PBJ::Message< ITimeSync > {
    protected:
        _PBJ_Internal::TimeSync *super;
    public:
        _PBJ_Internal::TimeSync* _PBJSuper(){ return super; }
        const _PBJ_Internal::TimeSync* _PBJSuper()const{ return super; }
        typedef _PBJ_Internal::TimeSync _PBJ_SubType;
        ITimeSync(_PBJ_Internal::TimeSync &reference):PBJ::Message< ITimeSync >(&reference) {
            super=&reference;
        }
        template <class T> ITimeSync(const PBJ::RefClass<T> &other) : PBJ::Message<ITimeSync>(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper()) {
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
        }
        template <class T> ITimeSync& operator=(const PBJ::RefClass<T> &other){
            setMessageRepresentation(const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper());
            super=const_cast<PBJ::RefClass<T>*>(&other)->_PBJSuper();
            return *this;
        }
        ITimeSync(ITimeSync &reference):PBJ::Message< ITimeSync >(reference._PBJSuper()) {
            super=reference._PBJSuper();
        }
        ITimeSync& operator=(ITimeSync &reference){
            setMessageRepresentation(reference._PBJSuper());
            super=reference._PBJSuper();
            return *this;
        }
        inline static const ITimeSync& default_instance() {
            static _PBJ_Internal::TimeSync def_inst=_PBJ_Internal::TimeSync::default_instance();
            static ITimeSync _internalStaticVar(def_inst);
            return _internalStaticVar;
        }
        static const ::google::protobuf::Descriptor* descriptor(){
            return _PBJ_Internal::TimeSync::descriptor();
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
        inline void clear_client_time() {return super->clear_client_time();}
        enum {
            client_time_field_tag=9
        };
        inline bool has_client_time() const {return super->has_client_time()&&_PBJValidate<PBJ::Time>()(super->client_time());}
        inline PBJ::Time client_time() const {
            if (has_client_time()) {
                return (PBJ::Time)_PBJCast< PBJ::Time>()(super->client_time());
            } else {
                return _PBJCast < PBJ::Time> ()();
            }
        }
        inline void set_client_time(const PBJ::Time &value) const {
            super->set_client_time(_PBJConstruct< PBJ::Time>()(value));
        }
        inline void clear_server_time() {return super->clear_server_time();}
        enum {
            server_time_field_tag=10
        };
        inline bool has_server_time() const {return super->has_server_time()&&_PBJValidate<PBJ::Time>()(super->server_time());}
        inline PBJ::Time server_time() const {
            if (has_server_time()) {
                return (PBJ::Time)_PBJCast< PBJ::Time>()(super->server_time());
            } else {
                return _PBJCast < PBJ::Time> ()();
            }
        }
        inline void set_server_time(const PBJ::Time &value) const {
            super->set_server_time(_PBJConstruct< PBJ::Time>()(value));
        }
        inline void clear_sync_round() {return super->clear_sync_round();}
        enum {
            sync_round_field_tag=11
        };
        inline bool has_sync_round() const {return super->has_sync_round()&&_PBJValidate<PBJ::uint64>()(super->sync_round());}
        inline PBJ::uint64 sync_round() const {
            if (has_sync_round()) {
                return (PBJ::uint64)_PBJCast< PBJ::uint64>()(super->sync_round());
            } else {
                return _PBJCast < PBJ::uint64> ()();
            }
        }
        inline void set_sync_round(const PBJ::uint64 &value) const {
            super->set_sync_round(_PBJConstruct< PBJ::uint64>()(value));
        }
        enum ReturnOptions {
            REPLY_RELIABLE=_PBJ_Internal::TimeSync::REPLY_RELIABLE,
            REPLY_ORDERED=_PBJ_Internal::TimeSync::REPLY_ORDERED
        };
        inline void clear_return_options() {return super->clear_return_options();}
        enum {
            return_options_field_tag=14
        };
        inline bool has_return_options() const {
            if (!super->has_return_options()) return false;
            return _PBJValidateFlags< PBJ::uint32>()(super->return_options(),0|REPLY_RELIABLE|REPLY_ORDERED);
        }
        inline PBJ::uint32 return_options() const {
            if (has_return_options()) {
                return _PBJCastFlags< PBJ::uint32>()(super->return_options(),0|REPLY_RELIABLE|REPLY_ORDERED);
            } else {
                return _PBJCast < PBJ::uint32> ()();
            }
        }
        inline void set_return_options(const PBJ::uint32 &value) const {
            super->set_return_options(_PBJConstruct< PBJ::uint32>()(value));
        }
        inline void clear_round_trip() {return super->clear_round_trip();}
        enum {
            round_trip_field_tag=2561
        };
        inline bool has_round_trip() const {return super->has_round_trip()&&_PBJValidate<PBJ::Time>()(super->round_trip());}
        inline PBJ::Time round_trip() const {
            if (has_round_trip()) {
                return (PBJ::Time)_PBJCast< PBJ::Time>()(super->round_trip());
            } else {
                return _PBJCast < PBJ::Time> ()();
            }
        }
        inline void set_round_trip(const PBJ::Time &value) const {
            super->set_round_trip(_PBJConstruct< PBJ::Time>()(value));
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
    class TimeSync : public ITimeSync {
    protected:
        _PBJ_Internal::TimeSync superconstructed;
    public:
        TimeSync():ITimeSync(superconstructed) {
            super=&superconstructed;
        }
        TimeSync(const _PBJ_Internal::TimeSync &copy):ITimeSync(superconstructed), superconstructed(copy) {
            super=&superconstructed;
        }
        TimeSync(_PBJ_Internal::TimeSync &reference):ITimeSync(reference) {
        }
        TimeSync(const ITimeSync &copy):ITimeSync(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        TimeSync(const TimeSync &copy):ITimeSync(superconstructed) {
            super=&superconstructed;
            *super=*copy._PBJSuper();
        }
        TimeSync& operator=(const ITimeSync &copy) {
            this->PBJ::Message<ITimeSync>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        TimeSync& operator=(const TimeSync &copy) {
            this->PBJ::Message<ITimeSync>::setMessageRepresentation(&superconstructed);
            super=&superconstructed;
            *super=*copy._PBJSuper();
            return *this;
        }
        TimeSync* New()const{ return new TimeSync; }
    };
}
}
}
#endif
