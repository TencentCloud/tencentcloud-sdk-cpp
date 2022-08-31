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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankSubMerchantSignOnlineResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankSubMerchantSignOnlineResult::QueryOpenBankSubMerchantSignOnlineResult() :
    m_signStatusHasBeenSet(false),
    m_signMessageHasBeenSet(false)
{
}

CoreInternalOutcome QueryOpenBankSubMerchantSignOnlineResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SignStatus") && !value["SignStatus"].IsNull())
    {
        if (!value["SignStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankSubMerchantSignOnlineResult.SignStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signStatus = string(value["SignStatus"].GetString());
        m_signStatusHasBeenSet = true;
    }

    if (value.HasMember("SignMessage") && !value["SignMessage"].IsNull())
    {
        if (!value["SignMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankSubMerchantSignOnlineResult.SignMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signMessage = string(value["SignMessage"].GetString());
        m_signMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryOpenBankSubMerchantSignOnlineResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_signStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_signMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signMessage.c_str(), allocator).Move(), allocator);
    }

}


string QueryOpenBankSubMerchantSignOnlineResult::GetSignStatus() const
{
    return m_signStatus;
}

void QueryOpenBankSubMerchantSignOnlineResult::SetSignStatus(const string& _signStatus)
{
    m_signStatus = _signStatus;
    m_signStatusHasBeenSet = true;
}

bool QueryOpenBankSubMerchantSignOnlineResult::SignStatusHasBeenSet() const
{
    return m_signStatusHasBeenSet;
}

string QueryOpenBankSubMerchantSignOnlineResult::GetSignMessage() const
{
    return m_signMessage;
}

void QueryOpenBankSubMerchantSignOnlineResult::SetSignMessage(const string& _signMessage)
{
    m_signMessage = _signMessage;
    m_signMessageHasBeenSet = true;
}

bool QueryOpenBankSubMerchantSignOnlineResult::SignMessageHasBeenSet() const
{
    return m_signMessageHasBeenSet;
}

