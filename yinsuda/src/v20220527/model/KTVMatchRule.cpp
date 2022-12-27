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

#include <tencentcloud/yinsuda/v20220527/model/KTVMatchRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

KTVMatchRule::KTVMatchRule() :
    m_aMEMusicIdHasBeenSet(false),
    m_musicInfoHasBeenSet(false),
    m_musicIdToMatchAMEHasBeenSet(false)
{
}

CoreInternalOutcome KTVMatchRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AMEMusicId") && !value["AMEMusicId"].IsNull())
    {
        if (!value["AMEMusicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMatchRule.AMEMusicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aMEMusicId = string(value["AMEMusicId"].GetString());
        m_aMEMusicIdHasBeenSet = true;
    }

    if (value.HasMember("MusicInfo") && !value["MusicInfo"].IsNull())
    {
        if (!value["MusicInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMatchRule.MusicInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_musicInfo.Deserialize(value["MusicInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_musicInfoHasBeenSet = true;
    }

    if (value.HasMember("MusicIdToMatchAME") && !value["MusicIdToMatchAME"].IsNull())
    {
        if (!value["MusicIdToMatchAME"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMatchRule.MusicIdToMatchAME` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_musicIdToMatchAME = string(value["MusicIdToMatchAME"].GetString());
        m_musicIdToMatchAMEHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KTVMatchRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aMEMusicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AMEMusicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aMEMusicId.c_str(), allocator).Move(), allocator);
    }

    if (m_musicInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MusicInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_musicInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_musicIdToMatchAMEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MusicIdToMatchAME";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_musicIdToMatchAME.c_str(), allocator).Move(), allocator);
    }

}


string KTVMatchRule::GetAMEMusicId() const
{
    return m_aMEMusicId;
}

void KTVMatchRule::SetAMEMusicId(const string& _aMEMusicId)
{
    m_aMEMusicId = _aMEMusicId;
    m_aMEMusicIdHasBeenSet = true;
}

bool KTVMatchRule::AMEMusicIdHasBeenSet() const
{
    return m_aMEMusicIdHasBeenSet;
}

KTVMatchRuleMusicInfo KTVMatchRule::GetMusicInfo() const
{
    return m_musicInfo;
}

void KTVMatchRule::SetMusicInfo(const KTVMatchRuleMusicInfo& _musicInfo)
{
    m_musicInfo = _musicInfo;
    m_musicInfoHasBeenSet = true;
}

bool KTVMatchRule::MusicInfoHasBeenSet() const
{
    return m_musicInfoHasBeenSet;
}

string KTVMatchRule::GetMusicIdToMatchAME() const
{
    return m_musicIdToMatchAME;
}

void KTVMatchRule::SetMusicIdToMatchAME(const string& _musicIdToMatchAME)
{
    m_musicIdToMatchAME = _musicIdToMatchAME;
    m_musicIdToMatchAMEHasBeenSet = true;
}

bool KTVMatchRule::MusicIdToMatchAMEHasBeenSet() const
{
    return m_musicIdToMatchAMEHasBeenSet;
}

