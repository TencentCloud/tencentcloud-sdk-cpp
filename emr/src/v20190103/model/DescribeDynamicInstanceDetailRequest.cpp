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

#include <tencentcloud/emr/v20190103/model/DescribeDynamicInstanceDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeDynamicInstanceDetailRequest::DescribeDynamicInstanceDetailRequest() :
    m_instanceIdHasBeenSet(false),
    m_rayClusterIdHasBeenSet(false)
{
}

string DescribeDynamicInstanceDetailRequest::ToJsonString() const
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

    if (m_rayClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RayClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rayClusterId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDynamicInstanceDetailRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeDynamicInstanceDetailRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeDynamicInstanceDetailRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeDynamicInstanceDetailRequest::GetRayClusterId() const
{
    return m_rayClusterId;
}

void DescribeDynamicInstanceDetailRequest::SetRayClusterId(const int64_t& _rayClusterId)
{
    m_rayClusterId = _rayClusterId;
    m_rayClusterIdHasBeenSet = true;
}

bool DescribeDynamicInstanceDetailRequest::RayClusterIdHasBeenSet() const
{
    return m_rayClusterIdHasBeenSet;
}


