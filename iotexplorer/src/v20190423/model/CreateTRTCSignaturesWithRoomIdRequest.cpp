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

#include <tencentcloud/iotexplorer/v20190423/model/CreateTRTCSignaturesWithRoomIdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CreateTRTCSignaturesWithRoomIdRequest::CreateTRTCSignaturesWithRoomIdRequest() :
    m_tRTCUserIdsHasBeenSet(false),
    m_roomIdHasBeenSet(false)
{
}

string CreateTRTCSignaturesWithRoomIdRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> CreateTRTCSignaturesWithRoomIdRequest::GetTRTCUserIds() const
{
    return m_tRTCUserIds;
}

void CreateTRTCSignaturesWithRoomIdRequest::SetTRTCUserIds(const vector<string>& _tRTCUserIds)
{
    m_tRTCUserIds = _tRTCUserIds;
    m_tRTCUserIdsHasBeenSet = true;
}

bool CreateTRTCSignaturesWithRoomIdRequest::TRTCUserIdsHasBeenSet() const
{
    return m_tRTCUserIdsHasBeenSet;
}

string CreateTRTCSignaturesWithRoomIdRequest::GetRoomId() const
{
    return m_roomId;
}

void CreateTRTCSignaturesWithRoomIdRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool CreateTRTCSignaturesWithRoomIdRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}


