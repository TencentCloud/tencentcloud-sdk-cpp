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

#include <tencentcloud/bmlb/v20180625/model/DescribeTrafficMirrorReceiversRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

DescribeTrafficMirrorReceiversRequest::DescribeTrafficMirrorReceiversRequest() :
    m_trafficMirrorIdHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_portsHasBeenSet(false),
    m_weightsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_vagueStrHasBeenSet(false),
    m_vagueIpHasBeenSet(false)
{
}

string DescribeTrafficMirrorReceiversRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_trafficMirrorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMirrorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trafficMirrorId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_portsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ports";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ports.begin(); itr != m_ports.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_weightsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weights";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_weights.begin(); itr != m_weights.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
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

    if (m_vagueStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VagueStr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vagueStr.c_str(), allocator).Move(), allocator);
    }

    if (m_vagueIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VagueIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vagueIp.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTrafficMirrorReceiversRequest::GetTrafficMirrorId() const
{
    return m_trafficMirrorId;
}

void DescribeTrafficMirrorReceiversRequest::SetTrafficMirrorId(const string& _trafficMirrorId)
{
    m_trafficMirrorId = _trafficMirrorId;
    m_trafficMirrorIdHasBeenSet = true;
}

bool DescribeTrafficMirrorReceiversRequest::TrafficMirrorIdHasBeenSet() const
{
    return m_trafficMirrorIdHasBeenSet;
}

vector<string> DescribeTrafficMirrorReceiversRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void DescribeTrafficMirrorReceiversRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DescribeTrafficMirrorReceiversRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

vector<int64_t> DescribeTrafficMirrorReceiversRequest::GetPorts() const
{
    return m_ports;
}

void DescribeTrafficMirrorReceiversRequest::SetPorts(const vector<int64_t>& _ports)
{
    m_ports = _ports;
    m_portsHasBeenSet = true;
}

bool DescribeTrafficMirrorReceiversRequest::PortsHasBeenSet() const
{
    return m_portsHasBeenSet;
}

vector<int64_t> DescribeTrafficMirrorReceiversRequest::GetWeights() const
{
    return m_weights;
}

void DescribeTrafficMirrorReceiversRequest::SetWeights(const vector<int64_t>& _weights)
{
    m_weights = _weights;
    m_weightsHasBeenSet = true;
}

bool DescribeTrafficMirrorReceiversRequest::WeightsHasBeenSet() const
{
    return m_weightsHasBeenSet;
}

int64_t DescribeTrafficMirrorReceiversRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTrafficMirrorReceiversRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTrafficMirrorReceiversRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeTrafficMirrorReceiversRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTrafficMirrorReceiversRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTrafficMirrorReceiversRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeTrafficMirrorReceiversRequest::GetVagueStr() const
{
    return m_vagueStr;
}

void DescribeTrafficMirrorReceiversRequest::SetVagueStr(const string& _vagueStr)
{
    m_vagueStr = _vagueStr;
    m_vagueStrHasBeenSet = true;
}

bool DescribeTrafficMirrorReceiversRequest::VagueStrHasBeenSet() const
{
    return m_vagueStrHasBeenSet;
}

string DescribeTrafficMirrorReceiversRequest::GetVagueIp() const
{
    return m_vagueIp;
}

void DescribeTrafficMirrorReceiversRequest::SetVagueIp(const string& _vagueIp)
{
    m_vagueIp = _vagueIp;
    m_vagueIpHasBeenSet = true;
}

bool DescribeTrafficMirrorReceiversRequest::VagueIpHasBeenSet() const
{
    return m_vagueIpHasBeenSet;
}


