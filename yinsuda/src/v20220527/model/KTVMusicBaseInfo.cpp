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

#include <tencentcloud/yinsuda/v20220527/model/KTVMusicBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

KTVMusicBaseInfo::KTVMusicBaseInfo() :
    m_musicIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_singerSetHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_singerImageUrlHasBeenSet(false),
    m_albumInfoHasBeenSet(false),
    m_rightSetHasBeenSet(false),
    m_recommendTypeHasBeenSet(false)
{
}

CoreInternalOutcome KTVMusicBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MusicId") && !value["MusicId"].IsNull())
    {
        if (!value["MusicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMusicBaseInfo.MusicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_musicId = string(value["MusicId"].GetString());
        m_musicIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMusicBaseInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SingerSet") && !value["SingerSet"].IsNull())
    {
        if (!value["SingerSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KTVMusicBaseInfo.SingerSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SingerSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_singerSet.push_back((*itr).GetString());
        }
        m_singerSetHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMusicBaseInfo.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("SingerImageUrl") && !value["SingerImageUrl"].IsNull())
    {
        if (!value["SingerImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMusicBaseInfo.SingerImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_singerImageUrl = string(value["SingerImageUrl"].GetString());
        m_singerImageUrlHasBeenSet = true;
    }

    if (value.HasMember("AlbumInfo") && !value["AlbumInfo"].IsNull())
    {
        if (!value["AlbumInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMusicBaseInfo.AlbumInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_albumInfo.Deserialize(value["AlbumInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_albumInfoHasBeenSet = true;
    }

    if (value.HasMember("RightSet") && !value["RightSet"].IsNull())
    {
        if (!value["RightSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KTVMusicBaseInfo.RightSet` is not array type"));

        const rapidjson::Value &tmpValue = value["RightSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rightSet.push_back((*itr).GetString());
        }
        m_rightSetHasBeenSet = true;
    }

    if (value.HasMember("RecommendType") && !value["RecommendType"].IsNull())
    {
        if (!value["RecommendType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMusicBaseInfo.RecommendType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recommendType = string(value["RecommendType"].GetString());
        m_recommendTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KTVMusicBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_musicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MusicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_musicId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_singerSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SingerSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_singerSet.begin(); itr != m_singerSet.end(); ++itr)
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

    if (m_singerImageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SingerImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_singerImageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_albumInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlbumInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_albumInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rightSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rightSet.begin(); itr != m_rightSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_recommendTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecommendType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recommendType.c_str(), allocator).Move(), allocator);
    }

}


string KTVMusicBaseInfo::GetMusicId() const
{
    return m_musicId;
}

void KTVMusicBaseInfo::SetMusicId(const string& _musicId)
{
    m_musicId = _musicId;
    m_musicIdHasBeenSet = true;
}

bool KTVMusicBaseInfo::MusicIdHasBeenSet() const
{
    return m_musicIdHasBeenSet;
}

string KTVMusicBaseInfo::GetName() const
{
    return m_name;
}

void KTVMusicBaseInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool KTVMusicBaseInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> KTVMusicBaseInfo::GetSingerSet() const
{
    return m_singerSet;
}

void KTVMusicBaseInfo::SetSingerSet(const vector<string>& _singerSet)
{
    m_singerSet = _singerSet;
    m_singerSetHasBeenSet = true;
}

bool KTVMusicBaseInfo::SingerSetHasBeenSet() const
{
    return m_singerSetHasBeenSet;
}

int64_t KTVMusicBaseInfo::GetDuration() const
{
    return m_duration;
}

void KTVMusicBaseInfo::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool KTVMusicBaseInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string KTVMusicBaseInfo::GetSingerImageUrl() const
{
    return m_singerImageUrl;
}

void KTVMusicBaseInfo::SetSingerImageUrl(const string& _singerImageUrl)
{
    m_singerImageUrl = _singerImageUrl;
    m_singerImageUrlHasBeenSet = true;
}

bool KTVMusicBaseInfo::SingerImageUrlHasBeenSet() const
{
    return m_singerImageUrlHasBeenSet;
}

MusicAlbumInfo KTVMusicBaseInfo::GetAlbumInfo() const
{
    return m_albumInfo;
}

void KTVMusicBaseInfo::SetAlbumInfo(const MusicAlbumInfo& _albumInfo)
{
    m_albumInfo = _albumInfo;
    m_albumInfoHasBeenSet = true;
}

bool KTVMusicBaseInfo::AlbumInfoHasBeenSet() const
{
    return m_albumInfoHasBeenSet;
}

vector<string> KTVMusicBaseInfo::GetRightSet() const
{
    return m_rightSet;
}

void KTVMusicBaseInfo::SetRightSet(const vector<string>& _rightSet)
{
    m_rightSet = _rightSet;
    m_rightSetHasBeenSet = true;
}

bool KTVMusicBaseInfo::RightSetHasBeenSet() const
{
    return m_rightSetHasBeenSet;
}

string KTVMusicBaseInfo::GetRecommendType() const
{
    return m_recommendType;
}

void KTVMusicBaseInfo::SetRecommendType(const string& _recommendType)
{
    m_recommendType = _recommendType;
    m_recommendTypeHasBeenSet = true;
}

bool KTVMusicBaseInfo::RecommendTypeHasBeenSet() const
{
    return m_recommendTypeHasBeenSet;
}

