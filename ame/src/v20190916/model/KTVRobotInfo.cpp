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

#include <tencentcloud/ame/v20190916/model/KTVRobotInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

KTVRobotInfo::KTVRobotInfo() :
    m_robotIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_playlistsHasBeenSet(false),
    m_curIndexHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_setAudioParamInputHasBeenSet(false),
    m_joinRoomInputHasBeenSet(false),
    m_rTCSystemHasBeenSet(false),
    m_setPlayModeInputHasBeenSet(false),
    m_setVolumeInputHasBeenSet(false),
    m_setRealVolumeInputHasBeenSet(false)
{
}

CoreInternalOutcome KTVRobotInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RobotId") && !value["RobotId"].IsNull())
    {
        if (!value["RobotId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVRobotInfo.RobotId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_robotId = string(value["RobotId"].GetString());
        m_robotIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVRobotInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Playlists") && !value["Playlists"].IsNull())
    {
        if (!value["Playlists"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KTVRobotInfo.Playlists` is not array type"));

        const rapidjson::Value &tmpValue = value["Playlists"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_playlists.push_back((*itr).GetString());
        }
        m_playlistsHasBeenSet = true;
    }

    if (value.HasMember("CurIndex") && !value["CurIndex"].IsNull())
    {
        if (!value["CurIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KTVRobotInfo.CurIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_curIndex = value["CurIndex"].GetInt64();
        m_curIndexHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KTVRobotInfo.Position` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_position = value["Position"].GetUint64();
        m_positionHasBeenSet = true;
    }

    if (value.HasMember("SetAudioParamInput") && !value["SetAudioParamInput"].IsNull())
    {
        if (!value["SetAudioParamInput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KTVRobotInfo.SetAudioParamInput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_setAudioParamInput.Deserialize(value["SetAudioParamInput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_setAudioParamInputHasBeenSet = true;
    }

    if (value.HasMember("JoinRoomInput") && !value["JoinRoomInput"].IsNull())
    {
        if (!value["JoinRoomInput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KTVRobotInfo.JoinRoomInput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_joinRoomInput.Deserialize(value["JoinRoomInput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_joinRoomInputHasBeenSet = true;
    }

    if (value.HasMember("RTCSystem") && !value["RTCSystem"].IsNull())
    {
        if (!value["RTCSystem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVRobotInfo.RTCSystem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rTCSystem = string(value["RTCSystem"].GetString());
        m_rTCSystemHasBeenSet = true;
    }

    if (value.HasMember("SetPlayModeInput") && !value["SetPlayModeInput"].IsNull())
    {
        if (!value["SetPlayModeInput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KTVRobotInfo.SetPlayModeInput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_setPlayModeInput.Deserialize(value["SetPlayModeInput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_setPlayModeInputHasBeenSet = true;
    }

    if (value.HasMember("SetVolumeInput") && !value["SetVolumeInput"].IsNull())
    {
        if (!value["SetVolumeInput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KTVRobotInfo.SetVolumeInput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_setVolumeInput.Deserialize(value["SetVolumeInput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_setVolumeInputHasBeenSet = true;
    }

    if (value.HasMember("SetRealVolumeInput") && !value["SetRealVolumeInput"].IsNull())
    {
        if (!value["SetRealVolumeInput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KTVRobotInfo.SetRealVolumeInput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_setRealVolumeInput.Deserialize(value["SetRealVolumeInput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_setRealVolumeInputHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KTVRobotInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_robotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RobotId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_robotId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_playlistsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Playlists";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_playlists.begin(); itr != m_playlists.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_curIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_curIndex, allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_position, allocator);
    }

    if (m_setAudioParamInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetAudioParamInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_setAudioParamInput.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_joinRoomInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinRoomInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_joinRoomInput.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rTCSystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTCSystem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rTCSystem.c_str(), allocator).Move(), allocator);
    }

    if (m_setPlayModeInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetPlayModeInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_setPlayModeInput.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_setVolumeInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetVolumeInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_setVolumeInput.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_setRealVolumeInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetRealVolumeInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_setRealVolumeInput.ToJsonObject(value[key.c_str()], allocator);
    }

}


string KTVRobotInfo::GetRobotId() const
{
    return m_robotId;
}

void KTVRobotInfo::SetRobotId(const string& _robotId)
{
    m_robotId = _robotId;
    m_robotIdHasBeenSet = true;
}

bool KTVRobotInfo::RobotIdHasBeenSet() const
{
    return m_robotIdHasBeenSet;
}

string KTVRobotInfo::GetStatus() const
{
    return m_status;
}

void KTVRobotInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool KTVRobotInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> KTVRobotInfo::GetPlaylists() const
{
    return m_playlists;
}

void KTVRobotInfo::SetPlaylists(const vector<string>& _playlists)
{
    m_playlists = _playlists;
    m_playlistsHasBeenSet = true;
}

bool KTVRobotInfo::PlaylistsHasBeenSet() const
{
    return m_playlistsHasBeenSet;
}

int64_t KTVRobotInfo::GetCurIndex() const
{
    return m_curIndex;
}

void KTVRobotInfo::SetCurIndex(const int64_t& _curIndex)
{
    m_curIndex = _curIndex;
    m_curIndexHasBeenSet = true;
}

bool KTVRobotInfo::CurIndexHasBeenSet() const
{
    return m_curIndexHasBeenSet;
}

uint64_t KTVRobotInfo::GetPosition() const
{
    return m_position;
}

void KTVRobotInfo::SetPosition(const uint64_t& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool KTVRobotInfo::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

SetAudioParamCommandInput KTVRobotInfo::GetSetAudioParamInput() const
{
    return m_setAudioParamInput;
}

void KTVRobotInfo::SetSetAudioParamInput(const SetAudioParamCommandInput& _setAudioParamInput)
{
    m_setAudioParamInput = _setAudioParamInput;
    m_setAudioParamInputHasBeenSet = true;
}

bool KTVRobotInfo::SetAudioParamInputHasBeenSet() const
{
    return m_setAudioParamInputHasBeenSet;
}

JoinRoomInput KTVRobotInfo::GetJoinRoomInput() const
{
    return m_joinRoomInput;
}

void KTVRobotInfo::SetJoinRoomInput(const JoinRoomInput& _joinRoomInput)
{
    m_joinRoomInput = _joinRoomInput;
    m_joinRoomInputHasBeenSet = true;
}

bool KTVRobotInfo::JoinRoomInputHasBeenSet() const
{
    return m_joinRoomInputHasBeenSet;
}

string KTVRobotInfo::GetRTCSystem() const
{
    return m_rTCSystem;
}

void KTVRobotInfo::SetRTCSystem(const string& _rTCSystem)
{
    m_rTCSystem = _rTCSystem;
    m_rTCSystemHasBeenSet = true;
}

bool KTVRobotInfo::RTCSystemHasBeenSet() const
{
    return m_rTCSystemHasBeenSet;
}

SetPlayModeCommandInput KTVRobotInfo::GetSetPlayModeInput() const
{
    return m_setPlayModeInput;
}

void KTVRobotInfo::SetSetPlayModeInput(const SetPlayModeCommandInput& _setPlayModeInput)
{
    m_setPlayModeInput = _setPlayModeInput;
    m_setPlayModeInputHasBeenSet = true;
}

bool KTVRobotInfo::SetPlayModeInputHasBeenSet() const
{
    return m_setPlayModeInputHasBeenSet;
}

SetVolumeCommandInput KTVRobotInfo::GetSetVolumeInput() const
{
    return m_setVolumeInput;
}

void KTVRobotInfo::SetSetVolumeInput(const SetVolumeCommandInput& _setVolumeInput)
{
    m_setVolumeInput = _setVolumeInput;
    m_setVolumeInputHasBeenSet = true;
}

bool KTVRobotInfo::SetVolumeInputHasBeenSet() const
{
    return m_setVolumeInputHasBeenSet;
}

SetRealVolumeCommandInput KTVRobotInfo::GetSetRealVolumeInput() const
{
    return m_setRealVolumeInput;
}

void KTVRobotInfo::SetSetRealVolumeInput(const SetRealVolumeCommandInput& _setRealVolumeInput)
{
    m_setRealVolumeInput = _setRealVolumeInput;
    m_setRealVolumeInputHasBeenSet = true;
}

bool KTVRobotInfo::SetRealVolumeInputHasBeenSet() const
{
    return m_setRealVolumeInputHasBeenSet;
}

