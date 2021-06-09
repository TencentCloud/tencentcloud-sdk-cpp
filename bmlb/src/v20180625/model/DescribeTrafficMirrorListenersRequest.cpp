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

#include <tencentcloud/bmlb/v20180625/model/DescribeTrafficMirrorListenersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

DescribeTrafficMirrorListenersRequest::DescribeTrafficMirrorListenersRequest() :
    m_trafficMirrorIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_searchLoadBalancerIdsHasBeenSet(false),
    m_searchLoadBalancerNamesHasBeenSet(false),
    m_searchVipsHasBeenSet(false),
    m_searchListenerIdsHasBeenSet(false),
    m_searchListenerNamesHasBeenSet(false),
    m_searchProtocolsHasBeenSet(false),
    m_searchLoadBalancerPortsHasBeenSet(false)
{
}

string DescribeTrafficMirrorListenersRequest::ToJsonString() const
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

    if (m_searchLoadBalancerIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchLoadBalancerIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_searchLoadBalancerIds.begin(); itr != m_searchLoadBalancerIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_searchLoadBalancerNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchLoadBalancerNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_searchLoadBalancerNames.begin(); itr != m_searchLoadBalancerNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_searchVipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchVips";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_searchVips.begin(); itr != m_searchVips.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_searchListenerIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchListenerIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_searchListenerIds.begin(); itr != m_searchListenerIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_searchListenerNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchListenerNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_searchListenerNames.begin(); itr != m_searchListenerNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_searchProtocolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchProtocols";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_searchProtocols.begin(); itr != m_searchProtocols.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_searchLoadBalancerPortsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchLoadBalancerPorts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_searchLoadBalancerPorts.begin(); itr != m_searchLoadBalancerPorts.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTrafficMirrorListenersRequest::GetTrafficMirrorId() const
{
    return m_trafficMirrorId;
}

void DescribeTrafficMirrorListenersRequest::SetTrafficMirrorId(const string& _trafficMirrorId)
{
    m_trafficMirrorId = _trafficMirrorId;
    m_trafficMirrorIdHasBeenSet = true;
}

bool DescribeTrafficMirrorListenersRequest::TrafficMirrorIdHasBeenSet() const
{
    return m_trafficMirrorIdHasBeenSet;
}

int64_t DescribeTrafficMirrorListenersRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTrafficMirrorListenersRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTrafficMirrorListenersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeTrafficMirrorListenersRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTrafficMirrorListenersRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTrafficMirrorListenersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeTrafficMirrorListenersRequest::GetSearchLoadBalancerIds() const
{
    return m_searchLoadBalancerIds;
}

void DescribeTrafficMirrorListenersRequest::SetSearchLoadBalancerIds(const vector<string>& _searchLoadBalancerIds)
{
    m_searchLoadBalancerIds = _searchLoadBalancerIds;
    m_searchLoadBalancerIdsHasBeenSet = true;
}

bool DescribeTrafficMirrorListenersRequest::SearchLoadBalancerIdsHasBeenSet() const
{
    return m_searchLoadBalancerIdsHasBeenSet;
}

vector<string> DescribeTrafficMirrorListenersRequest::GetSearchLoadBalancerNames() const
{
    return m_searchLoadBalancerNames;
}

void DescribeTrafficMirrorListenersRequest::SetSearchLoadBalancerNames(const vector<string>& _searchLoadBalancerNames)
{
    m_searchLoadBalancerNames = _searchLoadBalancerNames;
    m_searchLoadBalancerNamesHasBeenSet = true;
}

bool DescribeTrafficMirrorListenersRequest::SearchLoadBalancerNamesHasBeenSet() const
{
    return m_searchLoadBalancerNamesHasBeenSet;
}

vector<string> DescribeTrafficMirrorListenersRequest::GetSearchVips() const
{
    return m_searchVips;
}

void DescribeTrafficMirrorListenersRequest::SetSearchVips(const vector<string>& _searchVips)
{
    m_searchVips = _searchVips;
    m_searchVipsHasBeenSet = true;
}

bool DescribeTrafficMirrorListenersRequest::SearchVipsHasBeenSet() const
{
    return m_searchVipsHasBeenSet;
}

vector<string> DescribeTrafficMirrorListenersRequest::GetSearchListenerIds() const
{
    return m_searchListenerIds;
}

void DescribeTrafficMirrorListenersRequest::SetSearchListenerIds(const vector<string>& _searchListenerIds)
{
    m_searchListenerIds = _searchListenerIds;
    m_searchListenerIdsHasBeenSet = true;
}

bool DescribeTrafficMirrorListenersRequest::SearchListenerIdsHasBeenSet() const
{
    return m_searchListenerIdsHasBeenSet;
}

vector<string> DescribeTrafficMirrorListenersRequest::GetSearchListenerNames() const
{
    return m_searchListenerNames;
}

void DescribeTrafficMirrorListenersRequest::SetSearchListenerNames(const vector<string>& _searchListenerNames)
{
    m_searchListenerNames = _searchListenerNames;
    m_searchListenerNamesHasBeenSet = true;
}

bool DescribeTrafficMirrorListenersRequest::SearchListenerNamesHasBeenSet() const
{
    return m_searchListenerNamesHasBeenSet;
}

vector<string> DescribeTrafficMirrorListenersRequest::GetSearchProtocols() const
{
    return m_searchProtocols;
}

void DescribeTrafficMirrorListenersRequest::SetSearchProtocols(const vector<string>& _searchProtocols)
{
    m_searchProtocols = _searchProtocols;
    m_searchProtocolsHasBeenSet = true;
}

bool DescribeTrafficMirrorListenersRequest::SearchProtocolsHasBeenSet() const
{
    return m_searchProtocolsHasBeenSet;
}

vector<uint64_t> DescribeTrafficMirrorListenersRequest::GetSearchLoadBalancerPorts() const
{
    return m_searchLoadBalancerPorts;
}

void DescribeTrafficMirrorListenersRequest::SetSearchLoadBalancerPorts(const vector<uint64_t>& _searchLoadBalancerPorts)
{
    m_searchLoadBalancerPorts = _searchLoadBalancerPorts;
    m_searchLoadBalancerPortsHasBeenSet = true;
}

bool DescribeTrafficMirrorListenersRequest::SearchLoadBalancerPortsHasBeenSet() const
{
    return m_searchLoadBalancerPortsHasBeenSet;
}


