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

#include <tencentcloud/yinsuda/v20220527/model/RechargeLiveVipRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

RechargeLiveVipRequest::RechargeLiveVipRequest() :
    m_appNameHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_tradeSerialNoHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_vipDaysHasBeenSet(false),
    m_giveTypeHasBeenSet(false),
    m_playSceneHasBeenSet(false)
{
}

string RechargeLiveVipRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeSerialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeSerialNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tradeSerialNo.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_vipDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vipDays, allocator);
    }

    if (m_giveTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GiveType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_giveType.c_str(), allocator).Move(), allocator);
    }

    if (m_playSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayScene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_playScene.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RechargeLiveVipRequest::GetAppName() const
{
    return m_appName;
}

void RechargeLiveVipRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool RechargeLiveVipRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string RechargeLiveVipRequest::GetUserId() const
{
    return m_userId;
}

void RechargeLiveVipRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool RechargeLiveVipRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string RechargeLiveVipRequest::GetTradeSerialNo() const
{
    return m_tradeSerialNo;
}

void RechargeLiveVipRequest::SetTradeSerialNo(const string& _tradeSerialNo)
{
    m_tradeSerialNo = _tradeSerialNo;
    m_tradeSerialNoHasBeenSet = true;
}

bool RechargeLiveVipRequest::TradeSerialNoHasBeenSet() const
{
    return m_tradeSerialNoHasBeenSet;
}

string RechargeLiveVipRequest::GetRoomId() const
{
    return m_roomId;
}

void RechargeLiveVipRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool RechargeLiveVipRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

int64_t RechargeLiveVipRequest::GetVipDays() const
{
    return m_vipDays;
}

void RechargeLiveVipRequest::SetVipDays(const int64_t& _vipDays)
{
    m_vipDays = _vipDays;
    m_vipDaysHasBeenSet = true;
}

bool RechargeLiveVipRequest::VipDaysHasBeenSet() const
{
    return m_vipDaysHasBeenSet;
}

string RechargeLiveVipRequest::GetGiveType() const
{
    return m_giveType;
}

void RechargeLiveVipRequest::SetGiveType(const string& _giveType)
{
    m_giveType = _giveType;
    m_giveTypeHasBeenSet = true;
}

bool RechargeLiveVipRequest::GiveTypeHasBeenSet() const
{
    return m_giveTypeHasBeenSet;
}

string RechargeLiveVipRequest::GetPlayScene() const
{
    return m_playScene;
}

void RechargeLiveVipRequest::SetPlayScene(const string& _playScene)
{
    m_playScene = _playScene;
    m_playSceneHasBeenSet = true;
}

bool RechargeLiveVipRequest::PlaySceneHasBeenSet() const
{
    return m_playSceneHasBeenSet;
}


