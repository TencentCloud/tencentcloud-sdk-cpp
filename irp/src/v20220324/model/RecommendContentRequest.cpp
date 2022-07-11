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

#include <tencentcloud/irp/v20220324/model/RecommendContentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Irp::V20220324::Model;
using namespace std;

RecommendContentRequest::RecommendContentRequest() :
    m_bidHasBeenSet(false),
    m_sceneIdHasBeenSet(false),
    m_userIdListHasBeenSet(false),
    m_recTraceIdHasBeenSet(false),
    m_itemCntHasBeenSet(false),
    m_poolIdHasBeenSet(false),
    m_currentItemIdHasBeenSet(false),
    m_responseTimeoutHasBeenSet(false),
    m_itemTypeRatioHasBeenSet(false)
{
}

string RecommendContentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bid.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sceneId.c_str(), allocator).Move(), allocator);
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

    if (m_recTraceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecTraceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recTraceId.c_str(), allocator).Move(), allocator);
    }

    if (m_itemCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCnt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_itemCnt, allocator);
    }

    if (m_poolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoolId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_poolId.c_str(), allocator).Move(), allocator);
    }

    if (m_currentItemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentItemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currentItemId.c_str(), allocator).Move(), allocator);
    }

    if (m_responseTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_responseTimeout, allocator);
    }

    if (m_itemTypeRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemTypeRatio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_itemTypeRatio.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RecommendContentRequest::GetBid() const
{
    return m_bid;
}

void RecommendContentRequest::SetBid(const string& _bid)
{
    m_bid = _bid;
    m_bidHasBeenSet = true;
}

bool RecommendContentRequest::BidHasBeenSet() const
{
    return m_bidHasBeenSet;
}

string RecommendContentRequest::GetSceneId() const
{
    return m_sceneId;
}

void RecommendContentRequest::SetSceneId(const string& _sceneId)
{
    m_sceneId = _sceneId;
    m_sceneIdHasBeenSet = true;
}

bool RecommendContentRequest::SceneIdHasBeenSet() const
{
    return m_sceneIdHasBeenSet;
}

vector<UserIdInfo> RecommendContentRequest::GetUserIdList() const
{
    return m_userIdList;
}

void RecommendContentRequest::SetUserIdList(const vector<UserIdInfo>& _userIdList)
{
    m_userIdList = _userIdList;
    m_userIdListHasBeenSet = true;
}

bool RecommendContentRequest::UserIdListHasBeenSet() const
{
    return m_userIdListHasBeenSet;
}

string RecommendContentRequest::GetRecTraceId() const
{
    return m_recTraceId;
}

void RecommendContentRequest::SetRecTraceId(const string& _recTraceId)
{
    m_recTraceId = _recTraceId;
    m_recTraceIdHasBeenSet = true;
}

bool RecommendContentRequest::RecTraceIdHasBeenSet() const
{
    return m_recTraceIdHasBeenSet;
}

int64_t RecommendContentRequest::GetItemCnt() const
{
    return m_itemCnt;
}

void RecommendContentRequest::SetItemCnt(const int64_t& _itemCnt)
{
    m_itemCnt = _itemCnt;
    m_itemCntHasBeenSet = true;
}

bool RecommendContentRequest::ItemCntHasBeenSet() const
{
    return m_itemCntHasBeenSet;
}

string RecommendContentRequest::GetPoolId() const
{
    return m_poolId;
}

void RecommendContentRequest::SetPoolId(const string& _poolId)
{
    m_poolId = _poolId;
    m_poolIdHasBeenSet = true;
}

bool RecommendContentRequest::PoolIdHasBeenSet() const
{
    return m_poolIdHasBeenSet;
}

string RecommendContentRequest::GetCurrentItemId() const
{
    return m_currentItemId;
}

void RecommendContentRequest::SetCurrentItemId(const string& _currentItemId)
{
    m_currentItemId = _currentItemId;
    m_currentItemIdHasBeenSet = true;
}

bool RecommendContentRequest::CurrentItemIdHasBeenSet() const
{
    return m_currentItemIdHasBeenSet;
}

int64_t RecommendContentRequest::GetResponseTimeout() const
{
    return m_responseTimeout;
}

void RecommendContentRequest::SetResponseTimeout(const int64_t& _responseTimeout)
{
    m_responseTimeout = _responseTimeout;
    m_responseTimeoutHasBeenSet = true;
}

bool RecommendContentRequest::ResponseTimeoutHasBeenSet() const
{
    return m_responseTimeoutHasBeenSet;
}

string RecommendContentRequest::GetItemTypeRatio() const
{
    return m_itemTypeRatio;
}

void RecommendContentRequest::SetItemTypeRatio(const string& _itemTypeRatio)
{
    m_itemTypeRatio = _itemTypeRatio;
    m_itemTypeRatioHasBeenSet = true;
}

bool RecommendContentRequest::ItemTypeRatioHasBeenSet() const
{
    return m_itemTypeRatioHasBeenSet;
}


