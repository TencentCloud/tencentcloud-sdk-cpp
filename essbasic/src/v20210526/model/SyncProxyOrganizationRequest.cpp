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

#include <tencentcloud/essbasic/v20210526/model/SyncProxyOrganizationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

SyncProxyOrganizationRequest::SyncProxyOrganizationRequest() :
    m_agentHasBeenSet(false),
    m_proxyOrganizationNameHasBeenSet(false),
    m_businessLicenseHasBeenSet(false),
    m_uniformSocialCreditCodeHasBeenSet(false),
    m_proxyLegalNameHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_proxyLegalIdCardTypeHasBeenSet(false),
    m_proxyLegalIdCardNumberHasBeenSet(false),
    m_proxyAddressHasBeenSet(false)
{
}

string SyncProxyOrganizationRequest::ToJsonString() const
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

    if (m_proxyOrganizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyOrganizationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyOrganizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_businessLicenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLicense";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessLicense.c_str(), allocator).Move(), allocator);
    }

    if (m_uniformSocialCreditCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniformSocialCreditCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniformSocialCreditCode.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyLegalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyLegalName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyLegalName.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_proxyLegalIdCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyLegalIdCardType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyLegalIdCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyLegalIdCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyLegalIdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyLegalIdCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyAddress.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent SyncProxyOrganizationRequest::GetAgent() const
{
    return m_agent;
}

void SyncProxyOrganizationRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool SyncProxyOrganizationRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string SyncProxyOrganizationRequest::GetProxyOrganizationName() const
{
    return m_proxyOrganizationName;
}

void SyncProxyOrganizationRequest::SetProxyOrganizationName(const string& _proxyOrganizationName)
{
    m_proxyOrganizationName = _proxyOrganizationName;
    m_proxyOrganizationNameHasBeenSet = true;
}

bool SyncProxyOrganizationRequest::ProxyOrganizationNameHasBeenSet() const
{
    return m_proxyOrganizationNameHasBeenSet;
}

string SyncProxyOrganizationRequest::GetBusinessLicense() const
{
    return m_businessLicense;
}

void SyncProxyOrganizationRequest::SetBusinessLicense(const string& _businessLicense)
{
    m_businessLicense = _businessLicense;
    m_businessLicenseHasBeenSet = true;
}

bool SyncProxyOrganizationRequest::BusinessLicenseHasBeenSet() const
{
    return m_businessLicenseHasBeenSet;
}

string SyncProxyOrganizationRequest::GetUniformSocialCreditCode() const
{
    return m_uniformSocialCreditCode;
}

void SyncProxyOrganizationRequest::SetUniformSocialCreditCode(const string& _uniformSocialCreditCode)
{
    m_uniformSocialCreditCode = _uniformSocialCreditCode;
    m_uniformSocialCreditCodeHasBeenSet = true;
}

bool SyncProxyOrganizationRequest::UniformSocialCreditCodeHasBeenSet() const
{
    return m_uniformSocialCreditCodeHasBeenSet;
}

string SyncProxyOrganizationRequest::GetProxyLegalName() const
{
    return m_proxyLegalName;
}

void SyncProxyOrganizationRequest::SetProxyLegalName(const string& _proxyLegalName)
{
    m_proxyLegalName = _proxyLegalName;
    m_proxyLegalNameHasBeenSet = true;
}

bool SyncProxyOrganizationRequest::ProxyLegalNameHasBeenSet() const
{
    return m_proxyLegalNameHasBeenSet;
}

UserInfo SyncProxyOrganizationRequest::GetOperator() const
{
    return m_operator;
}

void SyncProxyOrganizationRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool SyncProxyOrganizationRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string SyncProxyOrganizationRequest::GetProxyLegalIdCardType() const
{
    return m_proxyLegalIdCardType;
}

void SyncProxyOrganizationRequest::SetProxyLegalIdCardType(const string& _proxyLegalIdCardType)
{
    m_proxyLegalIdCardType = _proxyLegalIdCardType;
    m_proxyLegalIdCardTypeHasBeenSet = true;
}

bool SyncProxyOrganizationRequest::ProxyLegalIdCardTypeHasBeenSet() const
{
    return m_proxyLegalIdCardTypeHasBeenSet;
}

string SyncProxyOrganizationRequest::GetProxyLegalIdCardNumber() const
{
    return m_proxyLegalIdCardNumber;
}

void SyncProxyOrganizationRequest::SetProxyLegalIdCardNumber(const string& _proxyLegalIdCardNumber)
{
    m_proxyLegalIdCardNumber = _proxyLegalIdCardNumber;
    m_proxyLegalIdCardNumberHasBeenSet = true;
}

bool SyncProxyOrganizationRequest::ProxyLegalIdCardNumberHasBeenSet() const
{
    return m_proxyLegalIdCardNumberHasBeenSet;
}

string SyncProxyOrganizationRequest::GetProxyAddress() const
{
    return m_proxyAddress;
}

void SyncProxyOrganizationRequest::SetProxyAddress(const string& _proxyAddress)
{
    m_proxyAddress = _proxyAddress;
    m_proxyAddressHasBeenSet = true;
}

bool SyncProxyOrganizationRequest::ProxyAddressHasBeenSet() const
{
    return m_proxyAddressHasBeenSet;
}


