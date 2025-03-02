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

#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayCanaryRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DeleteCloudNativeAPIGatewayCanaryRuleRequest::DeleteCloudNativeAPIGatewayCanaryRuleRequest() :
    m_gatewayIdHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_priorityListHasBeenSet(false)
{
}

string DeleteCloudNativeAPIGatewayCanaryRuleRequest::ToJsonString() const
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

    if (m_priorityListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriorityList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_priorityList.begin(); itr != m_priorityList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteCloudNativeAPIGatewayCanaryRuleRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void DeleteCloudNativeAPIGatewayCanaryRuleRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool DeleteCloudNativeAPIGatewayCanaryRuleRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string DeleteCloudNativeAPIGatewayCanaryRuleRequest::GetServiceId() const
{
    return m_serviceId;
}

void DeleteCloudNativeAPIGatewayCanaryRuleRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool DeleteCloudNativeAPIGatewayCanaryRuleRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

int64_t DeleteCloudNativeAPIGatewayCanaryRuleRequest::GetPriority() const
{
    return m_priority;
}

void DeleteCloudNativeAPIGatewayCanaryRuleRequest::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool DeleteCloudNativeAPIGatewayCanaryRuleRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

vector<int64_t> DeleteCloudNativeAPIGatewayCanaryRuleRequest::GetPriorityList() const
{
    return m_priorityList;
}

void DeleteCloudNativeAPIGatewayCanaryRuleRequest::SetPriorityList(const vector<int64_t>& _priorityList)
{
    m_priorityList = _priorityList;
    m_priorityListHasBeenSet = true;
}

bool DeleteCloudNativeAPIGatewayCanaryRuleRequest::PriorityListHasBeenSet() const
{
    return m_priorityListHasBeenSet;
}


