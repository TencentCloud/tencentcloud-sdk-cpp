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

#include <tencentcloud/es/v20250101/model/MultiModalEmbeddingData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20250101::Model;
using namespace std;

MultiModalEmbeddingData::MultiModalEmbeddingData() :
    m_textEmbeddingsHasBeenSet(false),
    m_imageEmbeddingsHasBeenSet(false)
{
}

CoreInternalOutcome MultiModalEmbeddingData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TextEmbeddings") && !value["TextEmbeddings"].IsNull())
    {
        if (!value["TextEmbeddings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MultiModalEmbeddingData.TextEmbeddings` is not array type"));

        const rapidjson::Value &tmpValue = value["TextEmbeddings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EmbeddingData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_textEmbeddings.push_back(item);
        }
        m_textEmbeddingsHasBeenSet = true;
    }

    if (value.HasMember("ImageEmbeddings") && !value["ImageEmbeddings"].IsNull())
    {
        if (!value["ImageEmbeddings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MultiModalEmbeddingData.ImageEmbeddings` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageEmbeddings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EmbeddingData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_imageEmbeddings.push_back(item);
        }
        m_imageEmbeddingsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MultiModalEmbeddingData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textEmbeddingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextEmbeddings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_textEmbeddings.begin(); itr != m_textEmbeddings.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_imageEmbeddingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageEmbeddings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageEmbeddings.begin(); itr != m_imageEmbeddings.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<EmbeddingData> MultiModalEmbeddingData::GetTextEmbeddings() const
{
    return m_textEmbeddings;
}

void MultiModalEmbeddingData::SetTextEmbeddings(const vector<EmbeddingData>& _textEmbeddings)
{
    m_textEmbeddings = _textEmbeddings;
    m_textEmbeddingsHasBeenSet = true;
}

bool MultiModalEmbeddingData::TextEmbeddingsHasBeenSet() const
{
    return m_textEmbeddingsHasBeenSet;
}

vector<EmbeddingData> MultiModalEmbeddingData::GetImageEmbeddings() const
{
    return m_imageEmbeddings;
}

void MultiModalEmbeddingData::SetImageEmbeddings(const vector<EmbeddingData>& _imageEmbeddings)
{
    m_imageEmbeddings = _imageEmbeddings;
    m_imageEmbeddingsHasBeenSet = true;
}

bool MultiModalEmbeddingData::ImageEmbeddingsHasBeenSet() const
{
    return m_imageEmbeddingsHasBeenSet;
}

