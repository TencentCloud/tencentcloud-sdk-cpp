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

#include <tencentcloud/antiddos/v20200309/model/DescribeListBGPInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DescribeListBGPInstancesRequest::DescribeListBGPInstancesRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_filterIpHasBeenSet(false),
    m_filterInstanceIdHasBeenSet(false),
    m_filterRegionHasBeenSet(false),
    m_filterNameHasBeenSet(false),
    m_filterLineHasBeenSet(false),
    m_filterStatusHasBeenSet(false),
    m_filterBoundStatusHasBeenSet(false),
    m_filterInstanceIdListHasBeenSet(false),
    m_filterEnterpriseFlagHasBeenSet(false),
    m_filterTagHasBeenSet(false)
{
}

string DescribeListBGPInstancesRequest::ToJsonString() const
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

    if (m_filterLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterLine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterLine, allocator);
    }

    if (m_filterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_filterBoundStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterBoundStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterBoundStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_filterInstanceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterInstanceIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filterInstanceIdList.begin(); itr != m_filterInstanceIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filterEnterpriseFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterEnterpriseFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterEnterpriseFlag, allocator);
    }

    if (m_filterTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filterTag.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeListBGPInstancesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeListBGPInstancesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeListBGPInstancesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeListBGPInstancesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeListBGPInstancesRequest::GetFilterIp() const
{
    return m_filterIp;
}

void DescribeListBGPInstancesRequest::SetFilterIp(const string& _filterIp)
{
    m_filterIp = _filterIp;
    m_filterIpHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterIpHasBeenSet() const
{
    return m_filterIpHasBeenSet;
}

string DescribeListBGPInstancesRequest::GetFilterInstanceId() const
{
    return m_filterInstanceId;
}

void DescribeListBGPInstancesRequest::SetFilterInstanceId(const string& _filterInstanceId)
{
    m_filterInstanceId = _filterInstanceId;
    m_filterInstanceIdHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterInstanceIdHasBeenSet() const
{
    return m_filterInstanceIdHasBeenSet;
}

string DescribeListBGPInstancesRequest::GetFilterRegion() const
{
    return m_filterRegion;
}

void DescribeListBGPInstancesRequest::SetFilterRegion(const string& _filterRegion)
{
    m_filterRegion = _filterRegion;
    m_filterRegionHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterRegionHasBeenSet() const
{
    return m_filterRegionHasBeenSet;
}

string DescribeListBGPInstancesRequest::GetFilterName() const
{
    return m_filterName;
}

void DescribeListBGPInstancesRequest::SetFilterName(const string& _filterName)
{
    m_filterName = _filterName;
    m_filterNameHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterNameHasBeenSet() const
{
    return m_filterNameHasBeenSet;
}

uint64_t DescribeListBGPInstancesRequest::GetFilterLine() const
{
    return m_filterLine;
}

void DescribeListBGPInstancesRequest::SetFilterLine(const uint64_t& _filterLine)
{
    m_filterLine = _filterLine;
    m_filterLineHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterLineHasBeenSet() const
{
    return m_filterLineHasBeenSet;
}

string DescribeListBGPInstancesRequest::GetFilterStatus() const
{
    return m_filterStatus;
}

void DescribeListBGPInstancesRequest::SetFilterStatus(const string& _filterStatus)
{
    m_filterStatus = _filterStatus;
    m_filterStatusHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterStatusHasBeenSet() const
{
    return m_filterStatusHasBeenSet;
}

string DescribeListBGPInstancesRequest::GetFilterBoundStatus() const
{
    return m_filterBoundStatus;
}

void DescribeListBGPInstancesRequest::SetFilterBoundStatus(const string& _filterBoundStatus)
{
    m_filterBoundStatus = _filterBoundStatus;
    m_filterBoundStatusHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterBoundStatusHasBeenSet() const
{
    return m_filterBoundStatusHasBeenSet;
}

vector<string> DescribeListBGPInstancesRequest::GetFilterInstanceIdList() const
{
    return m_filterInstanceIdList;
}

void DescribeListBGPInstancesRequest::SetFilterInstanceIdList(const vector<string>& _filterInstanceIdList)
{
    m_filterInstanceIdList = _filterInstanceIdList;
    m_filterInstanceIdListHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterInstanceIdListHasBeenSet() const
{
    return m_filterInstanceIdListHasBeenSet;
}

uint64_t DescribeListBGPInstancesRequest::GetFilterEnterpriseFlag() const
{
    return m_filterEnterpriseFlag;
}

void DescribeListBGPInstancesRequest::SetFilterEnterpriseFlag(const uint64_t& _filterEnterpriseFlag)
{
    m_filterEnterpriseFlag = _filterEnterpriseFlag;
    m_filterEnterpriseFlagHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterEnterpriseFlagHasBeenSet() const
{
    return m_filterEnterpriseFlagHasBeenSet;
}

TagFilter DescribeListBGPInstancesRequest::GetFilterTag() const
{
    return m_filterTag;
}

void DescribeListBGPInstancesRequest::SetFilterTag(const TagFilter& _filterTag)
{
    m_filterTag = _filterTag;
    m_filterTagHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterTagHasBeenSet() const
{
    return m_filterTagHasBeenSet;
}


