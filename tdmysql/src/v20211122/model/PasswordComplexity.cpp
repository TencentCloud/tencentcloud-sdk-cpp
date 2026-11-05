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

#include <tencentcloud/tdmysql/v20211122/model/PasswordComplexity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

PasswordComplexity::PasswordComplexity() :
    m_enableHasBeenSet(false),
    m_mixedCaseCountHasBeenSet(false),
    m_numberCountHasBeenSet(false),
    m_specialCharCountHasBeenSet(false),
    m_lengthHasBeenSet(false)
{
}

CoreInternalOutcome PasswordComplexity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PasswordComplexity.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("MixedCaseCount") && !value["MixedCaseCount"].IsNull())
    {
        if (!value["MixedCaseCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PasswordComplexity.MixedCaseCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mixedCaseCount = value["MixedCaseCount"].GetUint64();
        m_mixedCaseCountHasBeenSet = true;
    }

    if (value.HasMember("NumberCount") && !value["NumberCount"].IsNull())
    {
        if (!value["NumberCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PasswordComplexity.NumberCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_numberCount = value["NumberCount"].GetUint64();
        m_numberCountHasBeenSet = true;
    }

    if (value.HasMember("SpecialCharCount") && !value["SpecialCharCount"].IsNull())
    {
        if (!value["SpecialCharCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PasswordComplexity.SpecialCharCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_specialCharCount = value["SpecialCharCount"].GetUint64();
        m_specialCharCountHasBeenSet = true;
    }

    if (value.HasMember("Length") && !value["Length"].IsNull())
    {
        if (!value["Length"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PasswordComplexity.Length` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_length = value["Length"].GetUint64();
        m_lengthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PasswordComplexity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_mixedCaseCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MixedCaseCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mixedCaseCount, allocator);
    }

    if (m_numberCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumberCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numberCount, allocator);
    }

    if (m_specialCharCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecialCharCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_specialCharCount, allocator);
    }

    if (m_lengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Length";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_length, allocator);
    }

}


bool PasswordComplexity::GetEnable() const
{
    return m_enable;
}

void PasswordComplexity::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool PasswordComplexity::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t PasswordComplexity::GetMixedCaseCount() const
{
    return m_mixedCaseCount;
}

void PasswordComplexity::SetMixedCaseCount(const uint64_t& _mixedCaseCount)
{
    m_mixedCaseCount = _mixedCaseCount;
    m_mixedCaseCountHasBeenSet = true;
}

bool PasswordComplexity::MixedCaseCountHasBeenSet() const
{
    return m_mixedCaseCountHasBeenSet;
}

uint64_t PasswordComplexity::GetNumberCount() const
{
    return m_numberCount;
}

void PasswordComplexity::SetNumberCount(const uint64_t& _numberCount)
{
    m_numberCount = _numberCount;
    m_numberCountHasBeenSet = true;
}

bool PasswordComplexity::NumberCountHasBeenSet() const
{
    return m_numberCountHasBeenSet;
}

uint64_t PasswordComplexity::GetSpecialCharCount() const
{
    return m_specialCharCount;
}

void PasswordComplexity::SetSpecialCharCount(const uint64_t& _specialCharCount)
{
    m_specialCharCount = _specialCharCount;
    m_specialCharCountHasBeenSet = true;
}

bool PasswordComplexity::SpecialCharCountHasBeenSet() const
{
    return m_specialCharCountHasBeenSet;
}

uint64_t PasswordComplexity::GetLength() const
{
    return m_length;
}

void PasswordComplexity::SetLength(const uint64_t& _length)
{
    m_length = _length;
    m_lengthHasBeenSet = true;
}

bool PasswordComplexity::LengthHasBeenSet() const
{
    return m_lengthHasBeenSet;
}

