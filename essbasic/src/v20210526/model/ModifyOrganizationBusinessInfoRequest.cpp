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

#include <tencentcloud/essbasic/v20210526/model/ModifyOrganizationBusinessInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ModifyOrganizationBusinessInfoRequest::ModifyOrganizationBusinessInfoRequest() :
    m_agentHasBeenSet(false),
    m_bizLicenseResourceIdHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_organizationTypeHasBeenSet(false),
    m_legalNameHasBeenSet(false)
{
}

string ModifyOrganizationBusinessInfoRequest::ToJsonString() const
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

    if (m_bizLicenseResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizLicenseResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bizLicenseResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationType.c_str(), allocator).Move(), allocator);
    }

    if (m_legalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_legalName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent ModifyOrganizationBusinessInfoRequest::GetAgent() const
{
    return m_agent;
}

void ModifyOrganizationBusinessInfoRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ModifyOrganizationBusinessInfoRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ModifyOrganizationBusinessInfoRequest::GetBizLicenseResourceId() const
{
    return m_bizLicenseResourceId;
}

void ModifyOrganizationBusinessInfoRequest::SetBizLicenseResourceId(const string& _bizLicenseResourceId)
{
    m_bizLicenseResourceId = _bizLicenseResourceId;
    m_bizLicenseResourceIdHasBeenSet = true;
}

bool ModifyOrganizationBusinessInfoRequest::BizLicenseResourceIdHasBeenSet() const
{
    return m_bizLicenseResourceIdHasBeenSet;
}

string ModifyOrganizationBusinessInfoRequest::GetOrganizationName() const
{
    return m_organizationName;
}

void ModifyOrganizationBusinessInfoRequest::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool ModifyOrganizationBusinessInfoRequest::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

string ModifyOrganizationBusinessInfoRequest::GetAddress() const
{
    return m_address;
}

void ModifyOrganizationBusinessInfoRequest::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool ModifyOrganizationBusinessInfoRequest::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string ModifyOrganizationBusinessInfoRequest::GetOrganizationType() const
{
    return m_organizationType;
}

void ModifyOrganizationBusinessInfoRequest::SetOrganizationType(const string& _organizationType)
{
    m_organizationType = _organizationType;
    m_organizationTypeHasBeenSet = true;
}

bool ModifyOrganizationBusinessInfoRequest::OrganizationTypeHasBeenSet() const
{
    return m_organizationTypeHasBeenSet;
}

string ModifyOrganizationBusinessInfoRequest::GetLegalName() const
{
    return m_legalName;
}

void ModifyOrganizationBusinessInfoRequest::SetLegalName(const string& _legalName)
{
    m_legalName = _legalName;
    m_legalNameHasBeenSet = true;
}

bool ModifyOrganizationBusinessInfoRequest::LegalNameHasBeenSet() const
{
    return m_legalNameHasBeenSet;
}


