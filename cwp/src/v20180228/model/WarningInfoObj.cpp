/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/cwp/v20180228/model/WarningInfoObj.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

WarningInfoObj::WarningInfoObj() :
    m_typeHasBeenSet(false),
    m_disablePhoneWarningHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_controlBitHasBeenSet(false),
    m_controlBitsHasBeenSet(false),
    m_hostRangeHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome WarningInfoObj::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WarningInfoObj.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("DisablePhoneWarning") && !value["DisablePhoneWarning"].IsNull())
    {
        if (!value["DisablePhoneWarning"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WarningInfoObj.DisablePhoneWarning` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_disablePhoneWarning = value["DisablePhoneWarning"].GetUint64();
        m_disablePhoneWarningHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarningInfoObj.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarningInfoObj.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("TimeZone") && !value["TimeZone"].IsNull())
    {
        if (!value["TimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarningInfoObj.TimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeZone = string(value["TimeZone"].GetString());
        m_timeZoneHasBeenSet = true;
    }

    if (value.HasMember("ControlBit") && !value["ControlBit"].IsNull())
    {
        if (!value["ControlBit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WarningInfoObj.ControlBit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_controlBit = value["ControlBit"].GetUint64();
        m_controlBitHasBeenSet = true;
    }

    if (value.HasMember("ControlBits") && !value["ControlBits"].IsNull())
    {
        if (!value["ControlBits"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarningInfoObj.ControlBits` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_controlBits = string(value["ControlBits"].GetString());
        m_controlBitsHasBeenSet = true;
    }

    if (value.HasMember("HostRange") && !value["HostRange"].IsNull())
    {
        if (!value["HostRange"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WarningInfoObj.HostRange` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostRange = value["HostRange"].GetInt64();
        m_hostRangeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WarningInfoObj.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WarningInfoObj::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_disablePhoneWarningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisablePhoneWarning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disablePhoneWarning, allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_controlBitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ControlBit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_controlBit, allocator);
    }

    if (m_controlBitsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ControlBits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_controlBits.c_str(), allocator).Move(), allocator);
    }

    if (m_hostRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostRange, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


uint64_t WarningInfoObj::GetType() const
{
    return m_type;
}

void WarningInfoObj::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool WarningInfoObj::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t WarningInfoObj::GetDisablePhoneWarning() const
{
    return m_disablePhoneWarning;
}

void WarningInfoObj::SetDisablePhoneWarning(const uint64_t& _disablePhoneWarning)
{
    m_disablePhoneWarning = _disablePhoneWarning;
    m_disablePhoneWarningHasBeenSet = true;
}

bool WarningInfoObj::DisablePhoneWarningHasBeenSet() const
{
    return m_disablePhoneWarningHasBeenSet;
}

string WarningInfoObj::GetBeginTime() const
{
    return m_beginTime;
}

void WarningInfoObj::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool WarningInfoObj::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string WarningInfoObj::GetEndTime() const
{
    return m_endTime;
}

void WarningInfoObj::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool WarningInfoObj::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string WarningInfoObj::GetTimeZone() const
{
    return m_timeZone;
}

void WarningInfoObj::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool WarningInfoObj::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

uint64_t WarningInfoObj::GetControlBit() const
{
    return m_controlBit;
}

void WarningInfoObj::SetControlBit(const uint64_t& _controlBit)
{
    m_controlBit = _controlBit;
    m_controlBitHasBeenSet = true;
}

bool WarningInfoObj::ControlBitHasBeenSet() const
{
    return m_controlBitHasBeenSet;
}

string WarningInfoObj::GetControlBits() const
{
    return m_controlBits;
}

void WarningInfoObj::SetControlBits(const string& _controlBits)
{
    m_controlBits = _controlBits;
    m_controlBitsHasBeenSet = true;
}

bool WarningInfoObj::ControlBitsHasBeenSet() const
{
    return m_controlBitsHasBeenSet;
}

int64_t WarningInfoObj::GetHostRange() const
{
    return m_hostRange;
}

void WarningInfoObj::SetHostRange(const int64_t& _hostRange)
{
    m_hostRange = _hostRange;
    m_hostRangeHasBeenSet = true;
}

bool WarningInfoObj::HostRangeHasBeenSet() const
{
    return m_hostRangeHasBeenSet;
}

int64_t WarningInfoObj::GetCount() const
{
    return m_count;
}

void WarningInfoObj::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool WarningInfoObj::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

