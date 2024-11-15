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

#include <tencentcloud/gme/v20180711/model/DeleteRoomMemberRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

DeleteRoomMemberRequest::DeleteRoomMemberRequest() :
    m_roomIdHasBeenSet(false),
    m_deleteTypeHasBeenSet(false),
    m_bizIdHasBeenSet(false),
    m_uidsHasBeenSet(false),
    m_strUidsHasBeenSet(false)
{
}

string DeleteRoomMemberRequest::ToJsonString() const
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

    if (m_deleteTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteType, allocator);
    }

    if (m_bizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bizId, allocator);
    }

    if (m_uidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uids.begin(); itr != m_uids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_strUidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrUids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_strUids.begin(); itr != m_strUids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteRoomMemberRequest::GetRoomId() const
{
    return m_roomId;
}

void DeleteRoomMemberRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool DeleteRoomMemberRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

uint64_t DeleteRoomMemberRequest::GetDeleteType() const
{
    return m_deleteType;
}

void DeleteRoomMemberRequest::SetDeleteType(const uint64_t& _deleteType)
{
    m_deleteType = _deleteType;
    m_deleteTypeHasBeenSet = true;
}

bool DeleteRoomMemberRequest::DeleteTypeHasBeenSet() const
{
    return m_deleteTypeHasBeenSet;
}

uint64_t DeleteRoomMemberRequest::GetBizId() const
{
    return m_bizId;
}

void DeleteRoomMemberRequest::SetBizId(const uint64_t& _bizId)
{
    m_bizId = _bizId;
    m_bizIdHasBeenSet = true;
}

bool DeleteRoomMemberRequest::BizIdHasBeenSet() const
{
    return m_bizIdHasBeenSet;
}

vector<string> DeleteRoomMemberRequest::GetUids() const
{
    return m_uids;
}

void DeleteRoomMemberRequest::SetUids(const vector<string>& _uids)
{
    m_uids = _uids;
    m_uidsHasBeenSet = true;
}

bool DeleteRoomMemberRequest::UidsHasBeenSet() const
{
    return m_uidsHasBeenSet;
}

vector<string> DeleteRoomMemberRequest::GetStrUids() const
{
    return m_strUids;
}

void DeleteRoomMemberRequest::SetStrUids(const vector<string>& _strUids)
{
    m_strUids = _strUids;
    m_strUidsHasBeenSet = true;
}

bool DeleteRoomMemberRequest::StrUidsHasBeenSet() const
{
    return m_strUidsHasBeenSet;
}


