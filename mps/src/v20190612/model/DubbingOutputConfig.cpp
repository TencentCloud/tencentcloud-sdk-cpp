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

#include <tencentcloud/mps/v20190612/model/DubbingOutputConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DubbingOutputConfig::DubbingOutputConfig() :
    m_outputModeHasBeenSet(false),
    m_outputFinalVideoHasBeenSet(false),
    m_outputSubtitleHasBeenSet(false),
    m_outputDstAudioHasBeenSet(false),
    m_embedSubtitleConfigHasBeenSet(false)
{
}

CoreInternalOutcome DubbingOutputConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutputMode") && !value["OutputMode"].IsNull())
    {
        if (!value["OutputMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DubbingOutputConfig.OutputMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputMode = string(value["OutputMode"].GetString());
        m_outputModeHasBeenSet = true;
    }

    if (value.HasMember("OutputFinalVideo") && !value["OutputFinalVideo"].IsNull())
    {
        if (!value["OutputFinalVideo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DubbingOutputConfig.OutputFinalVideo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputFinalVideo = string(value["OutputFinalVideo"].GetString());
        m_outputFinalVideoHasBeenSet = true;
    }

    if (value.HasMember("OutputSubtitle") && !value["OutputSubtitle"].IsNull())
    {
        if (!value["OutputSubtitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DubbingOutputConfig.OutputSubtitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputSubtitle = string(value["OutputSubtitle"].GetString());
        m_outputSubtitleHasBeenSet = true;
    }

    if (value.HasMember("OutputDstAudio") && !value["OutputDstAudio"].IsNull())
    {
        if (!value["OutputDstAudio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DubbingOutputConfig.OutputDstAudio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputDstAudio = string(value["OutputDstAudio"].GetString());
        m_outputDstAudioHasBeenSet = true;
    }

    if (value.HasMember("EmbedSubtitleConfig") && !value["EmbedSubtitleConfig"].IsNull())
    {
        if (!value["EmbedSubtitleConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DubbingOutputConfig.EmbedSubtitleConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_embedSubtitleConfig.Deserialize(value["EmbedSubtitleConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_embedSubtitleConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DubbingOutputConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outputModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputMode.c_str(), allocator).Move(), allocator);
    }

    if (m_outputFinalVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputFinalVideo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputFinalVideo.c_str(), allocator).Move(), allocator);
    }

    if (m_outputSubtitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputSubtitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputSubtitle.c_str(), allocator).Move(), allocator);
    }

    if (m_outputDstAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputDstAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputDstAudio.c_str(), allocator).Move(), allocator);
    }

    if (m_embedSubtitleConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmbedSubtitleConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_embedSubtitleConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DubbingOutputConfig::GetOutputMode() const
{
    return m_outputMode;
}

void DubbingOutputConfig::SetOutputMode(const string& _outputMode)
{
    m_outputMode = _outputMode;
    m_outputModeHasBeenSet = true;
}

bool DubbingOutputConfig::OutputModeHasBeenSet() const
{
    return m_outputModeHasBeenSet;
}

string DubbingOutputConfig::GetOutputFinalVideo() const
{
    return m_outputFinalVideo;
}

void DubbingOutputConfig::SetOutputFinalVideo(const string& _outputFinalVideo)
{
    m_outputFinalVideo = _outputFinalVideo;
    m_outputFinalVideoHasBeenSet = true;
}

bool DubbingOutputConfig::OutputFinalVideoHasBeenSet() const
{
    return m_outputFinalVideoHasBeenSet;
}

string DubbingOutputConfig::GetOutputSubtitle() const
{
    return m_outputSubtitle;
}

void DubbingOutputConfig::SetOutputSubtitle(const string& _outputSubtitle)
{
    m_outputSubtitle = _outputSubtitle;
    m_outputSubtitleHasBeenSet = true;
}

bool DubbingOutputConfig::OutputSubtitleHasBeenSet() const
{
    return m_outputSubtitleHasBeenSet;
}

string DubbingOutputConfig::GetOutputDstAudio() const
{
    return m_outputDstAudio;
}

void DubbingOutputConfig::SetOutputDstAudio(const string& _outputDstAudio)
{
    m_outputDstAudio = _outputDstAudio;
    m_outputDstAudioHasBeenSet = true;
}

bool DubbingOutputConfig::OutputDstAudioHasBeenSet() const
{
    return m_outputDstAudioHasBeenSet;
}

DubbingEmbedSubtitleConfig DubbingOutputConfig::GetEmbedSubtitleConfig() const
{
    return m_embedSubtitleConfig;
}

void DubbingOutputConfig::SetEmbedSubtitleConfig(const DubbingEmbedSubtitleConfig& _embedSubtitleConfig)
{
    m_embedSubtitleConfig = _embedSubtitleConfig;
    m_embedSubtitleConfigHasBeenSet = true;
}

bool DubbingOutputConfig::EmbedSubtitleConfigHasBeenSet() const
{
    return m_embedSubtitleConfigHasBeenSet;
}

