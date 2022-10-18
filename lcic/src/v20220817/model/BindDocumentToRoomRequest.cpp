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

#include <tencentcloud/lcic/v20220817/model/BindDocumentToRoomRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

BindDocumentToRoomRequest::BindDocumentToRoomRequest() :
    m_roomIdHasBeenSet(false),
    m_documentIdHasBeenSet(false),
    m_bindTypeHasBeenSet(false)
{
}

string BindDocumentToRoomRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomId, allocator);
    }

    if (m_documentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_documentId.c_str(), allocator).Move(), allocator);
    }

    if (m_bindTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bindType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t BindDocumentToRoomRequest::GetRoomId() const
{
    return m_roomId;
}

void BindDocumentToRoomRequest::SetRoomId(const uint64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool BindDocumentToRoomRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string BindDocumentToRoomRequest::GetDocumentId() const
{
    return m_documentId;
}

void BindDocumentToRoomRequest::SetDocumentId(const string& _documentId)
{
    m_documentId = _documentId;
    m_documentIdHasBeenSet = true;
}

bool BindDocumentToRoomRequest::DocumentIdHasBeenSet() const
{
    return m_documentIdHasBeenSet;
}

uint64_t BindDocumentToRoomRequest::GetBindType() const
{
    return m_bindType;
}

void BindDocumentToRoomRequest::SetBindType(const uint64_t& _bindType)
{
    m_bindType = _bindType;
    m_bindTypeHasBeenSet = true;
}

bool BindDocumentToRoomRequest::BindTypeHasBeenSet() const
{
    return m_bindTypeHasBeenSet;
}


