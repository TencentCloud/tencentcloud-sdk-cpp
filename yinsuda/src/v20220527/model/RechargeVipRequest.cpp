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

#include <tencentcloud/yinsuda/v20220527/model/RechargeVipRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

RechargeVipRequest::RechargeVipRequest() :
    m_appNameHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_vipDaysHasBeenSet(false),
    m_anchorIdHasBeenSet(false)
{
}

string RechargeVipRequest::ToJsonString() const
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

    if (m_anchorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_anchorId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RechargeVipRequest::GetAppName() const
{
    return m_appName;
}

void RechargeVipRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool RechargeVipRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string RechargeVipRequest::GetUserId() const
{
    return m_userId;
}

void RechargeVipRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool RechargeVipRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string RechargeVipRequest::GetRoomId() const
{
    return m_roomId;
}

void RechargeVipRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool RechargeVipRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

int64_t RechargeVipRequest::GetVipDays() const
{
    return m_vipDays;
}

void RechargeVipRequest::SetVipDays(const int64_t& _vipDays)
{
    m_vipDays = _vipDays;
    m_vipDaysHasBeenSet = true;
}

bool RechargeVipRequest::VipDaysHasBeenSet() const
{
    return m_vipDaysHasBeenSet;
}

string RechargeVipRequest::GetAnchorId() const
{
    return m_anchorId;
}

void RechargeVipRequest::SetAnchorId(const string& _anchorId)
{
    m_anchorId = _anchorId;
    m_anchorIdHasBeenSet = true;
}

bool RechargeVipRequest::AnchorIdHasBeenSet() const
{
    return m_anchorIdHasBeenSet;
}


