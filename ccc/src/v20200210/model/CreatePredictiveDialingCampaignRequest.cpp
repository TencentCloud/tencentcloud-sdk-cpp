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

#include <tencentcloud/ccc/v20200210/model/CreatePredictiveDialingCampaignRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

CreatePredictiveDialingCampaignRequest::CreatePredictiveDialingCampaignRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_calleesHasBeenSet(false),
    m_callersHasBeenSet(false),
    m_callOrderHasBeenSet(false),
    m_skillGroupIdHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_expectedAbandonRateHasBeenSet(false),
    m_retryIntervalHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_iVRIdHasBeenSet(false),
    m_retryTimesHasBeenSet(false),
    m_variablesHasBeenSet(false),
    m_uUIHasBeenSet(false),
    m_calleeAttributesHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_availableTimeHasBeenSet(false)
{
}

string CreatePredictiveDialingCampaignRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_calleesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callees";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_callees.begin(); itr != m_callees.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_callersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_callers.begin(); itr != m_callers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_callOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_callOrder, allocator);
    }

    if (m_skillGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_skillGroupId, allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priority, allocator);
    }

    if (m_expectedAbandonRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectedAbandonRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expectedAbandonRate, allocator);
    }

    if (m_retryIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retryInterval, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_iVRIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IVRId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iVRId, allocator);
    }

    if (m_retryTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryTimes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retryTimes, allocator);
    }

    if (m_variablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Variables";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_variables.begin(); itr != m_variables.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_uUIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUI";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uUI.c_str(), allocator).Move(), allocator);
    }

    if (m_calleeAttributesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalleeAttributes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_calleeAttributes.begin(); itr != m_calleeAttributes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_availableTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_availableTime.begin(); itr != m_availableTime.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreatePredictiveDialingCampaignRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreatePredictiveDialingCampaignRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreatePredictiveDialingCampaignRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string CreatePredictiveDialingCampaignRequest::GetName() const
{
    return m_name;
}

void CreatePredictiveDialingCampaignRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreatePredictiveDialingCampaignRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> CreatePredictiveDialingCampaignRequest::GetCallees() const
{
    return m_callees;
}

void CreatePredictiveDialingCampaignRequest::SetCallees(const vector<string>& _callees)
{
    m_callees = _callees;
    m_calleesHasBeenSet = true;
}

bool CreatePredictiveDialingCampaignRequest::CalleesHasBeenSet() const
{
    return m_calleesHasBeenSet;
}

vector<string> CreatePredictiveDialingCampaignRequest::GetCallers() const
{
    return m_callers;
}

void CreatePredictiveDialingCampaignRequest::SetCallers(const vector<string>& _callers)
{
    m_callers = _callers;
    m_callersHasBeenSet = true;
}

bool CreatePredictiveDialingCampaignRequest::CallersHasBeenSet() const
{
    return m_callersHasBeenSet;
}

int64_t CreatePredictiveDialingCampaignRequest::GetCallOrder() const
{
    return m_callOrder;
}

void CreatePredictiveDialingCampaignRequest::SetCallOrder(const int64_t& _callOrder)
{
    m_callOrder = _callOrder;
    m_callOrderHasBeenSet = true;
}

bool CreatePredictiveDialingCampaignRequest::CallOrderHasBeenSet() const
{
    return m_callOrderHasBeenSet;
}

int64_t CreatePredictiveDialingCampaignRequest::GetSkillGroupId() const
{
    return m_skillGroupId;
}

void CreatePredictiveDialingCampaignRequest::SetSkillGroupId(const int64_t& _skillGroupId)
{
    m_skillGroupId = _skillGroupId;
    m_skillGroupIdHasBeenSet = true;
}

bool CreatePredictiveDialingCampaignRequest::SkillGroupIdHasBeenSet() const
{
    return m_skillGroupIdHasBeenSet;
}

int64_t CreatePredictiveDialingCampaignRequest::GetPriority() const
{
    return m_priority;
}

void CreatePredictiveDialingCampaignRequest::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CreatePredictiveDialingCampaignRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

int64_t CreatePredictiveDialingCampaignRequest::GetExpectedAbandonRate() const
{
    return m_expectedAbandonRate;
}

void CreatePredictiveDialingCampaignRequest::SetExpectedAbandonRate(const int64_t& _expectedAbandonRate)
{
    m_expectedAbandonRate = _expectedAbandonRate;
    m_expectedAbandonRateHasBeenSet = true;
}

bool CreatePredictiveDialingCampaignRequest::ExpectedAbandonRateHasBeenSet() const
{
    return m_expectedAbandonRateHasBeenSet;
}

int64_t CreatePredictiveDialingCampaignRequest::GetRetryInterval() const
{
    return m_retryInterval;
}

void CreatePredictiveDialingCampaignRequest::SetRetryInterval(const int64_t& _retryInterval)
{
    m_retryInterval = _retryInterval;
    m_retryIntervalHasBeenSet = true;
}

bool CreatePredictiveDialingCampaignRequest::RetryIntervalHasBeenSet() const
{
    return m_retryIntervalHasBeenSet;
}

int64_t CreatePredictiveDialingCampaignRequest::GetStartTime() const
{
    return m_startTime;
}

void CreatePredictiveDialingCampaignRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreatePredictiveDialingCampaignRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t CreatePredictiveDialingCampaignRequest::GetEndTime() const
{
    return m_endTime;
}

void CreatePredictiveDialingCampaignRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreatePredictiveDialingCampaignRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t CreatePredictiveDialingCampaignRequest::GetIVRId() const
{
    return m_iVRId;
}

void CreatePredictiveDialingCampaignRequest::SetIVRId(const int64_t& _iVRId)
{
    m_iVRId = _iVRId;
    m_iVRIdHasBeenSet = true;
}

bool CreatePredictiveDialingCampaignRequest::IVRIdHasBeenSet() const
{
    return m_iVRIdHasBeenSet;
}

int64_t CreatePredictiveDialingCampaignRequest::GetRetryTimes() const
{
    return m_retryTimes;
}

void CreatePredictiveDialingCampaignRequest::SetRetryTimes(const int64_t& _retryTimes)
{
    m_retryTimes = _retryTimes;
    m_retryTimesHasBeenSet = true;
}

bool CreatePredictiveDialingCampaignRequest::RetryTimesHasBeenSet() const
{
    return m_retryTimesHasBeenSet;
}

vector<Variable> CreatePredictiveDialingCampaignRequest::GetVariables() const
{
    return m_variables;
}

void CreatePredictiveDialingCampaignRequest::SetVariables(const vector<Variable>& _variables)
{
    m_variables = _variables;
    m_variablesHasBeenSet = true;
}

bool CreatePredictiveDialingCampaignRequest::VariablesHasBeenSet() const
{
    return m_variablesHasBeenSet;
}

string CreatePredictiveDialingCampaignRequest::GetUUI() const
{
    return m_uUI;
}

void CreatePredictiveDialingCampaignRequest::SetUUI(const string& _uUI)
{
    m_uUI = _uUI;
    m_uUIHasBeenSet = true;
}

bool CreatePredictiveDialingCampaignRequest::UUIHasBeenSet() const
{
    return m_uUIHasBeenSet;
}

vector<CalleeAttribute> CreatePredictiveDialingCampaignRequest::GetCalleeAttributes() const
{
    return m_calleeAttributes;
}

void CreatePredictiveDialingCampaignRequest::SetCalleeAttributes(const vector<CalleeAttribute>& _calleeAttributes)
{
    m_calleeAttributes = _calleeAttributes;
    m_calleeAttributesHasBeenSet = true;
}

bool CreatePredictiveDialingCampaignRequest::CalleeAttributesHasBeenSet() const
{
    return m_calleeAttributesHasBeenSet;
}

string CreatePredictiveDialingCampaignRequest::GetTimeZone() const
{
    return m_timeZone;
}

void CreatePredictiveDialingCampaignRequest::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool CreatePredictiveDialingCampaignRequest::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

vector<TimeRange> CreatePredictiveDialingCampaignRequest::GetAvailableTime() const
{
    return m_availableTime;
}

void CreatePredictiveDialingCampaignRequest::SetAvailableTime(const vector<TimeRange>& _availableTime)
{
    m_availableTime = _availableTime;
    m_availableTimeHasBeenSet = true;
}

bool CreatePredictiveDialingCampaignRequest::AvailableTimeHasBeenSet() const
{
    return m_availableTimeHasBeenSet;
}


