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

#include <tencentcloud/sqlserver/v20180328/model/DescribeCrossBackupStatisticalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeCrossBackupStatisticalRequest::DescribeCrossBackupStatisticalRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_instanceIdSetHasBeenSet(false),
    m_instanceNameSetHasBeenSet(false),
    m_crossBackupStatusHasBeenSet(false),
    m_crossRegionHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderByTypeHasBeenSet(false)
{
}

string DescribeCrossBackupStatisticalRequest::ToJsonString() const
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

    if (m_instanceIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIdSet.begin(); itr != m_instanceIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceNameSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNameSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceNameSet.begin(); itr != m_instanceNameSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_crossBackupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossBackupStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_crossBackupStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_crossRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_crossRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderByType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderByType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeCrossBackupStatisticalRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCrossBackupStatisticalRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCrossBackupStatisticalRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeCrossBackupStatisticalRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCrossBackupStatisticalRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCrossBackupStatisticalRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeCrossBackupStatisticalRequest::GetInstanceIdSet() const
{
    return m_instanceIdSet;
}

void DescribeCrossBackupStatisticalRequest::SetInstanceIdSet(const vector<string>& _instanceIdSet)
{
    m_instanceIdSet = _instanceIdSet;
    m_instanceIdSetHasBeenSet = true;
}

bool DescribeCrossBackupStatisticalRequest::InstanceIdSetHasBeenSet() const
{
    return m_instanceIdSetHasBeenSet;
}

vector<string> DescribeCrossBackupStatisticalRequest::GetInstanceNameSet() const
{
    return m_instanceNameSet;
}

void DescribeCrossBackupStatisticalRequest::SetInstanceNameSet(const vector<string>& _instanceNameSet)
{
    m_instanceNameSet = _instanceNameSet;
    m_instanceNameSetHasBeenSet = true;
}

bool DescribeCrossBackupStatisticalRequest::InstanceNameSetHasBeenSet() const
{
    return m_instanceNameSetHasBeenSet;
}

string DescribeCrossBackupStatisticalRequest::GetCrossBackupStatus() const
{
    return m_crossBackupStatus;
}

void DescribeCrossBackupStatisticalRequest::SetCrossBackupStatus(const string& _crossBackupStatus)
{
    m_crossBackupStatus = _crossBackupStatus;
    m_crossBackupStatusHasBeenSet = true;
}

bool DescribeCrossBackupStatisticalRequest::CrossBackupStatusHasBeenSet() const
{
    return m_crossBackupStatusHasBeenSet;
}

string DescribeCrossBackupStatisticalRequest::GetCrossRegion() const
{
    return m_crossRegion;
}

void DescribeCrossBackupStatisticalRequest::SetCrossRegion(const string& _crossRegion)
{
    m_crossRegion = _crossRegion;
    m_crossRegionHasBeenSet = true;
}

bool DescribeCrossBackupStatisticalRequest::CrossRegionHasBeenSet() const
{
    return m_crossRegionHasBeenSet;
}

string DescribeCrossBackupStatisticalRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeCrossBackupStatisticalRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeCrossBackupStatisticalRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeCrossBackupStatisticalRequest::GetOrderByType() const
{
    return m_orderByType;
}

void DescribeCrossBackupStatisticalRequest::SetOrderByType(const string& _orderByType)
{
    m_orderByType = _orderByType;
    m_orderByTypeHasBeenSet = true;
}

bool DescribeCrossBackupStatisticalRequest::OrderByTypeHasBeenSet() const
{
    return m_orderByTypeHasBeenSet;
}


