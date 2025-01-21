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

#include <tencentcloud/lke/v20231130/model/SearchStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

SearchStrategy::SearchStrategy() :
    m_strategyTypeHasBeenSet(false),
    m_tableEnhancementHasBeenSet(false)
{
}

CoreInternalOutcome SearchStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StrategyType") && !value["StrategyType"].IsNull())
    {
        if (!value["StrategyType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchStrategy.StrategyType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyType = value["StrategyType"].GetUint64();
        m_strategyTypeHasBeenSet = true;
    }

    if (value.HasMember("TableEnhancement") && !value["TableEnhancement"].IsNull())
    {
        if (!value["TableEnhancement"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SearchStrategy.TableEnhancement` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_tableEnhancement = value["TableEnhancement"].GetBool();
        m_tableEnhancementHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_strategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyType, allocator);
    }

    if (m_tableEnhancementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableEnhancement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableEnhancement, allocator);
    }

}


uint64_t SearchStrategy::GetStrategyType() const
{
    return m_strategyType;
}

void SearchStrategy::SetStrategyType(const uint64_t& _strategyType)
{
    m_strategyType = _strategyType;
    m_strategyTypeHasBeenSet = true;
}

bool SearchStrategy::StrategyTypeHasBeenSet() const
{
    return m_strategyTypeHasBeenSet;
}

bool SearchStrategy::GetTableEnhancement() const
{
    return m_tableEnhancement;
}

void SearchStrategy::SetTableEnhancement(const bool& _tableEnhancement)
{
    m_tableEnhancement = _tableEnhancement;
    m_tableEnhancementHasBeenSet = true;
}

bool SearchStrategy::TableEnhancementHasBeenSet() const
{
    return m_tableEnhancementHasBeenSet;
}

