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

#include <tencentcloud/vod/v20180717/model/RoundPlayListItemInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

RoundPlayListItemInfo::RoundPlayListItemInfo() :
    m_fileIdHasBeenSet(false),
    m_audioVideoTypeHasBeenSet(false),
    m_itemIdHasBeenSet(false),
    m_definitionHasBeenSet(false)
{
}

CoreInternalOutcome RoundPlayListItemInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoundPlayListItemInfo.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("AudioVideoType") && !value["AudioVideoType"].IsNull())
    {
        if (!value["AudioVideoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoundPlayListItemInfo.AudioVideoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioVideoType = string(value["AudioVideoType"].GetString());
        m_audioVideoTypeHasBeenSet = true;
    }

    if (value.HasMember("ItemId") && !value["ItemId"].IsNull())
    {
        if (!value["ItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoundPlayListItemInfo.ItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemId = string(value["ItemId"].GetString());
        m_itemIdHasBeenSet = true;
    }

    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoundPlayListItemInfo.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoundPlayListItemInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_audioVideoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioVideoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioVideoType.c_str(), allocator).Move(), allocator);
    }

    if (m_itemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemId.c_str(), allocator).Move(), allocator);
    }

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

}


string RoundPlayListItemInfo::GetFileId() const
{
    return m_fileId;
}

void RoundPlayListItemInfo::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool RoundPlayListItemInfo::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string RoundPlayListItemInfo::GetAudioVideoType() const
{
    return m_audioVideoType;
}

void RoundPlayListItemInfo::SetAudioVideoType(const string& _audioVideoType)
{
    m_audioVideoType = _audioVideoType;
    m_audioVideoTypeHasBeenSet = true;
}

bool RoundPlayListItemInfo::AudioVideoTypeHasBeenSet() const
{
    return m_audioVideoTypeHasBeenSet;
}

string RoundPlayListItemInfo::GetItemId() const
{
    return m_itemId;
}

void RoundPlayListItemInfo::SetItemId(const string& _itemId)
{
    m_itemId = _itemId;
    m_itemIdHasBeenSet = true;
}

bool RoundPlayListItemInfo::ItemIdHasBeenSet() const
{
    return m_itemIdHasBeenSet;
}

int64_t RoundPlayListItemInfo::GetDefinition() const
{
    return m_definition;
}

void RoundPlayListItemInfo::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool RoundPlayListItemInfo::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

