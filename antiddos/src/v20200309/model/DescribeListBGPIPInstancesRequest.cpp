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

#include <tencentcloud/antiddos/v20200309/model/DescribeListBGPIPInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DescribeListBGPIPInstancesRequest::DescribeListBGPIPInstancesRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_filterIpHasBeenSet(false),
    m_filterInstanceIdHasBeenSet(false),
    m_filterLineHasBeenSet(false),
    m_filterRegionHasBeenSet(false),
    m_filterNameHasBeenSet(false),
    m_filterEipTypeHasBeenSet(false),
    m_filterEipEipAddressStatusHasBeenSet(false),
    m_filterDamDDoSStatusHasBeenSet(false)
{
}

string DescribeListBGPIPInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_filterIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterIp.c_str(), allocator).Move(), allocator);
    }

    if (m_filterInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_filterLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterLine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterLine, allocator);
    }

    if (m_filterRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_filterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterName.c_str(), allocator).Move(), allocator);
    }

    if (m_filterEipTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterEipType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterEipType, allocator);
    }

    if (m_filterEipEipAddressStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterEipEipAddressStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filterEipEipAddressStatus.begin(); itr != m_filterEipEipAddressStatus.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filterDamDDoSStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterDamDDoSStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterDamDDoSStatus, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeListBGPIPInstancesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeListBGPIPInstancesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeListBGPIPInstancesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeListBGPIPInstancesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeListBGPIPInstancesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeListBGPIPInstancesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeListBGPIPInstancesRequest::GetFilterIp() const
{
    return m_filterIp;
}

void DescribeListBGPIPInstancesRequest::SetFilterIp(const string& _filterIp)
{
    m_filterIp = _filterIp;
    m_filterIpHasBeenSet = true;
}

bool DescribeListBGPIPInstancesRequest::FilterIpHasBeenSet() const
{
    return m_filterIpHasBeenSet;
}

string DescribeListBGPIPInstancesRequest::GetFilterInstanceId() const
{
    return m_filterInstanceId;
}

void DescribeListBGPIPInstancesRequest::SetFilterInstanceId(const string& _filterInstanceId)
{
    m_filterInstanceId = _filterInstanceId;
    m_filterInstanceIdHasBeenSet = true;
}

bool DescribeListBGPIPInstancesRequest::FilterInstanceIdHasBeenSet() const
{
    return m_filterInstanceIdHasBeenSet;
}

uint64_t DescribeListBGPIPInstancesRequest::GetFilterLine() const
{
    return m_filterLine;
}

void DescribeListBGPIPInstancesRequest::SetFilterLine(const uint64_t& _filterLine)
{
    m_filterLine = _filterLine;
    m_filterLineHasBeenSet = true;
}

bool DescribeListBGPIPInstancesRequest::FilterLineHasBeenSet() const
{
    return m_filterLineHasBeenSet;
}

string DescribeListBGPIPInstancesRequest::GetFilterRegion() const
{
    return m_filterRegion;
}

void DescribeListBGPIPInstancesRequest::SetFilterRegion(const string& _filterRegion)
{
    m_filterRegion = _filterRegion;
    m_filterRegionHasBeenSet = true;
}

bool DescribeListBGPIPInstancesRequest::FilterRegionHasBeenSet() const
{
    return m_filterRegionHasBeenSet;
}

string DescribeListBGPIPInstancesRequest::GetFilterName() const
{
    return m_filterName;
}

void DescribeListBGPIPInstancesRequest::SetFilterName(const string& _filterName)
{
    m_filterName = _filterName;
    m_filterNameHasBeenSet = true;
}

bool DescribeListBGPIPInstancesRequest::FilterNameHasBeenSet() const
{
    return m_filterNameHasBeenSet;
}

int64_t DescribeListBGPIPInstancesRequest::GetFilterEipType() const
{
    return m_filterEipType;
}

void DescribeListBGPIPInstancesRequest::SetFilterEipType(const int64_t& _filterEipType)
{
    m_filterEipType = _filterEipType;
    m_filterEipTypeHasBeenSet = true;
}

bool DescribeListBGPIPInstancesRequest::FilterEipTypeHasBeenSet() const
{
    return m_filterEipTypeHasBeenSet;
}

vector<string> DescribeListBGPIPInstancesRequest::GetFilterEipEipAddressStatus() const
{
    return m_filterEipEipAddressStatus;
}

void DescribeListBGPIPInstancesRequest::SetFilterEipEipAddressStatus(const vector<string>& _filterEipEipAddressStatus)
{
    m_filterEipEipAddressStatus = _filterEipEipAddressStatus;
    m_filterEipEipAddressStatusHasBeenSet = true;
}

bool DescribeListBGPIPInstancesRequest::FilterEipEipAddressStatusHasBeenSet() const
{
    return m_filterEipEipAddressStatusHasBeenSet;
}

int64_t DescribeListBGPIPInstancesRequest::GetFilterDamDDoSStatus() const
{
    return m_filterDamDDoSStatus;
}

void DescribeListBGPIPInstancesRequest::SetFilterDamDDoSStatus(const int64_t& _filterDamDDoSStatus)
{
    m_filterDamDDoSStatus = _filterDamDDoSStatus;
    m_filterDamDDoSStatusHasBeenSet = true;
}

bool DescribeListBGPIPInstancesRequest::FilterDamDDoSStatusHasBeenSet() const
{
    return m_filterDamDDoSStatusHasBeenSet;
}


