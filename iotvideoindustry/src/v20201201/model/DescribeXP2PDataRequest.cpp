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

#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeXP2PDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

DescribeXP2PDataRequest::DescribeXP2PDataRequest() :
    m_p2PAppIdHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false),
    m_p2PChannelIdHasBeenSet(false)
{
}

string DescribeXP2PDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_p2PAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P2PAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_p2PAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_from, allocator);
    }

    if (m_toHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "To";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_to, allocator);
    }

    if (m_p2PChannelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P2PChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_p2PChannelId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeXP2PDataRequest::GetP2PAppId() const
{
    return m_p2PAppId;
}

void DescribeXP2PDataRequest::SetP2PAppId(const string& _p2PAppId)
{
    m_p2PAppId = _p2PAppId;
    m_p2PAppIdHasBeenSet = true;
}

bool DescribeXP2PDataRequest::P2PAppIdHasBeenSet() const
{
    return m_p2PAppIdHasBeenSet;
}

int64_t DescribeXP2PDataRequest::GetFrom() const
{
    return m_from;
}

void DescribeXP2PDataRequest::SetFrom(const int64_t& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool DescribeXP2PDataRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

int64_t DescribeXP2PDataRequest::GetTo() const
{
    return m_to;
}

void DescribeXP2PDataRequest::SetTo(const int64_t& _to)
{
    m_to = _to;
    m_toHasBeenSet = true;
}

bool DescribeXP2PDataRequest::ToHasBeenSet() const
{
    return m_toHasBeenSet;
}

string DescribeXP2PDataRequest::GetP2PChannelId() const
{
    return m_p2PChannelId;
}

void DescribeXP2PDataRequest::SetP2PChannelId(const string& _p2PChannelId)
{
    m_p2PChannelId = _p2PChannelId;
    m_p2PChannelIdHasBeenSet = true;
}

bool DescribeXP2PDataRequest::P2PChannelIdHasBeenSet() const
{
    return m_p2PChannelIdHasBeenSet;
}


