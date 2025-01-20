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
using namespace std;

CreateFlowLogRequest::CreateFlowLogRequest() :
    m_flowLogNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_trafficTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_flowLogDescriptionHasBeenSet(false),
    m_cloudLogIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_flowLogStorageHasBeenSet(false),
    m_cloudLogRegionHasBeenSet(false)
{
}

string CreateFlowLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_flowLogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowLogName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowLogName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trafficType.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowLogDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowLogDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowLogDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudLogId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cloudLogId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_flowLogStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowLogStorage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_flowLogStorage.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cloudLogRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudLogRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cloudLogRegion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
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

vector<Tag> CreateFlowLogRequest::GetTags() const
{
    return m_tags;
}

void CreateFlowLogRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateFlowLogRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateFlowLogRequest::GetStorageType() const
{
    return m_storageType;
}

void CreateFlowLogRequest::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool CreateFlowLogRequest::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

FlowLogStorage CreateFlowLogRequest::GetFlowLogStorage() const
{
    return m_flowLogStorage;
}

void CreateFlowLogRequest::SetFlowLogStorage(const FlowLogStorage& _flowLogStorage)
{
    m_flowLogStorage = _flowLogStorage;
    m_flowLogStorageHasBeenSet = true;
}

bool CreateFlowLogRequest::FlowLogStorageHasBeenSet() const
{
    return m_flowLogStorageHasBeenSet;
}

string CreateFlowLogRequest::GetCloudLogRegion() const
{
    return m_cloudLogRegion;
}

void CreateFlowLogRequest::SetCloudLogRegion(const string& _cloudLogRegion)
{
    m_cloudLogRegion = _cloudLogRegion;
    m_cloudLogRegionHasBeenSet = true;
}

bool CreateFlowLogRequest::CloudLogRegionHasBeenSet() const
{
    return m_cloudLogRegionHasBeenSet;
}


