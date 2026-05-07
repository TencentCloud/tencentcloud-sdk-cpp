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

#include <tencentcloud/vod/v20180717/model/AigcAudioTaskOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcAudioTaskOutput::AigcAudioTaskOutput() :
    m_audioInfosHasBeenSet(false),
    m_videoInfosHasBeenSet(false)
{
}

CoreInternalOutcome AigcAudioTaskOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AudioInfos") && !value["AudioInfos"].IsNull())
    {
        if (!value["AudioInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AigcAudioTaskOutput.AudioInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["AudioInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AigcAudioTaskOutputFileInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_audioInfos.push_back(item);
        }
        m_audioInfosHasBeenSet = true;
    }

    if (value.HasMember("VideoInfos") && !value["VideoInfos"].IsNull())
    {
        if (!value["VideoInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AigcAudioTaskOutput.VideoInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["VideoInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AigcAudioTaskOutputFileInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_videoInfos.push_back(item);
        }
        m_videoInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcAudioTaskOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_audioInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audioInfos.begin(); itr != m_audioInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_videoInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_videoInfos.begin(); itr != m_videoInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<AigcAudioTaskOutputFileInfo> AigcAudioTaskOutput::GetAudioInfos() const
{
    return m_audioInfos;
}

void AigcAudioTaskOutput::SetAudioInfos(const vector<AigcAudioTaskOutputFileInfo>& _audioInfos)
{
    m_audioInfos = _audioInfos;
    m_audioInfosHasBeenSet = true;
}

bool AigcAudioTaskOutput::AudioInfosHasBeenSet() const
{
    return m_audioInfosHasBeenSet;
}

vector<AigcAudioTaskOutputFileInfo> AigcAudioTaskOutput::GetVideoInfos() const
{
    return m_videoInfos;
}

void AigcAudioTaskOutput::SetVideoInfos(const vector<AigcAudioTaskOutputFileInfo>& _videoInfos)
{
    m_videoInfos = _videoInfos;
    m_videoInfosHasBeenSet = true;
}

bool AigcAudioTaskOutput::VideoInfosHasBeenSet() const
{
    return m_videoInfosHasBeenSet;
}

