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

#include <tencentcloud/ivld/v20210903/model/AudioData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

AudioData::AudioData() :
    m_audioInfoSetHasBeenSet(false),
    m_textTagSetHasBeenSet(false),
    m_webMediaURLHasBeenSet(false)
{
}

CoreInternalOutcome AudioData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AudioInfoSet") && !value["AudioInfoSet"].IsNull())
    {
        if (!value["AudioInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AudioData.AudioInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AudioInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AudioInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_audioInfoSet.push_back(item);
        }
        m_audioInfoSetHasBeenSet = true;
    }

    if (value.HasMember("TextTagSet") && !value["TextTagSet"].IsNull())
    {
        if (!value["TextTagSet"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AudioData.TextTagSet` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_textTagSet.Deserialize(value["TextTagSet"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textTagSetHasBeenSet = true;
    }

    if (value.HasMember("WebMediaURL") && !value["WebMediaURL"].IsNull())
    {
        if (!value["WebMediaURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioData.WebMediaURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webMediaURL = string(value["WebMediaURL"].GetString());
        m_webMediaURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_audioInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audioInfoSet.begin(); itr != m_audioInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_textTagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextTagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_textTagSet.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_webMediaURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebMediaURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webMediaURL.c_str(), allocator).Move(), allocator);
    }

}


vector<AudioInfo> AudioData::GetAudioInfoSet() const
{
    return m_audioInfoSet;
}

void AudioData::SetAudioInfoSet(const vector<AudioInfo>& _audioInfoSet)
{
    m_audioInfoSet = _audioInfoSet;
    m_audioInfoSetHasBeenSet = true;
}

bool AudioData::AudioInfoSetHasBeenSet() const
{
    return m_audioInfoSetHasBeenSet;
}

MultiLevelTag AudioData::GetTextTagSet() const
{
    return m_textTagSet;
}

void AudioData::SetTextTagSet(const MultiLevelTag& _textTagSet)
{
    m_textTagSet = _textTagSet;
    m_textTagSetHasBeenSet = true;
}

bool AudioData::TextTagSetHasBeenSet() const
{
    return m_textTagSetHasBeenSet;
}

string AudioData::GetWebMediaURL() const
{
    return m_webMediaURL;
}

void AudioData::SetWebMediaURL(const string& _webMediaURL)
{
    m_webMediaURL = _webMediaURL;
    m_webMediaURLHasBeenSet = true;
}

bool AudioData::WebMediaURLHasBeenSet() const
{
    return m_webMediaURLHasBeenSet;
}

