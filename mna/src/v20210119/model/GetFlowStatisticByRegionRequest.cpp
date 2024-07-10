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

#include <tencentcloud/mna/v20210119/model/GetFlowStatisticByRegionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

GetFlowStatisticByRegionRequest::GetFlowStatisticByRegionRequest() :
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_timeGranularityHasBeenSet(false),
    m_gatewayTypeHasBeenSet(false),
    m_accessRegionHasBeenSet(false)
{
}

string GetFlowStatisticByRegionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_beginTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_timeGranularityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeGranularity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeGranularity, allocator);
    }

    if (m_gatewayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_gatewayType, allocator);
    }

    if (m_accessRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessRegion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t GetFlowStatisticByRegionRequest::GetBeginTime() const
{
    return m_beginTime;
}

void GetFlowStatisticByRegionRequest::SetBeginTime(const int64_t& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool GetFlowStatisticByRegionRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

int64_t GetFlowStatisticByRegionRequest::GetEndTime() const
{
    return m_endTime;
}

void GetFlowStatisticByRegionRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool GetFlowStatisticByRegionRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t GetFlowStatisticByRegionRequest::GetType() const
{
    return m_type;
}

void GetFlowStatisticByRegionRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool GetFlowStatisticByRegionRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t GetFlowStatisticByRegionRequest::GetTimeGranularity() const
{
    return m_timeGranularity;
}

void GetFlowStatisticByRegionRequest::SetTimeGranularity(const int64_t& _timeGranularity)
{
    m_timeGranularity = _timeGranularity;
    m_timeGranularityHasBeenSet = true;
}

bool GetFlowStatisticByRegionRequest::TimeGranularityHasBeenSet() const
{
    return m_timeGranularityHasBeenSet;
}

int64_t GetFlowStatisticByRegionRequest::GetGatewayType() const
{
    return m_gatewayType;
}

void GetFlowStatisticByRegionRequest::SetGatewayType(const int64_t& _gatewayType)
{
    m_gatewayType = _gatewayType;
    m_gatewayTypeHasBeenSet = true;
}

bool GetFlowStatisticByRegionRequest::GatewayTypeHasBeenSet() const
{
    return m_gatewayTypeHasBeenSet;
}

string GetFlowStatisticByRegionRequest::GetAccessRegion() const
{
    return m_accessRegion;
}

void GetFlowStatisticByRegionRequest::SetAccessRegion(const string& _accessRegion)
{
    m_accessRegion = _accessRegion;
    m_accessRegionHasBeenSet = true;
}

bool GetFlowStatisticByRegionRequest::AccessRegionHasBeenSet() const
{
    return m_accessRegionHasBeenSet;
}


