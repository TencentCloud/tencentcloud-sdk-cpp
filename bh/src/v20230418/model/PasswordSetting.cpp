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

#include <tencentcloud/bh/v20230418/model/PasswordSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

PasswordSetting::PasswordSetting() :
    m_minLengthHasBeenSet(false),
    m_complexityHasBeenSet(false),
    m_validTermHasBeenSet(false),
    m_checkHistoryHasBeenSet(false)
{
}

CoreInternalOutcome PasswordSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MinLength") && !value["MinLength"].IsNull())
    {
        if (!value["MinLength"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PasswordSetting.MinLength` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minLength = value["MinLength"].GetUint64();
        m_minLengthHasBeenSet = true;
    }

    if (value.HasMember("Complexity") && !value["Complexity"].IsNull())
    {
        if (!value["Complexity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PasswordSetting.Complexity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_complexity = value["Complexity"].GetUint64();
        m_complexityHasBeenSet = true;
    }

    if (value.HasMember("ValidTerm") && !value["ValidTerm"].IsNull())
    {
        if (!value["ValidTerm"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PasswordSetting.ValidTerm` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_validTerm = value["ValidTerm"].GetUint64();
        m_validTermHasBeenSet = true;
    }

    if (value.HasMember("CheckHistory") && !value["CheckHistory"].IsNull())
    {
        if (!value["CheckHistory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PasswordSetting.CheckHistory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_checkHistory = value["CheckHistory"].GetUint64();
        m_checkHistoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PasswordSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_minLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minLength, allocator);
    }

    if (m_complexityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Complexity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_complexity, allocator);
    }

    if (m_validTermHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidTerm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validTerm, allocator);
    }

    if (m_checkHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkHistory, allocator);
    }

}


uint64_t PasswordSetting::GetMinLength() const
{
    return m_minLength;
}

void PasswordSetting::SetMinLength(const uint64_t& _minLength)
{
    m_minLength = _minLength;
    m_minLengthHasBeenSet = true;
}

bool PasswordSetting::MinLengthHasBeenSet() const
{
    return m_minLengthHasBeenSet;
}

uint64_t PasswordSetting::GetComplexity() const
{
    return m_complexity;
}

void PasswordSetting::SetComplexity(const uint64_t& _complexity)
{
    m_complexity = _complexity;
    m_complexityHasBeenSet = true;
}

bool PasswordSetting::ComplexityHasBeenSet() const
{
    return m_complexityHasBeenSet;
}

uint64_t PasswordSetting::GetValidTerm() const
{
    return m_validTerm;
}

void PasswordSetting::SetValidTerm(const uint64_t& _validTerm)
{
    m_validTerm = _validTerm;
    m_validTermHasBeenSet = true;
}

bool PasswordSetting::ValidTermHasBeenSet() const
{
    return m_validTermHasBeenSet;
}

uint64_t PasswordSetting::GetCheckHistory() const
{
    return m_checkHistory;
}

void PasswordSetting::SetCheckHistory(const uint64_t& _checkHistory)
{
    m_checkHistory = _checkHistory;
    m_checkHistoryHasBeenSet = true;
}

bool PasswordSetting::CheckHistoryHasBeenSet() const
{
    return m_checkHistoryHasBeenSet;
}

