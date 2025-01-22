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

#include <tencentcloud/essbasic/v20210526/model/CreateBatchOrganizationAuthorizationUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CreateBatchOrganizationAuthorizationUrlRequest::CreateBatchOrganizationAuthorizationUrlRequest() :
    m_agentHasBeenSet(false),
    m_adminNameHasBeenSet(false),
    m_adminMobileHasBeenSet(false),
    m_subTaskIdsHasBeenSet(false),
    m_adminIdCardTypeHasBeenSet(false),
    m_adminIdCardNumberHasBeenSet(false),
    m_endpointHasBeenSet(false)
{
}

string CreateBatchOrganizationAuthorizationUrlRequest::ToJsonString() const
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

    if (m_adminNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminName.c_str(), allocator).Move(), allocator);
    }

    if (m_adminMobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminMobile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminMobile.c_str(), allocator).Move(), allocator);
    }

    if (m_subTaskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubTaskIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subTaskIds.begin(); itr != m_subTaskIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_adminIdCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminIdCardType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminIdCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_adminIdCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminIdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminIdCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent CreateBatchOrganizationAuthorizationUrlRequest::GetAgent() const
{
    return m_agent;
}

void CreateBatchOrganizationAuthorizationUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateBatchOrganizationAuthorizationUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string CreateBatchOrganizationAuthorizationUrlRequest::GetAdminName() const
{
    return m_adminName;
}

void CreateBatchOrganizationAuthorizationUrlRequest::SetAdminName(const string& _adminName)
{
    m_adminName = _adminName;
    m_adminNameHasBeenSet = true;
}

bool CreateBatchOrganizationAuthorizationUrlRequest::AdminNameHasBeenSet() const
{
    return m_adminNameHasBeenSet;
}

string CreateBatchOrganizationAuthorizationUrlRequest::GetAdminMobile() const
{
    return m_adminMobile;
}

void CreateBatchOrganizationAuthorizationUrlRequest::SetAdminMobile(const string& _adminMobile)
{
    m_adminMobile = _adminMobile;
    m_adminMobileHasBeenSet = true;
}

bool CreateBatchOrganizationAuthorizationUrlRequest::AdminMobileHasBeenSet() const
{
    return m_adminMobileHasBeenSet;
}

vector<string> CreateBatchOrganizationAuthorizationUrlRequest::GetSubTaskIds() const
{
    return m_subTaskIds;
}

void CreateBatchOrganizationAuthorizationUrlRequest::SetSubTaskIds(const vector<string>& _subTaskIds)
{
    m_subTaskIds = _subTaskIds;
    m_subTaskIdsHasBeenSet = true;
}

bool CreateBatchOrganizationAuthorizationUrlRequest::SubTaskIdsHasBeenSet() const
{
    return m_subTaskIdsHasBeenSet;
}

string CreateBatchOrganizationAuthorizationUrlRequest::GetAdminIdCardType() const
{
    return m_adminIdCardType;
}

void CreateBatchOrganizationAuthorizationUrlRequest::SetAdminIdCardType(const string& _adminIdCardType)
{
    m_adminIdCardType = _adminIdCardType;
    m_adminIdCardTypeHasBeenSet = true;
}

bool CreateBatchOrganizationAuthorizationUrlRequest::AdminIdCardTypeHasBeenSet() const
{
    return m_adminIdCardTypeHasBeenSet;
}

string CreateBatchOrganizationAuthorizationUrlRequest::GetAdminIdCardNumber() const
{
    return m_adminIdCardNumber;
}

void CreateBatchOrganizationAuthorizationUrlRequest::SetAdminIdCardNumber(const string& _adminIdCardNumber)
{
    m_adminIdCardNumber = _adminIdCardNumber;
    m_adminIdCardNumberHasBeenSet = true;
}

bool CreateBatchOrganizationAuthorizationUrlRequest::AdminIdCardNumberHasBeenSet() const
{
    return m_adminIdCardNumberHasBeenSet;
}

string CreateBatchOrganizationAuthorizationUrlRequest::GetEndpoint() const
{
    return m_endpoint;
}

void CreateBatchOrganizationAuthorizationUrlRequest::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool CreateBatchOrganizationAuthorizationUrlRequest::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}


