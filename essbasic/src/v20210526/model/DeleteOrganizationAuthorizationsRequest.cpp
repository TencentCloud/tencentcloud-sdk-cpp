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

#include <tencentcloud/essbasic/v20210526/model/DeleteOrganizationAuthorizationsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

DeleteOrganizationAuthorizationsRequest::DeleteOrganizationAuthorizationsRequest() :
    m_agentHasBeenSet(false),
    m_adminNameHasBeenSet(false),
    m_adminMobileHasBeenSet(false)
{
}

string DeleteOrganizationAuthorizationsRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent DeleteOrganizationAuthorizationsRequest::GetAgent() const
{
    return m_agent;
}

void DeleteOrganizationAuthorizationsRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool DeleteOrganizationAuthorizationsRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string DeleteOrganizationAuthorizationsRequest::GetAdminName() const
{
    return m_adminName;
}

void DeleteOrganizationAuthorizationsRequest::SetAdminName(const string& _adminName)
{
    m_adminName = _adminName;
    m_adminNameHasBeenSet = true;
}

bool DeleteOrganizationAuthorizationsRequest::AdminNameHasBeenSet() const
{
    return m_adminNameHasBeenSet;
}

string DeleteOrganizationAuthorizationsRequest::GetAdminMobile() const
{
    return m_adminMobile;
}

void DeleteOrganizationAuthorizationsRequest::SetAdminMobile(const string& _adminMobile)
{
    m_adminMobile = _adminMobile;
    m_adminMobileHasBeenSet = true;
}

bool DeleteOrganizationAuthorizationsRequest::AdminMobileHasBeenSet() const
{
    return m_adminMobileHasBeenSet;
}


