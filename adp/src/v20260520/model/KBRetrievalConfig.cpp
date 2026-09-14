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

#include <tencentcloud/adp/v20260520/model/KBRetrievalConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

KBRetrievalConfig::KBRetrievalConfig() :
    m_dbRetrievalConfigHasBeenSet(false),
    m_docRetrievalConfigHasBeenSet(false),
    m_kbIdHasBeenSet(false),
    m_optionConfigHasBeenSet(false),
    m_qaRetrievalConfigHasBeenSet(false),
    m_rerankConfigHasBeenSet(false),
    m_searchFilterConfigHasBeenSet(false),
    m_strategyTypeHasBeenSet(false),
    m_textToSqlModelHasBeenSet(false)
{
}

CoreInternalOutcome KBRetrievalConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DbRetrievalConfig") && !value["DbRetrievalConfig"].IsNull())
    {
        if (!value["DbRetrievalConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KBRetrievalConfig.DbRetrievalConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dbRetrievalConfig.Deserialize(value["DbRetrievalConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dbRetrievalConfigHasBeenSet = true;
    }

    if (value.HasMember("DocRetrievalConfig") && !value["DocRetrievalConfig"].IsNull())
    {
        if (!value["DocRetrievalConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KBRetrievalConfig.DocRetrievalConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_docRetrievalConfig.Deserialize(value["DocRetrievalConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_docRetrievalConfigHasBeenSet = true;
    }

    if (value.HasMember("KbId") && !value["KbId"].IsNull())
    {
        if (!value["KbId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KBRetrievalConfig.KbId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kbId = string(value["KbId"].GetString());
        m_kbIdHasBeenSet = true;
    }

    if (value.HasMember("OptionConfig") && !value["OptionConfig"].IsNull())
    {
        if (!value["OptionConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KBRetrievalConfig.OptionConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_optionConfig.Deserialize(value["OptionConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_optionConfigHasBeenSet = true;
    }

    if (value.HasMember("QaRetrievalConfig") && !value["QaRetrievalConfig"].IsNull())
    {
        if (!value["QaRetrievalConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KBRetrievalConfig.QaRetrievalConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_qaRetrievalConfig.Deserialize(value["QaRetrievalConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_qaRetrievalConfigHasBeenSet = true;
    }

    if (value.HasMember("RerankConfig") && !value["RerankConfig"].IsNull())
    {
        if (!value["RerankConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KBRetrievalConfig.RerankConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rerankConfig.Deserialize(value["RerankConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rerankConfigHasBeenSet = true;
    }

    if (value.HasMember("SearchFilterConfig") && !value["SearchFilterConfig"].IsNull())
    {
        if (!value["SearchFilterConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KBRetrievalConfig.SearchFilterConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_searchFilterConfig.Deserialize(value["SearchFilterConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_searchFilterConfigHasBeenSet = true;
    }

    if (value.HasMember("StrategyType") && !value["StrategyType"].IsNull())
    {
        if (!value["StrategyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KBRetrievalConfig.StrategyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyType = value["StrategyType"].GetInt64();
        m_strategyTypeHasBeenSet = true;
    }

    if (value.HasMember("TextToSqlModel") && !value["TextToSqlModel"].IsNull())
    {
        if (!value["TextToSqlModel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KBRetrievalConfig.TextToSqlModel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_textToSqlModel.Deserialize(value["TextToSqlModel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textToSqlModelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KBRetrievalConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbRetrievalConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbRetrievalConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dbRetrievalConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_docRetrievalConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocRetrievalConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_docRetrievalConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_kbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kbId.c_str(), allocator).Move(), allocator);
    }

    if (m_optionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_optionConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_qaRetrievalConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaRetrievalConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qaRetrievalConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rerankConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RerankConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rerankConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_searchFilterConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchFilterConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_searchFilterConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_strategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyType, allocator);
    }

    if (m_textToSqlModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextToSqlModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_textToSqlModel.ToJsonObject(value[key.c_str()], allocator);
    }

}


DBRetrievalConfig KBRetrievalConfig::GetDbRetrievalConfig() const
{
    return m_dbRetrievalConfig;
}

void KBRetrievalConfig::SetDbRetrievalConfig(const DBRetrievalConfig& _dbRetrievalConfig)
{
    m_dbRetrievalConfig = _dbRetrievalConfig;
    m_dbRetrievalConfigHasBeenSet = true;
}

bool KBRetrievalConfig::DbRetrievalConfigHasBeenSet() const
{
    return m_dbRetrievalConfigHasBeenSet;
}

DocRetrievalConfig KBRetrievalConfig::GetDocRetrievalConfig() const
{
    return m_docRetrievalConfig;
}

void KBRetrievalConfig::SetDocRetrievalConfig(const DocRetrievalConfig& _docRetrievalConfig)
{
    m_docRetrievalConfig = _docRetrievalConfig;
    m_docRetrievalConfigHasBeenSet = true;
}

bool KBRetrievalConfig::DocRetrievalConfigHasBeenSet() const
{
    return m_docRetrievalConfigHasBeenSet;
}

string KBRetrievalConfig::GetKbId() const
{
    return m_kbId;
}

void KBRetrievalConfig::SetKbId(const string& _kbId)
{
    m_kbId = _kbId;
    m_kbIdHasBeenSet = true;
}

bool KBRetrievalConfig::KbIdHasBeenSet() const
{
    return m_kbIdHasBeenSet;
}

RetrievalOption KBRetrievalConfig::GetOptionConfig() const
{
    return m_optionConfig;
}

void KBRetrievalConfig::SetOptionConfig(const RetrievalOption& _optionConfig)
{
    m_optionConfig = _optionConfig;
    m_optionConfigHasBeenSet = true;
}

bool KBRetrievalConfig::OptionConfigHasBeenSet() const
{
    return m_optionConfigHasBeenSet;
}

QARetrievalConfig KBRetrievalConfig::GetQaRetrievalConfig() const
{
    return m_qaRetrievalConfig;
}

void KBRetrievalConfig::SetQaRetrievalConfig(const QARetrievalConfig& _qaRetrievalConfig)
{
    m_qaRetrievalConfig = _qaRetrievalConfig;
    m_qaRetrievalConfigHasBeenSet = true;
}

bool KBRetrievalConfig::QaRetrievalConfigHasBeenSet() const
{
    return m_qaRetrievalConfigHasBeenSet;
}

RerankConfig KBRetrievalConfig::GetRerankConfig() const
{
    return m_rerankConfig;
}

void KBRetrievalConfig::SetRerankConfig(const RerankConfig& _rerankConfig)
{
    m_rerankConfig = _rerankConfig;
    m_rerankConfigHasBeenSet = true;
}

bool KBRetrievalConfig::RerankConfigHasBeenSet() const
{
    return m_rerankConfigHasBeenSet;
}

SearchFilterConfig KBRetrievalConfig::GetSearchFilterConfig() const
{
    return m_searchFilterConfig;
}

void KBRetrievalConfig::SetSearchFilterConfig(const SearchFilterConfig& _searchFilterConfig)
{
    m_searchFilterConfig = _searchFilterConfig;
    m_searchFilterConfigHasBeenSet = true;
}

bool KBRetrievalConfig::SearchFilterConfigHasBeenSet() const
{
    return m_searchFilterConfigHasBeenSet;
}

int64_t KBRetrievalConfig::GetStrategyType() const
{
    return m_strategyType;
}

void KBRetrievalConfig::SetStrategyType(const int64_t& _strategyType)
{
    m_strategyType = _strategyType;
    m_strategyTypeHasBeenSet = true;
}

bool KBRetrievalConfig::StrategyTypeHasBeenSet() const
{
    return m_strategyTypeHasBeenSet;
}

ModelDetailInfo KBRetrievalConfig::GetTextToSqlModel() const
{
    return m_textToSqlModel;
}

void KBRetrievalConfig::SetTextToSqlModel(const ModelDetailInfo& _textToSqlModel)
{
    m_textToSqlModel = _textToSqlModel;
    m_textToSqlModelHasBeenSet = true;
}

bool KBRetrievalConfig::TextToSqlModelHasBeenSet() const
{
    return m_textToSqlModelHasBeenSet;
}

