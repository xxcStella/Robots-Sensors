// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_TRIGGER_DV_H_
#define FLATBUFFERS_GENERATED_TRIGGER_DV_H_

#pragma GCC system_header
#pragma clang system_header

#include "../external/flatbuffers/flatbuffers.h"

#include "cvector.hpp"

namespace dv {

struct TriggerFlatbuffer;
struct Trigger;

struct TriggerPacketFlatbuffer;
struct TriggerPacket;

bool operator==(const Trigger &lhs, const Trigger &rhs);
bool operator==(const TriggerPacket &lhs, const TriggerPacket &rhs);

inline const flatbuffers::TypeTable *TriggerTypeTable();

inline const flatbuffers::TypeTable *TriggerPacketTypeTable();

enum class TriggerType : int8_t {
	/// A timestamp reset occurred.
	TIMESTAMP_RESET = 0 /// A rising edge was detected (External Input module on device).
		,
	EXTERNAL_SIGNAL_RISING_EDGE = 1 /// A falling edge was detected (External Input module on device).
		,
	EXTERNAL_SIGNAL_FALLING_EDGE = 2 /// A pulse was detected (External Input module on device).
		,
	EXTERNAL_SIGNAL_PULSE = 3 /// A rising edge was generated (External Generator module on device).
		,
	EXTERNAL_GENERATOR_RISING_EDGE = 4 /// A falling edge was generated (External Generator module on device).
		,
	EXTERNAL_GENERATOR_FALLING_EDGE = 5 /// An APS frame capture has started (Frame Event will follow).
		,
	APS_FRAME_START = 6 /// An APS frame capture has completed (Frame Event is contemporary).
		,
	APS_FRAME_END = 7 /// An APS frame exposure has started (Frame Event will follow).
		,
	APS_EXPOSURE_START = 8 /// An APS frame exposure has completed (Frame Event will follow).
		,
	APS_EXPOSURE_END = 9,
	MIN              = TIMESTAMP_RESET,
	MAX              = APS_EXPOSURE_END
};

inline const TriggerType (&EnumValuesTriggerType())[10] {
	static const TriggerType values[] = {TriggerType::TIMESTAMP_RESET, TriggerType::EXTERNAL_SIGNAL_RISING_EDGE,
		TriggerType::EXTERNAL_SIGNAL_FALLING_EDGE, TriggerType::EXTERNAL_SIGNAL_PULSE,
		TriggerType::EXTERNAL_GENERATOR_RISING_EDGE, TriggerType::EXTERNAL_GENERATOR_FALLING_EDGE,
		TriggerType::APS_FRAME_START, TriggerType::APS_FRAME_END, TriggerType::APS_EXPOSURE_START,
		TriggerType::APS_EXPOSURE_END};
	return values;
}

inline const char *const *EnumNamesTriggerType() {
	static const char *const names[]
		= {"TIMESTAMP_RESET", "EXTERNAL_SIGNAL_RISING_EDGE", "EXTERNAL_SIGNAL_FALLING_EDGE", "EXTERNAL_SIGNAL_PULSE",
			"EXTERNAL_GENERATOR_RISING_EDGE", "EXTERNAL_GENERATOR_FALLING_EDGE", "APS_FRAME_START", "APS_FRAME_END",
			"APS_EXPOSURE_START", "APS_EXPOSURE_END", nullptr};
	return names;
}

inline const char *EnumNameTriggerType(TriggerType e) {
	if (e < TriggerType::TIMESTAMP_RESET || e > TriggerType::APS_EXPOSURE_END)
		return "";
	const size_t index = static_cast<int>(e);
	return EnumNamesTriggerType()[index];
}

struct Trigger : public flatbuffers::NativeTable {
	typedef TriggerFlatbuffer TableType;

	static FLATBUFFERS_CONSTEXPR const char *GetFullyQualifiedName() {
		return "dv.Trigger";
	}

	int64_t timestamp;
	TriggerType type;

	Trigger() : timestamp(0), type(TriggerType::TIMESTAMP_RESET) {
	}

	// Generated Constructor
	Trigger(int64_t _timestamp, TriggerType _type) : timestamp{_timestamp}, type{_type} {
	}
};

inline bool operator==(const Trigger &lhs, const Trigger &rhs) {
	return (lhs.timestamp == rhs.timestamp) && (lhs.type == rhs.type);
}

struct TriggerFlatbuffer FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
	typedef Trigger NativeTableType;

	static const flatbuffers::TypeTable *MiniReflectTypeTable() {
		return TriggerTypeTable();
	}

	static FLATBUFFERS_CONSTEXPR const char *GetFullyQualifiedName() {
		return "dv.Trigger";
	}

	enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
		VT_TIMESTAMP = 4,
		VT_TYPE      = 6
	};

	/// Timestamp (µs).
	int64_t timestamp() const {
		return GetField<int64_t>(VT_TIMESTAMP, 0);
	}

	/// Type of trigger that occurred.
	TriggerType type() const {
		return static_cast<TriggerType>(GetField<int8_t>(VT_TYPE, 0));
	}

	bool Verify(flatbuffers::Verifier &verifier) const {
		return VerifyTableStart(verifier) && VerifyField<int64_t>(verifier, VT_TIMESTAMP)
			&& VerifyField<int8_t>(verifier, VT_TYPE) && verifier.EndTable();
	}

	Trigger *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
	void UnPackTo(Trigger *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
	static void UnPackToFrom(
		Trigger *_o, const TriggerFlatbuffer *_fb, const flatbuffers::resolver_function_t *_resolver = nullptr);
	static flatbuffers::Offset<TriggerFlatbuffer> Pack(flatbuffers::FlatBufferBuilder &_fbb, const Trigger *_o,
		const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct TriggerBuilder {
	flatbuffers::FlatBufferBuilder &fbb_;
	flatbuffers::uoffset_t start_;

	void add_timestamp(int64_t timestamp) {
		fbb_.AddElement<int64_t>(TriggerFlatbuffer::VT_TIMESTAMP, timestamp, 0);
	}

	void add_type(TriggerType type) {
		fbb_.AddElement<int8_t>(TriggerFlatbuffer::VT_TYPE, static_cast<int8_t>(type), 0);
	}

	explicit TriggerBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) {
		start_ = fbb_.StartTable();
	}

	TriggerBuilder &operator=(const TriggerBuilder &);

	flatbuffers::Offset<TriggerFlatbuffer> Finish() {
		const auto end = fbb_.EndTable(start_);
		auto o         = flatbuffers::Offset<TriggerFlatbuffer>(end);
		return o;
	}
};

inline flatbuffers::Offset<TriggerFlatbuffer> CreateTrigger(
	flatbuffers::FlatBufferBuilder &_fbb, int64_t timestamp = 0, TriggerType type = TriggerType::TIMESTAMP_RESET) {
	TriggerBuilder builder_(_fbb);
	builder_.add_timestamp(timestamp);
	builder_.add_type(type);
	return builder_.Finish();
}

flatbuffers::Offset<TriggerFlatbuffer> CreateTrigger(flatbuffers::FlatBufferBuilder &_fbb, const Trigger *_o,
	const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct TriggerPacket : public flatbuffers::NativeTable {
	typedef TriggerPacketFlatbuffer TableType;

	static FLATBUFFERS_CONSTEXPR const char *GetFullyQualifiedName() {
		return "dv.TriggerPacket";
	}

	dv::cvector<Trigger> elements;

	TriggerPacket() {
	}

	// Generated Constructor
	TriggerPacket(const dv::cvector<Trigger> &_elements) : elements{_elements} {
	}

	friend std::ostream &operator<<(std::ostream &os, const TriggerPacket &packet) {
		if (packet.elements.empty()) {
			os << fmt::format("TriggerPacket containing 0 measurements");
			return os;
		}

		const int64_t lowestTime  = packet.elements.front().timestamp;
		const int64_t highestTime = packet.elements.back().timestamp;

		os << fmt::format("TriggerPacket containing {} triggers within {}μs duration; time range within [{}; {}]",
			packet.elements.size(), highestTime - lowestTime, lowestTime, highestTime);
		return os;
	}
};

inline bool operator==(const TriggerPacket &lhs, const TriggerPacket &rhs) {
	return (lhs.elements == rhs.elements);
}

struct TriggerPacketFlatbuffer FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
	typedef TriggerPacket NativeTableType;
	static FLATBUFFERS_CONSTEXPR const char *identifier = "TRIG";

	static const flatbuffers::TypeTable *MiniReflectTypeTable() {
		return TriggerPacketTypeTable();
	}

	static FLATBUFFERS_CONSTEXPR const char *GetFullyQualifiedName() {
		return "dv.TriggerPacket";
	}

	enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
		VT_ELEMENTS = 4
	};

	const flatbuffers::Vector<flatbuffers::Offset<TriggerFlatbuffer>> *elements() const {
		return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<TriggerFlatbuffer>> *>(VT_ELEMENTS);
	}

	bool Verify(flatbuffers::Verifier &verifier) const {
		return VerifyTableStart(verifier) && VerifyOffset(verifier, VT_ELEMENTS) && verifier.VerifyVector(elements())
			&& verifier.VerifyVectorOfTables(elements()) && verifier.EndTable();
	}

	TriggerPacket *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
	void UnPackTo(TriggerPacket *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
	static void UnPackToFrom(TriggerPacket *_o, const TriggerPacketFlatbuffer *_fb,
		const flatbuffers::resolver_function_t *_resolver = nullptr);
	static flatbuffers::Offset<TriggerPacketFlatbuffer> Pack(flatbuffers::FlatBufferBuilder &_fbb,
		const TriggerPacket *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct TriggerPacketBuilder {
	flatbuffers::FlatBufferBuilder &fbb_;
	flatbuffers::uoffset_t start_;

	void add_elements(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<TriggerFlatbuffer>>> elements) {
		fbb_.AddOffset(TriggerPacketFlatbuffer::VT_ELEMENTS, elements);
	}

	explicit TriggerPacketBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) {
		start_ = fbb_.StartTable();
	}

	TriggerPacketBuilder &operator=(const TriggerPacketBuilder &);

	flatbuffers::Offset<TriggerPacketFlatbuffer> Finish() {
		const auto end = fbb_.EndTable(start_);
		auto o         = flatbuffers::Offset<TriggerPacketFlatbuffer>(end);
		return o;
	}
};

inline flatbuffers::Offset<TriggerPacketFlatbuffer> CreateTriggerPacket(flatbuffers::FlatBufferBuilder &_fbb,
	flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<TriggerFlatbuffer>>> elements = 0) {
	TriggerPacketBuilder builder_(_fbb);
	builder_.add_elements(elements);
	return builder_.Finish();
}

inline flatbuffers::Offset<TriggerPacketFlatbuffer> CreateTriggerPacketDirect(flatbuffers::FlatBufferBuilder &_fbb,
	const std::vector<flatbuffers::Offset<TriggerFlatbuffer>> *elements = nullptr) {
	auto elements__ = elements ? _fbb.CreateVector<flatbuffers::Offset<TriggerFlatbuffer>>(*elements) : 0;
	return dv::CreateTriggerPacket(_fbb, elements__);
}

flatbuffers::Offset<TriggerPacketFlatbuffer> CreateTriggerPacket(flatbuffers::FlatBufferBuilder &_fbb,
	const TriggerPacket *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline Trigger *TriggerFlatbuffer::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
	auto _o = new Trigger();
	UnPackTo(_o, _resolver);
	return _o;
}

inline void TriggerFlatbuffer::UnPackTo(Trigger *_o, const flatbuffers::resolver_function_t *_resolver) const {
	(void) _o;
	(void) _resolver;
	UnPackToFrom(_o, this, _resolver);
}

inline void TriggerFlatbuffer::UnPackToFrom(
	Trigger *_o, const TriggerFlatbuffer *_fb, const flatbuffers::resolver_function_t *_resolver) {
	(void) _o;
	(void) _fb;
	(void) _resolver;
	{
		auto _e       = _fb->timestamp();
		_o->timestamp = _e;
	};
	{
		auto _e  = _fb->type();
		_o->type = _e;
	};
}

inline flatbuffers::Offset<TriggerFlatbuffer> TriggerFlatbuffer::Pack(
	flatbuffers::FlatBufferBuilder &_fbb, const Trigger *_o, const flatbuffers::rehasher_function_t *_rehasher) {
	return CreateTrigger(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<TriggerFlatbuffer> CreateTrigger(
	flatbuffers::FlatBufferBuilder &_fbb, const Trigger *_o, const flatbuffers::rehasher_function_t *_rehasher) {
	(void) _rehasher;
	(void) _o;

	struct _VectorArgs {
		flatbuffers::FlatBufferBuilder *__fbb;
		const Trigger *__o;
		const flatbuffers::rehasher_function_t *__rehasher;
	} _va = {&_fbb, _o, _rehasher};

	(void) _va;
	auto _timestamp = _o->timestamp;
	auto _type      = _o->type;
	return dv::CreateTrigger(_fbb, _timestamp, _type);
}

inline TriggerPacket *TriggerPacketFlatbuffer::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
	auto _o = new TriggerPacket();
	UnPackTo(_o, _resolver);
	return _o;
}

inline void TriggerPacketFlatbuffer::UnPackTo(
	TriggerPacket *_o, const flatbuffers::resolver_function_t *_resolver) const {
	(void) _o;
	(void) _resolver;
	UnPackToFrom(_o, this, _resolver);
}

inline void TriggerPacketFlatbuffer::UnPackToFrom(
	TriggerPacket *_o, const TriggerPacketFlatbuffer *_fb, const flatbuffers::resolver_function_t *_resolver) {
	(void) _o;
	(void) _fb;
	(void) _resolver;
	{
		auto _e = _fb->elements();
		if (_e) {
			_o->elements.resize(_e->size());
			for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) {
				_e->Get(_i)->UnPackTo(&_o->elements[_i], _resolver);
			}
		}
	};
}

inline flatbuffers::Offset<TriggerPacketFlatbuffer> TriggerPacketFlatbuffer::Pack(
	flatbuffers::FlatBufferBuilder &_fbb, const TriggerPacket *_o, const flatbuffers::rehasher_function_t *_rehasher) {
	return CreateTriggerPacket(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<TriggerPacketFlatbuffer> CreateTriggerPacket(
	flatbuffers::FlatBufferBuilder &_fbb, const TriggerPacket *_o, const flatbuffers::rehasher_function_t *_rehasher) {
	(void) _rehasher;
	(void) _o;

	struct _VectorArgs {
		flatbuffers::FlatBufferBuilder *__fbb;
		const TriggerPacket *__o;
		const flatbuffers::rehasher_function_t *__rehasher;
	} _va = {&_fbb, _o, _rehasher};

	(void) _va;
	auto _elements = _o->elements.size() ? _fbb.CreateVector<flatbuffers::Offset<TriggerFlatbuffer>>(
						 _o->elements.size(),
						 [](size_t i, _VectorArgs *__va) {
							 return CreateTrigger(*__va->__fbb, &__va->__o->elements[i], __va->__rehasher);
						 },
						 &_va)
										 : 0;
	return dv::CreateTriggerPacket(_fbb, _elements);
}

inline const flatbuffers::TypeTable *TriggerTypeTypeTable() {
	static const flatbuffers::TypeCode type_codes[] = {
		{flatbuffers::ET_CHAR, 0, 0},
        {flatbuffers::ET_CHAR, 0, 0},
        {flatbuffers::ET_CHAR, 0, 0},
		{flatbuffers::ET_CHAR, 0, 0},
        {flatbuffers::ET_CHAR, 0, 0},
        {flatbuffers::ET_CHAR, 0, 0},
		{flatbuffers::ET_CHAR, 0, 0},
        {flatbuffers::ET_CHAR, 0, 0},
        {flatbuffers::ET_CHAR, 0, 0},
		{flatbuffers::ET_CHAR, 0, 0}
    };
	static const flatbuffers::TypeFunction type_refs[] = {TriggerTypeTypeTable};
	static const char *const names[]
		= {"TIMESTAMP_RESET", "EXTERNAL_SIGNAL_RISING_EDGE", "EXTERNAL_SIGNAL_FALLING_EDGE", "EXTERNAL_SIGNAL_PULSE",
			"EXTERNAL_GENERATOR_RISING_EDGE", "EXTERNAL_GENERATOR_FALLING_EDGE", "APS_FRAME_START", "APS_FRAME_END",
			"APS_EXPOSURE_START", "APS_EXPOSURE_END"};
	static const flatbuffers::TypeTable tt = {flatbuffers::ST_ENUM, 10, type_codes, type_refs, nullptr, names};
	return &tt;
}

inline const flatbuffers::TypeTable *TriggerTypeTable() {
	static const flatbuffers::TypeCode type_codes[] = {
		{flatbuffers::ET_LONG, 0, -1},
        {flatbuffers::ET_CHAR, 0, 0 }
    };
	static const flatbuffers::TypeFunction type_refs[] = {TriggerTypeTypeTable};
	static const char *const names[]                   = {"timestamp", "type"};
	static const flatbuffers::TypeTable tt = {flatbuffers::ST_TABLE, 2, type_codes, type_refs, nullptr, names};
	return &tt;
}

inline const flatbuffers::TypeTable *TriggerPacketTypeTable() {
	static const flatbuffers::TypeCode type_codes[] = {
		{flatbuffers::ET_SEQUENCE, 1, 0}
    };
	static const flatbuffers::TypeFunction type_refs[] = {TriggerTypeTable};
	static const char *const names[]                   = {"elements"};
	static const flatbuffers::TypeTable tt = {flatbuffers::ST_TABLE, 1, type_codes, type_refs, nullptr, names};
	return &tt;
}

inline const dv::TriggerPacketFlatbuffer *GetTriggerPacket(const void *buf) {
	return flatbuffers::GetRoot<dv::TriggerPacketFlatbuffer>(buf);
}

inline const dv::TriggerPacketFlatbuffer *GetSizePrefixedTriggerPacket(const void *buf) {
	return flatbuffers::GetSizePrefixedRoot<dv::TriggerPacketFlatbuffer>(buf);
}

inline const char *TriggerPacketIdentifier() {
	return "TRIG";
}

inline bool TriggerPacketBufferHasIdentifier(const void *buf) {
	return flatbuffers::BufferHasIdentifier(buf, TriggerPacketIdentifier());
}

inline bool VerifyTriggerPacketBuffer(flatbuffers::Verifier &verifier) {
	return verifier.VerifyBuffer<dv::TriggerPacketFlatbuffer>(TriggerPacketIdentifier());
}

inline bool VerifySizePrefixedTriggerPacketBuffer(flatbuffers::Verifier &verifier) {
	return verifier.VerifySizePrefixedBuffer<dv::TriggerPacketFlatbuffer>(TriggerPacketIdentifier());
}

inline void FinishTriggerPacketBuffer(
	flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<dv::TriggerPacketFlatbuffer> root) {
	fbb.Finish(root, TriggerPacketIdentifier());
}

inline void FinishSizePrefixedTriggerPacketBuffer(
	flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<dv::TriggerPacketFlatbuffer> root) {
	fbb.FinishSizePrefixed(root, TriggerPacketIdentifier());
}

inline std::unique_ptr<TriggerPacket> UnPackTriggerPacket(
	const void *buf, const flatbuffers::resolver_function_t *res = nullptr) {
	return std::unique_ptr<TriggerPacket>(GetTriggerPacket(buf)->UnPack(res));
}

} // namespace dv

// fmt compatibility for ostream class printing.
template<>
struct fmt::formatter<dv::TriggerPacket> : fmt::ostream_formatter {};

#endif // FLATBUFFERS_GENERATED_TRIGGER_DV_H_