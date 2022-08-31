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

#include <tencentcloud/cpdp/v20190820/model/ApplyOpenBankSubMerchantSignOnlineResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ApplyOpenBankSubMerchantSignOnlineResult::ApplyOpenBankSubMerchantSignOnlineResult() :
    m_signStatusHasBeenSet(false),
    m_signMessageHasBeenSet(false),
    m_externalReturnDataHasBeenSet(false)
{
}

CoreInternalOutcome ApplyOpenBankSubMerchantSignOnlineResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SignStatus") && !value["SignStatus"].IsNull())
    {
        if (!value["SignStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyOpenBankSubMerchantSignOnlineResult.SignStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signStatus = string(value["SignStatus"].GetString());
        m_signStatusHasBeenSet = true;
    }

    if (value.HasMember("SignMessage") && !value["SignMessage"].IsNull())
    {
        if (!value["SignMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyOpenBankSubMerchantSignOnlineResult.SignMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signMessage = string(value["SignMessage"].GetString());
        m_signMessageHasBeenSet = true;
    }

    if (value.HasMember("ExternalReturnData") && !value["ExternalReturnData"].IsNull())
    {
        if (!value["ExternalReturnData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyOpenBankSubMerchantSignOnlineResult.ExternalReturnData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalReturnData = string(value["ExternalReturnData"].GetString());
        m_externalReturnDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplyOpenBankSubMerchantSignOnlineResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_externalReturnDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalReturnData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalReturnData.c_str(), allocator).Move(), allocator);
    }

}


string ApplyOpenBankSubMerchantSignOnlineResult::GetSignStatus() const
{
    return m_signStatus;
}

void ApplyOpenBankSubMerchantSignOnlineResult::SetSignStatus(const string& _signStatus)
{
    m_signStatus = _signStatus;
    m_signStatusHasBeenSet = true;
}

bool ApplyOpenBankSubMerchantSignOnlineResult::SignStatusHasBeenSet() const
{
    return m_signStatusHasBeenSet;
}

string ApplyOpenBankSubMerchantSignOnlineResult::GetSignMessage() const
{
    return m_signMessage;
}

void ApplyOpenBankSubMerchantSignOnlineResult::SetSignMessage(const string& _signMessage)
{
    m_signMessage = _signMessage;
    m_signMessageHasBeenSet = true;
}

bool ApplyOpenBankSubMerchantSignOnlineResult::SignMessageHasBeenSet() const
{
    return m_signMessageHasBeenSet;
}

string ApplyOpenBankSubMerchantSignOnlineResult::GetExternalReturnData() const
{
    return m_externalReturnData;
}

void ApplyOpenBankSubMerchantSignOnlineResult::SetExternalReturnData(const string& _externalReturnData)
{
    m_externalReturnData = _externalReturnData;
    m_externalReturnDataHasBeenSet = true;
}

bool ApplyOpenBankSubMerchantSignOnlineResult::ExternalReturnDataHasBeenSet() const
{
    return m_externalReturnDataHasBeenSet;
}

