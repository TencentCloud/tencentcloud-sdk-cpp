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

#include <tencentcloud/redis/v20180412/model/PasswordPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

PasswordPolicy::PasswordPolicy() :
    m_enabledHasBeenSet(false),
    m_minLetterCountHasBeenSet(false),
    m_minDigitCountHasBeenSet(false),
    m_minSpecialCountHasBeenSet(false),
    m_minLengthHasBeenSet(false)
{
}

CoreInternalOutcome PasswordPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PasswordPolicy.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("MinLetterCount") && !value["MinLetterCount"].IsNull())
    {
        if (!value["MinLetterCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PasswordPolicy.MinLetterCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minLetterCount = value["MinLetterCount"].GetInt64();
        m_minLetterCountHasBeenSet = true;
    }

    if (value.HasMember("MinDigitCount") && !value["MinDigitCount"].IsNull())
    {
        if (!value["MinDigitCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PasswordPolicy.MinDigitCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minDigitCount = value["MinDigitCount"].GetInt64();
        m_minDigitCountHasBeenSet = true;
    }

    if (value.HasMember("MinSpecialCount") && !value["MinSpecialCount"].IsNull())
    {
        if (!value["MinSpecialCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PasswordPolicy.MinSpecialCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minSpecialCount = value["MinSpecialCount"].GetInt64();
        m_minSpecialCountHasBeenSet = true;
    }

    if (value.HasMember("MinLength") && !value["MinLength"].IsNull())
    {
        if (!value["MinLength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PasswordPolicy.MinLength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minLength = value["MinLength"].GetInt64();
        m_minLengthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PasswordPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_minLetterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinLetterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minLetterCount, allocator);
    }

    if (m_minDigitCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinDigitCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minDigitCount, allocator);
    }

    if (m_minSpecialCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinSpecialCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minSpecialCount, allocator);
    }

    if (m_minLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minLength, allocator);
    }

}


bool PasswordPolicy::GetEnabled() const
{
    return m_enabled;
}

void PasswordPolicy::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool PasswordPolicy::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

int64_t PasswordPolicy::GetMinLetterCount() const
{
    return m_minLetterCount;
}

void PasswordPolicy::SetMinLetterCount(const int64_t& _minLetterCount)
{
    m_minLetterCount = _minLetterCount;
    m_minLetterCountHasBeenSet = true;
}

bool PasswordPolicy::MinLetterCountHasBeenSet() const
{
    return m_minLetterCountHasBeenSet;
}

int64_t PasswordPolicy::GetMinDigitCount() const
{
    return m_minDigitCount;
}

void PasswordPolicy::SetMinDigitCount(const int64_t& _minDigitCount)
{
    m_minDigitCount = _minDigitCount;
    m_minDigitCountHasBeenSet = true;
}

bool PasswordPolicy::MinDigitCountHasBeenSet() const
{
    return m_minDigitCountHasBeenSet;
}

int64_t PasswordPolicy::GetMinSpecialCount() const
{
    return m_minSpecialCount;
}

void PasswordPolicy::SetMinSpecialCount(const int64_t& _minSpecialCount)
{
    m_minSpecialCount = _minSpecialCount;
    m_minSpecialCountHasBeenSet = true;
}

bool PasswordPolicy::MinSpecialCountHasBeenSet() const
{
    return m_minSpecialCountHasBeenSet;
}

int64_t PasswordPolicy::GetMinLength() const
{
    return m_minLength;
}

void PasswordPolicy::SetMinLength(const int64_t& _minLength)
{
    m_minLength = _minLength;
    m_minLengthHasBeenSet = true;
}

bool PasswordPolicy::MinLengthHasBeenSet() const
{
    return m_minLengthHasBeenSet;
}

