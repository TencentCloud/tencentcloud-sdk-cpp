/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/lke/v20231130/model/Audio.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

Audio::Audio() :
    m_formatHasBeenSet(false),
    m_audioUrlHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_audioTranscriptsHasBeenSet(false)
{
}

CoreInternalOutcome Audio::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Audio.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("AudioUrl") && !value["AudioUrl"].IsNull())
    {
        if (!value["AudioUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Audio.AudioUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioUrl = string(value["AudioUrl"].GetString());
        m_audioUrlHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Audio.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Audio.Position` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_position = value["Position"].GetInt64();
        m_positionHasBeenSet = true;
    }

    if (value.HasMember("AudioTranscripts") && !value["AudioTranscripts"].IsNull())
    {
        if (!value["AudioTranscripts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Audio.AudioTranscripts` is not array type"));

        const rapidjson::Value &tmpValue = value["AudioTranscripts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AudioTranscript item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_audioTranscripts.push_back(item);
        }
        m_audioTranscriptsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Audio::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_audioUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_position, allocator);
    }

    if (m_audioTranscriptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioTranscripts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audioTranscripts.begin(); itr != m_audioTranscripts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Audio::GetFormat() const
{
    return m_format;
}

void Audio::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool Audio::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string Audio::GetAudioUrl() const
{
    return m_audioUrl;
}

void Audio::SetAudioUrl(const string& _audioUrl)
{
    m_audioUrl = _audioUrl;
    m_audioUrlHasBeenSet = true;
}

bool Audio::AudioUrlHasBeenSet() const
{
    return m_audioUrlHasBeenSet;
}

string Audio::GetTitle() const
{
    return m_title;
}

void Audio::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool Audio::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

int64_t Audio::GetPosition() const
{
    return m_position;
}

void Audio::SetPosition(const int64_t& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool Audio::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

vector<AudioTranscript> Audio::GetAudioTranscripts() const
{
    return m_audioTranscripts;
}

void Audio::SetAudioTranscripts(const vector<AudioTranscript>& _audioTranscripts)
{
    m_audioTranscripts = _audioTranscripts;
    m_audioTranscriptsHasBeenSet = true;
}

bool Audio::AudioTranscriptsHasBeenSet() const
{
    return m_audioTranscriptsHasBeenSet;
}

