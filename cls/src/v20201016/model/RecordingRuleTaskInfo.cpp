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

#include <tencentcloud/cls/v20201016/model/RecordingRuleTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

RecordingRuleTaskInfo::RecordingRuleTaskInfo() :
    m_taskIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_enableFlagHasBeenSet(false),
    m_processStartTimeHasBeenSet(false),
    m_processPeriodHasBeenSet(false),
    m_processDelayHasBeenSet(false),
    m_hasServicesLogHasBeenSet(false),
    m_recordingRuleContentHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_customMetricLabelsHasBeenSet(false),
    m_yamlIdHasBeenSet(false),
    m_yamlConfigNameHasBeenSet(false),
    m_dstTopicIdHasBeenSet(false)
{
}

CoreInternalOutcome RecordingRuleTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleTaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleTaskInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleTaskInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleTaskInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleTaskInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleTaskInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EnableFlag") && !value["EnableFlag"].IsNull())
    {
        if (!value["EnableFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleTaskInfo.EnableFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableFlag = value["EnableFlag"].GetInt64();
        m_enableFlagHasBeenSet = true;
    }

    if (value.HasMember("ProcessStartTime") && !value["ProcessStartTime"].IsNull())
    {
        if (!value["ProcessStartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleTaskInfo.ProcessStartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_processStartTime = value["ProcessStartTime"].GetUint64();
        m_processStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ProcessPeriod") && !value["ProcessPeriod"].IsNull())
    {
        if (!value["ProcessPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleTaskInfo.ProcessPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_processPeriod = value["ProcessPeriod"].GetInt64();
        m_processPeriodHasBeenSet = true;
    }

    if (value.HasMember("ProcessDelay") && !value["ProcessDelay"].IsNull())
    {
        if (!value["ProcessDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleTaskInfo.ProcessDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_processDelay = value["ProcessDelay"].GetInt64();
        m_processDelayHasBeenSet = true;
    }

    if (value.HasMember("HasServicesLog") && !value["HasServicesLog"].IsNull())
    {
        if (!value["HasServicesLog"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleTaskInfo.HasServicesLog` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hasServicesLog = value["HasServicesLog"].GetUint64();
        m_hasServicesLogHasBeenSet = true;
    }

    if (value.HasMember("RecordingRuleContent") && !value["RecordingRuleContent"].IsNull())
    {
        if (!value["RecordingRuleContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleTaskInfo.RecordingRuleContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordingRuleContent = string(value["RecordingRuleContent"].GetString());
        m_recordingRuleContentHasBeenSet = true;
    }

    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleTaskInfo.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("CustomMetricLabels") && !value["CustomMetricLabels"].IsNull())
    {
        if (!value["CustomMetricLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RecordingRuleTaskInfo.CustomMetricLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomMetricLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MetricLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customMetricLabels.push_back(item);
        }
        m_customMetricLabelsHasBeenSet = true;
    }

    if (value.HasMember("YamlId") && !value["YamlId"].IsNull())
    {
        if (!value["YamlId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleTaskInfo.YamlId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yamlId = string(value["YamlId"].GetString());
        m_yamlIdHasBeenSet = true;
    }

    if (value.HasMember("YamlConfigName") && !value["YamlConfigName"].IsNull())
    {
        if (!value["YamlConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleTaskInfo.YamlConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yamlConfigName = string(value["YamlConfigName"].GetString());
        m_yamlConfigNameHasBeenSet = true;
    }

    if (value.HasMember("DstTopicId") && !value["DstTopicId"].IsNull())
    {
        if (!value["DstTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingRuleTaskInfo.DstTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstTopicId = string(value["DstTopicId"].GetString());
        m_dstTopicIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordingRuleTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_recordingRuleContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordingRuleContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordingRuleContent.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_customMetricLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomMetricLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customMetricLabels.begin(); itr != m_customMetricLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_yamlIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YamlId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yamlId.c_str(), allocator).Move(), allocator);
    }

    if (m_yamlConfigNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YamlConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yamlConfigName.c_str(), allocator).Move(), allocator);
    }

    if (m_dstTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstTopicId.c_str(), allocator).Move(), allocator);
    }

}


string RecordingRuleTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void RecordingRuleTaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool RecordingRuleTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string RecordingRuleTaskInfo::GetTopicId() const
{
    return m_topicId;
}

void RecordingRuleTaskInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool RecordingRuleTaskInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string RecordingRuleTaskInfo::GetName() const
{
    return m_name;
}

void RecordingRuleTaskInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RecordingRuleTaskInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RecordingRuleTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void RecordingRuleTaskInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RecordingRuleTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RecordingRuleTaskInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void RecordingRuleTaskInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RecordingRuleTaskInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t RecordingRuleTaskInfo::GetStatus() const
{
    return m_status;
}

void RecordingRuleTaskInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RecordingRuleTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t RecordingRuleTaskInfo::GetEnableFlag() const
{
    return m_enableFlag;
}

void RecordingRuleTaskInfo::SetEnableFlag(const int64_t& _enableFlag)
{
    m_enableFlag = _enableFlag;
    m_enableFlagHasBeenSet = true;
}

bool RecordingRuleTaskInfo::EnableFlagHasBeenSet() const
{
    return m_enableFlagHasBeenSet;
}

uint64_t RecordingRuleTaskInfo::GetProcessStartTime() const
{
    return m_processStartTime;
}

void RecordingRuleTaskInfo::SetProcessStartTime(const uint64_t& _processStartTime)
{
    m_processStartTime = _processStartTime;
    m_processStartTimeHasBeenSet = true;
}

bool RecordingRuleTaskInfo::ProcessStartTimeHasBeenSet() const
{
    return m_processStartTimeHasBeenSet;
}

int64_t RecordingRuleTaskInfo::GetProcessPeriod() const
{
    return m_processPeriod;
}

void RecordingRuleTaskInfo::SetProcessPeriod(const int64_t& _processPeriod)
{
    m_processPeriod = _processPeriod;
    m_processPeriodHasBeenSet = true;
}

bool RecordingRuleTaskInfo::ProcessPeriodHasBeenSet() const
{
    return m_processPeriodHasBeenSet;
}

int64_t RecordingRuleTaskInfo::GetProcessDelay() const
{
    return m_processDelay;
}

void RecordingRuleTaskInfo::SetProcessDelay(const int64_t& _processDelay)
{
    m_processDelay = _processDelay;
    m_processDelayHasBeenSet = true;
}

bool RecordingRuleTaskInfo::ProcessDelayHasBeenSet() const
{
    return m_processDelayHasBeenSet;
}

uint64_t RecordingRuleTaskInfo::GetHasServicesLog() const
{
    return m_hasServicesLog;
}

void RecordingRuleTaskInfo::SetHasServicesLog(const uint64_t& _hasServicesLog)
{
    m_hasServicesLog = _hasServicesLog;
    m_hasServicesLogHasBeenSet = true;
}

bool RecordingRuleTaskInfo::HasServicesLogHasBeenSet() const
{
    return m_hasServicesLogHasBeenSet;
}

string RecordingRuleTaskInfo::GetRecordingRuleContent() const
{
    return m_recordingRuleContent;
}

void RecordingRuleTaskInfo::SetRecordingRuleContent(const string& _recordingRuleContent)
{
    m_recordingRuleContent = _recordingRuleContent;
    m_recordingRuleContentHasBeenSet = true;
}

bool RecordingRuleTaskInfo::RecordingRuleContentHasBeenSet() const
{
    return m_recordingRuleContentHasBeenSet;
}

string RecordingRuleTaskInfo::GetMetricName() const
{
    return m_metricName;
}

void RecordingRuleTaskInfo::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool RecordingRuleTaskInfo::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

vector<MetricLabel> RecordingRuleTaskInfo::GetCustomMetricLabels() const
{
    return m_customMetricLabels;
}

void RecordingRuleTaskInfo::SetCustomMetricLabels(const vector<MetricLabel>& _customMetricLabels)
{
    m_customMetricLabels = _customMetricLabels;
    m_customMetricLabelsHasBeenSet = true;
}

bool RecordingRuleTaskInfo::CustomMetricLabelsHasBeenSet() const
{
    return m_customMetricLabelsHasBeenSet;
}

string RecordingRuleTaskInfo::GetYamlId() const
{
    return m_yamlId;
}

void RecordingRuleTaskInfo::SetYamlId(const string& _yamlId)
{
    m_yamlId = _yamlId;
    m_yamlIdHasBeenSet = true;
}

bool RecordingRuleTaskInfo::YamlIdHasBeenSet() const
{
    return m_yamlIdHasBeenSet;
}

string RecordingRuleTaskInfo::GetYamlConfigName() const
{
    return m_yamlConfigName;
}

void RecordingRuleTaskInfo::SetYamlConfigName(const string& _yamlConfigName)
{
    m_yamlConfigName = _yamlConfigName;
    m_yamlConfigNameHasBeenSet = true;
}

bool RecordingRuleTaskInfo::YamlConfigNameHasBeenSet() const
{
    return m_yamlConfigNameHasBeenSet;
}

string RecordingRuleTaskInfo::GetDstTopicId() const
{
    return m_dstTopicId;
}

void RecordingRuleTaskInfo::SetDstTopicId(const string& _dstTopicId)
{
    m_dstTopicId = _dstTopicId;
    m_dstTopicIdHasBeenSet = true;
}

bool RecordingRuleTaskInfo::DstTopicIdHasBeenSet() const
{
    return m_dstTopicIdHasBeenSet;
}

