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

#include <tencentcloud/yinsuda/v20220527/model/KTVMatchRuleMusicInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

KTVMatchRuleMusicInfo::KTVMatchRuleMusicInfo() :
    m_musicNameHasBeenSet(false),
    m_singerSetHasBeenSet(false)
{
}

CoreInternalOutcome KTVMatchRuleMusicInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MusicName") && !value["MusicName"].IsNull())
    {
        if (!value["MusicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMatchRuleMusicInfo.MusicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_musicName = string(value["MusicName"].GetString());
        m_musicNameHasBeenSet = true;
    }

    if (value.HasMember("SingerSet") && !value["SingerSet"].IsNull())
    {
        if (!value["SingerSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KTVMatchRuleMusicInfo.SingerSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SingerSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_singerSet.push_back((*itr).GetString());
        }
        m_singerSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KTVMatchRuleMusicInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_musicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MusicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_musicName.c_str(), allocator).Move(), allocator);
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


string KTVMatchRuleMusicInfo::GetMusicName() const
{
    return m_musicName;
}

void KTVMatchRuleMusicInfo::SetMusicName(const string& _musicName)
{
    m_musicName = _musicName;
    m_musicNameHasBeenSet = true;
}

bool KTVMatchRuleMusicInfo::MusicNameHasBeenSet() const
{
    return m_musicNameHasBeenSet;
}

vector<string> KTVMatchRuleMusicInfo::GetSingerSet() const
{
    return m_singerSet;
}

void KTVMatchRuleMusicInfo::SetSingerSet(const vector<string>& _singerSet)
{
    m_singerSet = _singerSet;
    m_singerSetHasBeenSet = true;
}

bool KTVMatchRuleMusicInfo::SingerSetHasBeenSet() const
{
    return m_singerSetHasBeenSet;
}

