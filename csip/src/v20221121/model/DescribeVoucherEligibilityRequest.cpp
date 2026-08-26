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

#include <tencentcloud/csip/v20221121/model/DescribeVoucherEligibilityRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeVoucherEligibilityRequest::DescribeVoucherEligibilityRequest() :
    m_activityIDHasBeenSet(false),
    m_actIDHasBeenSet(false)
{
}

string DescribeVoucherEligibilityRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_activityIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_activityID, allocator);
    }

    if (m_actIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_actID, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeVoucherEligibilityRequest::GetActivityID() const
{
    return m_activityID;
}

void DescribeVoucherEligibilityRequest::SetActivityID(const int64_t& _activityID)
{
    m_activityID = _activityID;
    m_activityIDHasBeenSet = true;
}

bool DescribeVoucherEligibilityRequest::ActivityIDHasBeenSet() const
{
    return m_activityIDHasBeenSet;
}

int64_t DescribeVoucherEligibilityRequest::GetActID() const
{
    return m_actID;
}

void DescribeVoucherEligibilityRequest::SetActID(const int64_t& _actID)
{
    m_actID = _actID;
    m_actIDHasBeenSet = true;
}

bool DescribeVoucherEligibilityRequest::ActIDHasBeenSet() const
{
    return m_actIDHasBeenSet;
}


