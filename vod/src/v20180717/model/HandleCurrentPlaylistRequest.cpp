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

#include <tencentcloud/vod/v20180717/model/HandleCurrentPlaylistRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

HandleCurrentPlaylistRequest::HandleCurrentPlaylistRequest() :
    m_subAppIdHasBeenSet(false),
    m_roundPlayIdHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_itemIdHasBeenSet(false),
    m_roundPlaylistHasBeenSet(false)
{
}

string HandleCurrentPlaylistRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_roundPlayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoundPlayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roundPlayId.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_itemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_itemId.c_str(), allocator).Move(), allocator);
    }

    if (m_roundPlaylistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoundPlaylist";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_roundPlaylist.begin(); itr != m_roundPlaylist.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t HandleCurrentPlaylistRequest::GetSubAppId() const
{
    return m_subAppId;
}

void HandleCurrentPlaylistRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool HandleCurrentPlaylistRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string HandleCurrentPlaylistRequest::GetRoundPlayId() const
{
    return m_roundPlayId;
}

void HandleCurrentPlaylistRequest::SetRoundPlayId(const string& _roundPlayId)
{
    m_roundPlayId = _roundPlayId;
    m_roundPlayIdHasBeenSet = true;
}

bool HandleCurrentPlaylistRequest::RoundPlayIdHasBeenSet() const
{
    return m_roundPlayIdHasBeenSet;
}

string HandleCurrentPlaylistRequest::GetOperation() const
{
    return m_operation;
}

void HandleCurrentPlaylistRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool HandleCurrentPlaylistRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string HandleCurrentPlaylistRequest::GetItemId() const
{
    return m_itemId;
}

void HandleCurrentPlaylistRequest::SetItemId(const string& _itemId)
{
    m_itemId = _itemId;
    m_itemIdHasBeenSet = true;
}

bool HandleCurrentPlaylistRequest::ItemIdHasBeenSet() const
{
    return m_itemIdHasBeenSet;
}

vector<RoundPlayListItemInfo> HandleCurrentPlaylistRequest::GetRoundPlaylist() const
{
    return m_roundPlaylist;
}

void HandleCurrentPlaylistRequest::SetRoundPlaylist(const vector<RoundPlayListItemInfo>& _roundPlaylist)
{
    m_roundPlaylist = _roundPlaylist;
    m_roundPlaylistHasBeenSet = true;
}

bool HandleCurrentPlaylistRequest::RoundPlaylistHasBeenSet() const
{
    return m_roundPlaylistHasBeenSet;
}


