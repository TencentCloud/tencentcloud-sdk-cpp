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

#include <tencentcloud/cpdp/v20190820/model/ModifyFlexFundingAccountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ModifyFlexFundingAccountRequest::ModifyFlexFundingAccountRequest() :
    m_payeeIdHasBeenSet(false),
    m_fundingAccountBindSerialNoHasBeenSet(false),
    m_fundingAccountTypeHasBeenSet(false),
    m_phoneNoHasBeenSet(false),
    m_fundingAccountNameHasBeenSet(false),
    m_fundingAccountNoHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_bankBranchNameHasBeenSet(false)
{
}

string ModifyFlexFundingAccountRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_payeeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeId.c_str(), allocator).Move(), allocator);
    }

    if (m_fundingAccountBindSerialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FundingAccountBindSerialNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fundingAccountBindSerialNo.c_str(), allocator).Move(), allocator);
    }

    if (m_fundingAccountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FundingAccountType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fundingAccountType.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phoneNo.c_str(), allocator).Move(), allocator);
    }

    if (m_fundingAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FundingAccountName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fundingAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_fundingAccountNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FundingAccountNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fundingAccountNo.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }

    if (m_bankBranchNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankBranchName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bankBranchName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyFlexFundingAccountRequest::GetPayeeId() const
{
    return m_payeeId;
}

void ModifyFlexFundingAccountRequest::SetPayeeId(const string& _payeeId)
{
    m_payeeId = _payeeId;
    m_payeeIdHasBeenSet = true;
}

bool ModifyFlexFundingAccountRequest::PayeeIdHasBeenSet() const
{
    return m_payeeIdHasBeenSet;
}

string ModifyFlexFundingAccountRequest::GetFundingAccountBindSerialNo() const
{
    return m_fundingAccountBindSerialNo;
}

void ModifyFlexFundingAccountRequest::SetFundingAccountBindSerialNo(const string& _fundingAccountBindSerialNo)
{
    m_fundingAccountBindSerialNo = _fundingAccountBindSerialNo;
    m_fundingAccountBindSerialNoHasBeenSet = true;
}

bool ModifyFlexFundingAccountRequest::FundingAccountBindSerialNoHasBeenSet() const
{
    return m_fundingAccountBindSerialNoHasBeenSet;
}

string ModifyFlexFundingAccountRequest::GetFundingAccountType() const
{
    return m_fundingAccountType;
}

void ModifyFlexFundingAccountRequest::SetFundingAccountType(const string& _fundingAccountType)
{
    m_fundingAccountType = _fundingAccountType;
    m_fundingAccountTypeHasBeenSet = true;
}

bool ModifyFlexFundingAccountRequest::FundingAccountTypeHasBeenSet() const
{
    return m_fundingAccountTypeHasBeenSet;
}

string ModifyFlexFundingAccountRequest::GetPhoneNo() const
{
    return m_phoneNo;
}

void ModifyFlexFundingAccountRequest::SetPhoneNo(const string& _phoneNo)
{
    m_phoneNo = _phoneNo;
    m_phoneNoHasBeenSet = true;
}

bool ModifyFlexFundingAccountRequest::PhoneNoHasBeenSet() const
{
    return m_phoneNoHasBeenSet;
}

string ModifyFlexFundingAccountRequest::GetFundingAccountName() const
{
    return m_fundingAccountName;
}

void ModifyFlexFundingAccountRequest::SetFundingAccountName(const string& _fundingAccountName)
{
    m_fundingAccountName = _fundingAccountName;
    m_fundingAccountNameHasBeenSet = true;
}

bool ModifyFlexFundingAccountRequest::FundingAccountNameHasBeenSet() const
{
    return m_fundingAccountNameHasBeenSet;
}

string ModifyFlexFundingAccountRequest::GetFundingAccountNo() const
{
    return m_fundingAccountNo;
}

void ModifyFlexFundingAccountRequest::SetFundingAccountNo(const string& _fundingAccountNo)
{
    m_fundingAccountNo = _fundingAccountNo;
    m_fundingAccountNoHasBeenSet = true;
}

bool ModifyFlexFundingAccountRequest::FundingAccountNoHasBeenSet() const
{
    return m_fundingAccountNoHasBeenSet;
}

string ModifyFlexFundingAccountRequest::GetEnvironment() const
{
    return m_environment;
}

void ModifyFlexFundingAccountRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool ModifyFlexFundingAccountRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

string ModifyFlexFundingAccountRequest::GetBankBranchName() const
{
    return m_bankBranchName;
}

void ModifyFlexFundingAccountRequest::SetBankBranchName(const string& _bankBranchName)
{
    m_bankBranchName = _bankBranchName;
    m_bankBranchNameHasBeenSet = true;
}

bool ModifyFlexFundingAccountRequest::BankBranchNameHasBeenSet() const
{
    return m_bankBranchNameHasBeenSet;
}


