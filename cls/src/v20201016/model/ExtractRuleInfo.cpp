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

#include <tencentcloud/cls/v20201016/model/ExtractRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ExtractRuleInfo::ExtractRuleInfo() :
    m_timeKeyHasBeenSet(false),
    m_timeFormatHasBeenSet(false),
    m_delimiterHasBeenSet(false),
    m_logRegexHasBeenSet(false),
    m_beginRegexHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_filterKeyRegexHasBeenSet(false),
    m_unMatchUpLoadSwitchHasBeenSet(false),
    m_unMatchLogKeyHasBeenSet(false),
    m_backtrackingHasBeenSet(false),
    m_isGBKHasBeenSet(false),
    m_jsonStandardHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_parseProtocolHasBeenSet(false),
    m_metadataTypeHasBeenSet(false),
    m_pathRegexHasBeenSet(false),
    m_metaTagsHasBeenSet(false),
    m_eventLogRulesHasBeenSet(false),
    m_advanceFilterRulesHasBeenSet(false)
{
}

CoreInternalOutcome ExtractRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeKey") && !value["TimeKey"].IsNull())
    {
        if (!value["TimeKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractRuleInfo.TimeKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeKey = string(value["TimeKey"].GetString());
        m_timeKeyHasBeenSet = true;
    }

    if (value.HasMember("TimeFormat") && !value["TimeFormat"].IsNull())
    {
        if (!value["TimeFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractRuleInfo.TimeFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeFormat = string(value["TimeFormat"].GetString());
        m_timeFormatHasBeenSet = true;
    }

    if (value.HasMember("Delimiter") && !value["Delimiter"].IsNull())
    {
        if (!value["Delimiter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractRuleInfo.Delimiter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_delimiter = string(value["Delimiter"].GetString());
        m_delimiterHasBeenSet = true;
    }

    if (value.HasMember("LogRegex") && !value["LogRegex"].IsNull())
    {
        if (!value["LogRegex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractRuleInfo.LogRegex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logRegex = string(value["LogRegex"].GetString());
        m_logRegexHasBeenSet = true;
    }

    if (value.HasMember("BeginRegex") && !value["BeginRegex"].IsNull())
    {
        if (!value["BeginRegex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractRuleInfo.BeginRegex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginRegex = string(value["BeginRegex"].GetString());
        m_beginRegexHasBeenSet = true;
    }

    if (value.HasMember("Keys") && !value["Keys"].IsNull())
    {
        if (!value["Keys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExtractRuleInfo.Keys` is not array type"));

        const rapidjson::Value &tmpValue = value["Keys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keys.push_back((*itr).GetString());
        }
        m_keysHasBeenSet = true;
    }

    if (value.HasMember("FilterKeyRegex") && !value["FilterKeyRegex"].IsNull())
    {
        if (!value["FilterKeyRegex"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExtractRuleInfo.FilterKeyRegex` is not array type"));

        const rapidjson::Value &tmpValue = value["FilterKeyRegex"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyRegexInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_filterKeyRegex.push_back(item);
        }
        m_filterKeyRegexHasBeenSet = true;
    }

    if (value.HasMember("UnMatchUpLoadSwitch") && !value["UnMatchUpLoadSwitch"].IsNull())
    {
        if (!value["UnMatchUpLoadSwitch"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractRuleInfo.UnMatchUpLoadSwitch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_unMatchUpLoadSwitch = value["UnMatchUpLoadSwitch"].GetBool();
        m_unMatchUpLoadSwitchHasBeenSet = true;
    }

    if (value.HasMember("UnMatchLogKey") && !value["UnMatchLogKey"].IsNull())
    {
        if (!value["UnMatchLogKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractRuleInfo.UnMatchLogKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unMatchLogKey = string(value["UnMatchLogKey"].GetString());
        m_unMatchLogKeyHasBeenSet = true;
    }

    if (value.HasMember("Backtracking") && !value["Backtracking"].IsNull())
    {
        if (!value["Backtracking"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractRuleInfo.Backtracking` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backtracking = value["Backtracking"].GetInt64();
        m_backtrackingHasBeenSet = true;
    }

    if (value.HasMember("IsGBK") && !value["IsGBK"].IsNull())
    {
        if (!value["IsGBK"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractRuleInfo.IsGBK` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isGBK = value["IsGBK"].GetInt64();
        m_isGBKHasBeenSet = true;
    }

    if (value.HasMember("JsonStandard") && !value["JsonStandard"].IsNull())
    {
        if (!value["JsonStandard"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractRuleInfo.JsonStandard` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jsonStandard = value["JsonStandard"].GetInt64();
        m_jsonStandardHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractRuleInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractRuleInfo.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("ParseProtocol") && !value["ParseProtocol"].IsNull())
    {
        if (!value["ParseProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractRuleInfo.ParseProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parseProtocol = string(value["ParseProtocol"].GetString());
        m_parseProtocolHasBeenSet = true;
    }

    if (value.HasMember("MetadataType") && !value["MetadataType"].IsNull())
    {
        if (!value["MetadataType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractRuleInfo.MetadataType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_metadataType = value["MetadataType"].GetInt64();
        m_metadataTypeHasBeenSet = true;
    }

    if (value.HasMember("PathRegex") && !value["PathRegex"].IsNull())
    {
        if (!value["PathRegex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractRuleInfo.PathRegex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pathRegex = string(value["PathRegex"].GetString());
        m_pathRegexHasBeenSet = true;
    }

    if (value.HasMember("MetaTags") && !value["MetaTags"].IsNull())
    {
        if (!value["MetaTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExtractRuleInfo.MetaTags` is not array type"));

        const rapidjson::Value &tmpValue = value["MetaTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MetaTagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metaTags.push_back(item);
        }
        m_metaTagsHasBeenSet = true;
    }

    if (value.HasMember("EventLogRules") && !value["EventLogRules"].IsNull())
    {
        if (!value["EventLogRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExtractRuleInfo.EventLogRules` is not array type"));

        const rapidjson::Value &tmpValue = value["EventLogRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventLog item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eventLogRules.push_back(item);
        }
        m_eventLogRulesHasBeenSet = true;
    }

    if (value.HasMember("AdvanceFilterRules") && !value["AdvanceFilterRules"].IsNull())
    {
        if (!value["AdvanceFilterRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExtractRuleInfo.AdvanceFilterRules` is not array type"));

        const rapidjson::Value &tmpValue = value["AdvanceFilterRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AdvanceFilterRuleInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_advanceFilterRules.push_back(item);
        }
        m_advanceFilterRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtractRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeKey.c_str(), allocator).Move(), allocator);
    }

    if (m_timeFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_delimiterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Delimiter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_delimiter.c_str(), allocator).Move(), allocator);
    }

    if (m_logRegexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogRegex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logRegex.c_str(), allocator).Move(), allocator);
    }

    if (m_beginRegexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginRegex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginRegex.c_str(), allocator).Move(), allocator);
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

    if (m_filterKeyRegexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterKeyRegex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filterKeyRegex.begin(); itr != m_filterKeyRegex.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_unMatchUpLoadSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnMatchUpLoadSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unMatchUpLoadSwitch, allocator);
    }

    if (m_unMatchLogKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnMatchLogKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unMatchLogKey.c_str(), allocator).Move(), allocator);
    }

    if (m_backtrackingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Backtracking";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backtracking, allocator);
    }

    if (m_isGBKHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGBK";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isGBK, allocator);
    }

    if (m_jsonStandardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JsonStandard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jsonStandard, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_parseProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParseProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parseProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_metadataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetadataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metadataType, allocator);
    }

    if (m_pathRegexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathRegex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pathRegex.c_str(), allocator).Move(), allocator);
    }

    if (m_metaTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metaTags.begin(); itr != m_metaTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_eventLogRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventLogRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eventLogRules.begin(); itr != m_eventLogRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_advanceFilterRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvanceFilterRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_advanceFilterRules.begin(); itr != m_advanceFilterRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ExtractRuleInfo::GetTimeKey() const
{
    return m_timeKey;
}

void ExtractRuleInfo::SetTimeKey(const string& _timeKey)
{
    m_timeKey = _timeKey;
    m_timeKeyHasBeenSet = true;
}

bool ExtractRuleInfo::TimeKeyHasBeenSet() const
{
    return m_timeKeyHasBeenSet;
}

string ExtractRuleInfo::GetTimeFormat() const
{
    return m_timeFormat;
}

void ExtractRuleInfo::SetTimeFormat(const string& _timeFormat)
{
    m_timeFormat = _timeFormat;
    m_timeFormatHasBeenSet = true;
}

bool ExtractRuleInfo::TimeFormatHasBeenSet() const
{
    return m_timeFormatHasBeenSet;
}

string ExtractRuleInfo::GetDelimiter() const
{
    return m_delimiter;
}

void ExtractRuleInfo::SetDelimiter(const string& _delimiter)
{
    m_delimiter = _delimiter;
    m_delimiterHasBeenSet = true;
}

bool ExtractRuleInfo::DelimiterHasBeenSet() const
{
    return m_delimiterHasBeenSet;
}

string ExtractRuleInfo::GetLogRegex() const
{
    return m_logRegex;
}

void ExtractRuleInfo::SetLogRegex(const string& _logRegex)
{
    m_logRegex = _logRegex;
    m_logRegexHasBeenSet = true;
}

bool ExtractRuleInfo::LogRegexHasBeenSet() const
{
    return m_logRegexHasBeenSet;
}

string ExtractRuleInfo::GetBeginRegex() const
{
    return m_beginRegex;
}

void ExtractRuleInfo::SetBeginRegex(const string& _beginRegex)
{
    m_beginRegex = _beginRegex;
    m_beginRegexHasBeenSet = true;
}

bool ExtractRuleInfo::BeginRegexHasBeenSet() const
{
    return m_beginRegexHasBeenSet;
}

vector<string> ExtractRuleInfo::GetKeys() const
{
    return m_keys;
}

void ExtractRuleInfo::SetKeys(const vector<string>& _keys)
{
    m_keys = _keys;
    m_keysHasBeenSet = true;
}

bool ExtractRuleInfo::KeysHasBeenSet() const
{
    return m_keysHasBeenSet;
}

vector<KeyRegexInfo> ExtractRuleInfo::GetFilterKeyRegex() const
{
    return m_filterKeyRegex;
}

void ExtractRuleInfo::SetFilterKeyRegex(const vector<KeyRegexInfo>& _filterKeyRegex)
{
    m_filterKeyRegex = _filterKeyRegex;
    m_filterKeyRegexHasBeenSet = true;
}

bool ExtractRuleInfo::FilterKeyRegexHasBeenSet() const
{
    return m_filterKeyRegexHasBeenSet;
}

bool ExtractRuleInfo::GetUnMatchUpLoadSwitch() const
{
    return m_unMatchUpLoadSwitch;
}

void ExtractRuleInfo::SetUnMatchUpLoadSwitch(const bool& _unMatchUpLoadSwitch)
{
    m_unMatchUpLoadSwitch = _unMatchUpLoadSwitch;
    m_unMatchUpLoadSwitchHasBeenSet = true;
}

bool ExtractRuleInfo::UnMatchUpLoadSwitchHasBeenSet() const
{
    return m_unMatchUpLoadSwitchHasBeenSet;
}

string ExtractRuleInfo::GetUnMatchLogKey() const
{
    return m_unMatchLogKey;
}

void ExtractRuleInfo::SetUnMatchLogKey(const string& _unMatchLogKey)
{
    m_unMatchLogKey = _unMatchLogKey;
    m_unMatchLogKeyHasBeenSet = true;
}

bool ExtractRuleInfo::UnMatchLogKeyHasBeenSet() const
{
    return m_unMatchLogKeyHasBeenSet;
}

int64_t ExtractRuleInfo::GetBacktracking() const
{
    return m_backtracking;
}

void ExtractRuleInfo::SetBacktracking(const int64_t& _backtracking)
{
    m_backtracking = _backtracking;
    m_backtrackingHasBeenSet = true;
}

bool ExtractRuleInfo::BacktrackingHasBeenSet() const
{
    return m_backtrackingHasBeenSet;
}

int64_t ExtractRuleInfo::GetIsGBK() const
{
    return m_isGBK;
}

void ExtractRuleInfo::SetIsGBK(const int64_t& _isGBK)
{
    m_isGBK = _isGBK;
    m_isGBKHasBeenSet = true;
}

bool ExtractRuleInfo::IsGBKHasBeenSet() const
{
    return m_isGBKHasBeenSet;
}

int64_t ExtractRuleInfo::GetJsonStandard() const
{
    return m_jsonStandard;
}

void ExtractRuleInfo::SetJsonStandard(const int64_t& _jsonStandard)
{
    m_jsonStandard = _jsonStandard;
    m_jsonStandardHasBeenSet = true;
}

bool ExtractRuleInfo::JsonStandardHasBeenSet() const
{
    return m_jsonStandardHasBeenSet;
}

string ExtractRuleInfo::GetProtocol() const
{
    return m_protocol;
}

void ExtractRuleInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ExtractRuleInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string ExtractRuleInfo::GetAddress() const
{
    return m_address;
}

void ExtractRuleInfo::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool ExtractRuleInfo::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string ExtractRuleInfo::GetParseProtocol() const
{
    return m_parseProtocol;
}

void ExtractRuleInfo::SetParseProtocol(const string& _parseProtocol)
{
    m_parseProtocol = _parseProtocol;
    m_parseProtocolHasBeenSet = true;
}

bool ExtractRuleInfo::ParseProtocolHasBeenSet() const
{
    return m_parseProtocolHasBeenSet;
}

int64_t ExtractRuleInfo::GetMetadataType() const
{
    return m_metadataType;
}

void ExtractRuleInfo::SetMetadataType(const int64_t& _metadataType)
{
    m_metadataType = _metadataType;
    m_metadataTypeHasBeenSet = true;
}

bool ExtractRuleInfo::MetadataTypeHasBeenSet() const
{
    return m_metadataTypeHasBeenSet;
}

string ExtractRuleInfo::GetPathRegex() const
{
    return m_pathRegex;
}

void ExtractRuleInfo::SetPathRegex(const string& _pathRegex)
{
    m_pathRegex = _pathRegex;
    m_pathRegexHasBeenSet = true;
}

bool ExtractRuleInfo::PathRegexHasBeenSet() const
{
    return m_pathRegexHasBeenSet;
}

vector<MetaTagInfo> ExtractRuleInfo::GetMetaTags() const
{
    return m_metaTags;
}

void ExtractRuleInfo::SetMetaTags(const vector<MetaTagInfo>& _metaTags)
{
    m_metaTags = _metaTags;
    m_metaTagsHasBeenSet = true;
}

bool ExtractRuleInfo::MetaTagsHasBeenSet() const
{
    return m_metaTagsHasBeenSet;
}

vector<EventLog> ExtractRuleInfo::GetEventLogRules() const
{
    return m_eventLogRules;
}

void ExtractRuleInfo::SetEventLogRules(const vector<EventLog>& _eventLogRules)
{
    m_eventLogRules = _eventLogRules;
    m_eventLogRulesHasBeenSet = true;
}

bool ExtractRuleInfo::EventLogRulesHasBeenSet() const
{
    return m_eventLogRulesHasBeenSet;
}

vector<AdvanceFilterRuleInfo> ExtractRuleInfo::GetAdvanceFilterRules() const
{
    return m_advanceFilterRules;
}

void ExtractRuleInfo::SetAdvanceFilterRules(const vector<AdvanceFilterRuleInfo>& _advanceFilterRules)
{
    m_advanceFilterRules = _advanceFilterRules;
    m_advanceFilterRulesHasBeenSet = true;
}

bool ExtractRuleInfo::AdvanceFilterRulesHasBeenSet() const
{
    return m_advanceFilterRulesHasBeenSet;
}

