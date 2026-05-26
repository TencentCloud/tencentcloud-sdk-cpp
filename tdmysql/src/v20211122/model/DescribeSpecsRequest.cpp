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

#include <tencentcloud/tdmysql/v20211122/model/DescribeSpecsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

DescribeSpecsRequest::DescribeSpecsRequest() :
    m_fullReplicationsHasBeenSet(false),
    m_isExclusiveInstanceHasBeenSet(false)
{
}

string DescribeSpecsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fullReplicationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullReplications";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fullReplications, allocator);
    }

    if (m_isExclusiveInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExclusiveInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isExclusiveInstance, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeSpecsRequest::GetFullReplications() const
{
    return m_fullReplications;
}

void DescribeSpecsRequest::SetFullReplications(const int64_t& _fullReplications)
{
    m_fullReplications = _fullReplications;
    m_fullReplicationsHasBeenSet = true;
}

bool DescribeSpecsRequest::FullReplicationsHasBeenSet() const
{
    return m_fullReplicationsHasBeenSet;
}

int64_t DescribeSpecsRequest::GetIsExclusiveInstance() const
{
    return m_isExclusiveInstance;
}

void DescribeSpecsRequest::SetIsExclusiveInstance(const int64_t& _isExclusiveInstance)
{
    m_isExclusiveInstance = _isExclusiveInstance;
    m_isExclusiveInstanceHasBeenSet = true;
}

bool DescribeSpecsRequest::IsExclusiveInstanceHasBeenSet() const
{
    return m_isExclusiveInstanceHasBeenSet;
}


