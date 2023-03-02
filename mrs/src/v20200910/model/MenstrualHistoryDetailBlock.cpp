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

#include <tencentcloud/mrs/v20200910/model/MenstrualHistoryDetailBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

MenstrualHistoryDetailBlock::MenstrualHistoryDetailBlock() :
    m_nameHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_normHasBeenSet(false),
    m_timeTypeHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome MenstrualHistoryDetailBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MenstrualHistoryDetailBlock.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MenstrualHistoryDetailBlock.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MenstrualHistoryDetailBlock.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Norm") && !value["Norm"].IsNull())
    {
        if (!value["Norm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MenstrualHistoryDetailBlock.Norm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_norm = string(value["Norm"].GetString());
        m_normHasBeenSet = true;
    }

    if (value.HasMember("TimeType") && !value["TimeType"].IsNull())
    {
        if (!value["TimeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MenstrualHistoryDetailBlock.TimeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeType = string(value["TimeType"].GetString());
        m_timeTypeHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MenstrualHistoryDetailBlock.Timestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = string(value["Timestamp"].GetString());
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MenstrualHistoryDetailBlock.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MenstrualHistoryDetailBlock.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MenstrualHistoryDetailBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_normHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Norm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_norm.c_str(), allocator).Move(), allocator);
    }

    if (m_timeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeType.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

}


string MenstrualHistoryDetailBlock::GetName() const
{
    return m_name;
}

void MenstrualHistoryDetailBlock::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MenstrualHistoryDetailBlock::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MenstrualHistoryDetailBlock::GetSrc() const
{
    return m_src;
}

void MenstrualHistoryDetailBlock::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool MenstrualHistoryDetailBlock::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string MenstrualHistoryDetailBlock::GetState() const
{
    return m_state;
}

void MenstrualHistoryDetailBlock::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool MenstrualHistoryDetailBlock::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string MenstrualHistoryDetailBlock::GetNorm() const
{
    return m_norm;
}

void MenstrualHistoryDetailBlock::SetNorm(const string& _norm)
{
    m_norm = _norm;
    m_normHasBeenSet = true;
}

bool MenstrualHistoryDetailBlock::NormHasBeenSet() const
{
    return m_normHasBeenSet;
}

string MenstrualHistoryDetailBlock::GetTimeType() const
{
    return m_timeType;
}

void MenstrualHistoryDetailBlock::SetTimeType(const string& _timeType)
{
    m_timeType = _timeType;
    m_timeTypeHasBeenSet = true;
}

bool MenstrualHistoryDetailBlock::TimeTypeHasBeenSet() const
{
    return m_timeTypeHasBeenSet;
}

string MenstrualHistoryDetailBlock::GetTimestamp() const
{
    return m_timestamp;
}

void MenstrualHistoryDetailBlock::SetTimestamp(const string& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool MenstrualHistoryDetailBlock::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string MenstrualHistoryDetailBlock::GetUnit() const
{
    return m_unit;
}

void MenstrualHistoryDetailBlock::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool MenstrualHistoryDetailBlock::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string MenstrualHistoryDetailBlock::GetValue() const
{
    return m_value;
}

void MenstrualHistoryDetailBlock::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool MenstrualHistoryDetailBlock::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

