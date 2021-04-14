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
using namespace rapidjson;
using namespace std;

MusicDetailInfo::MusicDetailInfo() :
    m_musicIdHasBeenSet(false),
    m_ameIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_hitWordsHasBeenSet(false),
    m_bpmHasBeenSet(false),
    m_scoreHasBeenSet(false)
{
}

CoreInternalOutcome MusicDetailInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("MusicId") && !value["MusicId"].IsNull())
    {
        if (!value["MusicId"].IsString())
        {
            return CoreInternalOutcome(Error("response `MusicDetailInfo.MusicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_musicId = string(value["MusicId"].GetString());
        m_musicIdHasBeenSet = true;
    }

    if (value.HasMember("AmeId") && !value["AmeId"].IsNull())
    {
        if (!value["AmeId"].IsString())
        {
            return CoreInternalOutcome(Error("response `MusicDetailInfo.AmeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ameId = string(value["AmeId"].GetString());
        m_ameIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Error("response `MusicDetailInfo.Tags` is not array type"));

        const Value &tmpValue = value["Tags"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("HitWords") && !value["HitWords"].IsNull())
    {
        if (!value["HitWords"].IsArray())
            return CoreInternalOutcome(Error("response `MusicDetailInfo.HitWords` is not array type"));

        const Value &tmpValue = value["HitWords"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hitWords.push_back((*itr).GetString());
        }
        m_hitWordsHasBeenSet = true;
    }

    if (value.HasMember("Bpm") && !value["Bpm"].IsNull())
    {
        if (!value["Bpm"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MusicDetailInfo.Bpm` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bpm = value["Bpm"].GetInt64();
        m_bpmHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `MusicDetailInfo.Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MusicDetailInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_musicIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MusicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_musicId.c_str(), allocator).Move(), allocator);
    }

    if (m_ameIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AmeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ameId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hitWordsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HitWords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_hitWords.begin(); itr != m_hitWords.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bpmHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Bpm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bpm, allocator);
    }

    if (m_scoreHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
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

