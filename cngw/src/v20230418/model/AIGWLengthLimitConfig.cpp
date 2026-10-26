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

#include <tencentcloud/cngw/v20230418/model/AIGWLengthLimitConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWLengthLimitConfig::AIGWLengthLimitConfig() :
    m_enableInputLimitHasBeenSet(false),
    m_maxInputCharsHasBeenSet(false)
{
}

CoreInternalOutcome AIGWLengthLimitConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableInputLimit") && !value["EnableInputLimit"].IsNull())
    {
        if (!value["EnableInputLimit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLengthLimitConfig.EnableInputLimit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableInputLimit = value["EnableInputLimit"].GetBool();
        m_enableInputLimitHasBeenSet = true;
    }

    if (value.HasMember("MaxInputChars") && !value["MaxInputChars"].IsNull())
    {
        if (!value["MaxInputChars"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLengthLimitConfig.MaxInputChars` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxInputChars = value["MaxInputChars"].GetUint64();
        m_maxInputCharsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWLengthLimitConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableInputLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableInputLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableInputLimit, allocator);
    }

    if (m_maxInputCharsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxInputChars";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxInputChars, allocator);
    }

}


bool AIGWLengthLimitConfig::GetEnableInputLimit() const
{
    return m_enableInputLimit;
}

void AIGWLengthLimitConfig::SetEnableInputLimit(const bool& _enableInputLimit)
{
    m_enableInputLimit = _enableInputLimit;
    m_enableInputLimitHasBeenSet = true;
}

bool AIGWLengthLimitConfig::EnableInputLimitHasBeenSet() const
{
    return m_enableInputLimitHasBeenSet;
}

uint64_t AIGWLengthLimitConfig::GetMaxInputChars() const
{
    return m_maxInputChars;
}

void AIGWLengthLimitConfig::SetMaxInputChars(const uint64_t& _maxInputChars)
{
    m_maxInputChars = _maxInputChars;
    m_maxInputCharsHasBeenSet = true;
}

bool AIGWLengthLimitConfig::MaxInputCharsHasBeenSet() const
{
    return m_maxInputCharsHasBeenSet;
}

