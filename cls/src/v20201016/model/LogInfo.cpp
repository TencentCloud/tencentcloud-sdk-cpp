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

#include <tencentcloud/cls/v20201016/model/LogInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

LogInfo::LogInfo() :
    m_timeHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_pkgIdHasBeenSet(false),
    m_pkgLogIdHasBeenSet(false),
    m_highLightsHasBeenSet(false),
    m_logJsonHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_rawLogHasBeenSet(false),
    m_indexStatusHasBeenSet(false)
{
}

CoreInternalOutcome LogInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogInfo.Time` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_time = value["Time"].GetInt64();
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInfo.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInfo.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("PkgId") && !value["PkgId"].IsNull())
    {
        if (!value["PkgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInfo.PkgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgId = string(value["PkgId"].GetString());
        m_pkgIdHasBeenSet = true;
    }

    if (value.HasMember("PkgLogId") && !value["PkgLogId"].IsNull())
    {
        if (!value["PkgLogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInfo.PkgLogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgLogId = string(value["PkgLogId"].GetString());
        m_pkgLogIdHasBeenSet = true;
    }

    if (value.HasMember("HighLights") && !value["HighLights"].IsNull())
    {
        if (!value["HighLights"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogInfo.HighLights` is not array type"));

        const rapidjson::Value &tmpValue = value["HighLights"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HighLightItem item;
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

    if (value.HasMember("LogJson") && !value["LogJson"].IsNull())
    {
        if (!value["LogJson"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInfo.LogJson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logJson = string(value["LogJson"].GetString());
        m_logJsonHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInfo.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("RawLog") && !value["RawLog"].IsNull())
    {
        if (!value["RawLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInfo.RawLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rawLog = string(value["RawLog"].GetString());
        m_rawLogHasBeenSet = true;
    }

    if (value.HasMember("IndexStatus") && !value["IndexStatus"].IsNull())
    {
        if (!value["IndexStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogInfo.IndexStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexStatus = string(value["IndexStatus"].GetString());
        m_indexStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


int64_t LogInfo::GetTime() const
{
    return m_time;
}

void LogInfo::SetTime(const int64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool LogInfo::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string LogInfo::GetTopicId() const
{
    return m_topicId;
}

void LogInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool LogInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string LogInfo::GetTopicName() const
{
    return m_topicName;
}

void LogInfo::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool LogInfo::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string LogInfo::GetSource() const
{
    return m_source;
}

void LogInfo::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool LogInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string LogInfo::GetFileName() const
{
    return m_fileName;
}

void LogInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool LogInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string LogInfo::GetPkgId() const
{
    return m_pkgId;
}

void LogInfo::SetPkgId(const string& _pkgId)
{
    m_pkgId = _pkgId;
    m_pkgIdHasBeenSet = true;
}

bool LogInfo::PkgIdHasBeenSet() const
{
    return m_pkgIdHasBeenSet;
}

string LogInfo::GetPkgLogId() const
{
    return m_pkgLogId;
}

void LogInfo::SetPkgLogId(const string& _pkgLogId)
{
    m_pkgLogId = _pkgLogId;
    m_pkgLogIdHasBeenSet = true;
}

bool LogInfo::PkgLogIdHasBeenSet() const
{
    return m_pkgLogIdHasBeenSet;
}

vector<HighLightItem> LogInfo::GetHighLights() const
{
    return m_highLights;
}

void LogInfo::SetHighLights(const vector<HighLightItem>& _highLights)
{
    m_highLights = _highLights;
    m_highLightsHasBeenSet = true;
}

bool LogInfo::HighLightsHasBeenSet() const
{
    return m_highLightsHasBeenSet;
}

string LogInfo::GetLogJson() const
{
    return m_logJson;
}

void LogInfo::SetLogJson(const string& _logJson)
{
    m_logJson = _logJson;
    m_logJsonHasBeenSet = true;
}

bool LogInfo::LogJsonHasBeenSet() const
{
    return m_logJsonHasBeenSet;
}

string LogInfo::GetHostName() const
{
    return m_hostName;
}

void LogInfo::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool LogInfo::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string LogInfo::GetRawLog() const
{
    return m_rawLog;
}

void LogInfo::SetRawLog(const string& _rawLog)
{
    m_rawLog = _rawLog;
    m_rawLogHasBeenSet = true;
}

bool LogInfo::RawLogHasBeenSet() const
{
    return m_rawLogHasBeenSet;
}

string LogInfo::GetIndexStatus() const
{
    return m_indexStatus;
}

void LogInfo::SetIndexStatus(const string& _indexStatus)
{
    m_indexStatus = _indexStatus;
    m_indexStatusHasBeenSet = true;
}

bool LogInfo::IndexStatusHasBeenSet() const
{
    return m_indexStatusHasBeenSet;
}

