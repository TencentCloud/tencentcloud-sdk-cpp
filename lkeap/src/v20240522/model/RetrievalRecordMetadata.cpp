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

#include <tencentcloud/lkeap/v20240522/model/RetrievalRecordMetadata.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

RetrievalRecordMetadata::RetrievalRecordMetadata() :
    m_typeHasBeenSet(false),
    m_resultSourceHasBeenSet(false),
    m_chunkPageNumbersHasBeenSet(false)
{
}

CoreInternalOutcome RetrievalRecordMetadata::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RetrievalRecordMetadata.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ResultSource") && !value["ResultSource"].IsNull())
    {
        if (!value["ResultSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RetrievalRecordMetadata.ResultSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultSource = string(value["ResultSource"].GetString());
        m_resultSourceHasBeenSet = true;
    }

    if (value.HasMember("ChunkPageNumbers") && !value["ChunkPageNumbers"].IsNull())
    {
        if (!value["ChunkPageNumbers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RetrievalRecordMetadata.ChunkPageNumbers` is not array type"));

        const rapidjson::Value &tmpValue = value["ChunkPageNumbers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_chunkPageNumbers.push_back((*itr).GetInt64());
        }
        m_chunkPageNumbersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RetrievalRecordMetadata::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_resultSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultSource.c_str(), allocator).Move(), allocator);
    }

    if (m_chunkPageNumbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChunkPageNumbers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_chunkPageNumbers.begin(); itr != m_chunkPageNumbers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string RetrievalRecordMetadata::GetType() const
{
    return m_type;
}

void RetrievalRecordMetadata::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RetrievalRecordMetadata::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string RetrievalRecordMetadata::GetResultSource() const
{
    return m_resultSource;
}

void RetrievalRecordMetadata::SetResultSource(const string& _resultSource)
{
    m_resultSource = _resultSource;
    m_resultSourceHasBeenSet = true;
}

bool RetrievalRecordMetadata::ResultSourceHasBeenSet() const
{
    return m_resultSourceHasBeenSet;
}

vector<int64_t> RetrievalRecordMetadata::GetChunkPageNumbers() const
{
    return m_chunkPageNumbers;
}

void RetrievalRecordMetadata::SetChunkPageNumbers(const vector<int64_t>& _chunkPageNumbers)
{
    m_chunkPageNumbers = _chunkPageNumbers;
    m_chunkPageNumbersHasBeenSet = true;
}

bool RetrievalRecordMetadata::ChunkPageNumbersHasBeenSet() const
{
    return m_chunkPageNumbersHasBeenSet;
}

