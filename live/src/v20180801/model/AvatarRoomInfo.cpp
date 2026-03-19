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

#include <tencentcloud/live/v20180801/model/AvatarRoomInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

AvatarRoomInfo::AvatarRoomInfo() :
    m_roomIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_avatarKeyHasBeenSet(false),
    m_timbreKeyHasBeenSet(false),
    m_avatarImageUrlHasBeenSet(false),
    m_backgroundUrlHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_toUrlHasBeenSet(false),
    m_anchorScaleHasBeenSet(false),
    m_anchorVerticalPosHasBeenSet(false),
    m_anchorHorizontalPosHasBeenSet(false),
    m_speechSpeedHasBeenSet(false),
    m_speechVolumeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome AvatarRoomInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarRoomInfo.RoomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = string(value["RoomId"].GetString());
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarRoomInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarRoomInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AvatarKey") && !value["AvatarKey"].IsNull())
    {
        if (!value["AvatarKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarRoomInfo.AvatarKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avatarKey = string(value["AvatarKey"].GetString());
        m_avatarKeyHasBeenSet = true;
    }

    if (value.HasMember("TimbreKey") && !value["TimbreKey"].IsNull())
    {
        if (!value["TimbreKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarRoomInfo.TimbreKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timbreKey = string(value["TimbreKey"].GetString());
        m_timbreKeyHasBeenSet = true;
    }

    if (value.HasMember("AvatarImageUrl") && !value["AvatarImageUrl"].IsNull())
    {
        if (!value["AvatarImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarRoomInfo.AvatarImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avatarImageUrl = string(value["AvatarImageUrl"].GetString());
        m_avatarImageUrlHasBeenSet = true;
    }

    if (value.HasMember("BackgroundUrl") && !value["BackgroundUrl"].IsNull())
    {
        if (!value["BackgroundUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarRoomInfo.BackgroundUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundUrl = string(value["BackgroundUrl"].GetString());
        m_backgroundUrlHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarRoomInfo.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("ToUrl") && !value["ToUrl"].IsNull())
    {
        if (!value["ToUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarRoomInfo.ToUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toUrl = string(value["ToUrl"].GetString());
        m_toUrlHasBeenSet = true;
    }

    if (value.HasMember("AnchorScale") && !value["AnchorScale"].IsNull())
    {
        if (!value["AnchorScale"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarRoomInfo.AnchorScale` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_anchorScale = value["AnchorScale"].GetDouble();
        m_anchorScaleHasBeenSet = true;
    }

    if (value.HasMember("AnchorVerticalPos") && !value["AnchorVerticalPos"].IsNull())
    {
        if (!value["AnchorVerticalPos"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarRoomInfo.AnchorVerticalPos` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_anchorVerticalPos = value["AnchorVerticalPos"].GetInt64();
        m_anchorVerticalPosHasBeenSet = true;
    }

    if (value.HasMember("AnchorHorizontalPos") && !value["AnchorHorizontalPos"].IsNull())
    {
        if (!value["AnchorHorizontalPos"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarRoomInfo.AnchorHorizontalPos` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_anchorHorizontalPos = value["AnchorHorizontalPos"].GetInt64();
        m_anchorHorizontalPosHasBeenSet = true;
    }

    if (value.HasMember("SpeechSpeed") && !value["SpeechSpeed"].IsNull())
    {
        if (!value["SpeechSpeed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarRoomInfo.SpeechSpeed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_speechSpeed = value["SpeechSpeed"].GetDouble();
        m_speechSpeedHasBeenSet = true;
    }

    if (value.HasMember("SpeechVolume") && !value["SpeechVolume"].IsNull())
    {
        if (!value["SpeechVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarRoomInfo.SpeechVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_speechVolume = value["SpeechVolume"].GetInt64();
        m_speechVolumeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarRoomInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarRoomInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AvatarRoomInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_avatarKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvatarKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avatarKey.c_str(), allocator).Move(), allocator);
    }

    if (m_timbreKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimbreKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timbreKey.c_str(), allocator).Move(), allocator);
    }

    if (m_avatarImageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvatarImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avatarImageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_backgroundUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backgroundUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_toUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_anchorScaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorScale";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_anchorScale, allocator);
    }

    if (m_anchorVerticalPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorVerticalPos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_anchorVerticalPos, allocator);
    }

    if (m_anchorHorizontalPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorHorizontalPos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_anchorHorizontalPos, allocator);
    }

    if (m_speechSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeechSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_speechSpeed, allocator);
    }

    if (m_speechVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeechVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_speechVolume, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string AvatarRoomInfo::GetRoomId() const
{
    return m_roomId;
}

void AvatarRoomInfo::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool AvatarRoomInfo::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string AvatarRoomInfo::GetName() const
{
    return m_name;
}

void AvatarRoomInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AvatarRoomInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AvatarRoomInfo::GetStatus() const
{
    return m_status;
}

void AvatarRoomInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AvatarRoomInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AvatarRoomInfo::GetAvatarKey() const
{
    return m_avatarKey;
}

void AvatarRoomInfo::SetAvatarKey(const string& _avatarKey)
{
    m_avatarKey = _avatarKey;
    m_avatarKeyHasBeenSet = true;
}

bool AvatarRoomInfo::AvatarKeyHasBeenSet() const
{
    return m_avatarKeyHasBeenSet;
}

string AvatarRoomInfo::GetTimbreKey() const
{
    return m_timbreKey;
}

void AvatarRoomInfo::SetTimbreKey(const string& _timbreKey)
{
    m_timbreKey = _timbreKey;
    m_timbreKeyHasBeenSet = true;
}

bool AvatarRoomInfo::TimbreKeyHasBeenSet() const
{
    return m_timbreKeyHasBeenSet;
}

string AvatarRoomInfo::GetAvatarImageUrl() const
{
    return m_avatarImageUrl;
}

void AvatarRoomInfo::SetAvatarImageUrl(const string& _avatarImageUrl)
{
    m_avatarImageUrl = _avatarImageUrl;
    m_avatarImageUrlHasBeenSet = true;
}

bool AvatarRoomInfo::AvatarImageUrlHasBeenSet() const
{
    return m_avatarImageUrlHasBeenSet;
}

string AvatarRoomInfo::GetBackgroundUrl() const
{
    return m_backgroundUrl;
}

void AvatarRoomInfo::SetBackgroundUrl(const string& _backgroundUrl)
{
    m_backgroundUrl = _backgroundUrl;
    m_backgroundUrlHasBeenSet = true;
}

bool AvatarRoomInfo::BackgroundUrlHasBeenSet() const
{
    return m_backgroundUrlHasBeenSet;
}

string AvatarRoomInfo::GetComment() const
{
    return m_comment;
}

void AvatarRoomInfo::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool AvatarRoomInfo::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string AvatarRoomInfo::GetToUrl() const
{
    return m_toUrl;
}

void AvatarRoomInfo::SetToUrl(const string& _toUrl)
{
    m_toUrl = _toUrl;
    m_toUrlHasBeenSet = true;
}

bool AvatarRoomInfo::ToUrlHasBeenSet() const
{
    return m_toUrlHasBeenSet;
}

double AvatarRoomInfo::GetAnchorScale() const
{
    return m_anchorScale;
}

void AvatarRoomInfo::SetAnchorScale(const double& _anchorScale)
{
    m_anchorScale = _anchorScale;
    m_anchorScaleHasBeenSet = true;
}

bool AvatarRoomInfo::AnchorScaleHasBeenSet() const
{
    return m_anchorScaleHasBeenSet;
}

int64_t AvatarRoomInfo::GetAnchorVerticalPos() const
{
    return m_anchorVerticalPos;
}

void AvatarRoomInfo::SetAnchorVerticalPos(const int64_t& _anchorVerticalPos)
{
    m_anchorVerticalPos = _anchorVerticalPos;
    m_anchorVerticalPosHasBeenSet = true;
}

bool AvatarRoomInfo::AnchorVerticalPosHasBeenSet() const
{
    return m_anchorVerticalPosHasBeenSet;
}

int64_t AvatarRoomInfo::GetAnchorHorizontalPos() const
{
    return m_anchorHorizontalPos;
}

void AvatarRoomInfo::SetAnchorHorizontalPos(const int64_t& _anchorHorizontalPos)
{
    m_anchorHorizontalPos = _anchorHorizontalPos;
    m_anchorHorizontalPosHasBeenSet = true;
}

bool AvatarRoomInfo::AnchorHorizontalPosHasBeenSet() const
{
    return m_anchorHorizontalPosHasBeenSet;
}

double AvatarRoomInfo::GetSpeechSpeed() const
{
    return m_speechSpeed;
}

void AvatarRoomInfo::SetSpeechSpeed(const double& _speechSpeed)
{
    m_speechSpeed = _speechSpeed;
    m_speechSpeedHasBeenSet = true;
}

bool AvatarRoomInfo::SpeechSpeedHasBeenSet() const
{
    return m_speechSpeedHasBeenSet;
}

int64_t AvatarRoomInfo::GetSpeechVolume() const
{
    return m_speechVolume;
}

void AvatarRoomInfo::SetSpeechVolume(const int64_t& _speechVolume)
{
    m_speechVolume = _speechVolume;
    m_speechVolumeHasBeenSet = true;
}

bool AvatarRoomInfo::SpeechVolumeHasBeenSet() const
{
    return m_speechVolumeHasBeenSet;
}

string AvatarRoomInfo::GetCreateTime() const
{
    return m_createTime;
}

void AvatarRoomInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AvatarRoomInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AvatarRoomInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void AvatarRoomInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AvatarRoomInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

