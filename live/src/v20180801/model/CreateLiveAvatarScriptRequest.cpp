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

#include <tencentcloud/live/v20180801/model/CreateLiveAvatarScriptRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CreateLiveAvatarScriptRequest::CreateLiveAvatarScriptRequest() :
    m_titleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_specifyPositionHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_productIdHasBeenSet(false)
{
}

string CreateLiveAvatarScriptRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_specifyPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecifyPosition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_specifyPosition, allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLiveAvatarScriptRequest::GetTitle() const
{
    return m_title;
}

void CreateLiveAvatarScriptRequest::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool CreateLiveAvatarScriptRequest::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string CreateLiveAvatarScriptRequest::GetContent() const
{
    return m_content;
}

void CreateLiveAvatarScriptRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool CreateLiveAvatarScriptRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string CreateLiveAvatarScriptRequest::GetRoomId() const
{
    return m_roomId;
}

void CreateLiveAvatarScriptRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool CreateLiveAvatarScriptRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

int64_t CreateLiveAvatarScriptRequest::GetSpecifyPosition() const
{
    return m_specifyPosition;
}

void CreateLiveAvatarScriptRequest::SetSpecifyPosition(const int64_t& _specifyPosition)
{
    m_specifyPosition = _specifyPosition;
    m_specifyPositionHasBeenSet = true;
}

bool CreateLiveAvatarScriptRequest::SpecifyPositionHasBeenSet() const
{
    return m_specifyPositionHasBeenSet;
}

string CreateLiveAvatarScriptRequest::GetOperator() const
{
    return m_operator;
}

void CreateLiveAvatarScriptRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateLiveAvatarScriptRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateLiveAvatarScriptRequest::GetProductId() const
{
    return m_productId;
}

void CreateLiveAvatarScriptRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CreateLiveAvatarScriptRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}


