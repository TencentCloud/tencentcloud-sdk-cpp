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

#include <tencentcloud/monitor/v20180724/model/DescribeAccidentEventListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribeAccidentEventListRequest::DescribeAccidentEventListRequest() :
    m_moduleHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_updateTimeOrderHasBeenSet(false),
    m_occurTimeOrderHasBeenSet(false),
    m_accidentTypeHasBeenSet(false),
    m_accidentEventHasBeenSet(false),
    m_accidentStatusHasBeenSet(false),
    m_accidentRegionHasBeenSet(false),
    m_affectResourceHasBeenSet(false)
{
}

string DescribeAccidentEventListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_updateTimeOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTimeOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_updateTimeOrder.c_str(), allocator).Move(), allocator);
    }

    if (m_occurTimeOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OccurTimeOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_occurTimeOrder.c_str(), allocator).Move(), allocator);
    }

    if (m_accidentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccidentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accidentType.begin(); itr != m_accidentType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_accidentEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccidentEvent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accidentEvent.begin(); itr != m_accidentEvent.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_accidentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccidentStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accidentStatus.begin(); itr != m_accidentStatus.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_accidentRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccidentRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accidentRegion.begin(); itr != m_accidentRegion.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_affectResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectResource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_affectResource.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAccidentEventListRequest::GetModule() const
{
    return m_module;
}

void DescribeAccidentEventListRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool DescribeAccidentEventListRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

int64_t DescribeAccidentEventListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeAccidentEventListRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeAccidentEventListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeAccidentEventListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeAccidentEventListRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeAccidentEventListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeAccidentEventListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAccidentEventListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAccidentEventListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeAccidentEventListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAccidentEventListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAccidentEventListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeAccidentEventListRequest::GetUpdateTimeOrder() const
{
    return m_updateTimeOrder;
}

void DescribeAccidentEventListRequest::SetUpdateTimeOrder(const string& _updateTimeOrder)
{
    m_updateTimeOrder = _updateTimeOrder;
    m_updateTimeOrderHasBeenSet = true;
}

bool DescribeAccidentEventListRequest::UpdateTimeOrderHasBeenSet() const
{
    return m_updateTimeOrderHasBeenSet;
}

string DescribeAccidentEventListRequest::GetOccurTimeOrder() const
{
    return m_occurTimeOrder;
}

void DescribeAccidentEventListRequest::SetOccurTimeOrder(const string& _occurTimeOrder)
{
    m_occurTimeOrder = _occurTimeOrder;
    m_occurTimeOrderHasBeenSet = true;
}

bool DescribeAccidentEventListRequest::OccurTimeOrderHasBeenSet() const
{
    return m_occurTimeOrderHasBeenSet;
}

vector<int64_t> DescribeAccidentEventListRequest::GetAccidentType() const
{
    return m_accidentType;
}

void DescribeAccidentEventListRequest::SetAccidentType(const vector<int64_t>& _accidentType)
{
    m_accidentType = _accidentType;
    m_accidentTypeHasBeenSet = true;
}

bool DescribeAccidentEventListRequest::AccidentTypeHasBeenSet() const
{
    return m_accidentTypeHasBeenSet;
}

vector<int64_t> DescribeAccidentEventListRequest::GetAccidentEvent() const
{
    return m_accidentEvent;
}

void DescribeAccidentEventListRequest::SetAccidentEvent(const vector<int64_t>& _accidentEvent)
{
    m_accidentEvent = _accidentEvent;
    m_accidentEventHasBeenSet = true;
}

bool DescribeAccidentEventListRequest::AccidentEventHasBeenSet() const
{
    return m_accidentEventHasBeenSet;
}

vector<int64_t> DescribeAccidentEventListRequest::GetAccidentStatus() const
{
    return m_accidentStatus;
}

void DescribeAccidentEventListRequest::SetAccidentStatus(const vector<int64_t>& _accidentStatus)
{
    m_accidentStatus = _accidentStatus;
    m_accidentStatusHasBeenSet = true;
}

bool DescribeAccidentEventListRequest::AccidentStatusHasBeenSet() const
{
    return m_accidentStatusHasBeenSet;
}

vector<string> DescribeAccidentEventListRequest::GetAccidentRegion() const
{
    return m_accidentRegion;
}

void DescribeAccidentEventListRequest::SetAccidentRegion(const vector<string>& _accidentRegion)
{
    m_accidentRegion = _accidentRegion;
    m_accidentRegionHasBeenSet = true;
}

bool DescribeAccidentEventListRequest::AccidentRegionHasBeenSet() const
{
    return m_accidentRegionHasBeenSet;
}

string DescribeAccidentEventListRequest::GetAffectResource() const
{
    return m_affectResource;
}

void DescribeAccidentEventListRequest::SetAffectResource(const string& _affectResource)
{
    m_affectResource = _affectResource;
    m_affectResourceHasBeenSet = true;
}

bool DescribeAccidentEventListRequest::AffectResourceHasBeenSet() const
{
    return m_affectResourceHasBeenSet;
}


