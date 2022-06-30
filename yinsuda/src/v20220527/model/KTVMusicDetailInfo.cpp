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

#include <tencentcloud/yinsuda/v20220527/model/KTVMusicDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

KTVMusicDetailInfo::KTVMusicDetailInfo() :
    m_kTVMusicBaseInfoHasBeenSet(false),
    m_playTokenHasBeenSet(false),
    m_lyricsUrlHasBeenSet(false),
    m_midiUrlHasBeenSet(false),
    m_chorusClipSetHasBeenSet(false)
{
}

CoreInternalOutcome KTVMusicDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KTVMusicBaseInfo") && !value["KTVMusicBaseInfo"].IsNull())
    {
        if (!value["KTVMusicBaseInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMusicDetailInfo.KTVMusicBaseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_kTVMusicBaseInfo.Deserialize(value["KTVMusicBaseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_kTVMusicBaseInfoHasBeenSet = true;
    }

    if (value.HasMember("PlayToken") && !value["PlayToken"].IsNull())
    {
        if (!value["PlayToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMusicDetailInfo.PlayToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playToken = string(value["PlayToken"].GetString());
        m_playTokenHasBeenSet = true;
    }

    if (value.HasMember("LyricsUrl") && !value["LyricsUrl"].IsNull())
    {
        if (!value["LyricsUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMusicDetailInfo.LyricsUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lyricsUrl = string(value["LyricsUrl"].GetString());
        m_lyricsUrlHasBeenSet = true;
    }

    if (value.HasMember("MidiUrl") && !value["MidiUrl"].IsNull())
    {
        if (!value["MidiUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMusicDetailInfo.MidiUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_midiUrl = string(value["MidiUrl"].GetString());
        m_midiUrlHasBeenSet = true;
    }

    if (value.HasMember("ChorusClipSet") && !value["ChorusClipSet"].IsNull())
    {
        if (!value["ChorusClipSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KTVMusicDetailInfo.ChorusClipSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ChorusClipSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ChorusClip item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_chorusClipSet.push_back(item);
        }
        m_chorusClipSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KTVMusicDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_kTVMusicBaseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KTVMusicBaseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_kTVMusicBaseInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_playTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_playToken.c_str(), allocator).Move(), allocator);
    }

    if (m_lyricsUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LyricsUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lyricsUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_midiUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidiUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_midiUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_chorusClipSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChorusClipSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_chorusClipSet.begin(); itr != m_chorusClipSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


KTVMusicBaseInfo KTVMusicDetailInfo::GetKTVMusicBaseInfo() const
{
    return m_kTVMusicBaseInfo;
}

void KTVMusicDetailInfo::SetKTVMusicBaseInfo(const KTVMusicBaseInfo& _kTVMusicBaseInfo)
{
    m_kTVMusicBaseInfo = _kTVMusicBaseInfo;
    m_kTVMusicBaseInfoHasBeenSet = true;
}

bool KTVMusicDetailInfo::KTVMusicBaseInfoHasBeenSet() const
{
    return m_kTVMusicBaseInfoHasBeenSet;
}

string KTVMusicDetailInfo::GetPlayToken() const
{
    return m_playToken;
}

void KTVMusicDetailInfo::SetPlayToken(const string& _playToken)
{
    m_playToken = _playToken;
    m_playTokenHasBeenSet = true;
}

bool KTVMusicDetailInfo::PlayTokenHasBeenSet() const
{
    return m_playTokenHasBeenSet;
}

string KTVMusicDetailInfo::GetLyricsUrl() const
{
    return m_lyricsUrl;
}

void KTVMusicDetailInfo::SetLyricsUrl(const string& _lyricsUrl)
{
    m_lyricsUrl = _lyricsUrl;
    m_lyricsUrlHasBeenSet = true;
}

bool KTVMusicDetailInfo::LyricsUrlHasBeenSet() const
{
    return m_lyricsUrlHasBeenSet;
}

string KTVMusicDetailInfo::GetMidiUrl() const
{
    return m_midiUrl;
}

void KTVMusicDetailInfo::SetMidiUrl(const string& _midiUrl)
{
    m_midiUrl = _midiUrl;
    m_midiUrlHasBeenSet = true;
}

bool KTVMusicDetailInfo::MidiUrlHasBeenSet() const
{
    return m_midiUrlHasBeenSet;
}

vector<ChorusClip> KTVMusicDetailInfo::GetChorusClipSet() const
{
    return m_chorusClipSet;
}

void KTVMusicDetailInfo::SetChorusClipSet(const vector<ChorusClip>& _chorusClipSet)
{
    m_chorusClipSet = _chorusClipSet;
    m_chorusClipSetHasBeenSet = true;
}

bool KTVMusicDetailInfo::ChorusClipSetHasBeenSet() const
{
    return m_chorusClipSetHasBeenSet;
}

