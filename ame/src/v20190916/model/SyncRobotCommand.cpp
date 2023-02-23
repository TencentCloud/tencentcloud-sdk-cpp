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

#include <tencentcloud/ame/v20190916/model/SyncRobotCommand.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

SyncRobotCommand::SyncRobotCommand() :
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

CoreInternalOutcome SyncRobotCommand::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncRobotCommand.Command` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_command = string(value["Command"].GetString());
        m_commandHasBeenSet = true;
    }

    if (value.HasMember("PlayCommandInput") && !value["PlayCommandInput"].IsNull())
    {
        if (!value["PlayCommandInput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SyncRobotCommand.PlayCommandInput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_playCommandInput.Deserialize(value["PlayCommandInput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_playCommandInputHasBeenSet = true;
    }

    if (value.HasMember("SetPlaylistCommandInput") && !value["SetPlaylistCommandInput"].IsNull())
    {
        if (!value["SetPlaylistCommandInput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SyncRobotCommand.SetPlaylistCommandInput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_setPlaylistCommandInput.Deserialize(value["SetPlaylistCommandInput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_setPlaylistCommandInputHasBeenSet = true;
    }

    if (value.HasMember("SeekCommandInput") && !value["SeekCommandInput"].IsNull())
    {
        if (!value["SeekCommandInput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SyncRobotCommand.SeekCommandInput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_seekCommandInput.Deserialize(value["SeekCommandInput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_seekCommandInputHasBeenSet = true;
    }

    if (value.HasMember("SetAudioParamCommandInput") && !value["SetAudioParamCommandInput"].IsNull())
    {
        if (!value["SetAudioParamCommandInput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SyncRobotCommand.SetAudioParamCommandInput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_setAudioParamCommandInput.Deserialize(value["SetAudioParamCommandInput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_setAudioParamCommandInputHasBeenSet = true;
    }

    if (value.HasMember("SendMessageCommandInput") && !value["SendMessageCommandInput"].IsNull())
    {
        if (!value["SendMessageCommandInput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SyncRobotCommand.SendMessageCommandInput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sendMessageCommandInput.Deserialize(value["SendMessageCommandInput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sendMessageCommandInputHasBeenSet = true;
    }

    if (value.HasMember("SetPlayModeCommandInput") && !value["SetPlayModeCommandInput"].IsNull())
    {
        if (!value["SetPlayModeCommandInput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SyncRobotCommand.SetPlayModeCommandInput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_setPlayModeCommandInput.Deserialize(value["SetPlayModeCommandInput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_setPlayModeCommandInputHasBeenSet = true;
    }

    if (value.HasMember("SetDestroyModeCommandInput") && !value["SetDestroyModeCommandInput"].IsNull())
    {
        if (!value["SetDestroyModeCommandInput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SyncRobotCommand.SetDestroyModeCommandInput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_setDestroyModeCommandInput.Deserialize(value["SetDestroyModeCommandInput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_setDestroyModeCommandInputHasBeenSet = true;
    }

    if (value.HasMember("SetVolumeCommandInput") && !value["SetVolumeCommandInput"].IsNull())
    {
        if (!value["SetVolumeCommandInput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SyncRobotCommand.SetVolumeCommandInput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_setVolumeCommandInput.Deserialize(value["SetVolumeCommandInput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_setVolumeCommandInputHasBeenSet = true;
    }

    if (value.HasMember("SetRealVolumeCommandInput") && !value["SetRealVolumeCommandInput"].IsNull())
    {
        if (!value["SetRealVolumeCommandInput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SyncRobotCommand.SetRealVolumeCommandInput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_setRealVolumeCommandInput.Deserialize(value["SetRealVolumeCommandInput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_setRealVolumeCommandInputHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SyncRobotCommand::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_playCommandInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayCommandInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_playCommandInput.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_setPlaylistCommandInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetPlaylistCommandInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_setPlaylistCommandInput.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_seekCommandInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeekCommandInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_seekCommandInput.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_setAudioParamCommandInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetAudioParamCommandInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_setAudioParamCommandInput.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sendMessageCommandInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendMessageCommandInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sendMessageCommandInput.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_setPlayModeCommandInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetPlayModeCommandInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_setPlayModeCommandInput.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_setDestroyModeCommandInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetDestroyModeCommandInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_setDestroyModeCommandInput.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_setVolumeCommandInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetVolumeCommandInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_setVolumeCommandInput.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_setRealVolumeCommandInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetRealVolumeCommandInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_setRealVolumeCommandInput.ToJsonObject(value[key.c_str()], allocator);
    }

}


string SyncRobotCommand::GetCommand() const
{
    return m_command;
}

void SyncRobotCommand::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool SyncRobotCommand::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

PlayCommandInput SyncRobotCommand::GetPlayCommandInput() const
{
    return m_playCommandInput;
}

void SyncRobotCommand::SetPlayCommandInput(const PlayCommandInput& _playCommandInput)
{
    m_playCommandInput = _playCommandInput;
    m_playCommandInputHasBeenSet = true;
}

bool SyncRobotCommand::PlayCommandInputHasBeenSet() const
{
    return m_playCommandInputHasBeenSet;
}

SetPlaylistCommandInput SyncRobotCommand::GetSetPlaylistCommandInput() const
{
    return m_setPlaylistCommandInput;
}

void SyncRobotCommand::SetSetPlaylistCommandInput(const SetPlaylistCommandInput& _setPlaylistCommandInput)
{
    m_setPlaylistCommandInput = _setPlaylistCommandInput;
    m_setPlaylistCommandInputHasBeenSet = true;
}

bool SyncRobotCommand::SetPlaylistCommandInputHasBeenSet() const
{
    return m_setPlaylistCommandInputHasBeenSet;
}

SeekCommandInput SyncRobotCommand::GetSeekCommandInput() const
{
    return m_seekCommandInput;
}

void SyncRobotCommand::SetSeekCommandInput(const SeekCommandInput& _seekCommandInput)
{
    m_seekCommandInput = _seekCommandInput;
    m_seekCommandInputHasBeenSet = true;
}

bool SyncRobotCommand::SeekCommandInputHasBeenSet() const
{
    return m_seekCommandInputHasBeenSet;
}

SetAudioParamCommandInput SyncRobotCommand::GetSetAudioParamCommandInput() const
{
    return m_setAudioParamCommandInput;
}

void SyncRobotCommand::SetSetAudioParamCommandInput(const SetAudioParamCommandInput& _setAudioParamCommandInput)
{
    m_setAudioParamCommandInput = _setAudioParamCommandInput;
    m_setAudioParamCommandInputHasBeenSet = true;
}

bool SyncRobotCommand::SetAudioParamCommandInputHasBeenSet() const
{
    return m_setAudioParamCommandInputHasBeenSet;
}

SendMessageCommandInput SyncRobotCommand::GetSendMessageCommandInput() const
{
    return m_sendMessageCommandInput;
}

void SyncRobotCommand::SetSendMessageCommandInput(const SendMessageCommandInput& _sendMessageCommandInput)
{
    m_sendMessageCommandInput = _sendMessageCommandInput;
    m_sendMessageCommandInputHasBeenSet = true;
}

bool SyncRobotCommand::SendMessageCommandInputHasBeenSet() const
{
    return m_sendMessageCommandInputHasBeenSet;
}

SetPlayModeCommandInput SyncRobotCommand::GetSetPlayModeCommandInput() const
{
    return m_setPlayModeCommandInput;
}

void SyncRobotCommand::SetSetPlayModeCommandInput(const SetPlayModeCommandInput& _setPlayModeCommandInput)
{
    m_setPlayModeCommandInput = _setPlayModeCommandInput;
    m_setPlayModeCommandInputHasBeenSet = true;
}

bool SyncRobotCommand::SetPlayModeCommandInputHasBeenSet() const
{
    return m_setPlayModeCommandInputHasBeenSet;
}

SetDestroyModeCommandInput SyncRobotCommand::GetSetDestroyModeCommandInput() const
{
    return m_setDestroyModeCommandInput;
}

void SyncRobotCommand::SetSetDestroyModeCommandInput(const SetDestroyModeCommandInput& _setDestroyModeCommandInput)
{
    m_setDestroyModeCommandInput = _setDestroyModeCommandInput;
    m_setDestroyModeCommandInputHasBeenSet = true;
}

bool SyncRobotCommand::SetDestroyModeCommandInputHasBeenSet() const
{
    return m_setDestroyModeCommandInputHasBeenSet;
}

SetVolumeCommandInput SyncRobotCommand::GetSetVolumeCommandInput() const
{
    return m_setVolumeCommandInput;
}

void SyncRobotCommand::SetSetVolumeCommandInput(const SetVolumeCommandInput& _setVolumeCommandInput)
{
    m_setVolumeCommandInput = _setVolumeCommandInput;
    m_setVolumeCommandInputHasBeenSet = true;
}

bool SyncRobotCommand::SetVolumeCommandInputHasBeenSet() const
{
    return m_setVolumeCommandInputHasBeenSet;
}

SetRealVolumeCommandInput SyncRobotCommand::GetSetRealVolumeCommandInput() const
{
    return m_setRealVolumeCommandInput;
}

void SyncRobotCommand::SetSetRealVolumeCommandInput(const SetRealVolumeCommandInput& _setRealVolumeCommandInput)
{
    m_setRealVolumeCommandInput = _setRealVolumeCommandInput;
    m_setRealVolumeCommandInputHasBeenSet = true;
}

bool SyncRobotCommand::SetRealVolumeCommandInputHasBeenSet() const
{
    return m_setRealVolumeCommandInputHasBeenSet;
}

