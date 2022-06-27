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

#include <tencentcloud/cpdp/v20190820/model/SettleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

SettleInfo::SettleInfo() :
    m_settleAccountTypeHasBeenSet(false),
    m_settleAccountNumberHasBeenSet(false),
    m_settleAccountNameHasBeenSet(false),
    m_bankBranchIdHasBeenSet(false),
    m_bankBranchNameHasBeenSet(false),
    m_settleModeHasBeenSet(false),
    m_settlePeriodHasBeenSet(false)
{
}

CoreInternalOutcome SettleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SettleAccountType") && !value["SettleAccountType"].IsNull())
    {
        if (!value["SettleAccountType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettleInfo.SettleAccountType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_settleAccountType = string(value["SettleAccountType"].GetString());
        m_settleAccountTypeHasBeenSet = true;
    }

    if (value.HasMember("SettleAccountNumber") && !value["SettleAccountNumber"].IsNull())
    {
        if (!value["SettleAccountNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettleInfo.SettleAccountNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_settleAccountNumber = string(value["SettleAccountNumber"].GetString());
        m_settleAccountNumberHasBeenSet = true;
    }

    if (value.HasMember("SettleAccountName") && !value["SettleAccountName"].IsNull())
    {
        if (!value["SettleAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettleInfo.SettleAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_settleAccountName = string(value["SettleAccountName"].GetString());
        m_settleAccountNameHasBeenSet = true;
    }

    if (value.HasMember("BankBranchId") && !value["BankBranchId"].IsNull())
    {
        if (!value["BankBranchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettleInfo.BankBranchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankBranchId = string(value["BankBranchId"].GetString());
        m_bankBranchIdHasBeenSet = true;
    }

    if (value.HasMember("BankBranchName") && !value["BankBranchName"].IsNull())
    {
        if (!value["BankBranchName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettleInfo.BankBranchName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankBranchName = string(value["BankBranchName"].GetString());
        m_bankBranchNameHasBeenSet = true;
    }

    if (value.HasMember("SettleMode") && !value["SettleMode"].IsNull())
    {
        if (!value["SettleMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettleInfo.SettleMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_settleMode = string(value["SettleMode"].GetString());
        m_settleModeHasBeenSet = true;
    }

    if (value.HasMember("SettlePeriod") && !value["SettlePeriod"].IsNull())
    {
        if (!value["SettlePeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SettleInfo.SettlePeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_settlePeriod = string(value["SettlePeriod"].GetString());
        m_settlePeriodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SettleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_settleAccountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleAccountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_settleAccountType.c_str(), allocator).Move(), allocator);
    }

    if (m_settleAccountNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleAccountNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_settleAccountNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_settleAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_settleAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_bankBranchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankBranchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankBranchId.c_str(), allocator).Move(), allocator);
    }

    if (m_bankBranchNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankBranchName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankBranchName.c_str(), allocator).Move(), allocator);
    }

    if (m_settleModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_settleMode.c_str(), allocator).Move(), allocator);
    }

    if (m_settlePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettlePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_settlePeriod.c_str(), allocator).Move(), allocator);
    }

}


string SettleInfo::GetSettleAccountType() const
{
    return m_settleAccountType;
}

void SettleInfo::SetSettleAccountType(const string& _settleAccountType)
{
    m_settleAccountType = _settleAccountType;
    m_settleAccountTypeHasBeenSet = true;
}

bool SettleInfo::SettleAccountTypeHasBeenSet() const
{
    return m_settleAccountTypeHasBeenSet;
}

string SettleInfo::GetSettleAccountNumber() const
{
    return m_settleAccountNumber;
}

void SettleInfo::SetSettleAccountNumber(const string& _settleAccountNumber)
{
    m_settleAccountNumber = _settleAccountNumber;
    m_settleAccountNumberHasBeenSet = true;
}

bool SettleInfo::SettleAccountNumberHasBeenSet() const
{
    return m_settleAccountNumberHasBeenSet;
}

string SettleInfo::GetSettleAccountName() const
{
    return m_settleAccountName;
}

void SettleInfo::SetSettleAccountName(const string& _settleAccountName)
{
    m_settleAccountName = _settleAccountName;
    m_settleAccountNameHasBeenSet = true;
}

bool SettleInfo::SettleAccountNameHasBeenSet() const
{
    return m_settleAccountNameHasBeenSet;
}

string SettleInfo::GetBankBranchId() const
{
    return m_bankBranchId;
}

void SettleInfo::SetBankBranchId(const string& _bankBranchId)
{
    m_bankBranchId = _bankBranchId;
    m_bankBranchIdHasBeenSet = true;
}

bool SettleInfo::BankBranchIdHasBeenSet() const
{
    return m_bankBranchIdHasBeenSet;
}

string SettleInfo::GetBankBranchName() const
{
    return m_bankBranchName;
}

void SettleInfo::SetBankBranchName(const string& _bankBranchName)
{
    m_bankBranchName = _bankBranchName;
    m_bankBranchNameHasBeenSet = true;
}

bool SettleInfo::BankBranchNameHasBeenSet() const
{
    return m_bankBranchNameHasBeenSet;
}

string SettleInfo::GetSettleMode() const
{
    return m_settleMode;
}

void SettleInfo::SetSettleMode(const string& _settleMode)
{
    m_settleMode = _settleMode;
    m_settleModeHasBeenSet = true;
}

bool SettleInfo::SettleModeHasBeenSet() const
{
    return m_settleModeHasBeenSet;
}

string SettleInfo::GetSettlePeriod() const
{
    return m_settlePeriod;
}

void SettleInfo::SetSettlePeriod(const string& _settlePeriod)
{
    m_settlePeriod = _settlePeriod;
    m_settlePeriodHasBeenSet = true;
}

bool SettleInfo::SettlePeriodHasBeenSet() const
{
    return m_settlePeriodHasBeenSet;
}

