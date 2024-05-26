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

#include <tencentcloud/cynosdb/v20190107/model/DescribeInstanceSpecsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeInstanceSpecsRequest::DescribeInstanceSpecsRequest() :
    m_dbTypeHasBeenSet(false),
    m_includeZoneStocksHasBeenSet(false),
    m_deviceTypeHasBeenSet(false)
{
}

string DescribeInstanceSpecsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_includeZoneStocksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeZoneStocks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_includeZoneStocks, allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeInstanceSpecsRequest::GetDbType() const
{
    return m_dbType;
}

void DescribeInstanceSpecsRequest::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool DescribeInstanceSpecsRequest::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

bool DescribeInstanceSpecsRequest::GetIncludeZoneStocks() const
{
    return m_includeZoneStocks;
}

void DescribeInstanceSpecsRequest::SetIncludeZoneStocks(const bool& _includeZoneStocks)
{
    m_includeZoneStocks = _includeZoneStocks;
    m_includeZoneStocksHasBeenSet = true;
}

bool DescribeInstanceSpecsRequest::IncludeZoneStocksHasBeenSet() const
{
    return m_includeZoneStocksHasBeenSet;
}

string DescribeInstanceSpecsRequest::GetDeviceType() const
{
    return m_deviceType;
}

void DescribeInstanceSpecsRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool DescribeInstanceSpecsRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}


