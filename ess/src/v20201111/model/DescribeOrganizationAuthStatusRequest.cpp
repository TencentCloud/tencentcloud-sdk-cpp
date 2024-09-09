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

#include <tencentcloud/ess/v20201111/model/DescribeOrganizationAuthStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

DescribeOrganizationAuthStatusRequest::DescribeOrganizationAuthStatusRequest() :
    m_operatorHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_uniformSocialCreditCodeHasBeenSet(false),
    m_legalNameHasBeenSet(false)
{
}

string DescribeOrganizationAuthStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_uniformSocialCreditCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniformSocialCreditCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniformSocialCreditCode.c_str(), allocator).Move(), allocator);
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


UserInfo DescribeOrganizationAuthStatusRequest::GetOperator() const
{
    return m_operator;
}

void DescribeOrganizationAuthStatusRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DescribeOrganizationAuthStatusRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string DescribeOrganizationAuthStatusRequest::GetOrganizationName() const
{
    return m_organizationName;
}

void DescribeOrganizationAuthStatusRequest::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool DescribeOrganizationAuthStatusRequest::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

string DescribeOrganizationAuthStatusRequest::GetUniformSocialCreditCode() const
{
    return m_uniformSocialCreditCode;
}

void DescribeOrganizationAuthStatusRequest::SetUniformSocialCreditCode(const string& _uniformSocialCreditCode)
{
    m_uniformSocialCreditCode = _uniformSocialCreditCode;
    m_uniformSocialCreditCodeHasBeenSet = true;
}

bool DescribeOrganizationAuthStatusRequest::UniformSocialCreditCodeHasBeenSet() const
{
    return m_uniformSocialCreditCodeHasBeenSet;
}

string DescribeOrganizationAuthStatusRequest::GetLegalName() const
{
    return m_legalName;
}

void DescribeOrganizationAuthStatusRequest::SetLegalName(const string& _legalName)
{
    m_legalName = _legalName;
    m_legalNameHasBeenSet = true;
}

bool DescribeOrganizationAuthStatusRequest::LegalNameHasBeenSet() const
{
    return m_legalNameHasBeenSet;
}


