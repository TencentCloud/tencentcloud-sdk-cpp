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

#include <tencentcloud/hunyuan/v20230901/model/EmbeddingData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

EmbeddingData::EmbeddingData() :
    m_embeddingHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_objectHasBeenSet(false)
{
}

CoreInternalOutcome EmbeddingData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Embedding") && !value["Embedding"].IsNull())
    {
        if (!value["Embedding"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EmbeddingData.Embedding` is not array type"));

        const rapidjson::Value &tmpValue = value["Embedding"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_embedding.push_back((*itr).GetDouble());
        }
        m_embeddingHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EmbeddingData.Index` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetInt64();
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("Object") && !value["Object"].IsNull())
    {
        if (!value["Object"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmbeddingData.Object` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_object = string(value["Object"].GetString());
        m_objectHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmbeddingData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_embeddingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Embedding";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_embedding.begin(); itr != m_embedding.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

    if (m_objectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Object";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_object.c_str(), allocator).Move(), allocator);
    }

}


vector<double> EmbeddingData::GetEmbedding() const
{
    return m_embedding;
}

void EmbeddingData::SetEmbedding(const vector<double>& _embedding)
{
    m_embedding = _embedding;
    m_embeddingHasBeenSet = true;
}

bool EmbeddingData::EmbeddingHasBeenSet() const
{
    return m_embeddingHasBeenSet;
}

int64_t EmbeddingData::GetIndex() const
{
    return m_index;
}

void EmbeddingData::SetIndex(const int64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool EmbeddingData::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string EmbeddingData::GetObject() const
{
    return m_object;
}

void EmbeddingData::SetObject(const string& _object)
{
    m_object = _object;
    m_objectHasBeenSet = true;
}

bool EmbeddingData::ObjectHasBeenSet() const
{
    return m_objectHasBeenSet;
}

