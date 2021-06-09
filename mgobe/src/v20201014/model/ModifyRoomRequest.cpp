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

#include <tencentcloud/mgobe/v20201014/model/ModifyRoomRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mgobe::V20201014::Model;
using namespace std;

ModifyRoomRequest::ModifyRoomRequest() :
    m_gameIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_playerIdHasBeenSet(false),
    m_changeRoomOptionListHasBeenSet(false),
    m_roomNameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_isViewedHasBeenSet(false),
    m_isInvitedHasBeenSet(false),
    m_isPrivateHasBeenSet(false),
    m_customPropertiesHasBeenSet(false),
    m_isForbidJoinHasBeenSet(false)
{
}

string ModifyRoomRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gameIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gameId.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_playerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_playerId.c_str(), allocator).Move(), allocator);
    }

    if (m_changeRoomOptionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangeRoomOptionList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_changeRoomOptionList.begin(); itr != m_changeRoomOptionList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_roomNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roomName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_isViewedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsViewed";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isViewed, allocator);
    }

    if (m_isInvitedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInvited";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isInvited, allocator);
    }

    if (m_isPrivateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPrivate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPrivate, allocator);
    }

    if (m_customPropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomProperties";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customProperties.c_str(), allocator).Move(), allocator);
    }

    if (m_isForbidJoinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsForbidJoin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isForbidJoin, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRoomRequest::GetGameId() const
{
    return m_gameId;
}

void ModifyRoomRequest::SetGameId(const string& _gameId)
{
    m_gameId = _gameId;
    m_gameIdHasBeenSet = true;
}

bool ModifyRoomRequest::GameIdHasBeenSet() const
{
    return m_gameIdHasBeenSet;
}

string ModifyRoomRequest::GetRoomId() const
{
    return m_roomId;
}

void ModifyRoomRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool ModifyRoomRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string ModifyRoomRequest::GetPlayerId() const
{
    return m_playerId;
}

void ModifyRoomRequest::SetPlayerId(const string& _playerId)
{
    m_playerId = _playerId;
    m_playerIdHasBeenSet = true;
}

bool ModifyRoomRequest::PlayerIdHasBeenSet() const
{
    return m_playerIdHasBeenSet;
}

vector<int64_t> ModifyRoomRequest::GetChangeRoomOptionList() const
{
    return m_changeRoomOptionList;
}

void ModifyRoomRequest::SetChangeRoomOptionList(const vector<int64_t>& _changeRoomOptionList)
{
    m_changeRoomOptionList = _changeRoomOptionList;
    m_changeRoomOptionListHasBeenSet = true;
}

bool ModifyRoomRequest::ChangeRoomOptionListHasBeenSet() const
{
    return m_changeRoomOptionListHasBeenSet;
}

string ModifyRoomRequest::GetRoomName() const
{
    return m_roomName;
}

void ModifyRoomRequest::SetRoomName(const string& _roomName)
{
    m_roomName = _roomName;
    m_roomNameHasBeenSet = true;
}

bool ModifyRoomRequest::RoomNameHasBeenSet() const
{
    return m_roomNameHasBeenSet;
}

string ModifyRoomRequest::GetOwner() const
{
    return m_owner;
}

void ModifyRoomRequest::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool ModifyRoomRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

bool ModifyRoomRequest::GetIsViewed() const
{
    return m_isViewed;
}

void ModifyRoomRequest::SetIsViewed(const bool& _isViewed)
{
    m_isViewed = _isViewed;
    m_isViewedHasBeenSet = true;
}

bool ModifyRoomRequest::IsViewedHasBeenSet() const
{
    return m_isViewedHasBeenSet;
}

bool ModifyRoomRequest::GetIsInvited() const
{
    return m_isInvited;
}

void ModifyRoomRequest::SetIsInvited(const bool& _isInvited)
{
    m_isInvited = _isInvited;
    m_isInvitedHasBeenSet = true;
}

bool ModifyRoomRequest::IsInvitedHasBeenSet() const
{
    return m_isInvitedHasBeenSet;
}

bool ModifyRoomRequest::GetIsPrivate() const
{
    return m_isPrivate;
}

void ModifyRoomRequest::SetIsPrivate(const bool& _isPrivate)
{
    m_isPrivate = _isPrivate;
    m_isPrivateHasBeenSet = true;
}

bool ModifyRoomRequest::IsPrivateHasBeenSet() const
{
    return m_isPrivateHasBeenSet;
}

string ModifyRoomRequest::GetCustomProperties() const
{
    return m_customProperties;
}

void ModifyRoomRequest::SetCustomProperties(const string& _customProperties)
{
    m_customProperties = _customProperties;
    m_customPropertiesHasBeenSet = true;
}

bool ModifyRoomRequest::CustomPropertiesHasBeenSet() const
{
    return m_customPropertiesHasBeenSet;
}

bool ModifyRoomRequest::GetIsForbidJoin() const
{
    return m_isForbidJoin;
}

void ModifyRoomRequest::SetIsForbidJoin(const bool& _isForbidJoin)
{
    m_isForbidJoin = _isForbidJoin;
    m_isForbidJoinHasBeenSet = true;
}

bool ModifyRoomRequest::IsForbidJoinHasBeenSet() const
{
    return m_isForbidJoinHasBeenSet;
}


