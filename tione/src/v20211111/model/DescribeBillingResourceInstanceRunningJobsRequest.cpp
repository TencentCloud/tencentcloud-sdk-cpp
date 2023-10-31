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

#include <tencentcloud/tione/v20211111/model/DescribeBillingResourceInstanceRunningJobsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DescribeBillingResourceInstanceRunningJobsRequest::DescribeBillingResourceInstanceRunningJobsRequest() :
    m_resourceGroupIdHasBeenSet(false),
    m_resourceInstanceIdHasBeenSet(false)
{
}

string DescribeBillingResourceInstanceRunningJobsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceInstanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBillingResourceInstanceRunningJobsRequest::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void DescribeBillingResourceInstanceRunningJobsRequest::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool DescribeBillingResourceInstanceRunningJobsRequest::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

string DescribeBillingResourceInstanceRunningJobsRequest::GetResourceInstanceId() const
{
    return m_resourceInstanceId;
}

void DescribeBillingResourceInstanceRunningJobsRequest::SetResourceInstanceId(const string& _resourceInstanceId)
{
    m_resourceInstanceId = _resourceInstanceId;
    m_resourceInstanceIdHasBeenSet = true;
}

bool DescribeBillingResourceInstanceRunningJobsRequest::ResourceInstanceIdHasBeenSet() const
{
    return m_resourceInstanceIdHasBeenSet;
}


