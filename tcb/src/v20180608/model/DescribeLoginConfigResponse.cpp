/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tcb/v20180608/model/DescribeLoginConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeLoginConfigResponse::DescribeLoginConfigResponse() :
    m_emailLoginHasBeenSet(false),
    m_anonymousLoginHasBeenSet(false),
    m_userNameLoginHasBeenSet(false),
    m_smsVerificationConfigHasBeenSet(false),
    m_phoneNumberLoginHasBeenSet(false),
    m_mfaConfigHasBeenSet(false),
    m_pwdUpdateStrategyHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLoginConfigResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("EmailLogin") && !rsp["EmailLogin"].IsNull())
    {
        if (!rsp["EmailLogin"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EmailLogin` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_emailLogin = rsp["EmailLogin"].GetBool();
        m_emailLoginHasBeenSet = true;
    }

    if (rsp.HasMember("AnonymousLogin") && !rsp["AnonymousLogin"].IsNull())
    {
        if (!rsp["AnonymousLogin"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AnonymousLogin` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_anonymousLogin = rsp["AnonymousLogin"].GetBool();
        m_anonymousLoginHasBeenSet = true;
    }

    if (rsp.HasMember("UserNameLogin") && !rsp["UserNameLogin"].IsNull())
    {
        if (!rsp["UserNameLogin"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UserNameLogin` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_userNameLogin = rsp["UserNameLogin"].GetBool();
        m_userNameLoginHasBeenSet = true;
    }

    if (rsp.HasMember("SmsVerificationConfig") && !rsp["SmsVerificationConfig"].IsNull())
    {
        if (!rsp["SmsVerificationConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmsVerificationConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_smsVerificationConfig.Deserialize(rsp["SmsVerificationConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_smsVerificationConfigHasBeenSet = true;
    }

    if (rsp.HasMember("PhoneNumberLogin") && !rsp["PhoneNumberLogin"].IsNull())
    {
        if (!rsp["PhoneNumberLogin"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneNumberLogin` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumberLogin = rsp["PhoneNumberLogin"].GetBool();
        m_phoneNumberLoginHasBeenSet = true;
    }

    if (rsp.HasMember("MfaConfig") && !rsp["MfaConfig"].IsNull())
    {
        if (!rsp["MfaConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MfaConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mfaConfig.Deserialize(rsp["MfaConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mfaConfigHasBeenSet = true;
    }

    if (rsp.HasMember("PwdUpdateStrategy") && !rsp["PwdUpdateStrategy"].IsNull())
    {
        if (!rsp["PwdUpdateStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PwdUpdateStrategy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pwdUpdateStrategy.Deserialize(rsp["PwdUpdateStrategy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pwdUpdateStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeLoginConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_emailLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmailLogin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_emailLogin, allocator);
    }

    if (m_anonymousLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnonymousLogin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_anonymousLogin, allocator);
    }

    if (m_userNameLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserNameLogin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userNameLogin, allocator);
    }

    if (m_smsVerificationConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmsVerificationConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_smsVerificationConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_phoneNumberLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumberLogin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_phoneNumberLogin, allocator);
    }

    if (m_mfaConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MfaConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mfaConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pwdUpdateStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PwdUpdateStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pwdUpdateStrategy.ToJsonObject(value[key.c_str()], allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


bool DescribeLoginConfigResponse::GetEmailLogin() const
{
    return m_emailLogin;
}

bool DescribeLoginConfigResponse::EmailLoginHasBeenSet() const
{
    return m_emailLoginHasBeenSet;
}

bool DescribeLoginConfigResponse::GetAnonymousLogin() const
{
    return m_anonymousLogin;
}

bool DescribeLoginConfigResponse::AnonymousLoginHasBeenSet() const
{
    return m_anonymousLoginHasBeenSet;
}

bool DescribeLoginConfigResponse::GetUserNameLogin() const
{
    return m_userNameLogin;
}

bool DescribeLoginConfigResponse::UserNameLoginHasBeenSet() const
{
    return m_userNameLoginHasBeenSet;
}

VerificationConfig DescribeLoginConfigResponse::GetSmsVerificationConfig() const
{
    return m_smsVerificationConfig;
}

bool DescribeLoginConfigResponse::SmsVerificationConfigHasBeenSet() const
{
    return m_smsVerificationConfigHasBeenSet;
}

bool DescribeLoginConfigResponse::GetPhoneNumberLogin() const
{
    return m_phoneNumberLogin;
}

bool DescribeLoginConfigResponse::PhoneNumberLoginHasBeenSet() const
{
    return m_phoneNumberLoginHasBeenSet;
}

MFALoginConfig DescribeLoginConfigResponse::GetMfaConfig() const
{
    return m_mfaConfig;
}

bool DescribeLoginConfigResponse::MfaConfigHasBeenSet() const
{
    return m_mfaConfigHasBeenSet;
}

PasswordUpdateLoginConfig DescribeLoginConfigResponse::GetPwdUpdateStrategy() const
{
    return m_pwdUpdateStrategy;
}

bool DescribeLoginConfigResponse::PwdUpdateStrategyHasBeenSet() const
{
    return m_pwdUpdateStrategyHasBeenSet;
}


