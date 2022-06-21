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

#include <tencentcloud/cpdp/v20190820/model/SupportBankInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

SupportBankInfo::SupportBankInfo() :
    m_bankCodeHasBeenSet(false),
    m_bankNameHasBeenSet(false),
    m_maintainStatusHasBeenSet(false),
    m_bankNoticeHasBeenSet(false),
    m_bankIdHasBeenSet(false),
    m_cardTypeHasBeenSet(false)
{
}

CoreInternalOutcome SupportBankInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BankCode") && !value["BankCode"].IsNull())
    {
        if (!value["BankCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SupportBankInfo.BankCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankCode = string(value["BankCode"].GetString());
        m_bankCodeHasBeenSet = true;
    }

    if (value.HasMember("BankName") && !value["BankName"].IsNull())
    {
        if (!value["BankName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SupportBankInfo.BankName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankName = string(value["BankName"].GetString());
        m_bankNameHasBeenSet = true;
    }

    if (value.HasMember("MaintainStatus") && !value["MaintainStatus"].IsNull())
    {
        if (!value["MaintainStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SupportBankInfo.MaintainStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maintainStatus = string(value["MaintainStatus"].GetString());
        m_maintainStatusHasBeenSet = true;
    }

    if (value.HasMember("BankNotice") && !value["BankNotice"].IsNull())
    {
        if (!value["BankNotice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SupportBankInfo.BankNotice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankNotice = string(value["BankNotice"].GetString());
        m_bankNoticeHasBeenSet = true;
    }

    if (value.HasMember("BankId") && !value["BankId"].IsNull())
    {
        if (!value["BankId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SupportBankInfo.BankId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankId = string(value["BankId"].GetString());
        m_bankIdHasBeenSet = true;
    }

    if (value.HasMember("CardType") && !value["CardType"].IsNull())
    {
        if (!value["CardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SupportBankInfo.CardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardType = string(value["CardType"].GetString());
        m_cardTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SupportBankInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bankCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankCode.c_str(), allocator).Move(), allocator);
    }

    if (m_bankNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankName.c_str(), allocator).Move(), allocator);
    }

    if (m_maintainStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintainStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maintainStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_bankNoticeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankNotice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankNotice.c_str(), allocator).Move(), allocator);
    }

    if (m_bankIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankId.c_str(), allocator).Move(), allocator);
    }

    if (m_cardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cardType.c_str(), allocator).Move(), allocator);
    }

}


string SupportBankInfo::GetBankCode() const
{
    return m_bankCode;
}

void SupportBankInfo::SetBankCode(const string& _bankCode)
{
    m_bankCode = _bankCode;
    m_bankCodeHasBeenSet = true;
}

bool SupportBankInfo::BankCodeHasBeenSet() const
{
    return m_bankCodeHasBeenSet;
}

string SupportBankInfo::GetBankName() const
{
    return m_bankName;
}

void SupportBankInfo::SetBankName(const string& _bankName)
{
    m_bankName = _bankName;
    m_bankNameHasBeenSet = true;
}

bool SupportBankInfo::BankNameHasBeenSet() const
{
    return m_bankNameHasBeenSet;
}

string SupportBankInfo::GetMaintainStatus() const
{
    return m_maintainStatus;
}

void SupportBankInfo::SetMaintainStatus(const string& _maintainStatus)
{
    m_maintainStatus = _maintainStatus;
    m_maintainStatusHasBeenSet = true;
}

bool SupportBankInfo::MaintainStatusHasBeenSet() const
{
    return m_maintainStatusHasBeenSet;
}

string SupportBankInfo::GetBankNotice() const
{
    return m_bankNotice;
}

void SupportBankInfo::SetBankNotice(const string& _bankNotice)
{
    m_bankNotice = _bankNotice;
    m_bankNoticeHasBeenSet = true;
}

bool SupportBankInfo::BankNoticeHasBeenSet() const
{
    return m_bankNoticeHasBeenSet;
}

string SupportBankInfo::GetBankId() const
{
    return m_bankId;
}

void SupportBankInfo::SetBankId(const string& _bankId)
{
    m_bankId = _bankId;
    m_bankIdHasBeenSet = true;
}

bool SupportBankInfo::BankIdHasBeenSet() const
{
    return m_bankIdHasBeenSet;
}

string SupportBankInfo::GetCardType() const
{
    return m_cardType;
}

void SupportBankInfo::SetCardType(const string& _cardType)
{
    m_cardType = _cardType;
    m_cardTypeHasBeenSet = true;
}

bool SupportBankInfo::CardTypeHasBeenSet() const
{
    return m_cardTypeHasBeenSet;
}

