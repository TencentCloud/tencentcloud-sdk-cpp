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

#include <tencentcloud/cpdp/v20190820/model/CreateFlexPayeeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateFlexPayeeRequest::CreateFlexPayeeRequest() :
    m_outUserIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idNoHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_serviceProviderIdHasBeenSet(false),
    m_taxInfoHasBeenSet(false),
    m_idTypeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_phoneNoHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string CreateFlexPayeeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_outUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idNo.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceProviderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceProviderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceProviderId.c_str(), allocator).Move(), allocator);
    }

    if (m_taxInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taxInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_idTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_idType, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phoneNo.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFlexPayeeRequest::GetOutUserId() const
{
    return m_outUserId;
}

void CreateFlexPayeeRequest::SetOutUserId(const string& _outUserId)
{
    m_outUserId = _outUserId;
    m_outUserIdHasBeenSet = true;
}

bool CreateFlexPayeeRequest::OutUserIdHasBeenSet() const
{
    return m_outUserIdHasBeenSet;
}

string CreateFlexPayeeRequest::GetName() const
{
    return m_name;
}

void CreateFlexPayeeRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateFlexPayeeRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateFlexPayeeRequest::GetIdNo() const
{
    return m_idNo;
}

void CreateFlexPayeeRequest::SetIdNo(const string& _idNo)
{
    m_idNo = _idNo;
    m_idNoHasBeenSet = true;
}

bool CreateFlexPayeeRequest::IdNoHasBeenSet() const
{
    return m_idNoHasBeenSet;
}

string CreateFlexPayeeRequest::GetAccountName() const
{
    return m_accountName;
}

void CreateFlexPayeeRequest::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool CreateFlexPayeeRequest::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

string CreateFlexPayeeRequest::GetServiceProviderId() const
{
    return m_serviceProviderId;
}

void CreateFlexPayeeRequest::SetServiceProviderId(const string& _serviceProviderId)
{
    m_serviceProviderId = _serviceProviderId;
    m_serviceProviderIdHasBeenSet = true;
}

bool CreateFlexPayeeRequest::ServiceProviderIdHasBeenSet() const
{
    return m_serviceProviderIdHasBeenSet;
}

PayeeTaxInfo CreateFlexPayeeRequest::GetTaxInfo() const
{
    return m_taxInfo;
}

void CreateFlexPayeeRequest::SetTaxInfo(const PayeeTaxInfo& _taxInfo)
{
    m_taxInfo = _taxInfo;
    m_taxInfoHasBeenSet = true;
}

bool CreateFlexPayeeRequest::TaxInfoHasBeenSet() const
{
    return m_taxInfoHasBeenSet;
}

int64_t CreateFlexPayeeRequest::GetIdType() const
{
    return m_idType;
}

void CreateFlexPayeeRequest::SetIdType(const int64_t& _idType)
{
    m_idType = _idType;
    m_idTypeHasBeenSet = true;
}

bool CreateFlexPayeeRequest::IdTypeHasBeenSet() const
{
    return m_idTypeHasBeenSet;
}

string CreateFlexPayeeRequest::GetRemark() const
{
    return m_remark;
}

void CreateFlexPayeeRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateFlexPayeeRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateFlexPayeeRequest::GetPhoneNo() const
{
    return m_phoneNo;
}

void CreateFlexPayeeRequest::SetPhoneNo(const string& _phoneNo)
{
    m_phoneNo = _phoneNo;
    m_phoneNoHasBeenSet = true;
}

bool CreateFlexPayeeRequest::PhoneNoHasBeenSet() const
{
    return m_phoneNoHasBeenSet;
}

string CreateFlexPayeeRequest::GetEnvironment() const
{
    return m_environment;
}

void CreateFlexPayeeRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool CreateFlexPayeeRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


