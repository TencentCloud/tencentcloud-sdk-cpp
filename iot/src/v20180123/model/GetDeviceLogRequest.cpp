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

#include <tencentcloud/iot/v20180123/model/GetDeviceLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iot::V20180123::Model;
using namespace std;

GetDeviceLogRequest::GetDeviceLogRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNamesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_scrollIdHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string GetDeviceLogRequest::ToJsonString() const
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

    if (m_deviceNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceNames.begin(); itr != m_deviceNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_size, allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_scrollIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScrollId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scrollId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetDeviceLogRequest::GetProductId() const
{
    return m_productId;
}

void GetDeviceLogRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool GetDeviceLogRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

vector<string> GetDeviceLogRequest::GetDeviceNames() const
{
    return m_deviceNames;
}

void GetDeviceLogRequest::SetDeviceNames(const vector<string>& _deviceNames)
{
    m_deviceNames = _deviceNames;
    m_deviceNamesHasBeenSet = true;
}

bool GetDeviceLogRequest::DeviceNamesHasBeenSet() const
{
    return m_deviceNamesHasBeenSet;
}

string GetDeviceLogRequest::GetStartTime() const
{
    return m_startTime;
}

void GetDeviceLogRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool GetDeviceLogRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string GetDeviceLogRequest::GetEndTime() const
{
    return m_endTime;
}

void GetDeviceLogRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool GetDeviceLogRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t GetDeviceLogRequest::GetSize() const
{
    return m_size;
}

void GetDeviceLogRequest::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool GetDeviceLogRequest::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string GetDeviceLogRequest::GetOrder() const
{
    return m_order;
}

void GetDeviceLogRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool GetDeviceLogRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string GetDeviceLogRequest::GetScrollId() const
{
    return m_scrollId;
}

void GetDeviceLogRequest::SetScrollId(const string& _scrollId)
{
    m_scrollId = _scrollId;
    m_scrollIdHasBeenSet = true;
}

bool GetDeviceLogRequest::ScrollIdHasBeenSet() const
{
    return m_scrollIdHasBeenSet;
}

string GetDeviceLogRequest::GetType() const
{
    return m_type;
}

void GetDeviceLogRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool GetDeviceLogRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


