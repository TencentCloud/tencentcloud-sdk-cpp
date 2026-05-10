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

#include <tencentcloud/cls/v20201016/model/CreateRecordingRuleYamlTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateRecordingRuleYamlTaskRequest::CreateRecordingRuleYamlTaskRequest() :
    m_topicIdHasBeenSet(false),
    m_dstTopicIdHasBeenSet(false),
    m_enableFlagHasBeenSet(false),
    m_processStartTimeHasBeenSet(false),
    m_processPeriodHasBeenSet(false),
    m_processDelayHasBeenSet(false),
    m_yamlConfigNameHasBeenSet(false),
    m_yamlContentHasBeenSet(false),
    m_hasServicesLogHasBeenSet(false)
{
}

string CreateRecordingRuleYamlTaskRequest::ToJsonString() const
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

    if (m_yamlConfigNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YamlConfigName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_yamlConfigName.c_str(), allocator).Move(), allocator);
    }

    if (m_yamlContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YamlContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_yamlContent.c_str(), allocator).Move(), allocator);
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


string CreateRecordingRuleYamlTaskRequest::GetTopicId() const
{
    return m_topicId;
}

void CreateRecordingRuleYamlTaskRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CreateRecordingRuleYamlTaskRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string CreateRecordingRuleYamlTaskRequest::GetDstTopicId() const
{
    return m_dstTopicId;
}

void CreateRecordingRuleYamlTaskRequest::SetDstTopicId(const string& _dstTopicId)
{
    m_dstTopicId = _dstTopicId;
    m_dstTopicIdHasBeenSet = true;
}

bool CreateRecordingRuleYamlTaskRequest::DstTopicIdHasBeenSet() const
{
    return m_dstTopicIdHasBeenSet;
}

uint64_t CreateRecordingRuleYamlTaskRequest::GetEnableFlag() const
{
    return m_enableFlag;
}

void CreateRecordingRuleYamlTaskRequest::SetEnableFlag(const uint64_t& _enableFlag)
{
    m_enableFlag = _enableFlag;
    m_enableFlagHasBeenSet = true;
}

bool CreateRecordingRuleYamlTaskRequest::EnableFlagHasBeenSet() const
{
    return m_enableFlagHasBeenSet;
}

uint64_t CreateRecordingRuleYamlTaskRequest::GetProcessStartTime() const
{
    return m_processStartTime;
}

void CreateRecordingRuleYamlTaskRequest::SetProcessStartTime(const uint64_t& _processStartTime)
{
    m_processStartTime = _processStartTime;
    m_processStartTimeHasBeenSet = true;
}

bool CreateRecordingRuleYamlTaskRequest::ProcessStartTimeHasBeenSet() const
{
    return m_processStartTimeHasBeenSet;
}

int64_t CreateRecordingRuleYamlTaskRequest::GetProcessPeriod() const
{
    return m_processPeriod;
}

void CreateRecordingRuleYamlTaskRequest::SetProcessPeriod(const int64_t& _processPeriod)
{
    m_processPeriod = _processPeriod;
    m_processPeriodHasBeenSet = true;
}

bool CreateRecordingRuleYamlTaskRequest::ProcessPeriodHasBeenSet() const
{
    return m_processPeriodHasBeenSet;
}

int64_t CreateRecordingRuleYamlTaskRequest::GetProcessDelay() const
{
    return m_processDelay;
}

void CreateRecordingRuleYamlTaskRequest::SetProcessDelay(const int64_t& _processDelay)
{
    m_processDelay = _processDelay;
    m_processDelayHasBeenSet = true;
}

bool CreateRecordingRuleYamlTaskRequest::ProcessDelayHasBeenSet() const
{
    return m_processDelayHasBeenSet;
}

string CreateRecordingRuleYamlTaskRequest::GetYamlConfigName() const
{
    return m_yamlConfigName;
}

void CreateRecordingRuleYamlTaskRequest::SetYamlConfigName(const string& _yamlConfigName)
{
    m_yamlConfigName = _yamlConfigName;
    m_yamlConfigNameHasBeenSet = true;
}

bool CreateRecordingRuleYamlTaskRequest::YamlConfigNameHasBeenSet() const
{
    return m_yamlConfigNameHasBeenSet;
}

string CreateRecordingRuleYamlTaskRequest::GetYamlContent() const
{
    return m_yamlContent;
}

void CreateRecordingRuleYamlTaskRequest::SetYamlContent(const string& _yamlContent)
{
    m_yamlContent = _yamlContent;
    m_yamlContentHasBeenSet = true;
}

bool CreateRecordingRuleYamlTaskRequest::YamlContentHasBeenSet() const
{
    return m_yamlContentHasBeenSet;
}

uint64_t CreateRecordingRuleYamlTaskRequest::GetHasServicesLog() const
{
    return m_hasServicesLog;
}

void CreateRecordingRuleYamlTaskRequest::SetHasServicesLog(const uint64_t& _hasServicesLog)
{
    m_hasServicesLog = _hasServicesLog;
    m_hasServicesLogHasBeenSet = true;
}

bool CreateRecordingRuleYamlTaskRequest::HasServicesLogHasBeenSet() const
{
    return m_hasServicesLogHasBeenSet;
}


