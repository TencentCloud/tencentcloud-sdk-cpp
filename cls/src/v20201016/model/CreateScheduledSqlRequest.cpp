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

#include <tencentcloud/cls/v20201016/model/CreateScheduledSqlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateScheduledSqlRequest::CreateScheduledSqlRequest() :
    m_srcTopicIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_enableFlagHasBeenSet(false),
    m_dstResourceHasBeenSet(false),
    m_scheduledSqlContentHasBeenSet(false),
    m_processStartTimeHasBeenSet(false),
    m_processTypeHasBeenSet(false),
    m_processPeriodHasBeenSet(false),
    m_processTimeWindowHasBeenSet(false),
    m_processDelayHasBeenSet(false),
    m_srcTopicRegionHasBeenSet(false),
    m_processEndTimeHasBeenSet(false),
    m_syntaxRuleHasBeenSet(false)
{
}

string CreateScheduledSqlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_srcTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcTopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcTopicId.c_str(), allocator).Move(), allocator);
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

    if (m_processStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_processStartTime, allocator);
    }

    if (m_processTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_processType, allocator);
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

    if (m_processEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_processEndTime, allocator);
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


string CreateScheduledSqlRequest::GetSrcTopicId() const
{
    return m_srcTopicId;
}

void CreateScheduledSqlRequest::SetSrcTopicId(const string& _srcTopicId)
{
    m_srcTopicId = _srcTopicId;
    m_srcTopicIdHasBeenSet = true;
}

bool CreateScheduledSqlRequest::SrcTopicIdHasBeenSet() const
{
    return m_srcTopicIdHasBeenSet;
}

string CreateScheduledSqlRequest::GetName() const
{
    return m_name;
}

void CreateScheduledSqlRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateScheduledSqlRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CreateScheduledSqlRequest::GetEnableFlag() const
{
    return m_enableFlag;
}

void CreateScheduledSqlRequest::SetEnableFlag(const int64_t& _enableFlag)
{
    m_enableFlag = _enableFlag;
    m_enableFlagHasBeenSet = true;
}

bool CreateScheduledSqlRequest::EnableFlagHasBeenSet() const
{
    return m_enableFlagHasBeenSet;
}

ScheduledSqlResouceInfo CreateScheduledSqlRequest::GetDstResource() const
{
    return m_dstResource;
}

void CreateScheduledSqlRequest::SetDstResource(const ScheduledSqlResouceInfo& _dstResource)
{
    m_dstResource = _dstResource;
    m_dstResourceHasBeenSet = true;
}

bool CreateScheduledSqlRequest::DstResourceHasBeenSet() const
{
    return m_dstResourceHasBeenSet;
}

string CreateScheduledSqlRequest::GetScheduledSqlContent() const
{
    return m_scheduledSqlContent;
}

void CreateScheduledSqlRequest::SetScheduledSqlContent(const string& _scheduledSqlContent)
{
    m_scheduledSqlContent = _scheduledSqlContent;
    m_scheduledSqlContentHasBeenSet = true;
}

bool CreateScheduledSqlRequest::ScheduledSqlContentHasBeenSet() const
{
    return m_scheduledSqlContentHasBeenSet;
}

uint64_t CreateScheduledSqlRequest::GetProcessStartTime() const
{
    return m_processStartTime;
}

void CreateScheduledSqlRequest::SetProcessStartTime(const uint64_t& _processStartTime)
{
    m_processStartTime = _processStartTime;
    m_processStartTimeHasBeenSet = true;
}

bool CreateScheduledSqlRequest::ProcessStartTimeHasBeenSet() const
{
    return m_processStartTimeHasBeenSet;
}

int64_t CreateScheduledSqlRequest::GetProcessType() const
{
    return m_processType;
}

void CreateScheduledSqlRequest::SetProcessType(const int64_t& _processType)
{
    m_processType = _processType;
    m_processTypeHasBeenSet = true;
}

bool CreateScheduledSqlRequest::ProcessTypeHasBeenSet() const
{
    return m_processTypeHasBeenSet;
}

int64_t CreateScheduledSqlRequest::GetProcessPeriod() const
{
    return m_processPeriod;
}

void CreateScheduledSqlRequest::SetProcessPeriod(const int64_t& _processPeriod)
{
    m_processPeriod = _processPeriod;
    m_processPeriodHasBeenSet = true;
}

bool CreateScheduledSqlRequest::ProcessPeriodHasBeenSet() const
{
    return m_processPeriodHasBeenSet;
}

string CreateScheduledSqlRequest::GetProcessTimeWindow() const
{
    return m_processTimeWindow;
}

void CreateScheduledSqlRequest::SetProcessTimeWindow(const string& _processTimeWindow)
{
    m_processTimeWindow = _processTimeWindow;
    m_processTimeWindowHasBeenSet = true;
}

bool CreateScheduledSqlRequest::ProcessTimeWindowHasBeenSet() const
{
    return m_processTimeWindowHasBeenSet;
}

int64_t CreateScheduledSqlRequest::GetProcessDelay() const
{
    return m_processDelay;
}

void CreateScheduledSqlRequest::SetProcessDelay(const int64_t& _processDelay)
{
    m_processDelay = _processDelay;
    m_processDelayHasBeenSet = true;
}

bool CreateScheduledSqlRequest::ProcessDelayHasBeenSet() const
{
    return m_processDelayHasBeenSet;
}

string CreateScheduledSqlRequest::GetSrcTopicRegion() const
{
    return m_srcTopicRegion;
}

void CreateScheduledSqlRequest::SetSrcTopicRegion(const string& _srcTopicRegion)
{
    m_srcTopicRegion = _srcTopicRegion;
    m_srcTopicRegionHasBeenSet = true;
}

bool CreateScheduledSqlRequest::SrcTopicRegionHasBeenSet() const
{
    return m_srcTopicRegionHasBeenSet;
}

uint64_t CreateScheduledSqlRequest::GetProcessEndTime() const
{
    return m_processEndTime;
}

void CreateScheduledSqlRequest::SetProcessEndTime(const uint64_t& _processEndTime)
{
    m_processEndTime = _processEndTime;
    m_processEndTimeHasBeenSet = true;
}

bool CreateScheduledSqlRequest::ProcessEndTimeHasBeenSet() const
{
    return m_processEndTimeHasBeenSet;
}

uint64_t CreateScheduledSqlRequest::GetSyntaxRule() const
{
    return m_syntaxRule;
}

void CreateScheduledSqlRequest::SetSyntaxRule(const uint64_t& _syntaxRule)
{
    m_syntaxRule = _syntaxRule;
    m_syntaxRuleHasBeenSet = true;
}

bool CreateScheduledSqlRequest::SyntaxRuleHasBeenSet() const
{
    return m_syntaxRuleHasBeenSet;
}


