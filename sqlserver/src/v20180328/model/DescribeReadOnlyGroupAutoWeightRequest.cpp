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

#include <tencentcloud/sqlserver/v20180328/model/DescribeReadOnlyGroupAutoWeightRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeReadOnlyGroupAutoWeightRequest::DescribeReadOnlyGroupAutoWeightRequest() :
    m_instanceIdHasBeenSet(false),
    m_readOnlyGroupIdHasBeenSet(false)
{
}

string DescribeReadOnlyGroupAutoWeightRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_readOnlyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_readOnlyGroupId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeReadOnlyGroupAutoWeightRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeReadOnlyGroupAutoWeightRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeReadOnlyGroupAutoWeightRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeReadOnlyGroupAutoWeightRequest::GetReadOnlyGroupId() const
{
    return m_readOnlyGroupId;
}

void DescribeReadOnlyGroupAutoWeightRequest::SetReadOnlyGroupId(const string& _readOnlyGroupId)
{
    m_readOnlyGroupId = _readOnlyGroupId;
    m_readOnlyGroupIdHasBeenSet = true;
}

bool DescribeReadOnlyGroupAutoWeightRequest::ReadOnlyGroupIdHasBeenSet() const
{
    return m_readOnlyGroupIdHasBeenSet;
}


