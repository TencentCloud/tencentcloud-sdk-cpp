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

#include <tencentcloud/ame/v20190916/model/KTVPlaylistBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

KTVPlaylistBaseInfo::KTVPlaylistBaseInfo() :
    m_playlistIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_musicNumHasBeenSet(false)
{
}

CoreInternalOutcome KTVPlaylistBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlaylistId") && !value["PlaylistId"].IsNull())
    {
        if (!value["PlaylistId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVPlaylistBaseInfo.PlaylistId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playlistId = string(value["PlaylistId"].GetString());
        m_playlistIdHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVPlaylistBaseInfo.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVPlaylistBaseInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("MusicNum") && !value["MusicNum"].IsNull())
    {
        if (!value["MusicNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KTVPlaylistBaseInfo.MusicNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_musicNum = value["MusicNum"].GetInt64();
        m_musicNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KTVPlaylistBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_playlistIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlaylistId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_playlistId.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_musicNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MusicNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_musicNum, allocator);
    }

}


string KTVPlaylistBaseInfo::GetPlaylistId() const
{
    return m_playlistId;
}

void KTVPlaylistBaseInfo::SetPlaylistId(const string& _playlistId)
{
    m_playlistId = _playlistId;
    m_playlistIdHasBeenSet = true;
}

bool KTVPlaylistBaseInfo::PlaylistIdHasBeenSet() const
{
    return m_playlistIdHasBeenSet;
}

string KTVPlaylistBaseInfo::GetTitle() const
{
    return m_title;
}

void KTVPlaylistBaseInfo::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool KTVPlaylistBaseInfo::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string KTVPlaylistBaseInfo::GetDescription() const
{
    return m_description;
}

void KTVPlaylistBaseInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool KTVPlaylistBaseInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t KTVPlaylistBaseInfo::GetMusicNum() const
{
    return m_musicNum;
}

void KTVPlaylistBaseInfo::SetMusicNum(const int64_t& _musicNum)
{
    m_musicNum = _musicNum;
    m_musicNumHasBeenSet = true;
}

bool KTVPlaylistBaseInfo::MusicNumHasBeenSet() const
{
    return m_musicNumHasBeenSet;
}

