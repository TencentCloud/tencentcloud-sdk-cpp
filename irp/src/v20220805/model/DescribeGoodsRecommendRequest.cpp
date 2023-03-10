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

#include <tencentcloud/irp/v20220805/model/DescribeGoodsRecommendRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Irp::V20220805::Model;
using namespace std;

DescribeGoodsRecommendRequest::DescribeGoodsRecommendRequest() :
    m_instanceIdHasBeenSet(false),
    m_sceneIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userIdListHasBeenSet(false),
    m_goodsCntHasBeenSet(false),
    m_currentGoodsIdHasBeenSet(false),
    m_userPortraitInfoHasBeenSet(false),
    m_blackGoodsListHasBeenSet(false),
    m_extensionHasBeenSet(false)
{
}

string DescribeGoodsRecommendRequest::ToJsonString() const
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

    if (m_goodsCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsCnt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsCnt, allocator);
    }

    if (m_currentGoodsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentGoodsId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currentGoodsId.c_str(), allocator).Move(), allocator);
    }

    if (m_userPortraitInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserPortraitInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userPortraitInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_blackGoodsListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlackGoodsList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_blackGoodsList.begin(); itr != m_blackGoodsList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


string DescribeGoodsRecommendRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeGoodsRecommendRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeGoodsRecommendRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeGoodsRecommendRequest::GetSceneId() const
{
    return m_sceneId;
}

void DescribeGoodsRecommendRequest::SetSceneId(const string& _sceneId)
{
    m_sceneId = _sceneId;
    m_sceneIdHasBeenSet = true;
}

bool DescribeGoodsRecommendRequest::SceneIdHasBeenSet() const
{
    return m_sceneIdHasBeenSet;
}

string DescribeGoodsRecommendRequest::GetUserId() const
{
    return m_userId;
}

void DescribeGoodsRecommendRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeGoodsRecommendRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

vector<StrUserIdInfo> DescribeGoodsRecommendRequest::GetUserIdList() const
{
    return m_userIdList;
}

void DescribeGoodsRecommendRequest::SetUserIdList(const vector<StrUserIdInfo>& _userIdList)
{
    m_userIdList = _userIdList;
    m_userIdListHasBeenSet = true;
}

bool DescribeGoodsRecommendRequest::UserIdListHasBeenSet() const
{
    return m_userIdListHasBeenSet;
}

int64_t DescribeGoodsRecommendRequest::GetGoodsCnt() const
{
    return m_goodsCnt;
}

void DescribeGoodsRecommendRequest::SetGoodsCnt(const int64_t& _goodsCnt)
{
    m_goodsCnt = _goodsCnt;
    m_goodsCntHasBeenSet = true;
}

bool DescribeGoodsRecommendRequest::GoodsCntHasBeenSet() const
{
    return m_goodsCntHasBeenSet;
}

string DescribeGoodsRecommendRequest::GetCurrentGoodsId() const
{
    return m_currentGoodsId;
}

void DescribeGoodsRecommendRequest::SetCurrentGoodsId(const string& _currentGoodsId)
{
    m_currentGoodsId = _currentGoodsId;
    m_currentGoodsIdHasBeenSet = true;
}

bool DescribeGoodsRecommendRequest::CurrentGoodsIdHasBeenSet() const
{
    return m_currentGoodsIdHasBeenSet;
}

UserPortraitInfo DescribeGoodsRecommendRequest::GetUserPortraitInfo() const
{
    return m_userPortraitInfo;
}

void DescribeGoodsRecommendRequest::SetUserPortraitInfo(const UserPortraitInfo& _userPortraitInfo)
{
    m_userPortraitInfo = _userPortraitInfo;
    m_userPortraitInfoHasBeenSet = true;
}

bool DescribeGoodsRecommendRequest::UserPortraitInfoHasBeenSet() const
{
    return m_userPortraitInfoHasBeenSet;
}

vector<string> DescribeGoodsRecommendRequest::GetBlackGoodsList() const
{
    return m_blackGoodsList;
}

void DescribeGoodsRecommendRequest::SetBlackGoodsList(const vector<string>& _blackGoodsList)
{
    m_blackGoodsList = _blackGoodsList;
    m_blackGoodsListHasBeenSet = true;
}

bool DescribeGoodsRecommendRequest::BlackGoodsListHasBeenSet() const
{
    return m_blackGoodsListHasBeenSet;
}

string DescribeGoodsRecommendRequest::GetExtension() const
{
    return m_extension;
}

void DescribeGoodsRecommendRequest::SetExtension(const string& _extension)
{
    m_extension = _extension;
    m_extensionHasBeenSet = true;
}

bool DescribeGoodsRecommendRequest::ExtensionHasBeenSet() const
{
    return m_extensionHasBeenSet;
}


