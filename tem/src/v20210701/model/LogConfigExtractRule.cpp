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

#include <tencentcloud/tem/v20210701/model/LogConfigExtractRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

LogConfigExtractRule::LogConfigExtractRule() :
    m_beginningRegexHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_filterKeysHasBeenSet(false),
    m_filterRegexHasBeenSet(false),
    m_logRegexHasBeenSet(false),
    m_timeKeyHasBeenSet(false),
    m_timeFormatHasBeenSet(false),
    m_unMatchUploadHasBeenSet(false),
    m_unMatchedKeyHasBeenSet(false),
    m_backtrackingHasBeenSet(false),
    m_delimiterHasBeenSet(false)
{
}

CoreInternalOutcome LogConfigExtractRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BeginningRegex") && !value["BeginningRegex"].IsNull())
    {
        if (!value["BeginningRegex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfigExtractRule.BeginningRegex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginningRegex = string(value["BeginningRegex"].GetString());
        m_beginningRegexHasBeenSet = true;
    }

    if (value.HasMember("Keys") && !value["Keys"].IsNull())
    {
        if (!value["Keys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogConfigExtractRule.Keys` is not array type"));

        const rapidjson::Value &tmpValue = value["Keys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keys.push_back((*itr).GetString());
        }
        m_keysHasBeenSet = true;
    }

    if (value.HasMember("FilterKeys") && !value["FilterKeys"].IsNull())
    {
        if (!value["FilterKeys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogConfigExtractRule.FilterKeys` is not array type"));

        const rapidjson::Value &tmpValue = value["FilterKeys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_filterKeys.push_back((*itr).GetString());
        }
        m_filterKeysHasBeenSet = true;
    }

    if (value.HasMember("FilterRegex") && !value["FilterRegex"].IsNull())
    {
        if (!value["FilterRegex"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogConfigExtractRule.FilterRegex` is not array type"));

        const rapidjson::Value &tmpValue = value["FilterRegex"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_filterRegex.push_back((*itr).GetString());
        }
        m_filterRegexHasBeenSet = true;
    }

    if (value.HasMember("LogRegex") && !value["LogRegex"].IsNull())
    {
        if (!value["LogRegex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfigExtractRule.LogRegex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logRegex = string(value["LogRegex"].GetString());
        m_logRegexHasBeenSet = true;
    }

    if (value.HasMember("TimeKey") && !value["TimeKey"].IsNull())
    {
        if (!value["TimeKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfigExtractRule.TimeKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeKey = string(value["TimeKey"].GetString());
        m_timeKeyHasBeenSet = true;
    }

    if (value.HasMember("TimeFormat") && !value["TimeFormat"].IsNull())
    {
        if (!value["TimeFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfigExtractRule.TimeFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeFormat = string(value["TimeFormat"].GetString());
        m_timeFormatHasBeenSet = true;
    }

    if (value.HasMember("UnMatchUpload") && !value["UnMatchUpload"].IsNull())
    {
        if (!value["UnMatchUpload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfigExtractRule.UnMatchUpload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unMatchUpload = string(value["UnMatchUpload"].GetString());
        m_unMatchUploadHasBeenSet = true;
    }

    if (value.HasMember("UnMatchedKey") && !value["UnMatchedKey"].IsNull())
    {
        if (!value["UnMatchedKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfigExtractRule.UnMatchedKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unMatchedKey = string(value["UnMatchedKey"].GetString());
        m_unMatchedKeyHasBeenSet = true;
    }

    if (value.HasMember("Backtracking") && !value["Backtracking"].IsNull())
    {
        if (!value["Backtracking"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfigExtractRule.Backtracking` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backtracking = string(value["Backtracking"].GetString());
        m_backtrackingHasBeenSet = true;
    }

    if (value.HasMember("Delimiter") && !value["Delimiter"].IsNull())
    {
        if (!value["Delimiter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfigExtractRule.Delimiter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_delimiter = string(value["Delimiter"].GetString());
        m_delimiterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogConfigExtractRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_beginningRegexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginningRegex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginningRegex.c_str(), allocator).Move(), allocator);
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

    if (m_filterKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filterKeys.begin(); itr != m_filterKeys.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filterRegexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterRegex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filterRegex.begin(); itr != m_filterRegex.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_logRegexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogRegex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logRegex.c_str(), allocator).Move(), allocator);
    }

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

    if (m_unMatchUploadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnMatchUpload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unMatchUpload.c_str(), allocator).Move(), allocator);
    }

    if (m_unMatchedKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnMatchedKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unMatchedKey.c_str(), allocator).Move(), allocator);
    }

    if (m_backtrackingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Backtracking";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backtracking.c_str(), allocator).Move(), allocator);
    }

    if (m_delimiterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Delimiter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_delimiter.c_str(), allocator).Move(), allocator);
    }

}


string LogConfigExtractRule::GetBeginningRegex() const
{
    return m_beginningRegex;
}

void LogConfigExtractRule::SetBeginningRegex(const string& _beginningRegex)
{
    m_beginningRegex = _beginningRegex;
    m_beginningRegexHasBeenSet = true;
}

bool LogConfigExtractRule::BeginningRegexHasBeenSet() const
{
    return m_beginningRegexHasBeenSet;
}

vector<string> LogConfigExtractRule::GetKeys() const
{
    return m_keys;
}

void LogConfigExtractRule::SetKeys(const vector<string>& _keys)
{
    m_keys = _keys;
    m_keysHasBeenSet = true;
}

bool LogConfigExtractRule::KeysHasBeenSet() const
{
    return m_keysHasBeenSet;
}

vector<string> LogConfigExtractRule::GetFilterKeys() const
{
    return m_filterKeys;
}

void LogConfigExtractRule::SetFilterKeys(const vector<string>& _filterKeys)
{
    m_filterKeys = _filterKeys;
    m_filterKeysHasBeenSet = true;
}

bool LogConfigExtractRule::FilterKeysHasBeenSet() const
{
    return m_filterKeysHasBeenSet;
}

vector<string> LogConfigExtractRule::GetFilterRegex() const
{
    return m_filterRegex;
}

void LogConfigExtractRule::SetFilterRegex(const vector<string>& _filterRegex)
{
    m_filterRegex = _filterRegex;
    m_filterRegexHasBeenSet = true;
}

bool LogConfigExtractRule::FilterRegexHasBeenSet() const
{
    return m_filterRegexHasBeenSet;
}

string LogConfigExtractRule::GetLogRegex() const
{
    return m_logRegex;
}

void LogConfigExtractRule::SetLogRegex(const string& _logRegex)
{
    m_logRegex = _logRegex;
    m_logRegexHasBeenSet = true;
}

bool LogConfigExtractRule::LogRegexHasBeenSet() const
{
    return m_logRegexHasBeenSet;
}

string LogConfigExtractRule::GetTimeKey() const
{
    return m_timeKey;
}

void LogConfigExtractRule::SetTimeKey(const string& _timeKey)
{
    m_timeKey = _timeKey;
    m_timeKeyHasBeenSet = true;
}

bool LogConfigExtractRule::TimeKeyHasBeenSet() const
{
    return m_timeKeyHasBeenSet;
}

string LogConfigExtractRule::GetTimeFormat() const
{
    return m_timeFormat;
}

void LogConfigExtractRule::SetTimeFormat(const string& _timeFormat)
{
    m_timeFormat = _timeFormat;
    m_timeFormatHasBeenSet = true;
}

bool LogConfigExtractRule::TimeFormatHasBeenSet() const
{
    return m_timeFormatHasBeenSet;
}

string LogConfigExtractRule::GetUnMatchUpload() const
{
    return m_unMatchUpload;
}

void LogConfigExtractRule::SetUnMatchUpload(const string& _unMatchUpload)
{
    m_unMatchUpload = _unMatchUpload;
    m_unMatchUploadHasBeenSet = true;
}

bool LogConfigExtractRule::UnMatchUploadHasBeenSet() const
{
    return m_unMatchUploadHasBeenSet;
}

string LogConfigExtractRule::GetUnMatchedKey() const
{
    return m_unMatchedKey;
}

void LogConfigExtractRule::SetUnMatchedKey(const string& _unMatchedKey)
{
    m_unMatchedKey = _unMatchedKey;
    m_unMatchedKeyHasBeenSet = true;
}

bool LogConfigExtractRule::UnMatchedKeyHasBeenSet() const
{
    return m_unMatchedKeyHasBeenSet;
}

string LogConfigExtractRule::GetBacktracking() const
{
    return m_backtracking;
}

void LogConfigExtractRule::SetBacktracking(const string& _backtracking)
{
    m_backtracking = _backtracking;
    m_backtrackingHasBeenSet = true;
}

bool LogConfigExtractRule::BacktrackingHasBeenSet() const
{
    return m_backtrackingHasBeenSet;
}

string LogConfigExtractRule::GetDelimiter() const
{
    return m_delimiter;
}

void LogConfigExtractRule::SetDelimiter(const string& _delimiter)
{
    m_delimiter = _delimiter;
    m_delimiterHasBeenSet = true;
}

bool LogConfigExtractRule::DelimiterHasBeenSet() const
{
    return m_delimiterHasBeenSet;
}

