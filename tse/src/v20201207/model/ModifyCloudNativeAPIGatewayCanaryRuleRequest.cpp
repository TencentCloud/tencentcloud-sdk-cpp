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

#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayCanaryRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ModifyCloudNativeAPIGatewayCanaryRuleRequest::ModifyCloudNativeAPIGatewayCanaryRuleRequest() :
    m_gatewayIdHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_canaryRuleHasBeenSet(false),
    m_canaryRuleListHasBeenSet(false)
{
}

string ModifyCloudNativeAPIGatewayCanaryRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priority, allocator);
    }

    if (m_canaryRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanaryRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_canaryRule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_canaryRuleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanaryRuleList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_canaryRuleList.begin(); itr != m_canaryRuleList.end(); ++itr, ++i)
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


string ModifyCloudNativeAPIGatewayCanaryRuleRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void ModifyCloudNativeAPIGatewayCanaryRuleRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayCanaryRuleRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayCanaryRuleRequest::GetServiceId() const
{
    return m_serviceId;
}

void ModifyCloudNativeAPIGatewayCanaryRuleRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayCanaryRuleRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

int64_t ModifyCloudNativeAPIGatewayCanaryRuleRequest::GetPriority() const
{
    return m_priority;
}

void ModifyCloudNativeAPIGatewayCanaryRuleRequest::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayCanaryRuleRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

CloudNativeAPIGatewayCanaryRule ModifyCloudNativeAPIGatewayCanaryRuleRequest::GetCanaryRule() const
{
    return m_canaryRule;
}

void ModifyCloudNativeAPIGatewayCanaryRuleRequest::SetCanaryRule(const CloudNativeAPIGatewayCanaryRule& _canaryRule)
{
    m_canaryRule = _canaryRule;
    m_canaryRuleHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayCanaryRuleRequest::CanaryRuleHasBeenSet() const
{
    return m_canaryRuleHasBeenSet;
}

vector<CanaryPriorityRule> ModifyCloudNativeAPIGatewayCanaryRuleRequest::GetCanaryRuleList() const
{
    return m_canaryRuleList;
}

void ModifyCloudNativeAPIGatewayCanaryRuleRequest::SetCanaryRuleList(const vector<CanaryPriorityRule>& _canaryRuleList)
{
    m_canaryRuleList = _canaryRuleList;
    m_canaryRuleListHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayCanaryRuleRequest::CanaryRuleListHasBeenSet() const
{
    return m_canaryRuleListHasBeenSet;
}


