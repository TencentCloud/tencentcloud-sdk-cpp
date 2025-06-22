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

#include <tencentcloud/es/v20250101/model/ChunkConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20250101::Model;
using namespace std;

ChunkConfig::ChunkConfig() :
    m_maxChunkSizeHasBeenSet(false),
    m_delimitersHasBeenSet(false),
    m_chunkOverlapHasBeenSet(false)
{
}

CoreInternalOutcome ChunkConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxChunkSize") && !value["MaxChunkSize"].IsNull())
    {
        if (!value["MaxChunkSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ChunkConfig.MaxChunkSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxChunkSize = value["MaxChunkSize"].GetUint64();
        m_maxChunkSizeHasBeenSet = true;
    }

    if (value.HasMember("Delimiters") && !value["Delimiters"].IsNull())
    {
        if (!value["Delimiters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChunkConfig.Delimiters` is not array type"));

        const rapidjson::Value &tmpValue = value["Delimiters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_delimiters.push_back((*itr).GetString());
        }
        m_delimitersHasBeenSet = true;
    }

    if (value.HasMember("ChunkOverlap") && !value["ChunkOverlap"].IsNull())
    {
        if (!value["ChunkOverlap"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ChunkConfig.ChunkOverlap` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_chunkOverlap = value["ChunkOverlap"].GetUint64();
        m_chunkOverlapHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChunkConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

}


uint64_t ChunkConfig::GetMaxChunkSize() const
{
    return m_maxChunkSize;
}

void ChunkConfig::SetMaxChunkSize(const uint64_t& _maxChunkSize)
{
    m_maxChunkSize = _maxChunkSize;
    m_maxChunkSizeHasBeenSet = true;
}

bool ChunkConfig::MaxChunkSizeHasBeenSet() const
{
    return m_maxChunkSizeHasBeenSet;
}

vector<string> ChunkConfig::GetDelimiters() const
{
    return m_delimiters;
}

void ChunkConfig::SetDelimiters(const vector<string>& _delimiters)
{
    m_delimiters = _delimiters;
    m_delimitersHasBeenSet = true;
}

bool ChunkConfig::DelimitersHasBeenSet() const
{
    return m_delimitersHasBeenSet;
}

uint64_t ChunkConfig::GetChunkOverlap() const
{
    return m_chunkOverlap;
}

void ChunkConfig::SetChunkOverlap(const uint64_t& _chunkOverlap)
{
    m_chunkOverlap = _chunkOverlap;
    m_chunkOverlapHasBeenSet = true;
}

bool ChunkConfig::ChunkOverlapHasBeenSet() const
{
    return m_chunkOverlapHasBeenSet;
}

