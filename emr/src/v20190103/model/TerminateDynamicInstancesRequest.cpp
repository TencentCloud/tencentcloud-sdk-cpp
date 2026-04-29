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

#include <tencentcloud/emr/v20190103/model/TerminateDynamicInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

TerminateDynamicInstancesRequest::TerminateDynamicInstancesRequest() :
    m_instanceIdHasBeenSet(false),
    m_dynamicInstanceTypeHasBeenSet(false),
    m_dynamicInstanceIdsHasBeenSet(false)
{
}

string TerminateDynamicInstancesRequest::ToJsonString() const
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

    if (m_dynamicInstanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicInstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dynamicInstanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_dynamicInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dynamicInstanceIds.begin(); itr != m_dynamicInstanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TerminateDynamicInstancesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void TerminateDynamicInstancesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TerminateDynamicInstancesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string TerminateDynamicInstancesRequest::GetDynamicInstanceType() const
{
    return m_dynamicInstanceType;
}

void TerminateDynamicInstancesRequest::SetDynamicInstanceType(const string& _dynamicInstanceType)
{
    m_dynamicInstanceType = _dynamicInstanceType;
    m_dynamicInstanceTypeHasBeenSet = true;
}

bool TerminateDynamicInstancesRequest::DynamicInstanceTypeHasBeenSet() const
{
    return m_dynamicInstanceTypeHasBeenSet;
}

vector<uint64_t> TerminateDynamicInstancesRequest::GetDynamicInstanceIds() const
{
    return m_dynamicInstanceIds;
}

void TerminateDynamicInstancesRequest::SetDynamicInstanceIds(const vector<uint64_t>& _dynamicInstanceIds)
{
    m_dynamicInstanceIds = _dynamicInstanceIds;
    m_dynamicInstanceIdsHasBeenSet = true;
}

bool TerminateDynamicInstancesRequest::DynamicInstanceIdsHasBeenSet() const
{
    return m_dynamicInstanceIdsHasBeenSet;
}


