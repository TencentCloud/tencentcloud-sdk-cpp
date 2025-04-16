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

#include <tencentcloud/lcic/v20220817/model/SendRoomNormalMessageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

SendRoomNormalMessageRequest::SendRoomNormalMessageRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_fromAccountHasBeenSet(false),
    m_msgBodyHasBeenSet(false),
    m_cloudCustomDataHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_priorityHasBeenSet(false)
{
}

string SendRoomNormalMessageRequest::ToJsonString() const
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

    if (m_fromAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fromAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_msgBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgBody";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_msgBody.begin(); itr != m_msgBody.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_cloudCustomDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudCustomData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cloudCustomData.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_priority.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t SendRoomNormalMessageRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void SendRoomNormalMessageRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool SendRoomNormalMessageRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

uint64_t SendRoomNormalMessageRequest::GetRoomId() const
{
    return m_roomId;
}

void SendRoomNormalMessageRequest::SetRoomId(const uint64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool SendRoomNormalMessageRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string SendRoomNormalMessageRequest::GetFromAccount() const
{
    return m_fromAccount;
}

void SendRoomNormalMessageRequest::SetFromAccount(const string& _fromAccount)
{
    m_fromAccount = _fromAccount;
    m_fromAccountHasBeenSet = true;
}

bool SendRoomNormalMessageRequest::FromAccountHasBeenSet() const
{
    return m_fromAccountHasBeenSet;
}

vector<MsgBody> SendRoomNormalMessageRequest::GetMsgBody() const
{
    return m_msgBody;
}

void SendRoomNormalMessageRequest::SetMsgBody(const vector<MsgBody>& _msgBody)
{
    m_msgBody = _msgBody;
    m_msgBodyHasBeenSet = true;
}

bool SendRoomNormalMessageRequest::MsgBodyHasBeenSet() const
{
    return m_msgBodyHasBeenSet;
}

string SendRoomNormalMessageRequest::GetCloudCustomData() const
{
    return m_cloudCustomData;
}

void SendRoomNormalMessageRequest::SetCloudCustomData(const string& _cloudCustomData)
{
    m_cloudCustomData = _cloudCustomData;
    m_cloudCustomDataHasBeenSet = true;
}

bool SendRoomNormalMessageRequest::CloudCustomDataHasBeenSet() const
{
    return m_cloudCustomDataHasBeenSet;
}

string SendRoomNormalMessageRequest::GetNickName() const
{
    return m_nickName;
}

void SendRoomNormalMessageRequest::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool SendRoomNormalMessageRequest::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string SendRoomNormalMessageRequest::GetPriority() const
{
    return m_priority;
}

void SendRoomNormalMessageRequest::SetPriority(const string& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool SendRoomNormalMessageRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}


