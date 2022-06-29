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

#include <tencentcloud/antiddos/v20200309/model/DescribeListIPAlarmConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DescribeListIPAlarmConfigRequest::DescribeListIPAlarmConfigRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_filterInstanceIdHasBeenSet(false),
    m_filterAlarmTypeHasBeenSet(false),
    m_filterIpHasBeenSet(false),
    m_filterCnameHasBeenSet(false)
{
}

string DescribeListIPAlarmConfigRequest::ToJsonString() const
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

    if (m_filterInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_filterAlarmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterAlarmType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterAlarmType, allocator);
    }

    if (m_filterIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterIp.c_str(), allocator).Move(), allocator);
    }

    if (m_filterCnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterCname";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterCname.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeListIPAlarmConfigRequest::GetOffset() const
{
    return m_offset;
}

void DescribeListIPAlarmConfigRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeListIPAlarmConfigRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeListIPAlarmConfigRequest::GetLimit() const
{
    return m_limit;
}

void DescribeListIPAlarmConfigRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeListIPAlarmConfigRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeListIPAlarmConfigRequest::GetFilterInstanceId() const
{
    return m_filterInstanceId;
}

void DescribeListIPAlarmConfigRequest::SetFilterInstanceId(const string& _filterInstanceId)
{
    m_filterInstanceId = _filterInstanceId;
    m_filterInstanceIdHasBeenSet = true;
}

bool DescribeListIPAlarmConfigRequest::FilterInstanceIdHasBeenSet() const
{
    return m_filterInstanceIdHasBeenSet;
}

int64_t DescribeListIPAlarmConfigRequest::GetFilterAlarmType() const
{
    return m_filterAlarmType;
}

void DescribeListIPAlarmConfigRequest::SetFilterAlarmType(const int64_t& _filterAlarmType)
{
    m_filterAlarmType = _filterAlarmType;
    m_filterAlarmTypeHasBeenSet = true;
}

bool DescribeListIPAlarmConfigRequest::FilterAlarmTypeHasBeenSet() const
{
    return m_filterAlarmTypeHasBeenSet;
}

string DescribeListIPAlarmConfigRequest::GetFilterIp() const
{
    return m_filterIp;
}

void DescribeListIPAlarmConfigRequest::SetFilterIp(const string& _filterIp)
{
    m_filterIp = _filterIp;
    m_filterIpHasBeenSet = true;
}

bool DescribeListIPAlarmConfigRequest::FilterIpHasBeenSet() const
{
    return m_filterIpHasBeenSet;
}

string DescribeListIPAlarmConfigRequest::GetFilterCname() const
{
    return m_filterCname;
}

void DescribeListIPAlarmConfigRequest::SetFilterCname(const string& _filterCname)
{
    m_filterCname = _filterCname;
    m_filterCnameHasBeenSet = true;
}

bool DescribeListIPAlarmConfigRequest::FilterCnameHasBeenSet() const
{
    return m_filterCnameHasBeenSet;
}


