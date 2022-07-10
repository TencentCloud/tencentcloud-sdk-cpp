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

#include <tencentcloud/cpdp/v20190820/model/VerifyOpenBankAccountResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

VerifyOpenBankAccountResult::VerifyOpenBankAccountResult() :
    m_verifyStateHasBeenSet(false),
    m_redirectInfoHasBeenSet(false)
{
}

CoreInternalOutcome VerifyOpenBankAccountResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VerifyState") && !value["VerifyState"].IsNull())
    {
        if (!value["VerifyState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyOpenBankAccountResult.VerifyState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyState = string(value["VerifyState"].GetString());
        m_verifyStateHasBeenSet = true;
    }

    if (value.HasMember("RedirectInfo") && !value["RedirectInfo"].IsNull())
    {
        if (!value["RedirectInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyOpenBankAccountResult.RedirectInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_redirectInfo.Deserialize(value["RedirectInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_redirectInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VerifyOpenBankAccountResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_verifyStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyState.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_redirectInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string VerifyOpenBankAccountResult::GetVerifyState() const
{
    return m_verifyState;
}

void VerifyOpenBankAccountResult::SetVerifyState(const string& _verifyState)
{
    m_verifyState = _verifyState;
    m_verifyStateHasBeenSet = true;
}

bool VerifyOpenBankAccountResult::VerifyStateHasBeenSet() const
{
    return m_verifyStateHasBeenSet;
}

OpenBankRedirectInfo VerifyOpenBankAccountResult::GetRedirectInfo() const
{
    return m_redirectInfo;
}

void VerifyOpenBankAccountResult::SetRedirectInfo(const OpenBankRedirectInfo& _redirectInfo)
{
    m_redirectInfo = _redirectInfo;
    m_redirectInfoHasBeenSet = true;
}

bool VerifyOpenBankAccountResult::RedirectInfoHasBeenSet() const
{
    return m_redirectInfoHasBeenSet;
}

