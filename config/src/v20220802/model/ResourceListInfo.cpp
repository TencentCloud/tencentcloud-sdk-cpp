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

#include <tencentcloud/config/v20220802/model/ResourceListInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

ResourceListInfo::ResourceListInfo() :
    m_resourceTypeHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceStatusHasBeenSet(false),
    m_resourceDeleteHasBeenSet(false),
    m_resourceCreateTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_resourceZoneHasBeenSet(false),
    m_complianceResultHasBeenSet(false)
{
}

CoreInternalOutcome ResourceListInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceListInfo.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceListInfo.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceListInfo.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceRegion") && !value["ResourceRegion"].IsNull())
    {
        if (!value["ResourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceListInfo.ResourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceRegion = string(value["ResourceRegion"].GetString());
        m_resourceRegionHasBeenSet = true;
    }

    if (value.HasMember("ResourceStatus") && !value["ResourceStatus"].IsNull())
    {
        if (!value["ResourceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceListInfo.ResourceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceStatus = string(value["ResourceStatus"].GetString());
        m_resourceStatusHasBeenSet = true;
    }

    if (value.HasMember("ResourceDelete") && !value["ResourceDelete"].IsNull())
    {
        if (!value["ResourceDelete"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceListInfo.ResourceDelete` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceDelete = value["ResourceDelete"].GetUint64();
        m_resourceDeleteHasBeenSet = true;
    }

    if (value.HasMember("ResourceCreateTime") && !value["ResourceCreateTime"].IsNull())
    {
        if (!value["ResourceCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceListInfo.ResourceCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceCreateTime = string(value["ResourceCreateTime"].GetString());
        m_resourceCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceListInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("ResourceZone") && !value["ResourceZone"].IsNull())
    {
        if (!value["ResourceZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceListInfo.ResourceZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceZone = string(value["ResourceZone"].GetString());
        m_resourceZoneHasBeenSet = true;
    }

    if (value.HasMember("ComplianceResult") && !value["ComplianceResult"].IsNull())
    {
        if (!value["ComplianceResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceListInfo.ComplianceResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_complianceResult = string(value["ComplianceResult"].GetString());
        m_complianceResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceListInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceDelete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceDelete, allocator);
    }

    if (m_resourceCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resourceZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceZone.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_complianceResult.c_str(), allocator).Move(), allocator);
    }

}


string ResourceListInfo::GetResourceType() const
{
    return m_resourceType;
}

void ResourceListInfo::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ResourceListInfo::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string ResourceListInfo::GetResourceName() const
{
    return m_resourceName;
}

void ResourceListInfo::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool ResourceListInfo::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string ResourceListInfo::GetResourceId() const
{
    return m_resourceId;
}

void ResourceListInfo::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ResourceListInfo::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ResourceListInfo::GetResourceRegion() const
{
    return m_resourceRegion;
}

void ResourceListInfo::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool ResourceListInfo::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

string ResourceListInfo::GetResourceStatus() const
{
    return m_resourceStatus;
}

void ResourceListInfo::SetResourceStatus(const string& _resourceStatus)
{
    m_resourceStatus = _resourceStatus;
    m_resourceStatusHasBeenSet = true;
}

bool ResourceListInfo::ResourceStatusHasBeenSet() const
{
    return m_resourceStatusHasBeenSet;
}

uint64_t ResourceListInfo::GetResourceDelete() const
{
    return m_resourceDelete;
}

void ResourceListInfo::SetResourceDelete(const uint64_t& _resourceDelete)
{
    m_resourceDelete = _resourceDelete;
    m_resourceDeleteHasBeenSet = true;
}

bool ResourceListInfo::ResourceDeleteHasBeenSet() const
{
    return m_resourceDeleteHasBeenSet;
}

string ResourceListInfo::GetResourceCreateTime() const
{
    return m_resourceCreateTime;
}

void ResourceListInfo::SetResourceCreateTime(const string& _resourceCreateTime)
{
    m_resourceCreateTime = _resourceCreateTime;
    m_resourceCreateTimeHasBeenSet = true;
}

bool ResourceListInfo::ResourceCreateTimeHasBeenSet() const
{
    return m_resourceCreateTimeHasBeenSet;
}

vector<Tag> ResourceListInfo::GetTags() const
{
    return m_tags;
}

void ResourceListInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ResourceListInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ResourceListInfo::GetResourceZone() const
{
    return m_resourceZone;
}

void ResourceListInfo::SetResourceZone(const string& _resourceZone)
{
    m_resourceZone = _resourceZone;
    m_resourceZoneHasBeenSet = true;
}

bool ResourceListInfo::ResourceZoneHasBeenSet() const
{
    return m_resourceZoneHasBeenSet;
}

string ResourceListInfo::GetComplianceResult() const
{
    return m_complianceResult;
}

void ResourceListInfo::SetComplianceResult(const string& _complianceResult)
{
    m_complianceResult = _complianceResult;
    m_complianceResultHasBeenSet = true;
}

bool ResourceListInfo::ComplianceResultHasBeenSet() const
{
    return m_complianceResultHasBeenSet;
}

