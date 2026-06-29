/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/LogSearchResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

LogSearchResult::LogSearchResult() :
    m_timeHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_pkgIdHasBeenSet(false),
    m_pkgLogIdHasBeenSet(false),
    m_logJsonHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_rawLogHasBeenSet(false),
    m_indexStatusHasBeenSet(false),
    m_highLightsHasBeenSet(false)
{
}

CoreInternalOutcome LogSearchResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogSearchResult.Time` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_time = value["Time"].GetInt64();
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSearchResult.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSearchResult.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSearchResult.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSearchResult.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("PkgId") && !value["PkgId"].IsNull())
    {
        if (!value["PkgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSearchResult.PkgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgId = string(value["PkgId"].GetString());
        m_pkgIdHasBeenSet = true;
    }

    if (value.HasMember("PkgLogId") && !value["PkgLogId"].IsNull())
    {
        if (!value["PkgLogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSearchResult.PkgLogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgLogId = string(value["PkgLogId"].GetString());
        m_pkgLogIdHasBeenSet = true;
    }

    if (value.HasMember("LogJson") && !value["LogJson"].IsNull())
    {
        if (!value["LogJson"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSearchResult.LogJson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logJson = string(value["LogJson"].GetString());
        m_logJsonHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSearchResult.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("RawLog") && !value["RawLog"].IsNull())
    {
        if (!value["RawLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSearchResult.RawLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rawLog = string(value["RawLog"].GetString());
        m_rawLogHasBeenSet = true;
    }

    if (value.HasMember("IndexStatus") && !value["IndexStatus"].IsNull())
    {
        if (!value["IndexStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSearchResult.IndexStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexStatus = string(value["IndexStatus"].GetString());
        m_indexStatusHasBeenSet = true;
    }

    if (value.HasMember("HighLights") && !value["HighLights"].IsNull())
    {
        if (!value["HighLights"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogSearchResult.HighLights` is not array type"));

        const rapidjson::Value &tmpValue = value["HighLights"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LogHighLightItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_highLights.push_back(item);
        }
        m_highLightsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogSearchResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_time, allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgId.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgLogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgLogId.c_str(), allocator).Move(), allocator);
    }

    if (m_logJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logJson.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_rawLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RawLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rawLog.c_str(), allocator).Move(), allocator);
    }

    if (m_indexStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_highLightsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighLights";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_highLights.begin(); itr != m_highLights.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t LogSearchResult::GetTime() const
{
    return m_time;
}

void LogSearchResult::SetTime(const int64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool LogSearchResult::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string LogSearchResult::GetTopicId() const
{
    return m_topicId;
}

void LogSearchResult::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool LogSearchResult::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string LogSearchResult::GetTopicName() const
{
    return m_topicName;
}

void LogSearchResult::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool LogSearchResult::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string LogSearchResult::GetSource() const
{
    return m_source;
}

void LogSearchResult::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool LogSearchResult::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string LogSearchResult::GetFileName() const
{
    return m_fileName;
}

void LogSearchResult::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool LogSearchResult::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string LogSearchResult::GetPkgId() const
{
    return m_pkgId;
}

void LogSearchResult::SetPkgId(const string& _pkgId)
{
    m_pkgId = _pkgId;
    m_pkgIdHasBeenSet = true;
}

bool LogSearchResult::PkgIdHasBeenSet() const
{
    return m_pkgIdHasBeenSet;
}

string LogSearchResult::GetPkgLogId() const
{
    return m_pkgLogId;
}

void LogSearchResult::SetPkgLogId(const string& _pkgLogId)
{
    m_pkgLogId = _pkgLogId;
    m_pkgLogIdHasBeenSet = true;
}

bool LogSearchResult::PkgLogIdHasBeenSet() const
{
    return m_pkgLogIdHasBeenSet;
}

string LogSearchResult::GetLogJson() const
{
    return m_logJson;
}

void LogSearchResult::SetLogJson(const string& _logJson)
{
    m_logJson = _logJson;
    m_logJsonHasBeenSet = true;
}

bool LogSearchResult::LogJsonHasBeenSet() const
{
    return m_logJsonHasBeenSet;
}

string LogSearchResult::GetHostName() const
{
    return m_hostName;
}

void LogSearchResult::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool LogSearchResult::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string LogSearchResult::GetRawLog() const
{
    return m_rawLog;
}

void LogSearchResult::SetRawLog(const string& _rawLog)
{
    m_rawLog = _rawLog;
    m_rawLogHasBeenSet = true;
}

bool LogSearchResult::RawLogHasBeenSet() const
{
    return m_rawLogHasBeenSet;
}

string LogSearchResult::GetIndexStatus() const
{
    return m_indexStatus;
}

void LogSearchResult::SetIndexStatus(const string& _indexStatus)
{
    m_indexStatus = _indexStatus;
    m_indexStatusHasBeenSet = true;
}

bool LogSearchResult::IndexStatusHasBeenSet() const
{
    return m_indexStatusHasBeenSet;
}

vector<LogHighLightItem> LogSearchResult::GetHighLights() const
{
    return m_highLights;
}

void LogSearchResult::SetHighLights(const vector<LogHighLightItem>& _highLights)
{
    m_highLights = _highLights;
    m_highLightsHasBeenSet = true;
}

bool LogSearchResult::HighLightsHasBeenSet() const
{
    return m_highLightsHasBeenSet;
}

