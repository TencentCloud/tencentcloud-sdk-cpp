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

#include <tencentcloud/adp/v20260520/model/SearchAdvancedConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SearchAdvancedConfig::SearchAdvancedConfig() :
    m_finalRerankConfigHasBeenSet(false),
    m_kbRetrievalListHasBeenSet(false),
    m_knowledgeTypeHasBeenSet(false),
    m_recallCountHasBeenSet(false)
{
}

CoreInternalOutcome SearchAdvancedConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FinalRerankConfig") && !value["FinalRerankConfig"].IsNull())
    {
        if (!value["FinalRerankConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SearchAdvancedConfig.FinalRerankConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_finalRerankConfig.Deserialize(value["FinalRerankConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_finalRerankConfigHasBeenSet = true;
    }

    if (value.HasMember("KbRetrievalList") && !value["KbRetrievalList"].IsNull())
    {
        if (!value["KbRetrievalList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchAdvancedConfig.KbRetrievalList` is not array type"));

        const rapidjson::Value &tmpValue = value["KbRetrievalList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KBRetrievalConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_kbRetrievalList.push_back(item);
        }
        m_kbRetrievalListHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeType") && !value["KnowledgeType"].IsNull())
    {
        if (!value["KnowledgeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchAdvancedConfig.KnowledgeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeType = value["KnowledgeType"].GetInt64();
        m_knowledgeTypeHasBeenSet = true;
    }

    if (value.HasMember("RecallCount") && !value["RecallCount"].IsNull())
    {
        if (!value["RecallCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchAdvancedConfig.RecallCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recallCount = value["RecallCount"].GetUint64();
        m_recallCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchAdvancedConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_finalRerankConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinalRerankConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_finalRerankConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_kbRetrievalListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbRetrievalList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_kbRetrievalList.begin(); itr != m_kbRetrievalList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_knowledgeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_knowledgeType, allocator);
    }

    if (m_recallCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecallCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recallCount, allocator);
    }

}


FinalRerankConfig SearchAdvancedConfig::GetFinalRerankConfig() const
{
    return m_finalRerankConfig;
}

void SearchAdvancedConfig::SetFinalRerankConfig(const FinalRerankConfig& _finalRerankConfig)
{
    m_finalRerankConfig = _finalRerankConfig;
    m_finalRerankConfigHasBeenSet = true;
}

bool SearchAdvancedConfig::FinalRerankConfigHasBeenSet() const
{
    return m_finalRerankConfigHasBeenSet;
}

vector<KBRetrievalConfig> SearchAdvancedConfig::GetKbRetrievalList() const
{
    return m_kbRetrievalList;
}

void SearchAdvancedConfig::SetKbRetrievalList(const vector<KBRetrievalConfig>& _kbRetrievalList)
{
    m_kbRetrievalList = _kbRetrievalList;
    m_kbRetrievalListHasBeenSet = true;
}

bool SearchAdvancedConfig::KbRetrievalListHasBeenSet() const
{
    return m_kbRetrievalListHasBeenSet;
}

int64_t SearchAdvancedConfig::GetKnowledgeType() const
{
    return m_knowledgeType;
}

void SearchAdvancedConfig::SetKnowledgeType(const int64_t& _knowledgeType)
{
    m_knowledgeType = _knowledgeType;
    m_knowledgeTypeHasBeenSet = true;
}

bool SearchAdvancedConfig::KnowledgeTypeHasBeenSet() const
{
    return m_knowledgeTypeHasBeenSet;
}

uint64_t SearchAdvancedConfig::GetRecallCount() const
{
    return m_recallCount;
}

void SearchAdvancedConfig::SetRecallCount(const uint64_t& _recallCount)
{
    m_recallCount = _recallCount;
    m_recallCountHasBeenSet = true;
}

bool SearchAdvancedConfig::RecallCountHasBeenSet() const
{
    return m_recallCountHasBeenSet;
}

