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

#include <tencentcloud/yinsuda/v20220527/model/AMEMusicBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

AMEMusicBaseInfo::AMEMusicBaseInfo() :
    m_musicIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_singerSetHasBeenSet(false)
{
}

CoreInternalOutcome AMEMusicBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MusicId") && !value["MusicId"].IsNull())
    {
        if (!value["MusicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMEMusicBaseInfo.MusicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_musicId = string(value["MusicId"].GetString());
        m_musicIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMEMusicBaseInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SingerSet") && !value["SingerSet"].IsNull())
    {
        if (!value["SingerSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AMEMusicBaseInfo.SingerSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SingerSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_singerSet.push_back((*itr).GetString());
        }
        m_singerSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AMEMusicBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string AMEMusicBaseInfo::GetMusicId() const
{
    return m_musicId;
}

void AMEMusicBaseInfo::SetMusicId(const string& _musicId)
{
    m_musicId = _musicId;
    m_musicIdHasBeenSet = true;
}

bool AMEMusicBaseInfo::MusicIdHasBeenSet() const
{
    return m_musicIdHasBeenSet;
}

string AMEMusicBaseInfo::GetName() const
{
    return m_name;
}

void AMEMusicBaseInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AMEMusicBaseInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> AMEMusicBaseInfo::GetSingerSet() const
{
    return m_singerSet;
}

void AMEMusicBaseInfo::SetSingerSet(const vector<string>& _singerSet)
{
    m_singerSet = _singerSet;
    m_singerSetHasBeenSet = true;
}

bool AMEMusicBaseInfo::SingerSetHasBeenSet() const
{
    return m_singerSetHasBeenSet;
}

