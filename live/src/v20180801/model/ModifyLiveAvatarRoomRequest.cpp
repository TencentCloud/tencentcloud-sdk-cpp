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

#include <tencentcloud/live/v20180801/model/ModifyLiveAvatarRoomRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

ModifyLiveAvatarRoomRequest::ModifyLiveAvatarRoomRequest() :
    m_roomIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_avatarKeyHasBeenSet(false),
    m_timbreKeyHasBeenSet(false),
    m_backgroundUrlHasBeenSet(false),
    m_anchorScaleHasBeenSet(false),
    m_anchorVerticalPosHasBeenSet(false),
    m_anchorHorizontalPosHasBeenSet(false),
    m_speechSpeedHasBeenSet(false),
    m_speechVolumeHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_roomTypeHasBeenSet(false)
{
}

string ModifyLiveAvatarRoomRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_avatarKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvatarKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_avatarKey.c_str(), allocator).Move(), allocator);
    }

    if (m_timbreKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimbreKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timbreKey.c_str(), allocator).Move(), allocator);
    }

    if (m_backgroundUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backgroundUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_anchorScaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorScale";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_anchorScale, allocator);
    }

    if (m_anchorVerticalPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorVerticalPos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_anchorVerticalPos, allocator);
    }

    if (m_anchorHorizontalPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorHorizontalPos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_anchorHorizontalPos, allocator);
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

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_roomTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roomType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLiveAvatarRoomRequest::GetRoomId() const
{
    return m_roomId;
}

void ModifyLiveAvatarRoomRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool ModifyLiveAvatarRoomRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string ModifyLiveAvatarRoomRequest::GetName() const
{
    return m_name;
}

void ModifyLiveAvatarRoomRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyLiveAvatarRoomRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyLiveAvatarRoomRequest::GetAvatarKey() const
{
    return m_avatarKey;
}

void ModifyLiveAvatarRoomRequest::SetAvatarKey(const string& _avatarKey)
{
    m_avatarKey = _avatarKey;
    m_avatarKeyHasBeenSet = true;
}

bool ModifyLiveAvatarRoomRequest::AvatarKeyHasBeenSet() const
{
    return m_avatarKeyHasBeenSet;
}

string ModifyLiveAvatarRoomRequest::GetTimbreKey() const
{
    return m_timbreKey;
}

void ModifyLiveAvatarRoomRequest::SetTimbreKey(const string& _timbreKey)
{
    m_timbreKey = _timbreKey;
    m_timbreKeyHasBeenSet = true;
}

bool ModifyLiveAvatarRoomRequest::TimbreKeyHasBeenSet() const
{
    return m_timbreKeyHasBeenSet;
}

string ModifyLiveAvatarRoomRequest::GetBackgroundUrl() const
{
    return m_backgroundUrl;
}

void ModifyLiveAvatarRoomRequest::SetBackgroundUrl(const string& _backgroundUrl)
{
    m_backgroundUrl = _backgroundUrl;
    m_backgroundUrlHasBeenSet = true;
}

bool ModifyLiveAvatarRoomRequest::BackgroundUrlHasBeenSet() const
{
    return m_backgroundUrlHasBeenSet;
}

double ModifyLiveAvatarRoomRequest::GetAnchorScale() const
{
    return m_anchorScale;
}

void ModifyLiveAvatarRoomRequest::SetAnchorScale(const double& _anchorScale)
{
    m_anchorScale = _anchorScale;
    m_anchorScaleHasBeenSet = true;
}

bool ModifyLiveAvatarRoomRequest::AnchorScaleHasBeenSet() const
{
    return m_anchorScaleHasBeenSet;
}

int64_t ModifyLiveAvatarRoomRequest::GetAnchorVerticalPos() const
{
    return m_anchorVerticalPos;
}

void ModifyLiveAvatarRoomRequest::SetAnchorVerticalPos(const int64_t& _anchorVerticalPos)
{
    m_anchorVerticalPos = _anchorVerticalPos;
    m_anchorVerticalPosHasBeenSet = true;
}

bool ModifyLiveAvatarRoomRequest::AnchorVerticalPosHasBeenSet() const
{
    return m_anchorVerticalPosHasBeenSet;
}

int64_t ModifyLiveAvatarRoomRequest::GetAnchorHorizontalPos() const
{
    return m_anchorHorizontalPos;
}

void ModifyLiveAvatarRoomRequest::SetAnchorHorizontalPos(const int64_t& _anchorHorizontalPos)
{
    m_anchorHorizontalPos = _anchorHorizontalPos;
    m_anchorHorizontalPosHasBeenSet = true;
}

bool ModifyLiveAvatarRoomRequest::AnchorHorizontalPosHasBeenSet() const
{
    return m_anchorHorizontalPosHasBeenSet;
}

double ModifyLiveAvatarRoomRequest::GetSpeechSpeed() const
{
    return m_speechSpeed;
}

void ModifyLiveAvatarRoomRequest::SetSpeechSpeed(const double& _speechSpeed)
{
    m_speechSpeed = _speechSpeed;
    m_speechSpeedHasBeenSet = true;
}

bool ModifyLiveAvatarRoomRequest::SpeechSpeedHasBeenSet() const
{
    return m_speechSpeedHasBeenSet;
}

int64_t ModifyLiveAvatarRoomRequest::GetSpeechVolume() const
{
    return m_speechVolume;
}

void ModifyLiveAvatarRoomRequest::SetSpeechVolume(const int64_t& _speechVolume)
{
    m_speechVolume = _speechVolume;
    m_speechVolumeHasBeenSet = true;
}

bool ModifyLiveAvatarRoomRequest::SpeechVolumeHasBeenSet() const
{
    return m_speechVolumeHasBeenSet;
}

string ModifyLiveAvatarRoomRequest::GetOperator() const
{
    return m_operator;
}

void ModifyLiveAvatarRoomRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ModifyLiveAvatarRoomRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string ModifyLiveAvatarRoomRequest::GetRoomType() const
{
    return m_roomType;
}

void ModifyLiveAvatarRoomRequest::SetRoomType(const string& _roomType)
{
    m_roomType = _roomType;
    m_roomTypeHasBeenSet = true;
}

bool ModifyLiveAvatarRoomRequest::RoomTypeHasBeenSet() const
{
    return m_roomTypeHasBeenSet;
}


