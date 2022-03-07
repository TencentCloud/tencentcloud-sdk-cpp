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

#include <tencentcloud/cpdp/v20190820/model/BankBranchInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

BankBranchInfo::BankBranchInfo() :
    m_bankNameHasBeenSet(false),
    m_bankAbbreviationHasBeenSet(false),
    m_bankBranchNameHasBeenSet(false),
    m_bankBranchIdHasBeenSet(false)
{
}

CoreInternalOutcome BankBranchInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BankName") && !value["BankName"].IsNull())
    {
        if (!value["BankName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BankBranchInfo.BankName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankName = string(value["BankName"].GetString());
        m_bankNameHasBeenSet = true;
    }

    if (value.HasMember("BankAbbreviation") && !value["BankAbbreviation"].IsNull())
    {
        if (!value["BankAbbreviation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BankBranchInfo.BankAbbreviation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankAbbreviation = string(value["BankAbbreviation"].GetString());
        m_bankAbbreviationHasBeenSet = true;
    }

    if (value.HasMember("BankBranchName") && !value["BankBranchName"].IsNull())
    {
        if (!value["BankBranchName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BankBranchInfo.BankBranchName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankBranchName = string(value["BankBranchName"].GetString());
        m_bankBranchNameHasBeenSet = true;
    }

    if (value.HasMember("BankBranchId") && !value["BankBranchId"].IsNull())
    {
        if (!value["BankBranchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BankBranchInfo.BankBranchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankBranchId = string(value["BankBranchId"].GetString());
        m_bankBranchIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BankBranchInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bankNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankName.c_str(), allocator).Move(), allocator);
    }

    if (m_bankAbbreviationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankAbbreviation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankAbbreviation.c_str(), allocator).Move(), allocator);
    }

    if (m_bankBranchNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankBranchName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankBranchName.c_str(), allocator).Move(), allocator);
    }

    if (m_bankBranchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankBranchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankBranchId.c_str(), allocator).Move(), allocator);
    }

}


string BankBranchInfo::GetBankName() const
{
    return m_bankName;
}

void BankBranchInfo::SetBankName(const string& _bankName)
{
    m_bankName = _bankName;
    m_bankNameHasBeenSet = true;
}

bool BankBranchInfo::BankNameHasBeenSet() const
{
    return m_bankNameHasBeenSet;
}

string BankBranchInfo::GetBankAbbreviation() const
{
    return m_bankAbbreviation;
}

void BankBranchInfo::SetBankAbbreviation(const string& _bankAbbreviation)
{
    m_bankAbbreviation = _bankAbbreviation;
    m_bankAbbreviationHasBeenSet = true;
}

bool BankBranchInfo::BankAbbreviationHasBeenSet() const
{
    return m_bankAbbreviationHasBeenSet;
}

string BankBranchInfo::GetBankBranchName() const
{
    return m_bankBranchName;
}

void BankBranchInfo::SetBankBranchName(const string& _bankBranchName)
{
    m_bankBranchName = _bankBranchName;
    m_bankBranchNameHasBeenSet = true;
}

bool BankBranchInfo::BankBranchNameHasBeenSet() const
{
    return m_bankBranchNameHasBeenSet;
}

string BankBranchInfo::GetBankBranchId() const
{
    return m_bankBranchId;
}

void BankBranchInfo::SetBankBranchId(const string& _bankBranchId)
{
    m_bankBranchId = _bankBranchId;
    m_bankBranchIdHasBeenSet = true;
}

bool BankBranchInfo::BankBranchIdHasBeenSet() const
{
    return m_bankBranchIdHasBeenSet;
}

