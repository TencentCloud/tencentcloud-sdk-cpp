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

#include <tencentcloud/vpc/v20170312/model/CreateFlowLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

CreateFlowLogRequest::CreateFlowLogRequest() :
    m_vpcIdHasBeenSet(false),
    m_flowLogNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_trafficTypeHasBeenSet(false),
    m_cloudLogIdHasBeenSet(false),
    m_flowLogDescriptionHasBeenSet(false)
{
}

string CreateFlowLogRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowLogNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FlowLogName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_flowLogName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TrafficType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_trafficType.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudLogIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CloudLogId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cloudLogId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowLogDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FlowLogDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_flowLogDescription.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFlowLogRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateFlowLogRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateFlowLogRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateFlowLogRequest::GetFlowLogName() const
{
    return m_flowLogName;
}

void CreateFlowLogRequest::SetFlowLogName(const string& _flowLogName)
{
    m_flowLogName = _flowLogName;
    m_flowLogNameHasBeenSet = true;
}

bool CreateFlowLogRequest::FlowLogNameHasBeenSet() const
{
    return m_flowLogNameHasBeenSet;
}

string CreateFlowLogRequest::GetResourceType() const
{
    return m_resourceType;
}

void CreateFlowLogRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool CreateFlowLogRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string CreateFlowLogRequest::GetResourceId() const
{
    return m_resourceId;
}

void CreateFlowLogRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool CreateFlowLogRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string CreateFlowLogRequest::GetTrafficType() const
{
    return m_trafficType;
}

void CreateFlowLogRequest::SetTrafficType(const string& _trafficType)
{
    m_trafficType = _trafficType;
    m_trafficTypeHasBeenSet = true;
}

bool CreateFlowLogRequest::TrafficTypeHasBeenSet() const
{
    return m_trafficTypeHasBeenSet;
}

string CreateFlowLogRequest::GetCloudLogId() const
{
    return m_cloudLogId;
}

void CreateFlowLogRequest::SetCloudLogId(const string& _cloudLogId)
{
    m_cloudLogId = _cloudLogId;
    m_cloudLogIdHasBeenSet = true;
}

bool CreateFlowLogRequest::CloudLogIdHasBeenSet() const
{
    return m_cloudLogIdHasBeenSet;
}

string CreateFlowLogRequest::GetFlowLogDescription() const
{
    return m_flowLogDescription;
}

void CreateFlowLogRequest::SetFlowLogDescription(const string& _flowLogDescription)
{
    m_flowLogDescription = _flowLogDescription;
    m_flowLogDescriptionHasBeenSet = true;
}

bool CreateFlowLogRequest::FlowLogDescriptionHasBeenSet() const
{
    return m_flowLogDescriptionHasBeenSet;
}


