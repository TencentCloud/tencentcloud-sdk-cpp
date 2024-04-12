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

#include <tencentcloud/lke/v20231130/model/EmbeddingObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

EmbeddingObject::EmbeddingObject() :
    m_embeddingHasBeenSet(false)
{
}

CoreInternalOutcome EmbeddingObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Embedding") && !value["Embedding"].IsNull())
    {
        if (!value["Embedding"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EmbeddingObject.Embedding` is not array type"));

        const rapidjson::Value &tmpValue = value["Embedding"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_embedding.push_back((*itr).GetDouble());
        }
        m_embeddingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmbeddingObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


vector<double> EmbeddingObject::GetEmbedding() const
{
    return m_embedding;
}

void EmbeddingObject::SetEmbedding(const vector<double>& _embedding)
{
    m_embedding = _embedding;
    m_embeddingHasBeenSet = true;
}

bool EmbeddingObject::EmbeddingHasBeenSet() const
{
    return m_embeddingHasBeenSet;
}

