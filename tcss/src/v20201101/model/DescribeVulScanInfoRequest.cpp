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

#include <tencentcloud/tcss/v20201101/model/DescribeVulScanInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeVulScanInfoRequest::DescribeVulScanInfoRequest() :
    m_localTaskIDHasBeenSet(false),
    m_registryTaskIDHasBeenSet(false)
{
}

string DescribeVulScanInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_localTaskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalTaskID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_localTaskID, allocator);
    }

    if (m_registryTaskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryTaskID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_registryTaskID, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeVulScanInfoRequest::GetLocalTaskID() const
{
    return m_localTaskID;
}

void DescribeVulScanInfoRequest::SetLocalTaskID(const int64_t& _localTaskID)
{
    m_localTaskID = _localTaskID;
    m_localTaskIDHasBeenSet = true;
}

bool DescribeVulScanInfoRequest::LocalTaskIDHasBeenSet() const
{
    return m_localTaskIDHasBeenSet;
}

int64_t DescribeVulScanInfoRequest::GetRegistryTaskID() const
{
    return m_registryTaskID;
}

void DescribeVulScanInfoRequest::SetRegistryTaskID(const int64_t& _registryTaskID)
{
    m_registryTaskID = _registryTaskID;
    m_registryTaskIDHasBeenSet = true;
}

bool DescribeVulScanInfoRequest::RegistryTaskIDHasBeenSet() const
{
    return m_registryTaskIDHasBeenSet;
}


