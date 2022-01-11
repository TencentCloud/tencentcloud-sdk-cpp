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

#include <tencentcloud/iotexplorer/v20190423/model/GetGatewaySubDeviceListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

GetGatewaySubDeviceListRequest::GetGatewaySubDeviceListRequest() :
    m_gatewayProductIdHasBeenSet(false),
    m_gatewayDeviceNameHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string GetGatewaySubDeviceListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayProductIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayProductId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayDeviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayDeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayDeviceName.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetGatewaySubDeviceListRequest::GetGatewayProductId() const
{
    return m_gatewayProductId;
}

void GetGatewaySubDeviceListRequest::SetGatewayProductId(const string& _gatewayProductId)
{
    m_gatewayProductId = _gatewayProductId;
    m_gatewayProductIdHasBeenSet = true;
}

bool GetGatewaySubDeviceListRequest::GatewayProductIdHasBeenSet() const
{
    return m_gatewayProductIdHasBeenSet;
}

string GetGatewaySubDeviceListRequest::GetGatewayDeviceName() const
{
    return m_gatewayDeviceName;
}

void GetGatewaySubDeviceListRequest::SetGatewayDeviceName(const string& _gatewayDeviceName)
{
    m_gatewayDeviceName = _gatewayDeviceName;
    m_gatewayDeviceNameHasBeenSet = true;
}

bool GetGatewaySubDeviceListRequest::GatewayDeviceNameHasBeenSet() const
{
    return m_gatewayDeviceNameHasBeenSet;
}

uint64_t GetGatewaySubDeviceListRequest::GetOffset() const
{
    return m_offset;
}

void GetGatewaySubDeviceListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool GetGatewaySubDeviceListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t GetGatewaySubDeviceListRequest::GetLimit() const
{
    return m_limit;
}

void GetGatewaySubDeviceListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool GetGatewaySubDeviceListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


