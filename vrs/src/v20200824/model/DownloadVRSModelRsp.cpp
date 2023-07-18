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

#include <tencentcloud/vrs/v20200824/model/DownloadVRSModelRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vrs::V20200824::Model;
using namespace std;

DownloadVRSModelRsp::DownloadVRSModelRsp() :
    m_modelHasBeenSet(false),
    m_voiceNameHasBeenSet(false),
    m_voiceGenderHasBeenSet(false),
    m_voiceLanguageHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

CoreInternalOutcome DownloadVRSModelRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadVRSModelRsp.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("VoiceName") && !value["VoiceName"].IsNull())
    {
        if (!value["VoiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadVRSModelRsp.VoiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceName = string(value["VoiceName"].GetString());
        m_voiceNameHasBeenSet = true;
    }

    if (value.HasMember("VoiceGender") && !value["VoiceGender"].IsNull())
    {
        if (!value["VoiceGender"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadVRSModelRsp.VoiceGender` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_voiceGender = value["VoiceGender"].GetInt64();
        m_voiceGenderHasBeenSet = true;
    }

    if (value.HasMember("VoiceLanguage") && !value["VoiceLanguage"].IsNull())
    {
        if (!value["VoiceLanguage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadVRSModelRsp.VoiceLanguage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_voiceLanguage = value["VoiceLanguage"].GetInt64();
        m_voiceLanguageHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadVRSModelRsp.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DownloadVRSModelRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceName.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceGenderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceGender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_voiceGender, allocator);
    }

    if (m_voiceLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_voiceLanguage, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

}


string DownloadVRSModelRsp::GetModel() const
{
    return m_model;
}

void DownloadVRSModelRsp::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool DownloadVRSModelRsp::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string DownloadVRSModelRsp::GetVoiceName() const
{
    return m_voiceName;
}

void DownloadVRSModelRsp::SetVoiceName(const string& _voiceName)
{
    m_voiceName = _voiceName;
    m_voiceNameHasBeenSet = true;
}

bool DownloadVRSModelRsp::VoiceNameHasBeenSet() const
{
    return m_voiceNameHasBeenSet;
}

int64_t DownloadVRSModelRsp::GetVoiceGender() const
{
    return m_voiceGender;
}

void DownloadVRSModelRsp::SetVoiceGender(const int64_t& _voiceGender)
{
    m_voiceGender = _voiceGender;
    m_voiceGenderHasBeenSet = true;
}

bool DownloadVRSModelRsp::VoiceGenderHasBeenSet() const
{
    return m_voiceGenderHasBeenSet;
}

int64_t DownloadVRSModelRsp::GetVoiceLanguage() const
{
    return m_voiceLanguage;
}

void DownloadVRSModelRsp::SetVoiceLanguage(const int64_t& _voiceLanguage)
{
    m_voiceLanguage = _voiceLanguage;
    m_voiceLanguageHasBeenSet = true;
}

bool DownloadVRSModelRsp::VoiceLanguageHasBeenSet() const
{
    return m_voiceLanguageHasBeenSet;
}

string DownloadVRSModelRsp::GetTaskId() const
{
    return m_taskId;
}

void DownloadVRSModelRsp::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DownloadVRSModelRsp::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

