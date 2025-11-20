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

#include <tencentcloud/ctem/v20231128/model/CreateEnterpriseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

CreateEnterpriseRequest::CreateEnterpriseRequest() :
    m_customerIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_parentEnterpriseUidHasBeenSet(false),
    m_creditCodeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_registeredCapitalHasBeenSet(false),
    m_shareholdingRatioHasBeenSet(false),
    m_legalPersonHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_industryHasBeenSet(false),
    m_enterpriseUidHasBeenSet(false)
{
}

string CreateEnterpriseRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_customerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_customerId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_parentEnterpriseUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentEnterpriseUid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parentEnterpriseUid.c_str(), allocator).Move(), allocator);
    }

    if (m_creditCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreditCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_creditCode.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_registeredCapitalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisteredCapital";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registeredCapital.c_str(), allocator).Move(), allocator);
    }

    if (m_shareholdingRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareholdingRatio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shareholdingRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_legalPersonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalPerson";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_legalPerson.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_industryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Industry";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_industry.c_str(), allocator).Move(), allocator);
    }

    if (m_enterpriseUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseUid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enterpriseUid.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateEnterpriseRequest::GetCustomerId() const
{
    return m_customerId;
}

void CreateEnterpriseRequest::SetCustomerId(const int64_t& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool CreateEnterpriseRequest::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

string CreateEnterpriseRequest::GetName() const
{
    return m_name;
}

void CreateEnterpriseRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateEnterpriseRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateEnterpriseRequest::GetParentEnterpriseUid() const
{
    return m_parentEnterpriseUid;
}

void CreateEnterpriseRequest::SetParentEnterpriseUid(const string& _parentEnterpriseUid)
{
    m_parentEnterpriseUid = _parentEnterpriseUid;
    m_parentEnterpriseUidHasBeenSet = true;
}

bool CreateEnterpriseRequest::ParentEnterpriseUidHasBeenSet() const
{
    return m_parentEnterpriseUidHasBeenSet;
}

string CreateEnterpriseRequest::GetCreditCode() const
{
    return m_creditCode;
}

void CreateEnterpriseRequest::SetCreditCode(const string& _creditCode)
{
    m_creditCode = _creditCode;
    m_creditCodeHasBeenSet = true;
}

bool CreateEnterpriseRequest::CreditCodeHasBeenSet() const
{
    return m_creditCodeHasBeenSet;
}

string CreateEnterpriseRequest::GetStatus() const
{
    return m_status;
}

void CreateEnterpriseRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateEnterpriseRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CreateEnterpriseRequest::GetRegisteredCapital() const
{
    return m_registeredCapital;
}

void CreateEnterpriseRequest::SetRegisteredCapital(const string& _registeredCapital)
{
    m_registeredCapital = _registeredCapital;
    m_registeredCapitalHasBeenSet = true;
}

bool CreateEnterpriseRequest::RegisteredCapitalHasBeenSet() const
{
    return m_registeredCapitalHasBeenSet;
}

string CreateEnterpriseRequest::GetShareholdingRatio() const
{
    return m_shareholdingRatio;
}

void CreateEnterpriseRequest::SetShareholdingRatio(const string& _shareholdingRatio)
{
    m_shareholdingRatio = _shareholdingRatio;
    m_shareholdingRatioHasBeenSet = true;
}

bool CreateEnterpriseRequest::ShareholdingRatioHasBeenSet() const
{
    return m_shareholdingRatioHasBeenSet;
}

string CreateEnterpriseRequest::GetLegalPerson() const
{
    return m_legalPerson;
}

void CreateEnterpriseRequest::SetLegalPerson(const string& _legalPerson)
{
    m_legalPerson = _legalPerson;
    m_legalPersonHasBeenSet = true;
}

bool CreateEnterpriseRequest::LegalPersonHasBeenSet() const
{
    return m_legalPersonHasBeenSet;
}

string CreateEnterpriseRequest::GetType() const
{
    return m_type;
}

void CreateEnterpriseRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateEnterpriseRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateEnterpriseRequest::GetIndustry() const
{
    return m_industry;
}

void CreateEnterpriseRequest::SetIndustry(const string& _industry)
{
    m_industry = _industry;
    m_industryHasBeenSet = true;
}

bool CreateEnterpriseRequest::IndustryHasBeenSet() const
{
    return m_industryHasBeenSet;
}

string CreateEnterpriseRequest::GetEnterpriseUid() const
{
    return m_enterpriseUid;
}

void CreateEnterpriseRequest::SetEnterpriseUid(const string& _enterpriseUid)
{
    m_enterpriseUid = _enterpriseUid;
    m_enterpriseUidHasBeenSet = true;
}

bool CreateEnterpriseRequest::EnterpriseUidHasBeenSet() const
{
    return m_enterpriseUidHasBeenSet;
}


