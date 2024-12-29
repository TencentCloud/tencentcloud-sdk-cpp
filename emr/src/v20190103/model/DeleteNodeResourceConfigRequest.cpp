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

#include <tencentcloud/emr/v20190103/model/DeleteNodeResourceConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DeleteNodeResourceConfigRequest::DeleteNodeResourceConfigRequest() :
    m_instanceIdHasBeenSet(false),
    m_resourceConfigIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceBaseTypeHasBeenSet(false),
    m_computeResourceIdHasBeenSet(false)
{
}

string DeleteNodeResourceConfigRequest::ToJsonString() const
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

    if (m_resourceConfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceConfigId, allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceBaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceBaseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceBaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_computeResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_computeResourceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteNodeResourceConfigRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DeleteNodeResourceConfigRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DeleteNodeResourceConfigRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t DeleteNodeResourceConfigRequest::GetResourceConfigId() const
{
    return m_resourceConfigId;
}

void DeleteNodeResourceConfigRequest::SetResourceConfigId(const uint64_t& _resourceConfigId)
{
    m_resourceConfigId = _resourceConfigId;
    m_resourceConfigIdHasBeenSet = true;
}

bool DeleteNodeResourceConfigRequest::ResourceConfigIdHasBeenSet() const
{
    return m_resourceConfigIdHasBeenSet;
}

string DeleteNodeResourceConfigRequest::GetResourceType() const
{
    return m_resourceType;
}

void DeleteNodeResourceConfigRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool DeleteNodeResourceConfigRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string DeleteNodeResourceConfigRequest::GetResourceBaseType() const
{
    return m_resourceBaseType;
}

void DeleteNodeResourceConfigRequest::SetResourceBaseType(const string& _resourceBaseType)
{
    m_resourceBaseType = _resourceBaseType;
    m_resourceBaseTypeHasBeenSet = true;
}

bool DeleteNodeResourceConfigRequest::ResourceBaseTypeHasBeenSet() const
{
    return m_resourceBaseTypeHasBeenSet;
}

string DeleteNodeResourceConfigRequest::GetComputeResourceId() const
{
    return m_computeResourceId;
}

void DeleteNodeResourceConfigRequest::SetComputeResourceId(const string& _computeResourceId)
{
    m_computeResourceId = _computeResourceId;
    m_computeResourceIdHasBeenSet = true;
}

bool DeleteNodeResourceConfigRequest::ComputeResourceIdHasBeenSet() const
{
    return m_computeResourceIdHasBeenSet;
}


