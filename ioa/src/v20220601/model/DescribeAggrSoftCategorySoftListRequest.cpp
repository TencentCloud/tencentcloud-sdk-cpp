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

#include <tencentcloud/ioa/v20220601/model/DescribeAggrSoftCategorySoftListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeAggrSoftCategorySoftListRequest::DescribeAggrSoftCategorySoftListRequest() :
    m_conditionHasBeenSet(false),
    m_osTypeHasBeenSet(false)
{
}

string DescribeAggrSoftCategorySoftListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_condition.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_osType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Condition DescribeAggrSoftCategorySoftListRequest::GetCondition() const
{
    return m_condition;
}

void DescribeAggrSoftCategorySoftListRequest::SetCondition(const Condition& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool DescribeAggrSoftCategorySoftListRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

int64_t DescribeAggrSoftCategorySoftListRequest::GetOsType() const
{
    return m_osType;
}

void DescribeAggrSoftCategorySoftListRequest::SetOsType(const int64_t& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool DescribeAggrSoftCategorySoftListRequest::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}


