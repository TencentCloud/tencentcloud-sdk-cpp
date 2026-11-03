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

#include <tencentcloud/workbuddyenterprise/v20260709/model/CreateScheduledTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

CreateScheduledTaskRequest::CreateScheduledTaskRequest() :
    m_taskNameHasBeenSet(false),
    m_agentConfigHasBeenSet(false),
    m_cronExprHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_frequencyTypeHasBeenSet(false),
    m_effectiveStartHasBeenSet(false),
    m_effectiveEndHasBeenSet(false),
    m_deliveryTargetSetHasBeenSet(false)
{
}

string CreateScheduledTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_agentConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agentConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cronExprHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronExpr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cronExpr.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_frequencyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrequencyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_frequencyType.c_str(), allocator).Move(), allocator);
    }

    if (m_effectiveStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_effectiveStart.c_str(), allocator).Move(), allocator);
    }

    if (m_effectiveEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_effectiveEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_deliveryTargetSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryTargetSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deliveryTargetSet.begin(); itr != m_deliveryTargetSet.end(); ++itr, ++i)
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


string CreateScheduledTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void CreateScheduledTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateScheduledTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

AgentConfig CreateScheduledTaskRequest::GetAgentConfig() const
{
    return m_agentConfig;
}

void CreateScheduledTaskRequest::SetAgentConfig(const AgentConfig& _agentConfig)
{
    m_agentConfig = _agentConfig;
    m_agentConfigHasBeenSet = true;
}

bool CreateScheduledTaskRequest::AgentConfigHasBeenSet() const
{
    return m_agentConfigHasBeenSet;
}

string CreateScheduledTaskRequest::GetCronExpr() const
{
    return m_cronExpr;
}

void CreateScheduledTaskRequest::SetCronExpr(const string& _cronExpr)
{
    m_cronExpr = _cronExpr;
    m_cronExprHasBeenSet = true;
}

bool CreateScheduledTaskRequest::CronExprHasBeenSet() const
{
    return m_cronExprHasBeenSet;
}

string CreateScheduledTaskRequest::GetDescription() const
{
    return m_description;
}

void CreateScheduledTaskRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateScheduledTaskRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateScheduledTaskRequest::GetFrequencyType() const
{
    return m_frequencyType;
}

void CreateScheduledTaskRequest::SetFrequencyType(const string& _frequencyType)
{
    m_frequencyType = _frequencyType;
    m_frequencyTypeHasBeenSet = true;
}

bool CreateScheduledTaskRequest::FrequencyTypeHasBeenSet() const
{
    return m_frequencyTypeHasBeenSet;
}

string CreateScheduledTaskRequest::GetEffectiveStart() const
{
    return m_effectiveStart;
}

void CreateScheduledTaskRequest::SetEffectiveStart(const string& _effectiveStart)
{
    m_effectiveStart = _effectiveStart;
    m_effectiveStartHasBeenSet = true;
}

bool CreateScheduledTaskRequest::EffectiveStartHasBeenSet() const
{
    return m_effectiveStartHasBeenSet;
}

string CreateScheduledTaskRequest::GetEffectiveEnd() const
{
    return m_effectiveEnd;
}

void CreateScheduledTaskRequest::SetEffectiveEnd(const string& _effectiveEnd)
{
    m_effectiveEnd = _effectiveEnd;
    m_effectiveEndHasBeenSet = true;
}

bool CreateScheduledTaskRequest::EffectiveEndHasBeenSet() const
{
    return m_effectiveEndHasBeenSet;
}

vector<DeliveryTarget> CreateScheduledTaskRequest::GetDeliveryTargetSet() const
{
    return m_deliveryTargetSet;
}

void CreateScheduledTaskRequest::SetDeliveryTargetSet(const vector<DeliveryTarget>& _deliveryTargetSet)
{
    m_deliveryTargetSet = _deliveryTargetSet;
    m_deliveryTargetSetHasBeenSet = true;
}

bool CreateScheduledTaskRequest::DeliveryTargetSetHasBeenSet() const
{
    return m_deliveryTargetSetHasBeenSet;
}


