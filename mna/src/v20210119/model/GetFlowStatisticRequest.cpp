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

#include <tencentcloud/mna/v20210119/model/GetFlowStatisticRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

GetFlowStatisticRequest::GetFlowStatisticRequest() :
    m_deviceIdHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_timeGranularityHasBeenSet(false),
    m_accessRegionHasBeenSet(false),
    m_gatewayTypeHasBeenSet(false),
    m_deviceListHasBeenSet(false)
{
}

string GetFlowStatisticRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_accessRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_gatewayType, allocator);
    }

    if (m_deviceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceList.begin(); itr != m_deviceList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetFlowStatisticRequest::GetDeviceId() const
{
    return m_deviceId;
}

void GetFlowStatisticRequest::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool GetFlowStatisticRequest::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

int64_t GetFlowStatisticRequest::GetBeginTime() const
{
    return m_beginTime;
}

void GetFlowStatisticRequest::SetBeginTime(const int64_t& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool GetFlowStatisticRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

int64_t GetFlowStatisticRequest::GetEndTime() const
{
    return m_endTime;
}

void GetFlowStatisticRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool GetFlowStatisticRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t GetFlowStatisticRequest::GetType() const
{
    return m_type;
}

void GetFlowStatisticRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool GetFlowStatisticRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t GetFlowStatisticRequest::GetTimeGranularity() const
{
    return m_timeGranularity;
}

void GetFlowStatisticRequest::SetTimeGranularity(const int64_t& _timeGranularity)
{
    m_timeGranularity = _timeGranularity;
    m_timeGranularityHasBeenSet = true;
}

bool GetFlowStatisticRequest::TimeGranularityHasBeenSet() const
{
    return m_timeGranularityHasBeenSet;
}

string GetFlowStatisticRequest::GetAccessRegion() const
{
    return m_accessRegion;
}

void GetFlowStatisticRequest::SetAccessRegion(const string& _accessRegion)
{
    m_accessRegion = _accessRegion;
    m_accessRegionHasBeenSet = true;
}

bool GetFlowStatisticRequest::AccessRegionHasBeenSet() const
{
    return m_accessRegionHasBeenSet;
}

int64_t GetFlowStatisticRequest::GetGatewayType() const
{
    return m_gatewayType;
}

void GetFlowStatisticRequest::SetGatewayType(const int64_t& _gatewayType)
{
    m_gatewayType = _gatewayType;
    m_gatewayTypeHasBeenSet = true;
}

bool GetFlowStatisticRequest::GatewayTypeHasBeenSet() const
{
    return m_gatewayTypeHasBeenSet;
}

vector<string> GetFlowStatisticRequest::GetDeviceList() const
{
    return m_deviceList;
}

void GetFlowStatisticRequest::SetDeviceList(const vector<string>& _deviceList)
{
    m_deviceList = _deviceList;
    m_deviceListHasBeenSet = true;
}

bool GetFlowStatisticRequest::DeviceListHasBeenSet() const
{
    return m_deviceListHasBeenSet;
}


