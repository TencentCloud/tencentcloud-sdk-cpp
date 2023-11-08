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

#include <tencentcloud/lcic/v20220817/model/ForbidSendMsgRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

ForbidSendMsgRequest::ForbidSendMsgRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_membersAccountHasBeenSet(false),
    m_muteTimeHasBeenSet(false)
{
}

string ForbidSendMsgRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomId, allocator);
    }

    if (m_membersAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MembersAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_membersAccount.begin(); itr != m_membersAccount.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_muteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MuteTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_muteTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ForbidSendMsgRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void ForbidSendMsgRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool ForbidSendMsgRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

uint64_t ForbidSendMsgRequest::GetRoomId() const
{
    return m_roomId;
}

void ForbidSendMsgRequest::SetRoomId(const uint64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool ForbidSendMsgRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

vector<string> ForbidSendMsgRequest::GetMembersAccount() const
{
    return m_membersAccount;
}

void ForbidSendMsgRequest::SetMembersAccount(const vector<string>& _membersAccount)
{
    m_membersAccount = _membersAccount;
    m_membersAccountHasBeenSet = true;
}

bool ForbidSendMsgRequest::MembersAccountHasBeenSet() const
{
    return m_membersAccountHasBeenSet;
}

uint64_t ForbidSendMsgRequest::GetMuteTime() const
{
    return m_muteTime;
}

void ForbidSendMsgRequest::SetMuteTime(const uint64_t& _muteTime)
{
    m_muteTime = _muteTime;
    m_muteTimeHasBeenSet = true;
}

bool ForbidSendMsgRequest::MuteTimeHasBeenSet() const
{
    return m_muteTimeHasBeenSet;
}


