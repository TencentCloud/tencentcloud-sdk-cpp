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

#include <tencentcloud/rce/v20201103/model/AccountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

AccountInfo::AccountInfo() :
    m_accountTypeHasBeenSet(false),
    m_qQAccountHasBeenSet(false),
    m_weChatAccountHasBeenSet(false),
    m_otherAccountHasBeenSet(false)
{
}

CoreInternalOutcome AccountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountInfo.AccountType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = value["AccountType"].GetUint64();
        m_accountTypeHasBeenSet = true;
    }

    if (value.HasMember("QQAccount") && !value["QQAccount"].IsNull())
    {
        if (!value["QQAccount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccountInfo.QQAccount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_qQAccount.Deserialize(value["QQAccount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_qQAccountHasBeenSet = true;
    }

    if (value.HasMember("WeChatAccount") && !value["WeChatAccount"].IsNull())
    {
        if (!value["WeChatAccount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccountInfo.WeChatAccount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_weChatAccount.Deserialize(value["WeChatAccount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_weChatAccountHasBeenSet = true;
    }

    if (value.HasMember("OtherAccount") && !value["OtherAccount"].IsNull())
    {
        if (!value["OtherAccount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccountInfo.OtherAccount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_otherAccount.Deserialize(value["OtherAccount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_otherAccountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountType, allocator);
    }

    if (m_qQAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QQAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qQAccount.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_weChatAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeChatAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_weChatAccount.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_otherAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_otherAccount.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t AccountInfo::GetAccountType() const
{
    return m_accountType;
}

void AccountInfo::SetAccountType(const uint64_t& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool AccountInfo::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

QQAccountInfo AccountInfo::GetQQAccount() const
{
    return m_qQAccount;
}

void AccountInfo::SetQQAccount(const QQAccountInfo& _qQAccount)
{
    m_qQAccount = _qQAccount;
    m_qQAccountHasBeenSet = true;
}

bool AccountInfo::QQAccountHasBeenSet() const
{
    return m_qQAccountHasBeenSet;
}

WeChatAccountInfo AccountInfo::GetWeChatAccount() const
{
    return m_weChatAccount;
}

void AccountInfo::SetWeChatAccount(const WeChatAccountInfo& _weChatAccount)
{
    m_weChatAccount = _weChatAccount;
    m_weChatAccountHasBeenSet = true;
}

bool AccountInfo::WeChatAccountHasBeenSet() const
{
    return m_weChatAccountHasBeenSet;
}

OtherAccountInfo AccountInfo::GetOtherAccount() const
{
    return m_otherAccount;
}

void AccountInfo::SetOtherAccount(const OtherAccountInfo& _otherAccount)
{
    m_otherAccount = _otherAccount;
    m_otherAccountHasBeenSet = true;
}

bool AccountInfo::OtherAccountHasBeenSet() const
{
    return m_otherAccountHasBeenSet;
}

