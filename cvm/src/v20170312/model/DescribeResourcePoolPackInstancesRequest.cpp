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

#include <tencentcloud/cvm/v20170312/model/DescribeResourcePoolPackInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

DescribeResourcePoolPackInstancesRequest::DescribeResourcePoolPackInstancesRequest() :
    m_dedicatedResourcePackIdsHasBeenSet(false)
{
}

string DescribeResourcePoolPackInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dedicatedResourcePackIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedResourcePackIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dedicatedResourcePackIds.begin(); itr != m_dedicatedResourcePackIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeResourcePoolPackInstancesRequest::GetDedicatedResourcePackIds() const
{
    return m_dedicatedResourcePackIds;
}

void DescribeResourcePoolPackInstancesRequest::SetDedicatedResourcePackIds(const vector<string>& _dedicatedResourcePackIds)
{
    m_dedicatedResourcePackIds = _dedicatedResourcePackIds;
    m_dedicatedResourcePackIdsHasBeenSet = true;
}

bool DescribeResourcePoolPackInstancesRequest::DedicatedResourcePackIdsHasBeenSet() const
{
    return m_dedicatedResourcePackIdsHasBeenSet;
}


