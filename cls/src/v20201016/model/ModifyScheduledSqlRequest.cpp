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

#include <tencentcloud/cls/v20201016/model/ModifyScheduledSqlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyScheduledSqlRequest::ModifyScheduledSqlRequest() :
    m_taskIdHasBeenSet(false),
    m_srcTopicIdHasBeenSet(false),
    m_enableFlagHasBeenSet(false),
    m_dstResourceHasBeenSet(false),
    m_scheduledSqlContentHasBeenSet(false),
    m_processPeriodHasBeenSet(false),
    m_processTimeWindowHasBeenSet(false),
    m_processDelayHasBeenSet(false),
    m_srcTopicRegionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_syntaxRuleHasBeenSet(false)
{
}

string ModifyScheduledSqlRequest::ToJsonString() const
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

    if (m_srcTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcTopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableFlag, allocator);
    }

    if (m_dstResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstResource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dstResource.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_scheduledSqlContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledSqlContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduledSqlContent.c_str(), allocator).Move(), allocator);
    }

    if (m_processPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_processPeriod, allocator);
    }

    if (m_processTimeWindowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessTimeWindow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_processTimeWindow.c_str(), allocator).Move(), allocator);
    }

    if (m_processDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessDelay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_processDelay, allocator);
    }

    if (m_srcTopicRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcTopicRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcTopicRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_syntaxRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyntaxRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_syntaxRule, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyScheduledSqlRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifyScheduledSqlRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifyScheduledSqlRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ModifyScheduledSqlRequest::GetSrcTopicId() const
{
    return m_srcTopicId;
}

void ModifyScheduledSqlRequest::SetSrcTopicId(const string& _srcTopicId)
{
    m_srcTopicId = _srcTopicId;
    m_srcTopicIdHasBeenSet = true;
}

bool ModifyScheduledSqlRequest::SrcTopicIdHasBeenSet() const
{
    return m_srcTopicIdHasBeenSet;
}

int64_t ModifyScheduledSqlRequest::GetEnableFlag() const
{
    return m_enableFlag;
}

void ModifyScheduledSqlRequest::SetEnableFlag(const int64_t& _enableFlag)
{
    m_enableFlag = _enableFlag;
    m_enableFlagHasBeenSet = true;
}

bool ModifyScheduledSqlRequest::EnableFlagHasBeenSet() const
{
    return m_enableFlagHasBeenSet;
}

ScheduledSqlResouceInfo ModifyScheduledSqlRequest::GetDstResource() const
{
    return m_dstResource;
}

void ModifyScheduledSqlRequest::SetDstResource(const ScheduledSqlResouceInfo& _dstResource)
{
    m_dstResource = _dstResource;
    m_dstResourceHasBeenSet = true;
}

bool ModifyScheduledSqlRequest::DstResourceHasBeenSet() const
{
    return m_dstResourceHasBeenSet;
}

string ModifyScheduledSqlRequest::GetScheduledSqlContent() const
{
    return m_scheduledSqlContent;
}

void ModifyScheduledSqlRequest::SetScheduledSqlContent(const string& _scheduledSqlContent)
{
    m_scheduledSqlContent = _scheduledSqlContent;
    m_scheduledSqlContentHasBeenSet = true;
}

bool ModifyScheduledSqlRequest::ScheduledSqlContentHasBeenSet() const
{
    return m_scheduledSqlContentHasBeenSet;
}

int64_t ModifyScheduledSqlRequest::GetProcessPeriod() const
{
    return m_processPeriod;
}

void ModifyScheduledSqlRequest::SetProcessPeriod(const int64_t& _processPeriod)
{
    m_processPeriod = _processPeriod;
    m_processPeriodHasBeenSet = true;
}

bool ModifyScheduledSqlRequest::ProcessPeriodHasBeenSet() const
{
    return m_processPeriodHasBeenSet;
}

string ModifyScheduledSqlRequest::GetProcessTimeWindow() const
{
    return m_processTimeWindow;
}

void ModifyScheduledSqlRequest::SetProcessTimeWindow(const string& _processTimeWindow)
{
    m_processTimeWindow = _processTimeWindow;
    m_processTimeWindowHasBeenSet = true;
}

bool ModifyScheduledSqlRequest::ProcessTimeWindowHasBeenSet() const
{
    return m_processTimeWindowHasBeenSet;
}

int64_t ModifyScheduledSqlRequest::GetProcessDelay() const
{
    return m_processDelay;
}

void ModifyScheduledSqlRequest::SetProcessDelay(const int64_t& _processDelay)
{
    m_processDelay = _processDelay;
    m_processDelayHasBeenSet = true;
}

bool ModifyScheduledSqlRequest::ProcessDelayHasBeenSet() const
{
    return m_processDelayHasBeenSet;
}

string ModifyScheduledSqlRequest::GetSrcTopicRegion() const
{
    return m_srcTopicRegion;
}

void ModifyScheduledSqlRequest::SetSrcTopicRegion(const string& _srcTopicRegion)
{
    m_srcTopicRegion = _srcTopicRegion;
    m_srcTopicRegionHasBeenSet = true;
}

bool ModifyScheduledSqlRequest::SrcTopicRegionHasBeenSet() const
{
    return m_srcTopicRegionHasBeenSet;
}

string ModifyScheduledSqlRequest::GetName() const
{
    return m_name;
}

void ModifyScheduledSqlRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyScheduledSqlRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ModifyScheduledSqlRequest::GetSyntaxRule() const
{
    return m_syntaxRule;
}

void ModifyScheduledSqlRequest::SetSyntaxRule(const uint64_t& _syntaxRule)
{
    m_syntaxRule = _syntaxRule;
    m_syntaxRuleHasBeenSet = true;
}

bool ModifyScheduledSqlRequest::SyntaxRuleHasBeenSet() const
{
    return m_syntaxRuleHasBeenSet;
}


