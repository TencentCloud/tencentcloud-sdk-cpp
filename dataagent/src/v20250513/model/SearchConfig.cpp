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

#include <tencentcloud/dataagent/v20250513/model/SearchConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

SearchConfig::SearchConfig() :
    m_typeHasBeenSet(false),
    m_numHasBeenSet(false),
    m_embeddingWeightHasBeenSet(false),
    m_rerankHasBeenSet(false),
    m_autoRagHasBeenSet(false),
    m_knowledgeBaseIdsHasBeenSet(false),
    m_searchStatusHasBeenSet(false)
{
}

CoreInternalOutcome SearchConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchConfig.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Num") && !value["Num"].IsNull())
    {
        if (!value["Num"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchConfig.Num` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_num = value["Num"].GetInt64();
        m_numHasBeenSet = true;
    }

    if (value.HasMember("EmbeddingWeight") && !value["EmbeddingWeight"].IsNull())
    {
        if (!value["EmbeddingWeight"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SearchConfig.EmbeddingWeight` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_embeddingWeight = value["EmbeddingWeight"].GetDouble();
        m_embeddingWeightHasBeenSet = true;
    }

    if (value.HasMember("Rerank") && !value["Rerank"].IsNull())
    {
        if (!value["Rerank"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchConfig.Rerank` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rerank = value["Rerank"].GetInt64();
        m_rerankHasBeenSet = true;
    }

    if (value.HasMember("AutoRag") && !value["AutoRag"].IsNull())
    {
        if (!value["AutoRag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchConfig.AutoRag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRag = value["AutoRag"].GetInt64();
        m_autoRagHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeBaseIds") && !value["KnowledgeBaseIds"].IsNull())
    {
        if (!value["KnowledgeBaseIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchConfig.KnowledgeBaseIds` is not array type"));

        const rapidjson::Value &tmpValue = value["KnowledgeBaseIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_knowledgeBaseIds.push_back((*itr).GetString());
        }
        m_knowledgeBaseIdsHasBeenSet = true;
    }

    if (value.HasMember("SearchStatus") && !value["SearchStatus"].IsNull())
    {
        if (!value["SearchStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchConfig.SearchStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_searchStatus = value["SearchStatus"].GetInt64();
        m_searchStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_num, allocator);
    }

    if (m_embeddingWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmbeddingWeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_embeddingWeight, allocator);
    }

    if (m_rerankHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rerank";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rerank, allocator);
    }

    if (m_autoRagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRag, allocator);
    }

    if (m_knowledgeBaseIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeBaseIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_knowledgeBaseIds.begin(); itr != m_knowledgeBaseIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_searchStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_searchStatus, allocator);
    }

}


int64_t SearchConfig::GetType() const
{
    return m_type;
}

void SearchConfig::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SearchConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t SearchConfig::GetNum() const
{
    return m_num;
}

void SearchConfig::SetNum(const int64_t& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool SearchConfig::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

double SearchConfig::GetEmbeddingWeight() const
{
    return m_embeddingWeight;
}

void SearchConfig::SetEmbeddingWeight(const double& _embeddingWeight)
{
    m_embeddingWeight = _embeddingWeight;
    m_embeddingWeightHasBeenSet = true;
}

bool SearchConfig::EmbeddingWeightHasBeenSet() const
{
    return m_embeddingWeightHasBeenSet;
}

int64_t SearchConfig::GetRerank() const
{
    return m_rerank;
}

void SearchConfig::SetRerank(const int64_t& _rerank)
{
    m_rerank = _rerank;
    m_rerankHasBeenSet = true;
}

bool SearchConfig::RerankHasBeenSet() const
{
    return m_rerankHasBeenSet;
}

int64_t SearchConfig::GetAutoRag() const
{
    return m_autoRag;
}

void SearchConfig::SetAutoRag(const int64_t& _autoRag)
{
    m_autoRag = _autoRag;
    m_autoRagHasBeenSet = true;
}

bool SearchConfig::AutoRagHasBeenSet() const
{
    return m_autoRagHasBeenSet;
}

vector<string> SearchConfig::GetKnowledgeBaseIds() const
{
    return m_knowledgeBaseIds;
}

void SearchConfig::SetKnowledgeBaseIds(const vector<string>& _knowledgeBaseIds)
{
    m_knowledgeBaseIds = _knowledgeBaseIds;
    m_knowledgeBaseIdsHasBeenSet = true;
}

bool SearchConfig::KnowledgeBaseIdsHasBeenSet() const
{
    return m_knowledgeBaseIdsHasBeenSet;
}

int64_t SearchConfig::GetSearchStatus() const
{
    return m_searchStatus;
}

void SearchConfig::SetSearchStatus(const int64_t& _searchStatus)
{
    m_searchStatus = _searchStatus;
    m_searchStatusHasBeenSet = true;
}

bool SearchConfig::SearchStatusHasBeenSet() const
{
    return m_searchStatusHasBeenSet;
}

