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

#include <tencentcloud/edgezone/v20260401/model/DescribePublicIpsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Edgezone::V20260401::Model;
using namespace std;

DescribePublicIpsRequest::DescribePublicIpsRequest() :
    m_networkInstanceIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_orderByCreateTimeHasBeenSet(false),
    m_orderByUpdateTimeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribePublicIpsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_networkInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_networkInstanceId.begin(); itr != m_networkInstanceId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ip.begin(); itr != m_ip.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_state.begin(); itr != m_state.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_type.begin(); itr != m_type.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_orderByCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderByCreateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderByCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderByUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderByUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribePublicIpsRequest::GetNetworkInstanceId() const
{
    return m_networkInstanceId;
}

void DescribePublicIpsRequest::SetNetworkInstanceId(const vector<string>& _networkInstanceId)
{
    m_networkInstanceId = _networkInstanceId;
    m_networkInstanceIdHasBeenSet = true;
}

bool DescribePublicIpsRequest::NetworkInstanceIdHasBeenSet() const
{
    return m_networkInstanceIdHasBeenSet;
}

string DescribePublicIpsRequest::GetZoneId() const
{
    return m_zoneId;
}

void DescribePublicIpsRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool DescribePublicIpsRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<string> DescribePublicIpsRequest::GetIp() const
{
    return m_ip;
}

void DescribePublicIpsRequest::SetIp(const vector<string>& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DescribePublicIpsRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

vector<string> DescribePublicIpsRequest::GetState() const
{
    return m_state;
}

void DescribePublicIpsRequest::SetState(const vector<string>& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DescribePublicIpsRequest::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

vector<string> DescribePublicIpsRequest::GetType() const
{
    return m_type;
}

void DescribePublicIpsRequest::SetType(const vector<string>& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribePublicIpsRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribePublicIpsRequest::GetOrderByCreateTime() const
{
    return m_orderByCreateTime;
}

void DescribePublicIpsRequest::SetOrderByCreateTime(const string& _orderByCreateTime)
{
    m_orderByCreateTime = _orderByCreateTime;
    m_orderByCreateTimeHasBeenSet = true;
}

bool DescribePublicIpsRequest::OrderByCreateTimeHasBeenSet() const
{
    return m_orderByCreateTimeHasBeenSet;
}

string DescribePublicIpsRequest::GetOrderByUpdateTime() const
{
    return m_orderByUpdateTime;
}

void DescribePublicIpsRequest::SetOrderByUpdateTime(const string& _orderByUpdateTime)
{
    m_orderByUpdateTime = _orderByUpdateTime;
    m_orderByUpdateTimeHasBeenSet = true;
}

bool DescribePublicIpsRequest::OrderByUpdateTimeHasBeenSet() const
{
    return m_orderByUpdateTimeHasBeenSet;
}

int64_t DescribePublicIpsRequest::GetOffset() const
{
    return m_offset;
}

void DescribePublicIpsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribePublicIpsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribePublicIpsRequest::GetLimit() const
{
    return m_limit;
}

void DescribePublicIpsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribePublicIpsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


