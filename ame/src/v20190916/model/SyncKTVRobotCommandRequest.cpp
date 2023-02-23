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

#include <tencentcloud/ame/v20190916/model/SyncKTVRobotCommandRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

SyncKTVRobotCommandRequest::SyncKTVRobotCommandRequest() :
    m_robotIdHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_playCommandInputHasBeenSet(false),
    m_setPlaylistCommandInputHasBeenSet(false),
    m_seekCommandInputHasBeenSet(false),
    m_setAudioParamCommandInputHasBeenSet(false),
    m_sendMessageCommandInputHasBeenSet(false),
    m_setPlayModeCommandInputHasBeenSet(false),
    m_setDestroyModeCommandInputHasBeenSet(false),
    m_setVolumeCommandInputHasBeenSet(false),
    m_setRealVolumeCommandInputHasBeenSet(false)
{
}

string SyncKTVRobotCommandRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_robotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RobotId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_robotId.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_playCommandInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayCommandInput";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_playCommandInput.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_setPlaylistCommandInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetPlaylistCommandInput";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_setPlaylistCommandInput.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_seekCommandInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeekCommandInput";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_seekCommandInput.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_setAudioParamCommandInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetAudioParamCommandInput";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_setAudioParamCommandInput.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sendMessageCommandInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendMessageCommandInput";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sendMessageCommandInput.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_setPlayModeCommandInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetPlayModeCommandInput";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_setPlayModeCommandInput.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_setDestroyModeCommandInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetDestroyModeCommandInput";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_setDestroyModeCommandInput.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_setVolumeCommandInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetVolumeCommandInput";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_setVolumeCommandInput.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_setRealVolumeCommandInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetRealVolumeCommandInput";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_setRealVolumeCommandInput.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SyncKTVRobotCommandRequest::GetRobotId() const
{
    return m_robotId;
}

void SyncKTVRobotCommandRequest::SetRobotId(const string& _robotId)
{
    m_robotId = _robotId;
    m_robotIdHasBeenSet = true;
}

bool SyncKTVRobotCommandRequest::RobotIdHasBeenSet() const
{
    return m_robotIdHasBeenSet;
}

string SyncKTVRobotCommandRequest::GetCommand() const
{
    return m_command;
}

void SyncKTVRobotCommandRequest::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool SyncKTVRobotCommandRequest::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

PlayCommandInput SyncKTVRobotCommandRequest::GetPlayCommandInput() const
{
    return m_playCommandInput;
}

void SyncKTVRobotCommandRequest::SetPlayCommandInput(const PlayCommandInput& _playCommandInput)
{
    m_playCommandInput = _playCommandInput;
    m_playCommandInputHasBeenSet = true;
}

bool SyncKTVRobotCommandRequest::PlayCommandInputHasBeenSet() const
{
    return m_playCommandInputHasBeenSet;
}

SetPlaylistCommandInput SyncKTVRobotCommandRequest::GetSetPlaylistCommandInput() const
{
    return m_setPlaylistCommandInput;
}

void SyncKTVRobotCommandRequest::SetSetPlaylistCommandInput(const SetPlaylistCommandInput& _setPlaylistCommandInput)
{
    m_setPlaylistCommandInput = _setPlaylistCommandInput;
    m_setPlaylistCommandInputHasBeenSet = true;
}

bool SyncKTVRobotCommandRequest::SetPlaylistCommandInputHasBeenSet() const
{
    return m_setPlaylistCommandInputHasBeenSet;
}

SeekCommandInput SyncKTVRobotCommandRequest::GetSeekCommandInput() const
{
    return m_seekCommandInput;
}

void SyncKTVRobotCommandRequest::SetSeekCommandInput(const SeekCommandInput& _seekCommandInput)
{
    m_seekCommandInput = _seekCommandInput;
    m_seekCommandInputHasBeenSet = true;
}

bool SyncKTVRobotCommandRequest::SeekCommandInputHasBeenSet() const
{
    return m_seekCommandInputHasBeenSet;
}

SetAudioParamCommandInput SyncKTVRobotCommandRequest::GetSetAudioParamCommandInput() const
{
    return m_setAudioParamCommandInput;
}

void SyncKTVRobotCommandRequest::SetSetAudioParamCommandInput(const SetAudioParamCommandInput& _setAudioParamCommandInput)
{
    m_setAudioParamCommandInput = _setAudioParamCommandInput;
    m_setAudioParamCommandInputHasBeenSet = true;
}

bool SyncKTVRobotCommandRequest::SetAudioParamCommandInputHasBeenSet() const
{
    return m_setAudioParamCommandInputHasBeenSet;
}

SendMessageCommandInput SyncKTVRobotCommandRequest::GetSendMessageCommandInput() const
{
    return m_sendMessageCommandInput;
}

void SyncKTVRobotCommandRequest::SetSendMessageCommandInput(const SendMessageCommandInput& _sendMessageCommandInput)
{
    m_sendMessageCommandInput = _sendMessageCommandInput;
    m_sendMessageCommandInputHasBeenSet = true;
}

bool SyncKTVRobotCommandRequest::SendMessageCommandInputHasBeenSet() const
{
    return m_sendMessageCommandInputHasBeenSet;
}

SetPlayModeCommandInput SyncKTVRobotCommandRequest::GetSetPlayModeCommandInput() const
{
    return m_setPlayModeCommandInput;
}

void SyncKTVRobotCommandRequest::SetSetPlayModeCommandInput(const SetPlayModeCommandInput& _setPlayModeCommandInput)
{
    m_setPlayModeCommandInput = _setPlayModeCommandInput;
    m_setPlayModeCommandInputHasBeenSet = true;
}

bool SyncKTVRobotCommandRequest::SetPlayModeCommandInputHasBeenSet() const
{
    return m_setPlayModeCommandInputHasBeenSet;
}

SetDestroyModeCommandInput SyncKTVRobotCommandRequest::GetSetDestroyModeCommandInput() const
{
    return m_setDestroyModeCommandInput;
}

void SyncKTVRobotCommandRequest::SetSetDestroyModeCommandInput(const SetDestroyModeCommandInput& _setDestroyModeCommandInput)
{
    m_setDestroyModeCommandInput = _setDestroyModeCommandInput;
    m_setDestroyModeCommandInputHasBeenSet = true;
}

bool SyncKTVRobotCommandRequest::SetDestroyModeCommandInputHasBeenSet() const
{
    return m_setDestroyModeCommandInputHasBeenSet;
}

SetVolumeCommandInput SyncKTVRobotCommandRequest::GetSetVolumeCommandInput() const
{
    return m_setVolumeCommandInput;
}

void SyncKTVRobotCommandRequest::SetSetVolumeCommandInput(const SetVolumeCommandInput& _setVolumeCommandInput)
{
    m_setVolumeCommandInput = _setVolumeCommandInput;
    m_setVolumeCommandInputHasBeenSet = true;
}

bool SyncKTVRobotCommandRequest::SetVolumeCommandInputHasBeenSet() const
{
    return m_setVolumeCommandInputHasBeenSet;
}

SetRealVolumeCommandInput SyncKTVRobotCommandRequest::GetSetRealVolumeCommandInput() const
{
    return m_setRealVolumeCommandInput;
}

void SyncKTVRobotCommandRequest::SetSetRealVolumeCommandInput(const SetRealVolumeCommandInput& _setRealVolumeCommandInput)
{
    m_setRealVolumeCommandInput = _setRealVolumeCommandInput;
    m_setRealVolumeCommandInputHasBeenSet = true;
}

bool SyncKTVRobotCommandRequest::SetRealVolumeCommandInputHasBeenSet() const
{
    return m_setRealVolumeCommandInputHasBeenSet;
}


