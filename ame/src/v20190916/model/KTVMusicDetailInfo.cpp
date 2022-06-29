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

#include <tencentcloud/ame/v20190916/model/KTVMusicDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

KTVMusicDetailInfo::KTVMusicDetailInfo() :
    m_kTVMusicBaseInfoHasBeenSet(false),
    m_playTokenHasBeenSet(false),
    m_lyricsUrlHasBeenSet(false),
    m_definitionInfoSetHasBeenSet(false),
    m_midiJsonUrlHasBeenSet(false),
    m_chorusClipSetHasBeenSet(false),
    m_preludeIntervalHasBeenSet(false)
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

    if (value.HasMember("DefinitionInfoSet") && !value["DefinitionInfoSet"].IsNull())
    {
        if (!value["DefinitionInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KTVMusicDetailInfo.DefinitionInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DefinitionInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KTVMusicDefinitionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_definitionInfoSet.push_back(item);
        }
        m_definitionInfoSetHasBeenSet = true;
    }

    if (value.HasMember("MidiJsonUrl") && !value["MidiJsonUrl"].IsNull())
    {
        if (!value["MidiJsonUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMusicDetailInfo.MidiJsonUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_midiJsonUrl = string(value["MidiJsonUrl"].GetString());
        m_midiJsonUrlHasBeenSet = true;
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

    if (value.HasMember("PreludeInterval") && !value["PreludeInterval"].IsNull())
    {
        if (!value["PreludeInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMusicDetailInfo.PreludeInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_preludeInterval = value["PreludeInterval"].GetInt64();
        m_preludeIntervalHasBeenSet = true;
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

    if (m_definitionInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefinitionInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_definitionInfoSet.begin(); itr != m_definitionInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_midiJsonUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidiJsonUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_midiJsonUrl.c_str(), allocator).Move(), allocator);
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

    if (m_preludeIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreludeInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preludeInterval, allocator);
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

vector<KTVMusicDefinitionInfo> KTVMusicDetailInfo::GetDefinitionInfoSet() const
{
    return m_definitionInfoSet;
}

void KTVMusicDetailInfo::SetDefinitionInfoSet(const vector<KTVMusicDefinitionInfo>& _definitionInfoSet)
{
    m_definitionInfoSet = _definitionInfoSet;
    m_definitionInfoSetHasBeenSet = true;
}

bool KTVMusicDetailInfo::DefinitionInfoSetHasBeenSet() const
{
    return m_definitionInfoSetHasBeenSet;
}

string KTVMusicDetailInfo::GetMidiJsonUrl() const
{
    return m_midiJsonUrl;
}

void KTVMusicDetailInfo::SetMidiJsonUrl(const string& _midiJsonUrl)
{
    m_midiJsonUrl = _midiJsonUrl;
    m_midiJsonUrlHasBeenSet = true;
}

bool KTVMusicDetailInfo::MidiJsonUrlHasBeenSet() const
{
    return m_midiJsonUrlHasBeenSet;
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

int64_t KTVMusicDetailInfo::GetPreludeInterval() const
{
    return m_preludeInterval;
}

void KTVMusicDetailInfo::SetPreludeInterval(const int64_t& _preludeInterval)
{
    m_preludeInterval = _preludeInterval;
    m_preludeIntervalHasBeenSet = true;
}

bool KTVMusicDetailInfo::PreludeIntervalHasBeenSet() const
{
    return m_preludeIntervalHasBeenSet;
}

