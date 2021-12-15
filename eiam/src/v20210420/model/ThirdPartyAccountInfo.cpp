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

#include <tencentcloud/eiam/v20210420/model/ThirdPartyAccountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

ThirdPartyAccountInfo::ThirdPartyAccountInfo() :
    m_accountCodeHasBeenSet(false),
    m_accountNameHasBeenSet(false)
{
}

CoreInternalOutcome ThirdPartyAccountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountCode") && !value["AccountCode"].IsNull())
    {
        if (!value["AccountCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThirdPartyAccountInfo.AccountCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountCode = string(value["AccountCode"].GetString());
        m_accountCodeHasBeenSet = true;
    }

    if (value.HasMember("AccountName") && !value["AccountName"].IsNull())
    {
        if (!value["AccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThirdPartyAccountInfo.AccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountName = string(value["AccountName"].GetString());
        m_accountNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ThirdPartyAccountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountCode.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

}


string ThirdPartyAccountInfo::GetAccountCode() const
{
    return m_accountCode;
}

void ThirdPartyAccountInfo::SetAccountCode(const string& _accountCode)
{
    m_accountCode = _accountCode;
    m_accountCodeHasBeenSet = true;
}

bool ThirdPartyAccountInfo::AccountCodeHasBeenSet() const
{
    return m_accountCodeHasBeenSet;
}

string ThirdPartyAccountInfo::GetAccountName() const
{
    return m_accountName;
}

void ThirdPartyAccountInfo::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool ThirdPartyAccountInfo::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

