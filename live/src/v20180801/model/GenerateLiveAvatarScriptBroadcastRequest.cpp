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

#include <tencentcloud/live/v20180801/model/GenerateLiveAvatarScriptBroadcastRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

GenerateLiveAvatarScriptBroadcastRequest::GenerateLiveAvatarScriptBroadcastRequest() :
    m_roomIdHasBeenSet(false),
    m_scriptIdHasBeenSet(false),
    m_timbreKeyHasBeenSet(false),
    m_speechSpeedHasBeenSet(false),
    m_speechVolumeHasBeenSet(false)
{
}

string GenerateLiveAvatarScriptBroadcastRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scriptId.c_str(), allocator).Move(), allocator);
    }

    if (m_timbreKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimbreKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timbreKey.c_str(), allocator).Move(), allocator);
    }

    if (m_speechSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeechSpeed";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_speechSpeed, allocator);
    }

    if (m_speechVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeechVolume";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_speechVolume, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GenerateLiveAvatarScriptBroadcastRequest::GetRoomId() const
{
    return m_roomId;
}

void GenerateLiveAvatarScriptBroadcastRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool GenerateLiveAvatarScriptBroadcastRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string GenerateLiveAvatarScriptBroadcastRequest::GetScriptId() const
{
    return m_scriptId;
}

void GenerateLiveAvatarScriptBroadcastRequest::SetScriptId(const string& _scriptId)
{
    m_scriptId = _scriptId;
    m_scriptIdHasBeenSet = true;
}

bool GenerateLiveAvatarScriptBroadcastRequest::ScriptIdHasBeenSet() const
{
    return m_scriptIdHasBeenSet;
}

string GenerateLiveAvatarScriptBroadcastRequest::GetTimbreKey() const
{
    return m_timbreKey;
}

void GenerateLiveAvatarScriptBroadcastRequest::SetTimbreKey(const string& _timbreKey)
{
    m_timbreKey = _timbreKey;
    m_timbreKeyHasBeenSet = true;
}

bool GenerateLiveAvatarScriptBroadcastRequest::TimbreKeyHasBeenSet() const
{
    return m_timbreKeyHasBeenSet;
}

double GenerateLiveAvatarScriptBroadcastRequest::GetSpeechSpeed() const
{
    return m_speechSpeed;
}

void GenerateLiveAvatarScriptBroadcastRequest::SetSpeechSpeed(const double& _speechSpeed)
{
    m_speechSpeed = _speechSpeed;
    m_speechSpeedHasBeenSet = true;
}

bool GenerateLiveAvatarScriptBroadcastRequest::SpeechSpeedHasBeenSet() const
{
    return m_speechSpeedHasBeenSet;
}

int64_t GenerateLiveAvatarScriptBroadcastRequest::GetSpeechVolume() const
{
    return m_speechVolume;
}

void GenerateLiveAvatarScriptBroadcastRequest::SetSpeechVolume(const int64_t& _speechVolume)
{
    m_speechVolume = _speechVolume;
    m_speechVolumeHasBeenSet = true;
}

bool GenerateLiveAvatarScriptBroadcastRequest::SpeechVolumeHasBeenSet() const
{
    return m_speechVolumeHasBeenSet;
}


