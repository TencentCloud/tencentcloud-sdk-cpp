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

#include <tencentcloud/clb/v20180317/model/SetCustomizedConfigForLoadBalancerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

SetCustomizedConfigForLoadBalancerRequest::SetCustomizedConfigForLoadBalancerRequest() :
    m_operationTypeHasBeenSet(false),
    m_uconfigIdHasBeenSet(false),
    m_configContentHasBeenSet(false),
    m_configNameHasBeenSet(false),
    m_loadBalancerIdsHasBeenSet(false)
{
}

string SetCustomizedConfigForLoadBalancerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operationType.c_str(), allocator).Move(), allocator);
    }

    if (m_uconfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UconfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uconfigId.c_str(), allocator).Move(), allocator);
    }

    if (m_configContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configContent.c_str(), allocator).Move(), allocator);
    }

    if (m_configNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configName.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_loadBalancerIds.begin(); itr != m_loadBalancerIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetCustomizedConfigForLoadBalancerRequest::GetOperationType() const
{
    return m_operationType;
}

void SetCustomizedConfigForLoadBalancerRequest::SetOperationType(const string& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool SetCustomizedConfigForLoadBalancerRequest::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

string SetCustomizedConfigForLoadBalancerRequest::GetUconfigId() const
{
    return m_uconfigId;
}

void SetCustomizedConfigForLoadBalancerRequest::SetUconfigId(const string& _uconfigId)
{
    m_uconfigId = _uconfigId;
    m_uconfigIdHasBeenSet = true;
}

bool SetCustomizedConfigForLoadBalancerRequest::UconfigIdHasBeenSet() const
{
    return m_uconfigIdHasBeenSet;
}

string SetCustomizedConfigForLoadBalancerRequest::GetConfigContent() const
{
    return m_configContent;
}

void SetCustomizedConfigForLoadBalancerRequest::SetConfigContent(const string& _configContent)
{
    m_configContent = _configContent;
    m_configContentHasBeenSet = true;
}

bool SetCustomizedConfigForLoadBalancerRequest::ConfigContentHasBeenSet() const
{
    return m_configContentHasBeenSet;
}

string SetCustomizedConfigForLoadBalancerRequest::GetConfigName() const
{
    return m_configName;
}

void SetCustomizedConfigForLoadBalancerRequest::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool SetCustomizedConfigForLoadBalancerRequest::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

vector<string> SetCustomizedConfigForLoadBalancerRequest::GetLoadBalancerIds() const
{
    return m_loadBalancerIds;
}

void SetCustomizedConfigForLoadBalancerRequest::SetLoadBalancerIds(const vector<string>& _loadBalancerIds)
{
    m_loadBalancerIds = _loadBalancerIds;
    m_loadBalancerIdsHasBeenSet = true;
}

bool SetCustomizedConfigForLoadBalancerRequest::LoadBalancerIdsHasBeenSet() const
{
    return m_loadBalancerIdsHasBeenSet;
}


