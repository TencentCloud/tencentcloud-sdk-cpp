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

#include <tencentcloud/lke/v20231130/model/SearchStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

SearchStrategy::SearchStrategy() :
    m_strategyTypeHasBeenSet(false),
    m_tableEnhancementHasBeenSet(false),
    m_embeddingModelHasBeenSet(false),
    m_rerankModelSwitchHasBeenSet(false),
    m_rerankModelHasBeenSet(false),
    m_natureLanguageToSqlModelConfigHasBeenSet(false)
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

    if (value.HasMember("EmbeddingModel") && !value["EmbeddingModel"].IsNull())
    {
        if (!value["EmbeddingModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchStrategy.EmbeddingModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_embeddingModel = string(value["EmbeddingModel"].GetString());
        m_embeddingModelHasBeenSet = true;
    }

    if (value.HasMember("RerankModelSwitch") && !value["RerankModelSwitch"].IsNull())
    {
        if (!value["RerankModelSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchStrategy.RerankModelSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rerankModelSwitch = string(value["RerankModelSwitch"].GetString());
        m_rerankModelSwitchHasBeenSet = true;
    }

    if (value.HasMember("RerankModel") && !value["RerankModel"].IsNull())
    {
        if (!value["RerankModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchStrategy.RerankModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rerankModel = string(value["RerankModel"].GetString());
        m_rerankModelHasBeenSet = true;
    }

    if (value.HasMember("NatureLanguageToSqlModelConfig") && !value["NatureLanguageToSqlModelConfig"].IsNull())
    {
        if (!value["NatureLanguageToSqlModelConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SearchStrategy.NatureLanguageToSqlModelConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_natureLanguageToSqlModelConfig.Deserialize(value["NatureLanguageToSqlModelConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_natureLanguageToSqlModelConfigHasBeenSet = true;
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

    if (m_embeddingModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmbeddingModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_embeddingModel.c_str(), allocator).Move(), allocator);
    }

    if (m_rerankModelSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RerankModelSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rerankModelSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_rerankModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RerankModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rerankModel.c_str(), allocator).Move(), allocator);
    }

    if (m_natureLanguageToSqlModelConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatureLanguageToSqlModelConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_natureLanguageToSqlModelConfig.ToJsonObject(value[key.c_str()], allocator);
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

string SearchStrategy::GetEmbeddingModel() const
{
    return m_embeddingModel;
}

void SearchStrategy::SetEmbeddingModel(const string& _embeddingModel)
{
    m_embeddingModel = _embeddingModel;
    m_embeddingModelHasBeenSet = true;
}

bool SearchStrategy::EmbeddingModelHasBeenSet() const
{
    return m_embeddingModelHasBeenSet;
}

string SearchStrategy::GetRerankModelSwitch() const
{
    return m_rerankModelSwitch;
}

void SearchStrategy::SetRerankModelSwitch(const string& _rerankModelSwitch)
{
    m_rerankModelSwitch = _rerankModelSwitch;
    m_rerankModelSwitchHasBeenSet = true;
}

bool SearchStrategy::RerankModelSwitchHasBeenSet() const
{
    return m_rerankModelSwitchHasBeenSet;
}

string SearchStrategy::GetRerankModel() const
{
    return m_rerankModel;
}

void SearchStrategy::SetRerankModel(const string& _rerankModel)
{
    m_rerankModel = _rerankModel;
    m_rerankModelHasBeenSet = true;
}

bool SearchStrategy::RerankModelHasBeenSet() const
{
    return m_rerankModelHasBeenSet;
}

NL2SQLModelConfig SearchStrategy::GetNatureLanguageToSqlModelConfig() const
{
    return m_natureLanguageToSqlModelConfig;
}

void SearchStrategy::SetNatureLanguageToSqlModelConfig(const NL2SQLModelConfig& _natureLanguageToSqlModelConfig)
{
    m_natureLanguageToSqlModelConfig = _natureLanguageToSqlModelConfig;
    m_natureLanguageToSqlModelConfigHasBeenSet = true;
}

bool SearchStrategy::NatureLanguageToSqlModelConfigHasBeenSet() const
{
    return m_natureLanguageToSqlModelConfigHasBeenSet;
}

