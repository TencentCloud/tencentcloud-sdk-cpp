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

#include <tencentcloud/essbasic/v20210526/model/CreateBatchInitOrganizationUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CreateBatchInitOrganizationUrlRequest::CreateBatchInitOrganizationUrlRequest() :
    m_agentHasBeenSet(false),
    m_operateTypesHasBeenSet(false),
    m_proxyOrganizationOpenIdsHasBeenSet(false),
    m_isAuthorizePlatformApplicationHasBeenSet(false),
    m_authorizedProxyOrganizationOpenIdHasBeenSet(false)
{
}

string CreateBatchInitOrganizationUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_operateTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_operateTypes.begin(); itr != m_operateTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_proxyOrganizationOpenIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyOrganizationOpenIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_proxyOrganizationOpenIds.begin(); itr != m_proxyOrganizationOpenIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isAuthorizePlatformApplicationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAuthorizePlatformApplication";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAuthorizePlatformApplication, allocator);
    }

    if (m_authorizedProxyOrganizationOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedProxyOrganizationOpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authorizedProxyOrganizationOpenId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent CreateBatchInitOrganizationUrlRequest::GetAgent() const
{
    return m_agent;
}

void CreateBatchInitOrganizationUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateBatchInitOrganizationUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

vector<string> CreateBatchInitOrganizationUrlRequest::GetOperateTypes() const
{
    return m_operateTypes;
}

void CreateBatchInitOrganizationUrlRequest::SetOperateTypes(const vector<string>& _operateTypes)
{
    m_operateTypes = _operateTypes;
    m_operateTypesHasBeenSet = true;
}

bool CreateBatchInitOrganizationUrlRequest::OperateTypesHasBeenSet() const
{
    return m_operateTypesHasBeenSet;
}

vector<string> CreateBatchInitOrganizationUrlRequest::GetProxyOrganizationOpenIds() const
{
    return m_proxyOrganizationOpenIds;
}

void CreateBatchInitOrganizationUrlRequest::SetProxyOrganizationOpenIds(const vector<string>& _proxyOrganizationOpenIds)
{
    m_proxyOrganizationOpenIds = _proxyOrganizationOpenIds;
    m_proxyOrganizationOpenIdsHasBeenSet = true;
}

bool CreateBatchInitOrganizationUrlRequest::ProxyOrganizationOpenIdsHasBeenSet() const
{
    return m_proxyOrganizationOpenIdsHasBeenSet;
}

bool CreateBatchInitOrganizationUrlRequest::GetIsAuthorizePlatformApplication() const
{
    return m_isAuthorizePlatformApplication;
}

void CreateBatchInitOrganizationUrlRequest::SetIsAuthorizePlatformApplication(const bool& _isAuthorizePlatformApplication)
{
    m_isAuthorizePlatformApplication = _isAuthorizePlatformApplication;
    m_isAuthorizePlatformApplicationHasBeenSet = true;
}

bool CreateBatchInitOrganizationUrlRequest::IsAuthorizePlatformApplicationHasBeenSet() const
{
    return m_isAuthorizePlatformApplicationHasBeenSet;
}

string CreateBatchInitOrganizationUrlRequest::GetAuthorizedProxyOrganizationOpenId() const
{
    return m_authorizedProxyOrganizationOpenId;
}

void CreateBatchInitOrganizationUrlRequest::SetAuthorizedProxyOrganizationOpenId(const string& _authorizedProxyOrganizationOpenId)
{
    m_authorizedProxyOrganizationOpenId = _authorizedProxyOrganizationOpenId;
    m_authorizedProxyOrganizationOpenIdHasBeenSet = true;
}

bool CreateBatchInitOrganizationUrlRequest::AuthorizedProxyOrganizationOpenIdHasBeenSet() const
{
    return m_authorizedProxyOrganizationOpenIdHasBeenSet;
}


