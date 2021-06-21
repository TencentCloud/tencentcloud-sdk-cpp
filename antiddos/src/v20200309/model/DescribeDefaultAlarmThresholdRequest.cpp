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

#include <tencentcloud/antiddos/v20200309/model/DescribeDefaultAlarmThresholdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DescribeDefaultAlarmThresholdRequest::DescribeDefaultAlarmThresholdRequest() :
    m_instanceTypeHasBeenSet(false),
    m_filterAlarmTypeHasBeenSet(false)
{
}

string DescribeDefaultAlarmThresholdRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_filterAlarmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterAlarmType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterAlarmType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDefaultAlarmThresholdRequest::GetInstanceType() const
{
    return m_instanceType;
}

void DescribeDefaultAlarmThresholdRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool DescribeDefaultAlarmThresholdRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t DescribeDefaultAlarmThresholdRequest::GetFilterAlarmType() const
{
    return m_filterAlarmType;
}

void DescribeDefaultAlarmThresholdRequest::SetFilterAlarmType(const int64_t& _filterAlarmType)
{
    m_filterAlarmType = _filterAlarmType;
    m_filterAlarmTypeHasBeenSet = true;
}

bool DescribeDefaultAlarmThresholdRequest::FilterAlarmTypeHasBeenSet() const
{
    return m_filterAlarmTypeHasBeenSet;
}


