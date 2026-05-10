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

#include <tencentcloud/cls/v20201016/model/CreateRecordingRuleTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateRecordingRuleTaskRequest::CreateRecordingRuleTaskRequest() :
    m_topicIdHasBeenSet(false),
    m_dstTopicIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_enableFlagHasBeenSet(false),
    m_processStartTimeHasBeenSet(false),
    m_processPeriodHasBeenSet(false),
    m_processDelayHasBeenSet(false),
    m_recordingRuleContentHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_customMetricLabelsHasBeenSet(false),
    m_hasServicesLogHasBeenSet(false)
{
}

string CreateRecordingRuleTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_recordingRuleContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordingRuleContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordingRuleContent.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
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


string CreateRecordingRuleTaskRequest::GetTopicId() const
{
    return m_topicId;
}

void CreateRecordingRuleTaskRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CreateRecordingRuleTaskRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string CreateRecordingRuleTaskRequest::GetDstTopicId() const
{
    return m_dstTopicId;
}

void CreateRecordingRuleTaskRequest::SetDstTopicId(const string& _dstTopicId)
{
    m_dstTopicId = _dstTopicId;
    m_dstTopicIdHasBeenSet = true;
}

bool CreateRecordingRuleTaskRequest::DstTopicIdHasBeenSet() const
{
    return m_dstTopicIdHasBeenSet;
}

string CreateRecordingRuleTaskRequest::GetName() const
{
    return m_name;
}

void CreateRecordingRuleTaskRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateRecordingRuleTaskRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t CreateRecordingRuleTaskRequest::GetEnableFlag() const
{
    return m_enableFlag;
}

void CreateRecordingRuleTaskRequest::SetEnableFlag(const uint64_t& _enableFlag)
{
    m_enableFlag = _enableFlag;
    m_enableFlagHasBeenSet = true;
}

bool CreateRecordingRuleTaskRequest::EnableFlagHasBeenSet() const
{
    return m_enableFlagHasBeenSet;
}

uint64_t CreateRecordingRuleTaskRequest::GetProcessStartTime() const
{
    return m_processStartTime;
}

void CreateRecordingRuleTaskRequest::SetProcessStartTime(const uint64_t& _processStartTime)
{
    m_processStartTime = _processStartTime;
    m_processStartTimeHasBeenSet = true;
}

bool CreateRecordingRuleTaskRequest::ProcessStartTimeHasBeenSet() const
{
    return m_processStartTimeHasBeenSet;
}

int64_t CreateRecordingRuleTaskRequest::GetProcessPeriod() const
{
    return m_processPeriod;
}

void CreateRecordingRuleTaskRequest::SetProcessPeriod(const int64_t& _processPeriod)
{
    m_processPeriod = _processPeriod;
    m_processPeriodHasBeenSet = true;
}

bool CreateRecordingRuleTaskRequest::ProcessPeriodHasBeenSet() const
{
    return m_processPeriodHasBeenSet;
}

int64_t CreateRecordingRuleTaskRequest::GetProcessDelay() const
{
    return m_processDelay;
}

void CreateRecordingRuleTaskRequest::SetProcessDelay(const int64_t& _processDelay)
{
    m_processDelay = _processDelay;
    m_processDelayHasBeenSet = true;
}

bool CreateRecordingRuleTaskRequest::ProcessDelayHasBeenSet() const
{
    return m_processDelayHasBeenSet;
}

string CreateRecordingRuleTaskRequest::GetRecordingRuleContent() const
{
    return m_recordingRuleContent;
}

void CreateRecordingRuleTaskRequest::SetRecordingRuleContent(const string& _recordingRuleContent)
{
    m_recordingRuleContent = _recordingRuleContent;
    m_recordingRuleContentHasBeenSet = true;
}

bool CreateRecordingRuleTaskRequest::RecordingRuleContentHasBeenSet() const
{
    return m_recordingRuleContentHasBeenSet;
}

string CreateRecordingRuleTaskRequest::GetMetricName() const
{
    return m_metricName;
}

void CreateRecordingRuleTaskRequest::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool CreateRecordingRuleTaskRequest::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

vector<MetricLabel> CreateRecordingRuleTaskRequest::GetCustomMetricLabels() const
{
    return m_customMetricLabels;
}

void CreateRecordingRuleTaskRequest::SetCustomMetricLabels(const vector<MetricLabel>& _customMetricLabels)
{
    m_customMetricLabels = _customMetricLabels;
    m_customMetricLabelsHasBeenSet = true;
}

bool CreateRecordingRuleTaskRequest::CustomMetricLabelsHasBeenSet() const
{
    return m_customMetricLabelsHasBeenSet;
}

uint64_t CreateRecordingRuleTaskRequest::GetHasServicesLog() const
{
    return m_hasServicesLog;
}

void CreateRecordingRuleTaskRequest::SetHasServicesLog(const uint64_t& _hasServicesLog)
{
    m_hasServicesLog = _hasServicesLog;
    m_hasServicesLogHasBeenSet = true;
}

bool CreateRecordingRuleTaskRequest::HasServicesLogHasBeenSet() const
{
    return m_hasServicesLogHasBeenSet;
}


