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

#include <tencentcloud/ame/v20190916/model/MusicDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

MusicDetailInfo::MusicDetailInfo() :
    m_musicIdHasBeenSet(false),
    m_ameIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_hitWordsHasBeenSet(false),
    m_bpmHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_sceneHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_authPeriodHasBeenSet(false),
    m_commercializationHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_channelHasBeenSet(false)
{
}

CoreInternalOutcome MusicDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MusicId") && !value["MusicId"].IsNull())
    {
        if (!value["MusicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MusicDetailInfo.MusicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_musicId = string(value["MusicId"].GetString());
        m_musicIdHasBeenSet = true;
    }

    if (value.HasMember("AmeId") && !value["AmeId"].IsNull())
    {
        if (!value["AmeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MusicDetailInfo.AmeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ameId = string(value["AmeId"].GetString());
        m_ameIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MusicDetailInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("HitWords") && !value["HitWords"].IsNull())
    {
        if (!value["HitWords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MusicDetailInfo.HitWords` is not array type"));

        const rapidjson::Value &tmpValue = value["HitWords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hitWords.push_back((*itr).GetString());
        }
        m_hitWordsHasBeenSet = true;
    }

    if (value.HasMember("Bpm") && !value["Bpm"].IsNull())
    {
        if (!value["Bpm"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MusicDetailInfo.Bpm` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bpm = value["Bpm"].GetInt64();
        m_bpmHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MusicDetailInfo.Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Scene") && !value["Scene"].IsNull())
    {
        if (!value["Scene"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MusicDetailInfo.Scene` is not array type"));

        const rapidjson::Value &tmpValue = value["Scene"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scene.push_back((*itr).GetString());
        }
        m_sceneHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MusicDetailInfo.Region` is not array type"));

        const rapidjson::Value &tmpValue = value["Region"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_region.push_back((*itr).GetString());
        }
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("AuthPeriod") && !value["AuthPeriod"].IsNull())
    {
        if (!value["AuthPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MusicDetailInfo.AuthPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authPeriod = string(value["AuthPeriod"].GetString());
        m_authPeriodHasBeenSet = true;
    }

    if (value.HasMember("Commercialization") && !value["Commercialization"].IsNull())
    {
        if (!value["Commercialization"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MusicDetailInfo.Commercialization` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commercialization = string(value["Commercialization"].GetString());
        m_commercializationHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MusicDetailInfo.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("Channel") && !value["Channel"].IsNull())
    {
        if (!value["Channel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MusicDetailInfo.Channel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channel = string(value["Channel"].GetString());
        m_channelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MusicDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_musicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MusicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_musicId.c_str(), allocator).Move(), allocator);
    }

    if (m_ameIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AmeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ameId.c_str(), allocator).Move(), allocator);
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

    if (m_hitWordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitWords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hitWords.begin(); itr != m_hitWords.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bpmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bpm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bpm, allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scene.begin(); itr != m_scene.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_region.begin(); itr != m_region.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_authPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_commercializationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Commercialization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commercialization.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

}


string MusicDetailInfo::GetMusicId() const
{
    return m_musicId;
}

void MusicDetailInfo::SetMusicId(const string& _musicId)
{
    m_musicId = _musicId;
    m_musicIdHasBeenSet = true;
}

bool MusicDetailInfo::MusicIdHasBeenSet() const
{
    return m_musicIdHasBeenSet;
}

string MusicDetailInfo::GetAmeId() const
{
    return m_ameId;
}

void MusicDetailInfo::SetAmeId(const string& _ameId)
{
    m_ameId = _ameId;
    m_ameIdHasBeenSet = true;
}

bool MusicDetailInfo::AmeIdHasBeenSet() const
{
    return m_ameIdHasBeenSet;
}

vector<string> MusicDetailInfo::GetTags() const
{
    return m_tags;
}

void MusicDetailInfo::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool MusicDetailInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> MusicDetailInfo::GetHitWords() const
{
    return m_hitWords;
}

void MusicDetailInfo::SetHitWords(const vector<string>& _hitWords)
{
    m_hitWords = _hitWords;
    m_hitWordsHasBeenSet = true;
}

bool MusicDetailInfo::HitWordsHasBeenSet() const
{
    return m_hitWordsHasBeenSet;
}

int64_t MusicDetailInfo::GetBpm() const
{
    return m_bpm;
}

void MusicDetailInfo::SetBpm(const int64_t& _bpm)
{
    m_bpm = _bpm;
    m_bpmHasBeenSet = true;
}

bool MusicDetailInfo::BpmHasBeenSet() const
{
    return m_bpmHasBeenSet;
}

double MusicDetailInfo::GetScore() const
{
    return m_score;
}

void MusicDetailInfo::SetScore(const double& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool MusicDetailInfo::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

vector<string> MusicDetailInfo::GetScene() const
{
    return m_scene;
}

void MusicDetailInfo::SetScene(const vector<string>& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool MusicDetailInfo::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

vector<string> MusicDetailInfo::GetRegion() const
{
    return m_region;
}

void MusicDetailInfo::SetRegion(const vector<string>& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool MusicDetailInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string MusicDetailInfo::GetAuthPeriod() const
{
    return m_authPeriod;
}

void MusicDetailInfo::SetAuthPeriod(const string& _authPeriod)
{
    m_authPeriod = _authPeriod;
    m_authPeriodHasBeenSet = true;
}

bool MusicDetailInfo::AuthPeriodHasBeenSet() const
{
    return m_authPeriodHasBeenSet;
}

string MusicDetailInfo::GetCommercialization() const
{
    return m_commercialization;
}

void MusicDetailInfo::SetCommercialization(const string& _commercialization)
{
    m_commercialization = _commercialization;
    m_commercializationHasBeenSet = true;
}

bool MusicDetailInfo::CommercializationHasBeenSet() const
{
    return m_commercializationHasBeenSet;
}

string MusicDetailInfo::GetPlatform() const
{
    return m_platform;
}

void MusicDetailInfo::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool MusicDetailInfo::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string MusicDetailInfo::GetChannel() const
{
    return m_channel;
}

void MusicDetailInfo::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool MusicDetailInfo::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

