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

#include <tencentcloud/vod/v20180717/model/CreateAigcAudioCloneOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateAigcAudioCloneOutput::CreateAigcAudioCloneOutput() :
    m_taskIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_voiceIdHasBeenSet(false),
    m_demoAudioHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
}

CoreInternalOutcome CreateAigcAudioCloneOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcAudioCloneOutput.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcAudioCloneOutput.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("VoiceId") && !value["VoiceId"].IsNull())
    {
        if (!value["VoiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcAudioCloneOutput.VoiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceId = string(value["VoiceId"].GetString());
        m_voiceIdHasBeenSet = true;
    }

    if (value.HasMember("DemoAudio") && !value["DemoAudio"].IsNull())
    {
        if (!value["DemoAudio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcAudioCloneOutput.DemoAudio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_demoAudio = string(value["DemoAudio"].GetString());
        m_demoAudioHasBeenSet = true;
    }

    if (value.HasMember("Payload") && !value["Payload"].IsNull())
    {
        if (!value["Payload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcAudioCloneOutput.Payload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payload = string(value["Payload"].GetString());
        m_payloadHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcAudioCloneOutput.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateAigcAudioCloneOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_demoAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DemoAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_demoAudio.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payload.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

}


string CreateAigcAudioCloneOutput::GetTaskId() const
{
    return m_taskId;
}

void CreateAigcAudioCloneOutput::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CreateAigcAudioCloneOutput::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CreateAigcAudioCloneOutput::GetState() const
{
    return m_state;
}

void CreateAigcAudioCloneOutput::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool CreateAigcAudioCloneOutput::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string CreateAigcAudioCloneOutput::GetVoiceId() const
{
    return m_voiceId;
}

void CreateAigcAudioCloneOutput::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool CreateAigcAudioCloneOutput::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

string CreateAigcAudioCloneOutput::GetDemoAudio() const
{
    return m_demoAudio;
}

void CreateAigcAudioCloneOutput::SetDemoAudio(const string& _demoAudio)
{
    m_demoAudio = _demoAudio;
    m_demoAudioHasBeenSet = true;
}

bool CreateAigcAudioCloneOutput::DemoAudioHasBeenSet() const
{
    return m_demoAudioHasBeenSet;
}

string CreateAigcAudioCloneOutput::GetPayload() const
{
    return m_payload;
}

void CreateAigcAudioCloneOutput::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool CreateAigcAudioCloneOutput::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

string CreateAigcAudioCloneOutput::GetCreatedAt() const
{
    return m_createdAt;
}

void CreateAigcAudioCloneOutput::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool CreateAigcAudioCloneOutput::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

