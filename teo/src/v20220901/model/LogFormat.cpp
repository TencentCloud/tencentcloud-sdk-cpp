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

#include <tencentcloud/teo/v20220901/model/LogFormat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

LogFormat::LogFormat() :
    m_formatTypeHasBeenSet(false),
    m_batchPrefixHasBeenSet(false),
    m_batchSuffixHasBeenSet(false),
    m_recordPrefixHasBeenSet(false),
    m_recordSuffixHasBeenSet(false),
    m_recordDelimiterHasBeenSet(false),
    m_fieldDelimiterHasBeenSet(false)
{
}

CoreInternalOutcome LogFormat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FormatType") && !value["FormatType"].IsNull())
    {
        if (!value["FormatType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogFormat.FormatType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formatType = string(value["FormatType"].GetString());
        m_formatTypeHasBeenSet = true;
    }

    if (value.HasMember("BatchPrefix") && !value["BatchPrefix"].IsNull())
    {
        if (!value["BatchPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogFormat.BatchPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchPrefix = string(value["BatchPrefix"].GetString());
        m_batchPrefixHasBeenSet = true;
    }

    if (value.HasMember("BatchSuffix") && !value["BatchSuffix"].IsNull())
    {
        if (!value["BatchSuffix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogFormat.BatchSuffix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchSuffix = string(value["BatchSuffix"].GetString());
        m_batchSuffixHasBeenSet = true;
    }

    if (value.HasMember("RecordPrefix") && !value["RecordPrefix"].IsNull())
    {
        if (!value["RecordPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogFormat.RecordPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordPrefix = string(value["RecordPrefix"].GetString());
        m_recordPrefixHasBeenSet = true;
    }

    if (value.HasMember("RecordSuffix") && !value["RecordSuffix"].IsNull())
    {
        if (!value["RecordSuffix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogFormat.RecordSuffix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordSuffix = string(value["RecordSuffix"].GetString());
        m_recordSuffixHasBeenSet = true;
    }

    if (value.HasMember("RecordDelimiter") && !value["RecordDelimiter"].IsNull())
    {
        if (!value["RecordDelimiter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogFormat.RecordDelimiter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordDelimiter = string(value["RecordDelimiter"].GetString());
        m_recordDelimiterHasBeenSet = true;
    }

    if (value.HasMember("FieldDelimiter") && !value["FieldDelimiter"].IsNull())
    {
        if (!value["FieldDelimiter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogFormat.FieldDelimiter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldDelimiter = string(value["FieldDelimiter"].GetString());
        m_fieldDelimiterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogFormat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_formatTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormatType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formatType.c_str(), allocator).Move(), allocator);
    }

    if (m_batchPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_batchSuffixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchSuffix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchSuffix.c_str(), allocator).Move(), allocator);
    }

    if (m_recordPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_recordSuffixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordSuffix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordSuffix.c_str(), allocator).Move(), allocator);
    }

    if (m_recordDelimiterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordDelimiter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordDelimiter.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldDelimiterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldDelimiter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldDelimiter.c_str(), allocator).Move(), allocator);
    }

}


string LogFormat::GetFormatType() const
{
    return m_formatType;
}

void LogFormat::SetFormatType(const string& _formatType)
{
    m_formatType = _formatType;
    m_formatTypeHasBeenSet = true;
}

bool LogFormat::FormatTypeHasBeenSet() const
{
    return m_formatTypeHasBeenSet;
}

string LogFormat::GetBatchPrefix() const
{
    return m_batchPrefix;
}

void LogFormat::SetBatchPrefix(const string& _batchPrefix)
{
    m_batchPrefix = _batchPrefix;
    m_batchPrefixHasBeenSet = true;
}

bool LogFormat::BatchPrefixHasBeenSet() const
{
    return m_batchPrefixHasBeenSet;
}

string LogFormat::GetBatchSuffix() const
{
    return m_batchSuffix;
}

void LogFormat::SetBatchSuffix(const string& _batchSuffix)
{
    m_batchSuffix = _batchSuffix;
    m_batchSuffixHasBeenSet = true;
}

bool LogFormat::BatchSuffixHasBeenSet() const
{
    return m_batchSuffixHasBeenSet;
}

string LogFormat::GetRecordPrefix() const
{
    return m_recordPrefix;
}

void LogFormat::SetRecordPrefix(const string& _recordPrefix)
{
    m_recordPrefix = _recordPrefix;
    m_recordPrefixHasBeenSet = true;
}

bool LogFormat::RecordPrefixHasBeenSet() const
{
    return m_recordPrefixHasBeenSet;
}

string LogFormat::GetRecordSuffix() const
{
    return m_recordSuffix;
}

void LogFormat::SetRecordSuffix(const string& _recordSuffix)
{
    m_recordSuffix = _recordSuffix;
    m_recordSuffixHasBeenSet = true;
}

bool LogFormat::RecordSuffixHasBeenSet() const
{
    return m_recordSuffixHasBeenSet;
}

string LogFormat::GetRecordDelimiter() const
{
    return m_recordDelimiter;
}

void LogFormat::SetRecordDelimiter(const string& _recordDelimiter)
{
    m_recordDelimiter = _recordDelimiter;
    m_recordDelimiterHasBeenSet = true;
}

bool LogFormat::RecordDelimiterHasBeenSet() const
{
    return m_recordDelimiterHasBeenSet;
}

string LogFormat::GetFieldDelimiter() const
{
    return m_fieldDelimiter;
}

void LogFormat::SetFieldDelimiter(const string& _fieldDelimiter)
{
    m_fieldDelimiter = _fieldDelimiter;
    m_fieldDelimiterHasBeenSet = true;
}

bool LogFormat::FieldDelimiterHasBeenSet() const
{
    return m_fieldDelimiterHasBeenSet;
}

