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

#include <tencentcloud/ame/v20190916/model/DescribeKTVMusicDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

DescribeKTVMusicDetailResponse::DescribeKTVMusicDetailResponse() :
    m_kTVMusicBaseInfoHasBeenSet(false),
    m_playTokenHasBeenSet(false),
    m_lyricsUrlHasBeenSet(false),
    m_definitionInfoSetHasBeenSet(false),
    m_midiJsonUrlHasBeenSet(false),
    m_chorusClipSetHasBeenSet(false),
    m_preludeIntervalHasBeenSet(false)
{
}

CoreInternalOutcome DescribeKTVMusicDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("KTVMusicBaseInfo") && !rsp["KTVMusicBaseInfo"].IsNull())
    {
        if (!rsp["KTVMusicBaseInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMusicBaseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_kTVMusicBaseInfo.Deserialize(rsp["KTVMusicBaseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_kTVMusicBaseInfoHasBeenSet = true;
    }

    if (rsp.HasMember("PlayToken") && !rsp["PlayToken"].IsNull())
    {
        if (!rsp["PlayToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playToken = string(rsp["PlayToken"].GetString());
        m_playTokenHasBeenSet = true;
    }

    if (rsp.HasMember("LyricsUrl") && !rsp["LyricsUrl"].IsNull())
    {
        if (!rsp["LyricsUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LyricsUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lyricsUrl = string(rsp["LyricsUrl"].GetString());
        m_lyricsUrlHasBeenSet = true;
    }

    if (rsp.HasMember("DefinitionInfoSet") && !rsp["DefinitionInfoSet"].IsNull())
    {
        if (!rsp["DefinitionInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DefinitionInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DefinitionInfoSet"];
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

    if (rsp.HasMember("MidiJsonUrl") && !rsp["MidiJsonUrl"].IsNull())
    {
        if (!rsp["MidiJsonUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MidiJsonUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_midiJsonUrl = string(rsp["MidiJsonUrl"].GetString());
        m_midiJsonUrlHasBeenSet = true;
    }

    if (rsp.HasMember("ChorusClipSet") && !rsp["ChorusClipSet"].IsNull())
    {
        if (!rsp["ChorusClipSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChorusClipSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ChorusClipSet"];
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

    if (rsp.HasMember("PreludeInterval") && !rsp["PreludeInterval"].IsNull())
    {
        if (!rsp["PreludeInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PreludeInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_preludeInterval = rsp["PreludeInterval"].GetInt64();
        m_preludeIntervalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeKTVMusicDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


KTVMusicBaseInfo DescribeKTVMusicDetailResponse::GetKTVMusicBaseInfo() const
{
    return m_kTVMusicBaseInfo;
}

bool DescribeKTVMusicDetailResponse::KTVMusicBaseInfoHasBeenSet() const
{
    return m_kTVMusicBaseInfoHasBeenSet;
}

string DescribeKTVMusicDetailResponse::GetPlayToken() const
{
    return m_playToken;
}

bool DescribeKTVMusicDetailResponse::PlayTokenHasBeenSet() const
{
    return m_playTokenHasBeenSet;
}

string DescribeKTVMusicDetailResponse::GetLyricsUrl() const
{
    return m_lyricsUrl;
}

bool DescribeKTVMusicDetailResponse::LyricsUrlHasBeenSet() const
{
    return m_lyricsUrlHasBeenSet;
}

vector<KTVMusicDefinitionInfo> DescribeKTVMusicDetailResponse::GetDefinitionInfoSet() const
{
    return m_definitionInfoSet;
}

bool DescribeKTVMusicDetailResponse::DefinitionInfoSetHasBeenSet() const
{
    return m_definitionInfoSetHasBeenSet;
}

string DescribeKTVMusicDetailResponse::GetMidiJsonUrl() const
{
    return m_midiJsonUrl;
}

bool DescribeKTVMusicDetailResponse::MidiJsonUrlHasBeenSet() const
{
    return m_midiJsonUrlHasBeenSet;
}

vector<ChorusClip> DescribeKTVMusicDetailResponse::GetChorusClipSet() const
{
    return m_chorusClipSet;
}

bool DescribeKTVMusicDetailResponse::ChorusClipSetHasBeenSet() const
{
    return m_chorusClipSetHasBeenSet;
}

int64_t DescribeKTVMusicDetailResponse::GetPreludeInterval() const
{
    return m_preludeInterval;
}

bool DescribeKTVMusicDetailResponse::PreludeIntervalHasBeenSet() const
{
    return m_preludeIntervalHasBeenSet;
}


