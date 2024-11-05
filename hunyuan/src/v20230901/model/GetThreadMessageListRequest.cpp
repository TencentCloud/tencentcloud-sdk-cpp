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

#include <tencentcloud/hunyuan/v20230901/model/GetThreadMessageListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

GetThreadMessageListRequest::GetThreadMessageListRequest() :
    m_threadIDHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderHasBeenSet(false)
{
}

string GetThreadMessageListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_threadIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreadID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_threadID.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetThreadMessageListRequest::GetThreadID() const
{
    return m_threadID;
}

void GetThreadMessageListRequest::SetThreadID(const string& _threadID)
{
    m_threadID = _threadID;
    m_threadIDHasBeenSet = true;
}

bool GetThreadMessageListRequest::ThreadIDHasBeenSet() const
{
    return m_threadIDHasBeenSet;
}

uint64_t GetThreadMessageListRequest::GetLimit() const
{
    return m_limit;
}

void GetThreadMessageListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool GetThreadMessageListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string GetThreadMessageListRequest::GetOrder() const
{
    return m_order;
}

void GetThreadMessageListRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool GetThreadMessageListRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}


