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

#include <tencentcloud/ame/v20190916/model/MusicOpenDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

MusicOpenDetail::MusicOpenDetail() :
    m_musicIdHasBeenSet(false),
    m_albumNameHasBeenSet(false),
    m_albumImageUrlHasBeenSet(false),
    m_musicNameHasBeenSet(false),
    m_musicImageUrlHasBeenSet(false),
    m_singersHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_lyricUrlHasBeenSet(false),
    m_waveformUrlHasBeenSet(false)
{
}

CoreInternalOutcome MusicOpenDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MusicId") && !value["MusicId"].IsNull())
    {
        if (!value["MusicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MusicOpenDetail.MusicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_musicId = string(value["MusicId"].GetString());
        m_musicIdHasBeenSet = true;
    }

    if (value.HasMember("AlbumName") && !value["AlbumName"].IsNull())
    {
        if (!value["AlbumName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MusicOpenDetail.AlbumName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_albumName = string(value["AlbumName"].GetString());
        m_albumNameHasBeenSet = true;
    }

    if (value.HasMember("AlbumImageUrl") && !value["AlbumImageUrl"].IsNull())
    {
        if (!value["AlbumImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MusicOpenDetail.AlbumImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_albumImageUrl = string(value["AlbumImageUrl"].GetString());
        m_albumImageUrlHasBeenSet = true;
    }

    if (value.HasMember("MusicName") && !value["MusicName"].IsNull())
    {
        if (!value["MusicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MusicOpenDetail.MusicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_musicName = string(value["MusicName"].GetString());
        m_musicNameHasBeenSet = true;
    }

    if (value.HasMember("MusicImageUrl") && !value["MusicImageUrl"].IsNull())
    {
        if (!value["MusicImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MusicOpenDetail.MusicImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_musicImageUrl = string(value["MusicImageUrl"].GetString());
        m_musicImageUrlHasBeenSet = true;
    }

    if (value.HasMember("Singers") && !value["Singers"].IsNull())
    {
        if (!value["Singers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MusicOpenDetail.Singers` is not array type"));

        const rapidjson::Value &tmpValue = value["Singers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_singers.push_back((*itr).GetString());
        }
        m_singersHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MusicOpenDetail.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MusicOpenDetail.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("LyricUrl") && !value["LyricUrl"].IsNull())
    {
        if (!value["LyricUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MusicOpenDetail.LyricUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lyricUrl = string(value["LyricUrl"].GetString());
        m_lyricUrlHasBeenSet = true;
    }

    if (value.HasMember("WaveformUrl") && !value["WaveformUrl"].IsNull())
    {
        if (!value["WaveformUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MusicOpenDetail.WaveformUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_waveformUrl = string(value["WaveformUrl"].GetString());
        m_waveformUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MusicOpenDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_musicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MusicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_musicId.c_str(), allocator).Move(), allocator);
    }

    if (m_albumNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlbumName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_albumName.c_str(), allocator).Move(), allocator);
    }

    if (m_albumImageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlbumImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_albumImageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_musicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MusicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_musicName.c_str(), allocator).Move(), allocator);
    }

    if (m_musicImageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MusicImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_musicImageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_singersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Singers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_singers.begin(); itr != m_singers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_lyricUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LyricUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lyricUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_waveformUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaveformUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_waveformUrl.c_str(), allocator).Move(), allocator);
    }

}


string MusicOpenDetail::GetMusicId() const
{
    return m_musicId;
}

void MusicOpenDetail::SetMusicId(const string& _musicId)
{
    m_musicId = _musicId;
    m_musicIdHasBeenSet = true;
}

bool MusicOpenDetail::MusicIdHasBeenSet() const
{
    return m_musicIdHasBeenSet;
}

string MusicOpenDetail::GetAlbumName() const
{
    return m_albumName;
}

void MusicOpenDetail::SetAlbumName(const string& _albumName)
{
    m_albumName = _albumName;
    m_albumNameHasBeenSet = true;
}

bool MusicOpenDetail::AlbumNameHasBeenSet() const
{
    return m_albumNameHasBeenSet;
}

string MusicOpenDetail::GetAlbumImageUrl() const
{
    return m_albumImageUrl;
}

void MusicOpenDetail::SetAlbumImageUrl(const string& _albumImageUrl)
{
    m_albumImageUrl = _albumImageUrl;
    m_albumImageUrlHasBeenSet = true;
}

bool MusicOpenDetail::AlbumImageUrlHasBeenSet() const
{
    return m_albumImageUrlHasBeenSet;
}

string MusicOpenDetail::GetMusicName() const
{
    return m_musicName;
}

void MusicOpenDetail::SetMusicName(const string& _musicName)
{
    m_musicName = _musicName;
    m_musicNameHasBeenSet = true;
}

bool MusicOpenDetail::MusicNameHasBeenSet() const
{
    return m_musicNameHasBeenSet;
}

string MusicOpenDetail::GetMusicImageUrl() const
{
    return m_musicImageUrl;
}

void MusicOpenDetail::SetMusicImageUrl(const string& _musicImageUrl)
{
    m_musicImageUrl = _musicImageUrl;
    m_musicImageUrlHasBeenSet = true;
}

bool MusicOpenDetail::MusicImageUrlHasBeenSet() const
{
    return m_musicImageUrlHasBeenSet;
}

vector<string> MusicOpenDetail::GetSingers() const
{
    return m_singers;
}

void MusicOpenDetail::SetSingers(const vector<string>& _singers)
{
    m_singers = _singers;
    m_singersHasBeenSet = true;
}

bool MusicOpenDetail::SingersHasBeenSet() const
{
    return m_singersHasBeenSet;
}

uint64_t MusicOpenDetail::GetDuration() const
{
    return m_duration;
}

void MusicOpenDetail::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool MusicOpenDetail::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

vector<string> MusicOpenDetail::GetTags() const
{
    return m_tags;
}

void MusicOpenDetail::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool MusicOpenDetail::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string MusicOpenDetail::GetLyricUrl() const
{
    return m_lyricUrl;
}

void MusicOpenDetail::SetLyricUrl(const string& _lyricUrl)
{
    m_lyricUrl = _lyricUrl;
    m_lyricUrlHasBeenSet = true;
}

bool MusicOpenDetail::LyricUrlHasBeenSet() const
{
    return m_lyricUrlHasBeenSet;
}

string MusicOpenDetail::GetWaveformUrl() const
{
    return m_waveformUrl;
}

void MusicOpenDetail::SetWaveformUrl(const string& _waveformUrl)
{
    m_waveformUrl = _waveformUrl;
    m_waveformUrlHasBeenSet = true;
}

bool MusicOpenDetail::WaveformUrlHasBeenSet() const
{
    return m_waveformUrlHasBeenSet;
}

