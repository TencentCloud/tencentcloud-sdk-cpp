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

#include <tencentcloud/svp/v20240125/model/DescribeSavingPlanDeductRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Svp::V20240125::Model;
using namespace std;

DescribeSavingPlanDeductRequest::DescribeSavingPlanDeductRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_startEndDateHasBeenSet(false),
    m_startStartDateHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_spIdHasBeenSet(false),
    m_deductEndDateHasBeenSet(false),
    m_deductStartDateHasBeenSet(false),
    m_endEndDateHasBeenSet(false),
    m_endStartDateHasBeenSet(false)
{
}

string DescribeSavingPlanDeductRequest::ToJsonString() const
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

    if (m_startEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartEndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startEndDate.c_str(), allocator).Move(), allocator);
    }

    if (m_startStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartStartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startStartDate.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_regionId, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_spIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spId.c_str(), allocator).Move(), allocator);
    }

    if (m_deductEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductEndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deductEndDate.c_str(), allocator).Move(), allocator);
    }

    if (m_deductStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductStartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deductStartDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndEndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endEndDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndStartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endStartDate.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeSavingPlanDeductRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSavingPlanDeductRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSavingPlanDeductRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeSavingPlanDeductRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSavingPlanDeductRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSavingPlanDeductRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeSavingPlanDeductRequest::GetStartEndDate() const
{
    return m_startEndDate;
}

void DescribeSavingPlanDeductRequest::SetStartEndDate(const string& _startEndDate)
{
    m_startEndDate = _startEndDate;
    m_startEndDateHasBeenSet = true;
}

bool DescribeSavingPlanDeductRequest::StartEndDateHasBeenSet() const
{
    return m_startEndDateHasBeenSet;
}

string DescribeSavingPlanDeductRequest::GetStartStartDate() const
{
    return m_startStartDate;
}

void DescribeSavingPlanDeductRequest::SetStartStartDate(const string& _startStartDate)
{
    m_startStartDate = _startStartDate;
    m_startStartDateHasBeenSet = true;
}

bool DescribeSavingPlanDeductRequest::StartStartDateHasBeenSet() const
{
    return m_startStartDateHasBeenSet;
}

int64_t DescribeSavingPlanDeductRequest::GetRegionId() const
{
    return m_regionId;
}

void DescribeSavingPlanDeductRequest::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool DescribeSavingPlanDeductRequest::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

int64_t DescribeSavingPlanDeductRequest::GetZoneId() const
{
    return m_zoneId;
}

void DescribeSavingPlanDeductRequest::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool DescribeSavingPlanDeductRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string DescribeSavingPlanDeductRequest::GetSpId() const
{
    return m_spId;
}

void DescribeSavingPlanDeductRequest::SetSpId(const string& _spId)
{
    m_spId = _spId;
    m_spIdHasBeenSet = true;
}

bool DescribeSavingPlanDeductRequest::SpIdHasBeenSet() const
{
    return m_spIdHasBeenSet;
}

string DescribeSavingPlanDeductRequest::GetDeductEndDate() const
{
    return m_deductEndDate;
}

void DescribeSavingPlanDeductRequest::SetDeductEndDate(const string& _deductEndDate)
{
    m_deductEndDate = _deductEndDate;
    m_deductEndDateHasBeenSet = true;
}

bool DescribeSavingPlanDeductRequest::DeductEndDateHasBeenSet() const
{
    return m_deductEndDateHasBeenSet;
}

string DescribeSavingPlanDeductRequest::GetDeductStartDate() const
{
    return m_deductStartDate;
}

void DescribeSavingPlanDeductRequest::SetDeductStartDate(const string& _deductStartDate)
{
    m_deductStartDate = _deductStartDate;
    m_deductStartDateHasBeenSet = true;
}

bool DescribeSavingPlanDeductRequest::DeductStartDateHasBeenSet() const
{
    return m_deductStartDateHasBeenSet;
}

string DescribeSavingPlanDeductRequest::GetEndEndDate() const
{
    return m_endEndDate;
}

void DescribeSavingPlanDeductRequest::SetEndEndDate(const string& _endEndDate)
{
    m_endEndDate = _endEndDate;
    m_endEndDateHasBeenSet = true;
}

bool DescribeSavingPlanDeductRequest::EndEndDateHasBeenSet() const
{
    return m_endEndDateHasBeenSet;
}

string DescribeSavingPlanDeductRequest::GetEndStartDate() const
{
    return m_endStartDate;
}

void DescribeSavingPlanDeductRequest::SetEndStartDate(const string& _endStartDate)
{
    m_endStartDate = _endStartDate;
    m_endStartDateHasBeenSet = true;
}

bool DescribeSavingPlanDeductRequest::EndStartDateHasBeenSet() const
{
    return m_endStartDateHasBeenSet;
}


