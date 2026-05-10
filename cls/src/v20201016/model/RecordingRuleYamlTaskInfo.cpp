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

#include <tencentcloud/cls/v20201016/model/RecordingRuleYamlTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

RecordingRuleYamlTaskInfo::RecordingRuleYamlTaskInfo() :
    m_yamlIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_dstTopicIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_enableFlagHasBeenSet(false),
    m_processStartTimeHasBeenSet(false),
    m_processPeriodHasBeenSet(false),
    m_processDelayHasBeenSet(false),
    m_hasServicesLogHasBeenSet(false),
    m_yamlConfigNameHasBeenSet(false),
    m_yamlContentHasBeenSet(false),
    m_subTaskCountHasBeenSet(false)
{
}

CoreInternalOutcome RecordingRuleYamlTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("YamlId") && !value["YamlId"].IsNull())
    {
        if (!value["YamlId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleYamlTaskInfo.YamlId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yamlId = string(value["YamlId"].GetString());
        m_yamlIdHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleYamlTaskInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("DstTopicId") && !value["DstTopicId"].IsNull())
    {
        if (!value["DstTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleYamlTaskInfo.DstTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstTopicId = string(value["DstTopicId"].GetString());
        m_dstTopicIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleYamlTaskInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleYamlTaskInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleYamlTaskInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EnableFlag") && !value["EnableFlag"].IsNull())
    {
        if (!value["EnableFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleYamlTaskInfo.EnableFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableFlag = value["EnableFlag"].GetInt64();
        m_enableFlagHasBeenSet = true;
    }

    if (value.HasMember("ProcessStartTime") && !value["ProcessStartTime"].IsNull())
    {
        if (!value["ProcessStartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleYamlTaskInfo.ProcessStartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_processStartTime = value["ProcessStartTime"].GetUint64();
        m_processStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ProcessPeriod") && !value["ProcessPeriod"].IsNull())
    {
        if (!value["ProcessPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleYamlTaskInfo.ProcessPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_processPeriod = value["ProcessPeriod"].GetInt64();
        m_processPeriodHasBeenSet = true;
    }

    if (value.HasMember("ProcessDelay") && !value["ProcessDelay"].IsNull())
    {
        if (!value["ProcessDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleYamlTaskInfo.ProcessDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_processDelay = value["ProcessDelay"].GetInt64();
        m_processDelayHasBeenSet = true;
    }

    if (value.HasMember("HasServicesLog") && !value["HasServicesLog"].IsNull())
    {
        if (!value["HasServicesLog"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleYamlTaskInfo.HasServicesLog` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hasServicesLog = value["HasServicesLog"].GetUint64();
        m_hasServicesLogHasBeenSet = true;
    }

    if (value.HasMember("YamlConfigName") && !value["YamlConfigName"].IsNull())
    {
        if (!value["YamlConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleYamlTaskInfo.YamlConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yamlConfigName = string(value["YamlConfigName"].GetString());
        m_yamlConfigNameHasBeenSet = true;
    }

    if (value.HasMember("YamlContent") && !value["YamlContent"].IsNull())
    {
        if (!value["YamlContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleYamlTaskInfo.YamlContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yamlContent = string(value["YamlContent"].GetString());
        m_yamlContentHasBeenSet = true;
    }

    if (value.HasMember("SubTaskCount") && !value["SubTaskCount"].IsNull())
    {
        if (!value["SubTaskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleYamlTaskInfo.SubTaskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subTaskCount = value["SubTaskCount"].GetInt64();
        m_subTaskCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordingRuleYamlTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_yamlIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YamlId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yamlId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_dstTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_enableFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableFlag, allocator);
    }

    if (m_processStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processStartTime, allocator);
    }

    if (m_processPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processPeriod, allocator);
    }

    if (m_processDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processDelay, allocator);
    }

    if (m_hasServicesLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasServicesLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasServicesLog, allocator);
    }

    if (m_yamlConfigNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YamlConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yamlConfigName.c_str(), allocator).Move(), allocator);
    }

    if (m_yamlContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YamlContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yamlContent.c_str(), allocator).Move(), allocator);
    }

    if (m_subTaskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubTaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subTaskCount, allocator);
    }

}


string RecordingRuleYamlTaskInfo::GetYamlId() const
{
    return m_yamlId;
}

void RecordingRuleYamlTaskInfo::SetYamlId(const string& _yamlId)
{
    m_yamlId = _yamlId;
    m_yamlIdHasBeenSet = true;
}

bool RecordingRuleYamlTaskInfo::YamlIdHasBeenSet() const
{
    return m_yamlIdHasBeenSet;
}

string RecordingRuleYamlTaskInfo::GetTopicId() const
{
    return m_topicId;
}

void RecordingRuleYamlTaskInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool RecordingRuleYamlTaskInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string RecordingRuleYamlTaskInfo::GetDstTopicId() const
{
    return m_dstTopicId;
}

void RecordingRuleYamlTaskInfo::SetDstTopicId(const string& _dstTopicId)
{
    m_dstTopicId = _dstTopicId;
    m_dstTopicIdHasBeenSet = true;
}

bool RecordingRuleYamlTaskInfo::DstTopicIdHasBeenSet() const
{
    return m_dstTopicIdHasBeenSet;
}

string RecordingRuleYamlTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void RecordingRuleYamlTaskInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RecordingRuleYamlTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RecordingRuleYamlTaskInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void RecordingRuleYamlTaskInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RecordingRuleYamlTaskInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t RecordingRuleYamlTaskInfo::GetStatus() const
{
    return m_status;
}

void RecordingRuleYamlTaskInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RecordingRuleYamlTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t RecordingRuleYamlTaskInfo::GetEnableFlag() const
{
    return m_enableFlag;
}

void RecordingRuleYamlTaskInfo::SetEnableFlag(const int64_t& _enableFlag)
{
    m_enableFlag = _enableFlag;
    m_enableFlagHasBeenSet = true;
}

bool RecordingRuleYamlTaskInfo::EnableFlagHasBeenSet() const
{
    return m_enableFlagHasBeenSet;
}

uint64_t RecordingRuleYamlTaskInfo::GetProcessStartTime() const
{
    return m_processStartTime;
}

void RecordingRuleYamlTaskInfo::SetProcessStartTime(const uint64_t& _processStartTime)
{
    m_processStartTime = _processStartTime;
    m_processStartTimeHasBeenSet = true;
}

bool RecordingRuleYamlTaskInfo::ProcessStartTimeHasBeenSet() const
{
    return m_processStartTimeHasBeenSet;
}

int64_t RecordingRuleYamlTaskInfo::GetProcessPeriod() const
{
    return m_processPeriod;
}

void RecordingRuleYamlTaskInfo::SetProcessPeriod(const int64_t& _processPeriod)
{
    m_processPeriod = _processPeriod;
    m_processPeriodHasBeenSet = true;
}

bool RecordingRuleYamlTaskInfo::ProcessPeriodHasBeenSet() const
{
    return m_processPeriodHasBeenSet;
}

int64_t RecordingRuleYamlTaskInfo::GetProcessDelay() const
{
    return m_processDelay;
}

void RecordingRuleYamlTaskInfo::SetProcessDelay(const int64_t& _processDelay)
{
    m_processDelay = _processDelay;
    m_processDelayHasBeenSet = true;
}

bool RecordingRuleYamlTaskInfo::ProcessDelayHasBeenSet() const
{
    return m_processDelayHasBeenSet;
}

uint64_t RecordingRuleYamlTaskInfo::GetHasServicesLog() const
{
    return m_hasServicesLog;
}

void RecordingRuleYamlTaskInfo::SetHasServicesLog(const uint64_t& _hasServicesLog)
{
    m_hasServicesLog = _hasServicesLog;
    m_hasServicesLogHasBeenSet = true;
}

bool RecordingRuleYamlTaskInfo::HasServicesLogHasBeenSet() const
{
    return m_hasServicesLogHasBeenSet;
}

string RecordingRuleYamlTaskInfo::GetYamlConfigName() const
{
    return m_yamlConfigName;
}

void RecordingRuleYamlTaskInfo::SetYamlConfigName(const string& _yamlConfigName)
{
    m_yamlConfigName = _yamlConfigName;
    m_yamlConfigNameHasBeenSet = true;
}

bool RecordingRuleYamlTaskInfo::YamlConfigNameHasBeenSet() const
{
    return m_yamlConfigNameHasBeenSet;
}

string RecordingRuleYamlTaskInfo::GetYamlContent() const
{
    return m_yamlContent;
}

void RecordingRuleYamlTaskInfo::SetYamlContent(const string& _yamlContent)
{
    m_yamlContent = _yamlContent;
    m_yamlContentHasBeenSet = true;
}

bool RecordingRuleYamlTaskInfo::YamlContentHasBeenSet() const
{
    return m_yamlContentHasBeenSet;
}

int64_t RecordingRuleYamlTaskInfo::GetSubTaskCount() const
{
    return m_subTaskCount;
}

void RecordingRuleYamlTaskInfo::SetSubTaskCount(const int64_t& _subTaskCount)
{
    m_subTaskCount = _subTaskCount;
    m_subTaskCountHasBeenSet = true;
}

bool RecordingRuleYamlTaskInfo::SubTaskCountHasBeenSet() const
{
    return m_subTaskCountHasBeenSet;
}

