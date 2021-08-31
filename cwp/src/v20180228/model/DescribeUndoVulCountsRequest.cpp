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

#include <tencentcloud/cwp/v20180228/model/DescribeUndoVulCountsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeUndoVulCountsRequest::DescribeUndoVulCountsRequest() :
    m_vulCategoryHasBeenSet(false),
    m_ifEmergencyHasBeenSet(false)
{
}

string DescribeUndoVulCountsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vulCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCategory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vulCategory, allocator);
    }

    if (m_ifEmergencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IfEmergency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ifEmergency.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeUndoVulCountsRequest::GetVulCategory() const
{
    return m_vulCategory;
}

void DescribeUndoVulCountsRequest::SetVulCategory(const uint64_t& _vulCategory)
{
    m_vulCategory = _vulCategory;
    m_vulCategoryHasBeenSet = true;
}

bool DescribeUndoVulCountsRequest::VulCategoryHasBeenSet() const
{
    return m_vulCategoryHasBeenSet;
}

string DescribeUndoVulCountsRequest::GetIfEmergency() const
{
    return m_ifEmergency;
}

void DescribeUndoVulCountsRequest::SetIfEmergency(const string& _ifEmergency)
{
    m_ifEmergency = _ifEmergency;
    m_ifEmergencyHasBeenSet = true;
}

bool DescribeUndoVulCountsRequest::IfEmergencyHasBeenSet() const
{
    return m_ifEmergencyHasBeenSet;
}


