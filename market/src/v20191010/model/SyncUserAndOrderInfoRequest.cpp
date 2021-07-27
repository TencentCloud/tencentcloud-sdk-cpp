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

#include <tencentcloud/market/v20191010/model/SyncUserAndOrderInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Market::V20191010::Model;
using namespace std;

SyncUserAndOrderInfoRequest::SyncUserAndOrderInfoRequest() :
    m_userInfoHasBeenSet(false),
    m_orderInfoHasBeenSet(false)
{
}

string SyncUserAndOrderInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_orderInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_orderInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


WeChatUserInfo SyncUserAndOrderInfoRequest::GetUserInfo() const
{
    return m_userInfo;
}

void SyncUserAndOrderInfoRequest::SetUserInfo(const WeChatUserInfo& _userInfo)
{
    m_userInfo = _userInfo;
    m_userInfoHasBeenSet = true;
}

bool SyncUserAndOrderInfoRequest::UserInfoHasBeenSet() const
{
    return m_userInfoHasBeenSet;
}

WeChatOrderInfo SyncUserAndOrderInfoRequest::GetOrderInfo() const
{
    return m_orderInfo;
}

void SyncUserAndOrderInfoRequest::SetOrderInfo(const WeChatOrderInfo& _orderInfo)
{
    m_orderInfo = _orderInfo;
    m_orderInfoHasBeenSet = true;
}

bool SyncUserAndOrderInfoRequest::OrderInfoHasBeenSet() const
{
    return m_orderInfoHasBeenSet;
}


