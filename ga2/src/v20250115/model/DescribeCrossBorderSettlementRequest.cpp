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

#include <tencentcloud/ga2/v20250115/model/DescribeCrossBorderSettlementRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

DescribeCrossBorderSettlementRequest::DescribeCrossBorderSettlementRequest() :
    m_globalAcceleratorIdHasBeenSet(false),
    m_accelerateRegionHasBeenSet(false),
    m_endpointGroupRegionHasBeenSet(false),
    m_settlementMonthHasBeenSet(false)
{
}

string DescribeCrossBorderSettlementRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_globalAcceleratorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_globalAcceleratorId.c_str(), allocator).Move(), allocator);
    }

    if (m_accelerateRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccelerateRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accelerateRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointGroupRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointGroupRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpointGroupRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_settlementMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettlementMonth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_settlementMonth, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCrossBorderSettlementRequest::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void DescribeCrossBorderSettlementRequest::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool DescribeCrossBorderSettlementRequest::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}

string DescribeCrossBorderSettlementRequest::GetAccelerateRegion() const
{
    return m_accelerateRegion;
}

void DescribeCrossBorderSettlementRequest::SetAccelerateRegion(const string& _accelerateRegion)
{
    m_accelerateRegion = _accelerateRegion;
    m_accelerateRegionHasBeenSet = true;
}

bool DescribeCrossBorderSettlementRequest::AccelerateRegionHasBeenSet() const
{
    return m_accelerateRegionHasBeenSet;
}

string DescribeCrossBorderSettlementRequest::GetEndpointGroupRegion() const
{
    return m_endpointGroupRegion;
}

void DescribeCrossBorderSettlementRequest::SetEndpointGroupRegion(const string& _endpointGroupRegion)
{
    m_endpointGroupRegion = _endpointGroupRegion;
    m_endpointGroupRegionHasBeenSet = true;
}

bool DescribeCrossBorderSettlementRequest::EndpointGroupRegionHasBeenSet() const
{
    return m_endpointGroupRegionHasBeenSet;
}

uint64_t DescribeCrossBorderSettlementRequest::GetSettlementMonth() const
{
    return m_settlementMonth;
}

void DescribeCrossBorderSettlementRequest::SetSettlementMonth(const uint64_t& _settlementMonth)
{
    m_settlementMonth = _settlementMonth;
    m_settlementMonthHasBeenSet = true;
}

bool DescribeCrossBorderSettlementRequest::SettlementMonthHasBeenSet() const
{
    return m_settlementMonthHasBeenSet;
}


