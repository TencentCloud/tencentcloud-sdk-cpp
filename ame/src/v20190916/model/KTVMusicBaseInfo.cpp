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

#include <tencentcloud/ame/v20190916/model/KTVMusicBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

KTVMusicBaseInfo::KTVMusicBaseInfo() :
    m_musicIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_singerInfoSetHasBeenSet(false),
    m_singerSetHasBeenSet(false),
    m_lyricistSetHasBeenSet(false),
    m_composerSetHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_durationHasBeenSet(false)
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

    if (value.HasMember("SingerInfoSet") && !value["SingerInfoSet"].IsNull())
    {
        if (!value["SingerInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KTVMusicBaseInfo.SingerInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SingerInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KTVSingerBaseInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_singerInfoSet.push_back(item);
        }
        m_singerInfoSetHasBeenSet = true;
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

    if (value.HasMember("LyricistSet") && !value["LyricistSet"].IsNull())
    {
        if (!value["LyricistSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KTVMusicBaseInfo.LyricistSet` is not array type"));

        const rapidjson::Value &tmpValue = value["LyricistSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_lyricistSet.push_back((*itr).GetString());
        }
        m_lyricistSetHasBeenSet = true;
    }

    if (value.HasMember("ComposerSet") && !value["ComposerSet"].IsNull())
    {
        if (!value["ComposerSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KTVMusicBaseInfo.ComposerSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ComposerSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_composerSet.push_back((*itr).GetString());
        }
        m_composerSetHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KTVMusicBaseInfo.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagSet.push_back((*itr).GetString());
        }
        m_tagSetHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMusicBaseInfo.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
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

    if (m_singerInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SingerInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_singerInfoSet.begin(); itr != m_singerInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_lyricistSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LyricistSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_lyricistSet.begin(); itr != m_lyricistSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_composerSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComposerSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_composerSet.begin(); itr != m_composerSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr)
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

vector<KTVSingerBaseInfo> KTVMusicBaseInfo::GetSingerInfoSet() const
{
    return m_singerInfoSet;
}

void KTVMusicBaseInfo::SetSingerInfoSet(const vector<KTVSingerBaseInfo>& _singerInfoSet)
{
    m_singerInfoSet = _singerInfoSet;
    m_singerInfoSetHasBeenSet = true;
}

bool KTVMusicBaseInfo::SingerInfoSetHasBeenSet() const
{
    return m_singerInfoSetHasBeenSet;
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

vector<string> KTVMusicBaseInfo::GetLyricistSet() const
{
    return m_lyricistSet;
}

void KTVMusicBaseInfo::SetLyricistSet(const vector<string>& _lyricistSet)
{
    m_lyricistSet = _lyricistSet;
    m_lyricistSetHasBeenSet = true;
}

bool KTVMusicBaseInfo::LyricistSetHasBeenSet() const
{
    return m_lyricistSetHasBeenSet;
}

vector<string> KTVMusicBaseInfo::GetComposerSet() const
{
    return m_composerSet;
}

void KTVMusicBaseInfo::SetComposerSet(const vector<string>& _composerSet)
{
    m_composerSet = _composerSet;
    m_composerSetHasBeenSet = true;
}

bool KTVMusicBaseInfo::ComposerSetHasBeenSet() const
{
    return m_composerSetHasBeenSet;
}

vector<string> KTVMusicBaseInfo::GetTagSet() const
{
    return m_tagSet;
}

void KTVMusicBaseInfo::SetTagSet(const vector<string>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool KTVMusicBaseInfo::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

uint64_t KTVMusicBaseInfo::GetDuration() const
{
    return m_duration;
}

void KTVMusicBaseInfo::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool KTVMusicBaseInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

