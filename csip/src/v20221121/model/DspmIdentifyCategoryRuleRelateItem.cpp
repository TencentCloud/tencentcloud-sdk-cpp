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

#include <tencentcloud/csip/v20221121/model/DspmIdentifyCategoryRuleRelateItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmIdentifyCategoryRuleRelateItem::DspmIdentifyCategoryRuleRelateItem() :
    m_ruleIdHasBeenSet(false),
    m_levelIdHasBeenSet(false)
{
}

CoreInternalOutcome DspmIdentifyCategoryRuleRelateItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyCategoryRuleRelateItem.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("LevelId") && !value["LevelId"].IsNull())
    {
        if (!value["LevelId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyCategoryRuleRelateItem.LevelId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_levelId = value["LevelId"].GetUint64();
        m_levelIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmIdentifyCategoryRuleRelateItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_levelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelId, allocator);
    }

}


uint64_t DspmIdentifyCategoryRuleRelateItem::GetRuleId() const
{
    return m_ruleId;
}

void DspmIdentifyCategoryRuleRelateItem::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DspmIdentifyCategoryRuleRelateItem::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

uint64_t DspmIdentifyCategoryRuleRelateItem::GetLevelId() const
{
    return m_levelId;
}

void DspmIdentifyCategoryRuleRelateItem::SetLevelId(const uint64_t& _levelId)
{
    m_levelId = _levelId;
    m_levelIdHasBeenSet = true;
}

bool DspmIdentifyCategoryRuleRelateItem::LevelIdHasBeenSet() const
{
    return m_levelIdHasBeenSet;
}

