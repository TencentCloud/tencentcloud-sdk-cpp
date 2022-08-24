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

#include <tencentcloud/yinsuda/v20220527/model/SetPlaylistCommandInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

SetPlaylistCommandInput::SetPlaylistCommandInput() :
    m_typeHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_changedIndexHasBeenSet(false),
    m_musicIdsHasBeenSet(false)
{
}

CoreInternalOutcome SetPlaylistCommandInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SetPlaylistCommandInput.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SetPlaylistCommandInput.Index` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetInt64();
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("ChangedIndex") && !value["ChangedIndex"].IsNull())
    {
        if (!value["ChangedIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SetPlaylistCommandInput.ChangedIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_changedIndex = value["ChangedIndex"].GetInt64();
        m_changedIndexHasBeenSet = true;
    }

    if (value.HasMember("MusicIds") && !value["MusicIds"].IsNull())
    {
        if (!value["MusicIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SetPlaylistCommandInput.MusicIds` is not array type"));

        const rapidjson::Value &tmpValue = value["MusicIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_musicIds.push_back((*itr).GetString());
        }
        m_musicIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SetPlaylistCommandInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

    if (m_changedIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangedIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_changedIndex, allocator);
    }

    if (m_musicIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MusicIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_musicIds.begin(); itr != m_musicIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string SetPlaylistCommandInput::GetType() const
{
    return m_type;
}

void SetPlaylistCommandInput::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SetPlaylistCommandInput::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t SetPlaylistCommandInput::GetIndex() const
{
    return m_index;
}

void SetPlaylistCommandInput::SetIndex(const int64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool SetPlaylistCommandInput::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

int64_t SetPlaylistCommandInput::GetChangedIndex() const
{
    return m_changedIndex;
}

void SetPlaylistCommandInput::SetChangedIndex(const int64_t& _changedIndex)
{
    m_changedIndex = _changedIndex;
    m_changedIndexHasBeenSet = true;
}

bool SetPlaylistCommandInput::ChangedIndexHasBeenSet() const
{
    return m_changedIndexHasBeenSet;
}

vector<string> SetPlaylistCommandInput::GetMusicIds() const
{
    return m_musicIds;
}

void SetPlaylistCommandInput::SetMusicIds(const vector<string>& _musicIds)
{
    m_musicIds = _musicIds;
    m_musicIdsHasBeenSet = true;
}

bool SetPlaylistCommandInput::MusicIdsHasBeenSet() const
{
    return m_musicIdsHasBeenSet;
}

