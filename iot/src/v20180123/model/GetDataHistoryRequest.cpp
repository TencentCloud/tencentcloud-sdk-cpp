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

#include <tencentcloud/iot/v20180123/model/GetDataHistoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iot::V20180123::Model;
using namespace rapidjson;
using namespace std;

GetDataHistoryRequest::GetDataHistoryRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNamesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_scrollIdHasBeenSet(false)
{
}

string GetDataHistoryRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNamesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_deviceNames.begin(); itr != m_deviceNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_size.begin(); itr != m_size.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetUint64(*itr), allocator);
        }
    }

    if (m_orderHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_scrollIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ScrollId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_scrollId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetDataHistoryRequest::GetProductId() const
{
    return m_productId;
}

void GetDataHistoryRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool GetDataHistoryRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

vector<string> GetDataHistoryRequest::GetDeviceNames() const
{
    return m_deviceNames;
}

void GetDataHistoryRequest::SetDeviceNames(const vector<string>& _deviceNames)
{
    m_deviceNames = _deviceNames;
    m_deviceNamesHasBeenSet = true;
}

bool GetDataHistoryRequest::DeviceNamesHasBeenSet() const
{
    return m_deviceNamesHasBeenSet;
}

string GetDataHistoryRequest::GetStartTime() const
{
    return m_startTime;
}

void GetDataHistoryRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool GetDataHistoryRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string GetDataHistoryRequest::GetEndTime() const
{
    return m_endTime;
}

void GetDataHistoryRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool GetDataHistoryRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<uint64_t> GetDataHistoryRequest::GetSize() const
{
    return m_size;
}

void GetDataHistoryRequest::SetSize(const vector<uint64_t>& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool GetDataHistoryRequest::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string GetDataHistoryRequest::GetOrder() const
{
    return m_order;
}

void GetDataHistoryRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool GetDataHistoryRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string GetDataHistoryRequest::GetScrollId() const
{
    return m_scrollId;
}

void GetDataHistoryRequest::SetScrollId(const string& _scrollId)
{
    m_scrollId = _scrollId;
    m_scrollIdHasBeenSet = true;
}

bool GetDataHistoryRequest::ScrollIdHasBeenSet() const
{
    return m_scrollIdHasBeenSet;
}


