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

#include <tencentcloud/cam/v20190116/model/PassWordRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

PassWordRule::PassWordRule() :
    m_minimumLengthHasBeenSet(false),
    m_mustContainHasBeenSet(false),
    m_forcePasswordChangeHasBeenSet(false),
    m_reusePasswordLimitHasBeenSet(false),
    m_retryPasswordLimitHasBeenSet(false),
    m_passwordExpirationInvalidationHasBeenSet(false)
{
}

CoreInternalOutcome PassWordRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MinimumLength") && !value["MinimumLength"].IsNull())
    {
        if (!value["MinimumLength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PassWordRule.MinimumLength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minimumLength = value["MinimumLength"].GetInt64();
        m_minimumLengthHasBeenSet = true;
    }

    if (value.HasMember("MustContain") && !value["MustContain"].IsNull())
    {
        if (!value["MustContain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassWordRule.MustContain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mustContain = string(value["MustContain"].GetString());
        m_mustContainHasBeenSet = true;
    }

    if (value.HasMember("ForcePasswordChange") && !value["ForcePasswordChange"].IsNull())
    {
        if (!value["ForcePasswordChange"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PassWordRule.ForcePasswordChange` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_forcePasswordChange = value["ForcePasswordChange"].GetInt64();
        m_forcePasswordChangeHasBeenSet = true;
    }

    if (value.HasMember("ReusePasswordLimit") && !value["ReusePasswordLimit"].IsNull())
    {
        if (!value["ReusePasswordLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PassWordRule.ReusePasswordLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reusePasswordLimit = value["ReusePasswordLimit"].GetInt64();
        m_reusePasswordLimitHasBeenSet = true;
    }

    if (value.HasMember("RetryPasswordLimit") && !value["RetryPasswordLimit"].IsNull())
    {
        if (!value["RetryPasswordLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PassWordRule.RetryPasswordLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryPasswordLimit = value["RetryPasswordLimit"].GetInt64();
        m_retryPasswordLimitHasBeenSet = true;
    }

    if (value.HasMember("PasswordExpirationInvalidation") && !value["PasswordExpirationInvalidation"].IsNull())
    {
        if (!value["PasswordExpirationInvalidation"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PassWordRule.PasswordExpirationInvalidation` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_passwordExpirationInvalidation = value["PasswordExpirationInvalidation"].GetInt64();
        m_passwordExpirationInvalidationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PassWordRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_minimumLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinimumLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minimumLength, allocator);
    }

    if (m_mustContainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MustContain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mustContain.c_str(), allocator).Move(), allocator);
    }

    if (m_forcePasswordChangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForcePasswordChange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forcePasswordChange, allocator);
    }

    if (m_reusePasswordLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReusePasswordLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reusePasswordLimit, allocator);
    }

    if (m_retryPasswordLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryPasswordLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryPasswordLimit, allocator);
    }

    if (m_passwordExpirationInvalidationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PasswordExpirationInvalidation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passwordExpirationInvalidation, allocator);
    }

}


int64_t PassWordRule::GetMinimumLength() const
{
    return m_minimumLength;
}

void PassWordRule::SetMinimumLength(const int64_t& _minimumLength)
{
    m_minimumLength = _minimumLength;
    m_minimumLengthHasBeenSet = true;
}

bool PassWordRule::MinimumLengthHasBeenSet() const
{
    return m_minimumLengthHasBeenSet;
}

string PassWordRule::GetMustContain() const
{
    return m_mustContain;
}

void PassWordRule::SetMustContain(const string& _mustContain)
{
    m_mustContain = _mustContain;
    m_mustContainHasBeenSet = true;
}

bool PassWordRule::MustContainHasBeenSet() const
{
    return m_mustContainHasBeenSet;
}

int64_t PassWordRule::GetForcePasswordChange() const
{
    return m_forcePasswordChange;
}

void PassWordRule::SetForcePasswordChange(const int64_t& _forcePasswordChange)
{
    m_forcePasswordChange = _forcePasswordChange;
    m_forcePasswordChangeHasBeenSet = true;
}

bool PassWordRule::ForcePasswordChangeHasBeenSet() const
{
    return m_forcePasswordChangeHasBeenSet;
}

int64_t PassWordRule::GetReusePasswordLimit() const
{
    return m_reusePasswordLimit;
}

void PassWordRule::SetReusePasswordLimit(const int64_t& _reusePasswordLimit)
{
    m_reusePasswordLimit = _reusePasswordLimit;
    m_reusePasswordLimitHasBeenSet = true;
}

bool PassWordRule::ReusePasswordLimitHasBeenSet() const
{
    return m_reusePasswordLimitHasBeenSet;
}

int64_t PassWordRule::GetRetryPasswordLimit() const
{
    return m_retryPasswordLimit;
}

void PassWordRule::SetRetryPasswordLimit(const int64_t& _retryPasswordLimit)
{
    m_retryPasswordLimit = _retryPasswordLimit;
    m_retryPasswordLimitHasBeenSet = true;
}

bool PassWordRule::RetryPasswordLimitHasBeenSet() const
{
    return m_retryPasswordLimitHasBeenSet;
}

int64_t PassWordRule::GetPasswordExpirationInvalidation() const
{
    return m_passwordExpirationInvalidation;
}

void PassWordRule::SetPasswordExpirationInvalidation(const int64_t& _passwordExpirationInvalidation)
{
    m_passwordExpirationInvalidation = _passwordExpirationInvalidation;
    m_passwordExpirationInvalidationHasBeenSet = true;
}

bool PassWordRule::PasswordExpirationInvalidationHasBeenSet() const
{
    return m_passwordExpirationInvalidationHasBeenSet;
}

