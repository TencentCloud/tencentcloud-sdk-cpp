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

#include <tencentcloud/cls/v20201016/model/ModifyRecordingRuleTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyRecordingRuleTaskRequest::ModifyRecordingRuleTaskRequest() :
    m_taskIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_dstTopicIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_enableFlagHasBeenSet(false),
    m_processStartTimeHasBeenSet(false),
    m_processPeriodHasBeenSet(false),
    m_processDelayHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_recordingRuleContentHasBeenSet(false),
    m_customMetricLabelsHasBeenSet(false),
    m_hasServicesLogHasBeenSet(false)
{
}

string ModifyRecordingRuleTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_dstTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstTopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_enableFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableFlag, allocator);
    }

    if (m_processStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_processStartTime, allocator);
    }

    if (m_processPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_processPeriod, allocator);
    }

    if (m_processDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessDelay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_processDelay, allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_recordingRuleContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordingRuleContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordingRuleContent.c_str(), allocator).Move(), allocator);
    }

    if (m_customMetricLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomMetricLabels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customMetricLabels.begin(); itr != m_customMetricLabels.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_hasServicesLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasServicesLog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hasServicesLog, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRecordingRuleTaskRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifyRecordingRuleTaskRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifyRecordingRuleTaskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ModifyRecordingRuleTaskRequest::GetTopicId() const
{
    return m_topicId;
}

void ModifyRecordingRuleTaskRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ModifyRecordingRuleTaskRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string ModifyRecordingRuleTaskRequest::GetDstTopicId() const
{
    return m_dstTopicId;
}

void ModifyRecordingRuleTaskRequest::SetDstTopicId(const string& _dstTopicId)
{
    m_dstTopicId = _dstTopicId;
    m_dstTopicIdHasBeenSet = true;
}

bool ModifyRecordingRuleTaskRequest::DstTopicIdHasBeenSet() const
{
    return m_dstTopicIdHasBeenSet;
}

string ModifyRecordingRuleTaskRequest::GetName() const
{
    return m_name;
}

void ModifyRecordingRuleTaskRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyRecordingRuleTaskRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ModifyRecordingRuleTaskRequest::GetEnableFlag() const
{
    return m_enableFlag;
}

void ModifyRecordingRuleTaskRequest::SetEnableFlag(const int64_t& _enableFlag)
{
    m_enableFlag = _enableFlag;
    m_enableFlagHasBeenSet = true;
}

bool ModifyRecordingRuleTaskRequest::EnableFlagHasBeenSet() const
{
    return m_enableFlagHasBeenSet;
}

int64_t ModifyRecordingRuleTaskRequest::GetProcessStartTime() const
{
    return m_processStartTime;
}

void ModifyRecordingRuleTaskRequest::SetProcessStartTime(const int64_t& _processStartTime)
{
    m_processStartTime = _processStartTime;
    m_processStartTimeHasBeenSet = true;
}

bool ModifyRecordingRuleTaskRequest::ProcessStartTimeHasBeenSet() const
{
    return m_processStartTimeHasBeenSet;
}

int64_t ModifyRecordingRuleTaskRequest::GetProcessPeriod() const
{
    return m_processPeriod;
}

void ModifyRecordingRuleTaskRequest::SetProcessPeriod(const int64_t& _processPeriod)
{
    m_processPeriod = _processPeriod;
    m_processPeriodHasBeenSet = true;
}

bool ModifyRecordingRuleTaskRequest::ProcessPeriodHasBeenSet() const
{
    return m_processPeriodHasBeenSet;
}

int64_t ModifyRecordingRuleTaskRequest::GetProcessDelay() const
{
    return m_processDelay;
}

void ModifyRecordingRuleTaskRequest::SetProcessDelay(const int64_t& _processDelay)
{
    m_processDelay = _processDelay;
    m_processDelayHasBeenSet = true;
}

bool ModifyRecordingRuleTaskRequest::ProcessDelayHasBeenSet() const
{
    return m_processDelayHasBeenSet;
}

string ModifyRecordingRuleTaskRequest::GetMetricName() const
{
    return m_metricName;
}

void ModifyRecordingRuleTaskRequest::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool ModifyRecordingRuleTaskRequest::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

string ModifyRecordingRuleTaskRequest::GetRecordingRuleContent() const
{
    return m_recordingRuleContent;
}

void ModifyRecordingRuleTaskRequest::SetRecordingRuleContent(const string& _recordingRuleContent)
{
    m_recordingRuleContent = _recordingRuleContent;
    m_recordingRuleContentHasBeenSet = true;
}

bool ModifyRecordingRuleTaskRequest::RecordingRuleContentHasBeenSet() const
{
    return m_recordingRuleContentHasBeenSet;
}

vector<MetricLabel> ModifyRecordingRuleTaskRequest::GetCustomMetricLabels() const
{
    return m_customMetricLabels;
}

void ModifyRecordingRuleTaskRequest::SetCustomMetricLabels(const vector<MetricLabel>& _customMetricLabels)
{
    m_customMetricLabels = _customMetricLabels;
    m_customMetricLabelsHasBeenSet = true;
}

bool ModifyRecordingRuleTaskRequest::CustomMetricLabelsHasBeenSet() const
{
    return m_customMetricLabelsHasBeenSet;
}

uint64_t ModifyRecordingRuleTaskRequest::GetHasServicesLog() const
{
    return m_hasServicesLog;
}

void ModifyRecordingRuleTaskRequest::SetHasServicesLog(const uint64_t& _hasServicesLog)
{
    m_hasServicesLog = _hasServicesLog;
    m_hasServicesLogHasBeenSet = true;
}

bool ModifyRecordingRuleTaskRequest::HasServicesLogHasBeenSet() const
{
    return m_hasServicesLogHasBeenSet;
}


