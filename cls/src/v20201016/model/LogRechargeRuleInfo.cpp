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

#include <tencentcloud/cls/v20201016/model/LogRechargeRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

LogRechargeRuleInfo::LogRechargeRuleInfo() :
    m_rechargeTypeHasBeenSet(false),
    m_encodingFormatHasBeenSet(false),
    m_defaultTimeSwitchHasBeenSet(false),
    m_logRegexHasBeenSet(false),
    m_unMatchLogSwitchHasBeenSet(false),
    m_unMatchLogKeyHasBeenSet(false),
    m_unMatchLogTimeSrcHasBeenSet(false),
    m_defaultTimeSrcHasBeenSet(false),
    m_timeKeyHasBeenSet(false),
    m_timeRegexHasBeenSet(false),
    m_timeFormatHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_parseArrayHasBeenSet(false)
{
}

CoreInternalOutcome LogRechargeRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RechargeType") && !value["RechargeType"].IsNull())
    {
        if (!value["RechargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogRechargeRuleInfo.RechargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rechargeType = string(value["RechargeType"].GetString());
        m_rechargeTypeHasBeenSet = true;
    }

    if (value.HasMember("EncodingFormat") && !value["EncodingFormat"].IsNull())
    {
        if (!value["EncodingFormat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogRechargeRuleInfo.EncodingFormat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_encodingFormat = value["EncodingFormat"].GetUint64();
        m_encodingFormatHasBeenSet = true;
    }

    if (value.HasMember("DefaultTimeSwitch") && !value["DefaultTimeSwitch"].IsNull())
    {
        if (!value["DefaultTimeSwitch"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LogRechargeRuleInfo.DefaultTimeSwitch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_defaultTimeSwitch = value["DefaultTimeSwitch"].GetBool();
        m_defaultTimeSwitchHasBeenSet = true;
    }

    if (value.HasMember("LogRegex") && !value["LogRegex"].IsNull())
    {
        if (!value["LogRegex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogRechargeRuleInfo.LogRegex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logRegex = string(value["LogRegex"].GetString());
        m_logRegexHasBeenSet = true;
    }

    if (value.HasMember("UnMatchLogSwitch") && !value["UnMatchLogSwitch"].IsNull())
    {
        if (!value["UnMatchLogSwitch"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LogRechargeRuleInfo.UnMatchLogSwitch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_unMatchLogSwitch = value["UnMatchLogSwitch"].GetBool();
        m_unMatchLogSwitchHasBeenSet = true;
    }

    if (value.HasMember("UnMatchLogKey") && !value["UnMatchLogKey"].IsNull())
    {
        if (!value["UnMatchLogKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogRechargeRuleInfo.UnMatchLogKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unMatchLogKey = string(value["UnMatchLogKey"].GetString());
        m_unMatchLogKeyHasBeenSet = true;
    }

    if (value.HasMember("UnMatchLogTimeSrc") && !value["UnMatchLogTimeSrc"].IsNull())
    {
        if (!value["UnMatchLogTimeSrc"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogRechargeRuleInfo.UnMatchLogTimeSrc` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unMatchLogTimeSrc = value["UnMatchLogTimeSrc"].GetUint64();
        m_unMatchLogTimeSrcHasBeenSet = true;
    }

    if (value.HasMember("DefaultTimeSrc") && !value["DefaultTimeSrc"].IsNull())
    {
        if (!value["DefaultTimeSrc"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogRechargeRuleInfo.DefaultTimeSrc` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultTimeSrc = value["DefaultTimeSrc"].GetUint64();
        m_defaultTimeSrcHasBeenSet = true;
    }

    if (value.HasMember("TimeKey") && !value["TimeKey"].IsNull())
    {
        if (!value["TimeKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogRechargeRuleInfo.TimeKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeKey = string(value["TimeKey"].GetString());
        m_timeKeyHasBeenSet = true;
    }

    if (value.HasMember("TimeRegex") && !value["TimeRegex"].IsNull())
    {
        if (!value["TimeRegex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogRechargeRuleInfo.TimeRegex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeRegex = string(value["TimeRegex"].GetString());
        m_timeRegexHasBeenSet = true;
    }

    if (value.HasMember("TimeFormat") && !value["TimeFormat"].IsNull())
    {
        if (!value["TimeFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogRechargeRuleInfo.TimeFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeFormat = string(value["TimeFormat"].GetString());
        m_timeFormatHasBeenSet = true;
    }

    if (value.HasMember("TimeZone") && !value["TimeZone"].IsNull())
    {
        if (!value["TimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogRechargeRuleInfo.TimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeZone = string(value["TimeZone"].GetString());
        m_timeZoneHasBeenSet = true;
    }

    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogRechargeRuleInfo.Metadata` is not array type"));

        const rapidjson::Value &tmpValue = value["Metadata"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_metadata.push_back((*itr).GetString());
        }
        m_metadataHasBeenSet = true;
    }

    if (value.HasMember("Keys") && !value["Keys"].IsNull())
    {
        if (!value["Keys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogRechargeRuleInfo.Keys` is not array type"));

        const rapidjson::Value &tmpValue = value["Keys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keys.push_back((*itr).GetString());
        }
        m_keysHasBeenSet = true;
    }

    if (value.HasMember("ParseArray") && !value["ParseArray"].IsNull())
    {
        if (!value["ParseArray"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LogRechargeRuleInfo.ParseArray` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_parseArray = value["ParseArray"].GetBool();
        m_parseArrayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogRechargeRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rechargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RechargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rechargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_encodingFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncodingFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encodingFormat, allocator);
    }

    if (m_defaultTimeSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultTimeSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultTimeSwitch, allocator);
    }

    if (m_logRegexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogRegex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logRegex.c_str(), allocator).Move(), allocator);
    }

    if (m_unMatchLogSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnMatchLogSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unMatchLogSwitch, allocator);
    }

    if (m_unMatchLogKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnMatchLogKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unMatchLogKey.c_str(), allocator).Move(), allocator);
    }

    if (m_unMatchLogTimeSrcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnMatchLogTimeSrc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unMatchLogTimeSrc, allocator);
    }

    if (m_defaultTimeSrcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultTimeSrc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultTimeSrc, allocator);
    }

    if (m_timeKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeKey.c_str(), allocator).Move(), allocator);
    }

    if (m_timeRegexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeRegex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeRegex.c_str(), allocator).Move(), allocator);
    }

    if (m_timeFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_metadata.begin(); itr != m_metadata.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_keysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keys.begin(); itr != m_keys.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_parseArrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParseArray";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parseArray, allocator);
    }

}


string LogRechargeRuleInfo::GetRechargeType() const
{
    return m_rechargeType;
}

void LogRechargeRuleInfo::SetRechargeType(const string& _rechargeType)
{
    m_rechargeType = _rechargeType;
    m_rechargeTypeHasBeenSet = true;
}

bool LogRechargeRuleInfo::RechargeTypeHasBeenSet() const
{
    return m_rechargeTypeHasBeenSet;
}

uint64_t LogRechargeRuleInfo::GetEncodingFormat() const
{
    return m_encodingFormat;
}

void LogRechargeRuleInfo::SetEncodingFormat(const uint64_t& _encodingFormat)
{
    m_encodingFormat = _encodingFormat;
    m_encodingFormatHasBeenSet = true;
}

bool LogRechargeRuleInfo::EncodingFormatHasBeenSet() const
{
    return m_encodingFormatHasBeenSet;
}

bool LogRechargeRuleInfo::GetDefaultTimeSwitch() const
{
    return m_defaultTimeSwitch;
}

void LogRechargeRuleInfo::SetDefaultTimeSwitch(const bool& _defaultTimeSwitch)
{
    m_defaultTimeSwitch = _defaultTimeSwitch;
    m_defaultTimeSwitchHasBeenSet = true;
}

bool LogRechargeRuleInfo::DefaultTimeSwitchHasBeenSet() const
{
    return m_defaultTimeSwitchHasBeenSet;
}

string LogRechargeRuleInfo::GetLogRegex() const
{
    return m_logRegex;
}

void LogRechargeRuleInfo::SetLogRegex(const string& _logRegex)
{
    m_logRegex = _logRegex;
    m_logRegexHasBeenSet = true;
}

bool LogRechargeRuleInfo::LogRegexHasBeenSet() const
{
    return m_logRegexHasBeenSet;
}

bool LogRechargeRuleInfo::GetUnMatchLogSwitch() const
{
    return m_unMatchLogSwitch;
}

void LogRechargeRuleInfo::SetUnMatchLogSwitch(const bool& _unMatchLogSwitch)
{
    m_unMatchLogSwitch = _unMatchLogSwitch;
    m_unMatchLogSwitchHasBeenSet = true;
}

bool LogRechargeRuleInfo::UnMatchLogSwitchHasBeenSet() const
{
    return m_unMatchLogSwitchHasBeenSet;
}

string LogRechargeRuleInfo::GetUnMatchLogKey() const
{
    return m_unMatchLogKey;
}

void LogRechargeRuleInfo::SetUnMatchLogKey(const string& _unMatchLogKey)
{
    m_unMatchLogKey = _unMatchLogKey;
    m_unMatchLogKeyHasBeenSet = true;
}

bool LogRechargeRuleInfo::UnMatchLogKeyHasBeenSet() const
{
    return m_unMatchLogKeyHasBeenSet;
}

uint64_t LogRechargeRuleInfo::GetUnMatchLogTimeSrc() const
{
    return m_unMatchLogTimeSrc;
}

void LogRechargeRuleInfo::SetUnMatchLogTimeSrc(const uint64_t& _unMatchLogTimeSrc)
{
    m_unMatchLogTimeSrc = _unMatchLogTimeSrc;
    m_unMatchLogTimeSrcHasBeenSet = true;
}

bool LogRechargeRuleInfo::UnMatchLogTimeSrcHasBeenSet() const
{
    return m_unMatchLogTimeSrcHasBeenSet;
}

uint64_t LogRechargeRuleInfo::GetDefaultTimeSrc() const
{
    return m_defaultTimeSrc;
}

void LogRechargeRuleInfo::SetDefaultTimeSrc(const uint64_t& _defaultTimeSrc)
{
    m_defaultTimeSrc = _defaultTimeSrc;
    m_defaultTimeSrcHasBeenSet = true;
}

bool LogRechargeRuleInfo::DefaultTimeSrcHasBeenSet() const
{
    return m_defaultTimeSrcHasBeenSet;
}

string LogRechargeRuleInfo::GetTimeKey() const
{
    return m_timeKey;
}

void LogRechargeRuleInfo::SetTimeKey(const string& _timeKey)
{
    m_timeKey = _timeKey;
    m_timeKeyHasBeenSet = true;
}

bool LogRechargeRuleInfo::TimeKeyHasBeenSet() const
{
    return m_timeKeyHasBeenSet;
}

string LogRechargeRuleInfo::GetTimeRegex() const
{
    return m_timeRegex;
}

void LogRechargeRuleInfo::SetTimeRegex(const string& _timeRegex)
{
    m_timeRegex = _timeRegex;
    m_timeRegexHasBeenSet = true;
}

bool LogRechargeRuleInfo::TimeRegexHasBeenSet() const
{
    return m_timeRegexHasBeenSet;
}

string LogRechargeRuleInfo::GetTimeFormat() const
{
    return m_timeFormat;
}

void LogRechargeRuleInfo::SetTimeFormat(const string& _timeFormat)
{
    m_timeFormat = _timeFormat;
    m_timeFormatHasBeenSet = true;
}

bool LogRechargeRuleInfo::TimeFormatHasBeenSet() const
{
    return m_timeFormatHasBeenSet;
}

string LogRechargeRuleInfo::GetTimeZone() const
{
    return m_timeZone;
}

void LogRechargeRuleInfo::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool LogRechargeRuleInfo::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

vector<string> LogRechargeRuleInfo::GetMetadata() const
{
    return m_metadata;
}

void LogRechargeRuleInfo::SetMetadata(const vector<string>& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool LogRechargeRuleInfo::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

vector<string> LogRechargeRuleInfo::GetKeys() const
{
    return m_keys;
}

void LogRechargeRuleInfo::SetKeys(const vector<string>& _keys)
{
    m_keys = _keys;
    m_keysHasBeenSet = true;
}

bool LogRechargeRuleInfo::KeysHasBeenSet() const
{
    return m_keysHasBeenSet;
}

bool LogRechargeRuleInfo::GetParseArray() const
{
    return m_parseArray;
}

void LogRechargeRuleInfo::SetParseArray(const bool& _parseArray)
{
    m_parseArray = _parseArray;
    m_parseArrayHasBeenSet = true;
}

bool LogRechargeRuleInfo::ParseArrayHasBeenSet() const
{
    return m_parseArrayHasBeenSet;
}

