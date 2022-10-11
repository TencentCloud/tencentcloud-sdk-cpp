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

#include <tencentcloud/cpdp/v20190820/model/CompanyTitleResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CompanyTitleResult::CompanyTitleResult() :
    m_companyBankAccountHasBeenSet(false),
    m_companyAddressHasBeenSet(false),
    m_companyTaxpayerNumHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_companyBankNameHasBeenSet(false),
    m_companyPhoneHasBeenSet(false)
{
}

CoreInternalOutcome CompanyTitleResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CompanyBankAccount") && !value["CompanyBankAccount"].IsNull())
    {
        if (!value["CompanyBankAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyTitleResult.CompanyBankAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyBankAccount = string(value["CompanyBankAccount"].GetString());
        m_companyBankAccountHasBeenSet = true;
    }

    if (value.HasMember("CompanyAddress") && !value["CompanyAddress"].IsNull())
    {
        if (!value["CompanyAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyTitleResult.CompanyAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyAddress = string(value["CompanyAddress"].GetString());
        m_companyAddressHasBeenSet = true;
    }

    if (value.HasMember("CompanyTaxpayerNum") && !value["CompanyTaxpayerNum"].IsNull())
    {
        if (!value["CompanyTaxpayerNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyTitleResult.CompanyTaxpayerNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyTaxpayerNum = string(value["CompanyTaxpayerNum"].GetString());
        m_companyTaxpayerNumHasBeenSet = true;
    }

    if (value.HasMember("CompanyName") && !value["CompanyName"].IsNull())
    {
        if (!value["CompanyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyTitleResult.CompanyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyName = string(value["CompanyName"].GetString());
        m_companyNameHasBeenSet = true;
    }

    if (value.HasMember("CompanyBankName") && !value["CompanyBankName"].IsNull())
    {
        if (!value["CompanyBankName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyTitleResult.CompanyBankName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyBankName = string(value["CompanyBankName"].GetString());
        m_companyBankNameHasBeenSet = true;
    }

    if (value.HasMember("CompanyPhone") && !value["CompanyPhone"].IsNull())
    {
        if (!value["CompanyPhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyTitleResult.CompanyPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyPhone = string(value["CompanyPhone"].GetString());
        m_companyPhoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompanyTitleResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_companyBankAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyBankAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyBankAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_companyAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_companyTaxpayerNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyTaxpayerNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyTaxpayerNum.c_str(), allocator).Move(), allocator);
    }

    if (m_companyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyName.c_str(), allocator).Move(), allocator);
    }

    if (m_companyBankNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyBankName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyBankName.c_str(), allocator).Move(), allocator);
    }

    if (m_companyPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyPhone.c_str(), allocator).Move(), allocator);
    }

}


string CompanyTitleResult::GetCompanyBankAccount() const
{
    return m_companyBankAccount;
}

void CompanyTitleResult::SetCompanyBankAccount(const string& _companyBankAccount)
{
    m_companyBankAccount = _companyBankAccount;
    m_companyBankAccountHasBeenSet = true;
}

bool CompanyTitleResult::CompanyBankAccountHasBeenSet() const
{
    return m_companyBankAccountHasBeenSet;
}

string CompanyTitleResult::GetCompanyAddress() const
{
    return m_companyAddress;
}

void CompanyTitleResult::SetCompanyAddress(const string& _companyAddress)
{
    m_companyAddress = _companyAddress;
    m_companyAddressHasBeenSet = true;
}

bool CompanyTitleResult::CompanyAddressHasBeenSet() const
{
    return m_companyAddressHasBeenSet;
}

string CompanyTitleResult::GetCompanyTaxpayerNum() const
{
    return m_companyTaxpayerNum;
}

void CompanyTitleResult::SetCompanyTaxpayerNum(const string& _companyTaxpayerNum)
{
    m_companyTaxpayerNum = _companyTaxpayerNum;
    m_companyTaxpayerNumHasBeenSet = true;
}

bool CompanyTitleResult::CompanyTaxpayerNumHasBeenSet() const
{
    return m_companyTaxpayerNumHasBeenSet;
}

string CompanyTitleResult::GetCompanyName() const
{
    return m_companyName;
}

void CompanyTitleResult::SetCompanyName(const string& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool CompanyTitleResult::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

string CompanyTitleResult::GetCompanyBankName() const
{
    return m_companyBankName;
}

void CompanyTitleResult::SetCompanyBankName(const string& _companyBankName)
{
    m_companyBankName = _companyBankName;
    m_companyBankNameHasBeenSet = true;
}

bool CompanyTitleResult::CompanyBankNameHasBeenSet() const
{
    return m_companyBankNameHasBeenSet;
}

string CompanyTitleResult::GetCompanyPhone() const
{
    return m_companyPhone;
}

void CompanyTitleResult::SetCompanyPhone(const string& _companyPhone)
{
    m_companyPhone = _companyPhone;
    m_companyPhoneHasBeenSet = true;
}

bool CompanyTitleResult::CompanyPhoneHasBeenSet() const
{
    return m_companyPhoneHasBeenSet;
}

