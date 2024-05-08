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

#include <tencentcloud/iotexplorer/v20190423/model/RemoveUserByRoomIdFromTRTCRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

RemoveUserByRoomIdFromTRTCRequest::RemoveUserByRoomIdFromTRTCRequest() :
    m_roomIdHasBeenSet(false),
    m_tRTCUserIdsHasBeenSet(false)
{
}

string RemoveUserByRoomIdFromTRTCRequest::ToJsonString() const
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

    if (m_tRTCUserIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TRTCUserIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tRTCUserIds.begin(); itr != m_tRTCUserIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RemoveUserByRoomIdFromTRTCRequest::GetRoomId() const
{
    return m_roomId;
}

void RemoveUserByRoomIdFromTRTCRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool RemoveUserByRoomIdFromTRTCRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

vector<string> RemoveUserByRoomIdFromTRTCRequest::GetTRTCUserIds() const
{
    return m_tRTCUserIds;
}

void RemoveUserByRoomIdFromTRTCRequest::SetTRTCUserIds(const vector<string>& _tRTCUserIds)
{
    m_tRTCUserIds = _tRTCUserIds;
    m_tRTCUserIdsHasBeenSet = true;
}

bool RemoveUserByRoomIdFromTRTCRequest::TRTCUserIdsHasBeenSet() const
{
    return m_tRTCUserIdsHasBeenSet;
}


