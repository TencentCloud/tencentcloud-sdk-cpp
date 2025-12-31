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

#include <tencentcloud/cfw/v20190904/model/DescribeCcnInstanceRegionStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeCcnInstanceRegionStatusRequest::DescribeCcnInstanceRegionStatusRequest() :
    m_ccnIdHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_routingModeHasBeenSet(false)
{
}

string DescribeCcnInstanceRegionStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
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

    if (m_routingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutingMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_routingMode, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCcnInstanceRegionStatusRequest::GetCcnId() const
{
    return m_ccnId;
}

void DescribeCcnInstanceRegionStatusRequest::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool DescribeCcnInstanceRegionStatusRequest::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

vector<string> DescribeCcnInstanceRegionStatusRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void DescribeCcnInstanceRegionStatusRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DescribeCcnInstanceRegionStatusRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

uint64_t DescribeCcnInstanceRegionStatusRequest::GetRoutingMode() const
{
    return m_routingMode;
}

void DescribeCcnInstanceRegionStatusRequest::SetRoutingMode(const uint64_t& _routingMode)
{
    m_routingMode = _routingMode;
    m_routingModeHasBeenSet = true;
}

bool DescribeCcnInstanceRegionStatusRequest::RoutingModeHasBeenSet() const
{
    return m_routingModeHasBeenSet;
}


