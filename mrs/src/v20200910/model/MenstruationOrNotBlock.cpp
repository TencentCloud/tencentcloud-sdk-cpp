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

#include <tencentcloud/mrs/v20200910/model/MenstruationOrNotBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

MenstruationOrNotBlock::MenstruationOrNotBlock() :
    m_nameHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_normHasBeenSet(false),
    m_timeTypeHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome MenstruationOrNotBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MenstruationOrNotBlock.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MenstruationOrNotBlock.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("Norm") && !value["Norm"].IsNull())
    {
        if (!value["Norm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MenstruationOrNotBlock.Norm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_norm = string(value["Norm"].GetString());
        m_normHasBeenSet = true;
    }

    if (value.HasMember("TimeType") && !value["TimeType"].IsNull())
    {
        if (!value["TimeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MenstruationOrNotBlock.TimeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeType = string(value["TimeType"].GetString());
        m_timeTypeHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MenstruationOrNotBlock.Timestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = string(value["Timestamp"].GetString());
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MenstruationOrNotBlock.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MenstruationOrNotBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

}


string MenstruationOrNotBlock::GetName() const
{
    return m_name;
}

void MenstruationOrNotBlock::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MenstruationOrNotBlock::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MenstruationOrNotBlock::GetSrc() const
{
    return m_src;
}

void MenstruationOrNotBlock::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool MenstruationOrNotBlock::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string MenstruationOrNotBlock::GetNorm() const
{
    return m_norm;
}

void MenstruationOrNotBlock::SetNorm(const string& _norm)
{
    m_norm = _norm;
    m_normHasBeenSet = true;
}

bool MenstruationOrNotBlock::NormHasBeenSet() const
{
    return m_normHasBeenSet;
}

string MenstruationOrNotBlock::GetTimeType() const
{
    return m_timeType;
}

void MenstruationOrNotBlock::SetTimeType(const string& _timeType)
{
    m_timeType = _timeType;
    m_timeTypeHasBeenSet = true;
}

bool MenstruationOrNotBlock::TimeTypeHasBeenSet() const
{
    return m_timeTypeHasBeenSet;
}

string MenstruationOrNotBlock::GetTimestamp() const
{
    return m_timestamp;
}

void MenstruationOrNotBlock::SetTimestamp(const string& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool MenstruationOrNotBlock::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string MenstruationOrNotBlock::GetValue() const
{
    return m_value;
}

void MenstruationOrNotBlock::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool MenstruationOrNotBlock::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

