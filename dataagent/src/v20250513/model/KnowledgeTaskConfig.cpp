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

#include <tencentcloud/dataagent/v20250513/model/KnowledgeTaskConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

KnowledgeTaskConfig::KnowledgeTaskConfig() :
    m_chunkTypeHasBeenSet(false),
    m_maxChunkSizeHasBeenSet(false),
    m_delimitersHasBeenSet(false),
    m_chunkOverlapHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_indexesHasBeenSet(false),
    m_genDocSummaryHasBeenSet(false),
    m_genParaSummaryHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeTaskConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChunkType") && !value["ChunkType"].IsNull())
    {
        if (!value["ChunkType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeTaskConfig.ChunkType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chunkType = value["ChunkType"].GetInt64();
        m_chunkTypeHasBeenSet = true;
    }

    if (value.HasMember("MaxChunkSize") && !value["MaxChunkSize"].IsNull())
    {
        if (!value["MaxChunkSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeTaskConfig.MaxChunkSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxChunkSize = value["MaxChunkSize"].GetInt64();
        m_maxChunkSizeHasBeenSet = true;
    }

    if (value.HasMember("Delimiters") && !value["Delimiters"].IsNull())
    {
        if (!value["Delimiters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KnowledgeTaskConfig.Delimiters` is not array type"));

        const rapidjson::Value &tmpValue = value["Delimiters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_delimiters.push_back((*itr).GetString());
        }
        m_delimitersHasBeenSet = true;
    }

    if (value.HasMember("ChunkOverlap") && !value["ChunkOverlap"].IsNull())
    {
        if (!value["ChunkOverlap"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeTaskConfig.ChunkOverlap` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chunkOverlap = value["ChunkOverlap"].GetInt64();
        m_chunkOverlapHasBeenSet = true;
    }

    if (value.HasMember("Columns") && !value["Columns"].IsNull())
    {
        if (!value["Columns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KnowledgeTaskConfig.Columns` is not array type"));

        const rapidjson::Value &tmpValue = value["Columns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ColumnInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_columns.push_back(item);
        }
        m_columnsHasBeenSet = true;
    }

    if (value.HasMember("Indexes") && !value["Indexes"].IsNull())
    {
        if (!value["Indexes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KnowledgeTaskConfig.Indexes` is not array type"));

        const rapidjson::Value &tmpValue = value["Indexes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_indexes.push_back((*itr).GetInt64());
        }
        m_indexesHasBeenSet = true;
    }

    if (value.HasMember("GenDocSummary") && !value["GenDocSummary"].IsNull())
    {
        if (!value["GenDocSummary"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeTaskConfig.GenDocSummary` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_genDocSummary = value["GenDocSummary"].GetInt64();
        m_genDocSummaryHasBeenSet = true;
    }

    if (value.HasMember("GenParaSummary") && !value["GenParaSummary"].IsNull())
    {
        if (!value["GenParaSummary"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeTaskConfig.GenParaSummary` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_genParaSummary = value["GenParaSummary"].GetInt64();
        m_genParaSummaryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeTaskConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_chunkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChunkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chunkType, allocator);
    }

    if (m_maxChunkSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxChunkSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxChunkSize, allocator);
    }

    if (m_delimitersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Delimiters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_delimiters.begin(); itr != m_delimiters.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_chunkOverlapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChunkOverlap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chunkOverlap, allocator);
    }

    if (m_columnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Columns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columns.begin(); itr != m_columns.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_indexesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Indexes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_indexes.begin(); itr != m_indexes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_genDocSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenDocSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_genDocSummary, allocator);
    }

    if (m_genParaSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenParaSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_genParaSummary, allocator);
    }

}


int64_t KnowledgeTaskConfig::GetChunkType() const
{
    return m_chunkType;
}

void KnowledgeTaskConfig::SetChunkType(const int64_t& _chunkType)
{
    m_chunkType = _chunkType;
    m_chunkTypeHasBeenSet = true;
}

bool KnowledgeTaskConfig::ChunkTypeHasBeenSet() const
{
    return m_chunkTypeHasBeenSet;
}

int64_t KnowledgeTaskConfig::GetMaxChunkSize() const
{
    return m_maxChunkSize;
}

void KnowledgeTaskConfig::SetMaxChunkSize(const int64_t& _maxChunkSize)
{
    m_maxChunkSize = _maxChunkSize;
    m_maxChunkSizeHasBeenSet = true;
}

bool KnowledgeTaskConfig::MaxChunkSizeHasBeenSet() const
{
    return m_maxChunkSizeHasBeenSet;
}

vector<string> KnowledgeTaskConfig::GetDelimiters() const
{
    return m_delimiters;
}

void KnowledgeTaskConfig::SetDelimiters(const vector<string>& _delimiters)
{
    m_delimiters = _delimiters;
    m_delimitersHasBeenSet = true;
}

bool KnowledgeTaskConfig::DelimitersHasBeenSet() const
{
    return m_delimitersHasBeenSet;
}

int64_t KnowledgeTaskConfig::GetChunkOverlap() const
{
    return m_chunkOverlap;
}

void KnowledgeTaskConfig::SetChunkOverlap(const int64_t& _chunkOverlap)
{
    m_chunkOverlap = _chunkOverlap;
    m_chunkOverlapHasBeenSet = true;
}

bool KnowledgeTaskConfig::ChunkOverlapHasBeenSet() const
{
    return m_chunkOverlapHasBeenSet;
}

vector<ColumnInfo> KnowledgeTaskConfig::GetColumns() const
{
    return m_columns;
}

void KnowledgeTaskConfig::SetColumns(const vector<ColumnInfo>& _columns)
{
    m_columns = _columns;
    m_columnsHasBeenSet = true;
}

bool KnowledgeTaskConfig::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

vector<int64_t> KnowledgeTaskConfig::GetIndexes() const
{
    return m_indexes;
}

void KnowledgeTaskConfig::SetIndexes(const vector<int64_t>& _indexes)
{
    m_indexes = _indexes;
    m_indexesHasBeenSet = true;
}

bool KnowledgeTaskConfig::IndexesHasBeenSet() const
{
    return m_indexesHasBeenSet;
}

int64_t KnowledgeTaskConfig::GetGenDocSummary() const
{
    return m_genDocSummary;
}

void KnowledgeTaskConfig::SetGenDocSummary(const int64_t& _genDocSummary)
{
    m_genDocSummary = _genDocSummary;
    m_genDocSummaryHasBeenSet = true;
}

bool KnowledgeTaskConfig::GenDocSummaryHasBeenSet() const
{
    return m_genDocSummaryHasBeenSet;
}

int64_t KnowledgeTaskConfig::GetGenParaSummary() const
{
    return m_genParaSummary;
}

void KnowledgeTaskConfig::SetGenParaSummary(const int64_t& _genParaSummary)
{
    m_genParaSummary = _genParaSummary;
    m_genParaSummaryHasBeenSet = true;
}

bool KnowledgeTaskConfig::GenParaSummaryHasBeenSet() const
{
    return m_genParaSummaryHasBeenSet;
}

