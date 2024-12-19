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

#include <tencentcloud/ess/v20201111/model/CreateOrganizationAuthFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateOrganizationAuthFileRequest::CreateOrganizationAuthFileRequest() :
    m_organizationCommonInfoHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string CreateOrganizationAuthFileRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_organizationCommonInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationCommonInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_organizationCommonInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


OrganizationCommonInfo CreateOrganizationAuthFileRequest::GetOrganizationCommonInfo() const
{
    return m_organizationCommonInfo;
}

void CreateOrganizationAuthFileRequest::SetOrganizationCommonInfo(const OrganizationCommonInfo& _organizationCommonInfo)
{
    m_organizationCommonInfo = _organizationCommonInfo;
    m_organizationCommonInfoHasBeenSet = true;
}

bool CreateOrganizationAuthFileRequest::OrganizationCommonInfoHasBeenSet() const
{
    return m_organizationCommonInfoHasBeenSet;
}

Agent CreateOrganizationAuthFileRequest::GetAgent() const
{
    return m_agent;
}

void CreateOrganizationAuthFileRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateOrganizationAuthFileRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

UserInfo CreateOrganizationAuthFileRequest::GetOperator() const
{
    return m_operator;
}

void CreateOrganizationAuthFileRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateOrganizationAuthFileRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

uint64_t CreateOrganizationAuthFileRequest::GetType() const
{
    return m_type;
}

void CreateOrganizationAuthFileRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateOrganizationAuthFileRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


