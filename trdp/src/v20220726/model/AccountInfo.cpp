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

#include <tencentcloud/trdp/v20220726/model/AccountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trdp::V20220726::Model;
using namespace std;

AccountInfo::AccountInfo() :
    m_accountTypeHasBeenSet(false),
    m_universalAccountHasBeenSet(false)
{
}

CoreInternalOutcome AccountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountInfo.AccountType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = value["AccountType"].GetInt64();
        m_accountTypeHasBeenSet = true;
    }

    if (value.HasMember("UniversalAccount") && !value["UniversalAccount"].IsNull())
    {
        if (!value["UniversalAccount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccountInfo.UniversalAccount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_universalAccount.Deserialize(value["UniversalAccount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_universalAccountHasBeenSet = true;
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

    if (m_universalAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniversalAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_universalAccount.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t AccountInfo::GetAccountType() const
{
    return m_accountType;
}

void AccountInfo::SetAccountType(const int64_t& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool AccountInfo::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

UniversalAccountInfo AccountInfo::GetUniversalAccount() const
{
    return m_universalAccount;
}

void AccountInfo::SetUniversalAccount(const UniversalAccountInfo& _universalAccount)
{
    m_universalAccount = _universalAccount;
    m_universalAccountHasBeenSet = true;
}

bool AccountInfo::UniversalAccountHasBeenSet() const
{
    return m_universalAccountHasBeenSet;
}

