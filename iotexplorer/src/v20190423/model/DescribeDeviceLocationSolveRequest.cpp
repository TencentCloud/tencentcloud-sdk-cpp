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

#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceLocationSolveRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DescribeDeviceLocationSolveRequest::DescribeDeviceLocationSolveRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_locationTypeHasBeenSet(false),
    m_gNSSNavigationHasBeenSet(false),
    m_wiFiInfoHasBeenSet(false)
{
}

string DescribeDeviceLocationSolveRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_locationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_locationType.c_str(), allocator).Move(), allocator);
    }

    if (m_gNSSNavigationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GNSSNavigation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gNSSNavigation.c_str(), allocator).Move(), allocator);
    }

    if (m_wiFiInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WiFiInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_wiFiInfo.begin(); itr != m_wiFiInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDeviceLocationSolveRequest::GetProductId() const
{
    return m_productId;
}

void DescribeDeviceLocationSolveRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeDeviceLocationSolveRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DescribeDeviceLocationSolveRequest::GetDeviceName() const
{
    return m_deviceName;
}

void DescribeDeviceLocationSolveRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DescribeDeviceLocationSolveRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string DescribeDeviceLocationSolveRequest::GetLocationType() const
{
    return m_locationType;
}

void DescribeDeviceLocationSolveRequest::SetLocationType(const string& _locationType)
{
    m_locationType = _locationType;
    m_locationTypeHasBeenSet = true;
}

bool DescribeDeviceLocationSolveRequest::LocationTypeHasBeenSet() const
{
    return m_locationTypeHasBeenSet;
}

string DescribeDeviceLocationSolveRequest::GetGNSSNavigation() const
{
    return m_gNSSNavigation;
}

void DescribeDeviceLocationSolveRequest::SetGNSSNavigation(const string& _gNSSNavigation)
{
    m_gNSSNavigation = _gNSSNavigation;
    m_gNSSNavigationHasBeenSet = true;
}

bool DescribeDeviceLocationSolveRequest::GNSSNavigationHasBeenSet() const
{
    return m_gNSSNavigationHasBeenSet;
}

vector<WifiInfo> DescribeDeviceLocationSolveRequest::GetWiFiInfo() const
{
    return m_wiFiInfo;
}

void DescribeDeviceLocationSolveRequest::SetWiFiInfo(const vector<WifiInfo>& _wiFiInfo)
{
    m_wiFiInfo = _wiFiInfo;
    m_wiFiInfoHasBeenSet = true;
}

bool DescribeDeviceLocationSolveRequest::WiFiInfoHasBeenSet() const
{
    return m_wiFiInfoHasBeenSet;
}


