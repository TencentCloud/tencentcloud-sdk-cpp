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

#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeWarningsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

DescribeWarningsRequest::DescribeWarningsRequest() :
    m_orderTypeHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_warnLevelArrayHasBeenSet(false),
    m_warnModeArrayHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_dateBeginHasBeenSet(false),
    m_dateEndHasBeenSet(false)
{
}

string DescribeWarningsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orderType, allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_warnLevelArrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarnLevelArray";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_warnLevelArray.begin(); itr != m_warnLevelArray.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_warnModeArrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarnModeArray";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_warnModeArray.begin(); itr != m_warnModeArray.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
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

    if (m_dateBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateBegin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dateBegin.c_str(), allocator).Move(), allocator);
    }

    if (m_dateEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dateEnd.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeWarningsRequest::GetOrderType() const
{
    return m_orderType;
}

void DescribeWarningsRequest::SetOrderType(const int64_t& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool DescribeWarningsRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

string DescribeWarningsRequest::GetDeviceId() const
{
    return m_deviceId;
}

void DescribeWarningsRequest::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool DescribeWarningsRequest::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

vector<int64_t> DescribeWarningsRequest::GetWarnLevelArray() const
{
    return m_warnLevelArray;
}

void DescribeWarningsRequest::SetWarnLevelArray(const vector<int64_t>& _warnLevelArray)
{
    m_warnLevelArray = _warnLevelArray;
    m_warnLevelArrayHasBeenSet = true;
}

bool DescribeWarningsRequest::WarnLevelArrayHasBeenSet() const
{
    return m_warnLevelArrayHasBeenSet;
}

vector<int64_t> DescribeWarningsRequest::GetWarnModeArray() const
{
    return m_warnModeArray;
}

void DescribeWarningsRequest::SetWarnModeArray(const vector<int64_t>& _warnModeArray)
{
    m_warnModeArray = _warnModeArray;
    m_warnModeArrayHasBeenSet = true;
}

bool DescribeWarningsRequest::WarnModeArrayHasBeenSet() const
{
    return m_warnModeArrayHasBeenSet;
}

int64_t DescribeWarningsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeWarningsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeWarningsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeWarningsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeWarningsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeWarningsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeWarningsRequest::GetDateBegin() const
{
    return m_dateBegin;
}

void DescribeWarningsRequest::SetDateBegin(const string& _dateBegin)
{
    m_dateBegin = _dateBegin;
    m_dateBeginHasBeenSet = true;
}

bool DescribeWarningsRequest::DateBeginHasBeenSet() const
{
    return m_dateBeginHasBeenSet;
}

string DescribeWarningsRequest::GetDateEnd() const
{
    return m_dateEnd;
}

void DescribeWarningsRequest::SetDateEnd(const string& _dateEnd)
{
    m_dateEnd = _dateEnd;
    m_dateEndHasBeenSet = true;
}

bool DescribeWarningsRequest::DateEndHasBeenSet() const
{
    return m_dateEndHasBeenSet;
}


