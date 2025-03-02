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

#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayCanaryRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CreateCloudNativeAPIGatewayCanaryRuleRequest::CreateCloudNativeAPIGatewayCanaryRuleRequest() :
    m_gatewayIdHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_canaryRuleHasBeenSet(false),
    m_canaryRuleListHasBeenSet(false)
{
}

string CreateCloudNativeAPIGatewayCanaryRuleRequest::ToJsonString() const
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


string CreateCloudNativeAPIGatewayCanaryRuleRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void CreateCloudNativeAPIGatewayCanaryRuleRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayCanaryRuleRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string CreateCloudNativeAPIGatewayCanaryRuleRequest::GetServiceId() const
{
    return m_serviceId;
}

void CreateCloudNativeAPIGatewayCanaryRuleRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayCanaryRuleRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

CloudNativeAPIGatewayCanaryRule CreateCloudNativeAPIGatewayCanaryRuleRequest::GetCanaryRule() const
{
    return m_canaryRule;
}

void CreateCloudNativeAPIGatewayCanaryRuleRequest::SetCanaryRule(const CloudNativeAPIGatewayCanaryRule& _canaryRule)
{
    m_canaryRule = _canaryRule;
    m_canaryRuleHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayCanaryRuleRequest::CanaryRuleHasBeenSet() const
{
    return m_canaryRuleHasBeenSet;
}

vector<CloudNativeAPIGatewayCanaryRule> CreateCloudNativeAPIGatewayCanaryRuleRequest::GetCanaryRuleList() const
{
    return m_canaryRuleList;
}

void CreateCloudNativeAPIGatewayCanaryRuleRequest::SetCanaryRuleList(const vector<CloudNativeAPIGatewayCanaryRule>& _canaryRuleList)
{
    m_canaryRuleList = _canaryRuleList;
    m_canaryRuleListHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayCanaryRuleRequest::CanaryRuleListHasBeenSet() const
{
    return m_canaryRuleListHasBeenSet;
}


