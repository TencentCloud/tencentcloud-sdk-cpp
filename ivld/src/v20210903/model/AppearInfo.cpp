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

#include <tencentcloud/ivld/v20210903/model/AppearInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

AppearInfo::AppearInfo() :
    m_audioAppearSetHasBeenSet(false),
    m_textAppearSetHasBeenSet(false),
    m_videoAppearSetHasBeenSet(false)
{
}

CoreInternalOutcome AppearInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AudioAppearSet") && !value["AudioAppearSet"].IsNull())
    {
        if (!value["AudioAppearSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AppearInfo.AudioAppearSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AudioAppearSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TextAppearInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_audioAppearSet.push_back(item);
        }
        m_audioAppearSetHasBeenSet = true;
    }

    if (value.HasMember("TextAppearSet") && !value["TextAppearSet"].IsNull())
    {
        if (!value["TextAppearSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AppearInfo.TextAppearSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TextAppearSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TextAppearInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_textAppearSet.push_back(item);
        }
        m_textAppearSetHasBeenSet = true;
    }

    if (value.HasMember("VideoAppearSet") && !value["VideoAppearSet"].IsNull())
    {
        if (!value["VideoAppearSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AppearInfo.VideoAppearSet` is not array type"));

        const rapidjson::Value &tmpValue = value["VideoAppearSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VideoAppearInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_videoAppearSet.push_back(item);
        }
        m_videoAppearSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppearInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_audioAppearSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioAppearSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audioAppearSet.begin(); itr != m_audioAppearSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_textAppearSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextAppearSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_textAppearSet.begin(); itr != m_textAppearSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_videoAppearSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoAppearSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_videoAppearSet.begin(); itr != m_videoAppearSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<TextAppearInfo> AppearInfo::GetAudioAppearSet() const
{
    return m_audioAppearSet;
}

void AppearInfo::SetAudioAppearSet(const vector<TextAppearInfo>& _audioAppearSet)
{
    m_audioAppearSet = _audioAppearSet;
    m_audioAppearSetHasBeenSet = true;
}

bool AppearInfo::AudioAppearSetHasBeenSet() const
{
    return m_audioAppearSetHasBeenSet;
}

vector<TextAppearInfo> AppearInfo::GetTextAppearSet() const
{
    return m_textAppearSet;
}

void AppearInfo::SetTextAppearSet(const vector<TextAppearInfo>& _textAppearSet)
{
    m_textAppearSet = _textAppearSet;
    m_textAppearSetHasBeenSet = true;
}

bool AppearInfo::TextAppearSetHasBeenSet() const
{
    return m_textAppearSetHasBeenSet;
}

vector<VideoAppearInfo> AppearInfo::GetVideoAppearSet() const
{
    return m_videoAppearSet;
}

void AppearInfo::SetVideoAppearSet(const vector<VideoAppearInfo>& _videoAppearSet)
{
    m_videoAppearSet = _videoAppearSet;
    m_videoAppearSetHasBeenSet = true;
}

bool AppearInfo::VideoAppearSetHasBeenSet() const
{
    return m_videoAppearSetHasBeenSet;
}

