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

#include <tencentcloud/csip/v20221121/model/SensitiveDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

SensitiveDetail::SensitiveDetail() :
    m_categoryRuleHasBeenSet(false),
    m_levelRiskHasBeenSet(false),
    m_isSensitiveHasBeenSet(false)
{
}

CoreInternalOutcome SensitiveDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CategoryRule") && !value["CategoryRule"].IsNull())
    {
        if (!value["CategoryRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveDetail.CategoryRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryRule = string(value["CategoryRule"].GetString());
        m_categoryRuleHasBeenSet = true;
    }

    if (value.HasMember("LevelRisk") && !value["LevelRisk"].IsNull())
    {
        if (!value["LevelRisk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveDetail.LevelRisk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelRisk = string(value["LevelRisk"].GetString());
        m_levelRiskHasBeenSet = true;
    }

    if (value.HasMember("IsSensitive") && !value["IsSensitive"].IsNull())
    {
        if (!value["IsSensitive"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveDetail.IsSensitive` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isSensitive = value["IsSensitive"].GetUint64();
        m_isSensitiveHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SensitiveDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryRule.c_str(), allocator).Move(), allocator);
    }

    if (m_levelRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelRisk.c_str(), allocator).Move(), allocator);
    }

    if (m_isSensitiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSensitive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSensitive, allocator);
    }

}


string SensitiveDetail::GetCategoryRule() const
{
    return m_categoryRule;
}

void SensitiveDetail::SetCategoryRule(const string& _categoryRule)
{
    m_categoryRule = _categoryRule;
    m_categoryRuleHasBeenSet = true;
}

bool SensitiveDetail::CategoryRuleHasBeenSet() const
{
    return m_categoryRuleHasBeenSet;
}

string SensitiveDetail::GetLevelRisk() const
{
    return m_levelRisk;
}

void SensitiveDetail::SetLevelRisk(const string& _levelRisk)
{
    m_levelRisk = _levelRisk;
    m_levelRiskHasBeenSet = true;
}

bool SensitiveDetail::LevelRiskHasBeenSet() const
{
    return m_levelRiskHasBeenSet;
}

uint64_t SensitiveDetail::GetIsSensitive() const
{
    return m_isSensitive;
}

void SensitiveDetail::SetIsSensitive(const uint64_t& _isSensitive)
{
    m_isSensitive = _isSensitive;
    m_isSensitiveHasBeenSet = true;
}

bool SensitiveDetail::IsSensitiveHasBeenSet() const
{
    return m_isSensitiveHasBeenSet;
}

