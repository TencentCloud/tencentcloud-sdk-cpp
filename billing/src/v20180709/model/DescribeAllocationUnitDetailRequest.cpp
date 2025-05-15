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

#include <tencentcloud/billing/v20180709/model/DescribeAllocationUnitDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeAllocationUnitDetailRequest::DescribeAllocationUnitDetailRequest() :
    m_idHasBeenSet(false),
    m_monthHasBeenSet(false)
{
}

string DescribeAllocationUnitDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_monthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Month";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_month.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeAllocationUnitDetailRequest::GetId() const
{
    return m_id;
}

void DescribeAllocationUnitDetailRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeAllocationUnitDetailRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeAllocationUnitDetailRequest::GetMonth() const
{
    return m_month;
}

void DescribeAllocationUnitDetailRequest::SetMonth(const string& _month)
{
    m_month = _month;
    m_monthHasBeenSet = true;
}

bool DescribeAllocationUnitDetailRequest::MonthHasBeenSet() const
{
    return m_monthHasBeenSet;
}


