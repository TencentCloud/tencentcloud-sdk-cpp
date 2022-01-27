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

#include <tencentcloud/ame/v20190916/model/KTVSingerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

KTVSingerInfo::KTVSingerInfo() :
    m_singerIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_musicCountHasBeenSet(false),
    m_playCountHasBeenSet(false)
{
}

CoreInternalOutcome KTVSingerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SingerId") && !value["SingerId"].IsNull())
    {
        if (!value["SingerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVSingerInfo.SingerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_singerId = string(value["SingerId"].GetString());
        m_singerIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVSingerInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVSingerInfo.Gender` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gender = string(value["Gender"].GetString());
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVSingerInfo.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("MusicCount") && !value["MusicCount"].IsNull())
    {
        if (!value["MusicCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KTVSingerInfo.MusicCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_musicCount = value["MusicCount"].GetInt64();
        m_musicCountHasBeenSet = true;
    }

    if (value.HasMember("PlayCount") && !value["PlayCount"].IsNull())
    {
        if (!value["PlayCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KTVSingerInfo.PlayCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_playCount = value["PlayCount"].GetInt64();
        m_playCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KTVSingerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_singerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SingerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_singerId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gender.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_musicCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MusicCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_musicCount, allocator);
    }

    if (m_playCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_playCount, allocator);
    }

}


string KTVSingerInfo::GetSingerId() const
{
    return m_singerId;
}

void KTVSingerInfo::SetSingerId(const string& _singerId)
{
    m_singerId = _singerId;
    m_singerIdHasBeenSet = true;
}

bool KTVSingerInfo::SingerIdHasBeenSet() const
{
    return m_singerIdHasBeenSet;
}

string KTVSingerInfo::GetName() const
{
    return m_name;
}

void KTVSingerInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool KTVSingerInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string KTVSingerInfo::GetGender() const
{
    return m_gender;
}

void KTVSingerInfo::SetGender(const string& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool KTVSingerInfo::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

string KTVSingerInfo::GetArea() const
{
    return m_area;
}

void KTVSingerInfo::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool KTVSingerInfo::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

int64_t KTVSingerInfo::GetMusicCount() const
{
    return m_musicCount;
}

void KTVSingerInfo::SetMusicCount(const int64_t& _musicCount)
{
    m_musicCount = _musicCount;
    m_musicCountHasBeenSet = true;
}

bool KTVSingerInfo::MusicCountHasBeenSet() const
{
    return m_musicCountHasBeenSet;
}

int64_t KTVSingerInfo::GetPlayCount() const
{
    return m_playCount;
}

void KTVSingerInfo::SetPlayCount(const int64_t& _playCount)
{
    m_playCount = _playCount;
    m_playCountHasBeenSet = true;
}

bool KTVSingerInfo::PlayCountHasBeenSet() const
{
    return m_playCountHasBeenSet;
}

