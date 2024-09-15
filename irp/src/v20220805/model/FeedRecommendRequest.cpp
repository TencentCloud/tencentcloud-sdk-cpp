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

#include <tencentcloud/irp/v20220805/model/FeedRecommendRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Irp::V20220805::Model;
using namespace std;

FeedRecommendRequest::FeedRecommendRequest() :
    m_instanceIdHasBeenSet(false),
    m_sceneIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userIdListHasBeenSet(false),
    m_itemCntHasBeenSet(false),
    m_currentItemIdHasBeenSet(false),
    m_extensionHasBeenSet(false)
{
}

string FeedRecommendRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sceneId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userIdList.begin(); itr != m_userIdList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_itemCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCnt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_itemCnt, allocator);
    }

    if (m_currentItemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentItemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currentItemId.c_str(), allocator).Move(), allocator);
    }

    if (m_extensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extension";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extension.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string FeedRecommendRequest::GetInstanceId() const
{
    return m_instanceId;
}

void FeedRecommendRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool FeedRecommendRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string FeedRecommendRequest::GetSceneId() const
{
    return m_sceneId;
}

void FeedRecommendRequest::SetSceneId(const string& _sceneId)
{
    m_sceneId = _sceneId;
    m_sceneIdHasBeenSet = true;
}

bool FeedRecommendRequest::SceneIdHasBeenSet() const
{
    return m_sceneIdHasBeenSet;
}

string FeedRecommendRequest::GetUserId() const
{
    return m_userId;
}

void FeedRecommendRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool FeedRecommendRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

vector<UserIdInfo> FeedRecommendRequest::GetUserIdList() const
{
    return m_userIdList;
}

void FeedRecommendRequest::SetUserIdList(const vector<UserIdInfo>& _userIdList)
{
    m_userIdList = _userIdList;
    m_userIdListHasBeenSet = true;
}

bool FeedRecommendRequest::UserIdListHasBeenSet() const
{
    return m_userIdListHasBeenSet;
}

int64_t FeedRecommendRequest::GetItemCnt() const
{
    return m_itemCnt;
}

void FeedRecommendRequest::SetItemCnt(const int64_t& _itemCnt)
{
    m_itemCnt = _itemCnt;
    m_itemCntHasBeenSet = true;
}

bool FeedRecommendRequest::ItemCntHasBeenSet() const
{
    return m_itemCntHasBeenSet;
}

string FeedRecommendRequest::GetCurrentItemId() const
{
    return m_currentItemId;
}

void FeedRecommendRequest::SetCurrentItemId(const string& _currentItemId)
{
    m_currentItemId = _currentItemId;
    m_currentItemIdHasBeenSet = true;
}

bool FeedRecommendRequest::CurrentItemIdHasBeenSet() const
{
    return m_currentItemIdHasBeenSet;
}

string FeedRecommendRequest::GetExtension() const
{
    return m_extension;
}

void FeedRecommendRequest::SetExtension(const string& _extension)
{
    m_extension = _extension;
    m_extensionHasBeenSet = true;
}

bool FeedRecommendRequest::ExtensionHasBeenSet() const
{
    return m_extensionHasBeenSet;
}


