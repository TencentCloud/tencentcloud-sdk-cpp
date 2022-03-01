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

#include <tencentcloud/gme/v20180711/model/UpdateScanRoomsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

UpdateScanRoomsRequest::UpdateScanRoomsRequest() :
    m_bizIdHasBeenSet(false),
    m_roomIdStringHasBeenSet(false),
    m_roomIdRegexHasBeenSet(false)
{
}

string UpdateScanRoomsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bizId, allocator);
    }

    if (m_roomIdStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomIdString";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roomIdString.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdRegexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomIdRegex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_roomIdRegex.begin(); itr != m_roomIdRegex.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t UpdateScanRoomsRequest::GetBizId() const
{
    return m_bizId;
}

void UpdateScanRoomsRequest::SetBizId(const uint64_t& _bizId)
{
    m_bizId = _bizId;
    m_bizIdHasBeenSet = true;
}

bool UpdateScanRoomsRequest::BizIdHasBeenSet() const
{
    return m_bizIdHasBeenSet;
}

string UpdateScanRoomsRequest::GetRoomIdString() const
{
    return m_roomIdString;
}

void UpdateScanRoomsRequest::SetRoomIdString(const string& _roomIdString)
{
    m_roomIdString = _roomIdString;
    m_roomIdStringHasBeenSet = true;
}

bool UpdateScanRoomsRequest::RoomIdStringHasBeenSet() const
{
    return m_roomIdStringHasBeenSet;
}

vector<string> UpdateScanRoomsRequest::GetRoomIdRegex() const
{
    return m_roomIdRegex;
}

void UpdateScanRoomsRequest::SetRoomIdRegex(const vector<string>& _roomIdRegex)
{
    m_roomIdRegex = _roomIdRegex;
    m_roomIdRegexHasBeenSet = true;
}

bool UpdateScanRoomsRequest::RoomIdRegexHasBeenSet() const
{
    return m_roomIdRegexHasBeenSet;
}


