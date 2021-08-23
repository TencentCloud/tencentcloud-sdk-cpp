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

#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoCallback.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribePolicyGroupInfoCallback::DescribePolicyGroupInfoCallback() :
    m_callbackUrlHasBeenSet(false),
    m_validFlagHasBeenSet(false),
    m_verifyCodeHasBeenSet(false)
{
}

CoreInternalOutcome DescribePolicyGroupInfoCallback::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CallbackUrl") && !value["CallbackUrl"].IsNull())
    {
        if (!value["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoCallback.CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(value["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }

    if (value.HasMember("ValidFlag") && !value["ValidFlag"].IsNull())
    {
        if (!value["ValidFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoCallback.ValidFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_validFlag = value["ValidFlag"].GetInt64();
        m_validFlagHasBeenSet = true;
    }

    if (value.HasMember("VerifyCode") && !value["VerifyCode"].IsNull())
    {
        if (!value["VerifyCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoCallback.VerifyCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyCode = string(value["VerifyCode"].GetString());
        m_verifyCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribePolicyGroupInfoCallback::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_validFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validFlag, allocator);
    }

    if (m_verifyCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyCode.c_str(), allocator).Move(), allocator);
    }

}


string DescribePolicyGroupInfoCallback::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void DescribePolicyGroupInfoCallback::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool DescribePolicyGroupInfoCallback::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

int64_t DescribePolicyGroupInfoCallback::GetValidFlag() const
{
    return m_validFlag;
}

void DescribePolicyGroupInfoCallback::SetValidFlag(const int64_t& _validFlag)
{
    m_validFlag = _validFlag;
    m_validFlagHasBeenSet = true;
}

bool DescribePolicyGroupInfoCallback::ValidFlagHasBeenSet() const
{
    return m_validFlagHasBeenSet;
}

string DescribePolicyGroupInfoCallback::GetVerifyCode() const
{
    return m_verifyCode;
}

void DescribePolicyGroupInfoCallback::SetVerifyCode(const string& _verifyCode)
{
    m_verifyCode = _verifyCode;
    m_verifyCodeHasBeenSet = true;
}

bool DescribePolicyGroupInfoCallback::VerifyCodeHasBeenSet() const
{
    return m_verifyCodeHasBeenSet;
}

