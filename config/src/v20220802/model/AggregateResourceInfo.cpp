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

#include <tencentcloud/config/v20220802/model/AggregateResourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

AggregateResourceInfo::AggregateResourceInfo() :
    m_resourceTypeHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceStatusHasBeenSet(false),
    m_resourceDeleteHasBeenSet(false),
    m_resourceCreateTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_resourceZoneHasBeenSet(false),
    m_complianceResultHasBeenSet(false),
    m_resourceOwnerIdHasBeenSet(false),
    m_resourceOwnerNameHasBeenSet(false)
{
}

CoreInternalOutcome AggregateResourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggregateResourceInfo.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggregateResourceInfo.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggregateResourceInfo.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceRegion") && !value["ResourceRegion"].IsNull())
    {
        if (!value["ResourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggregateResourceInfo.ResourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceRegion = string(value["ResourceRegion"].GetString());
        m_resourceRegionHasBeenSet = true;
    }

    if (value.HasMember("ResourceStatus") && !value["ResourceStatus"].IsNull())
    {
        if (!value["ResourceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggregateResourceInfo.ResourceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceStatus = string(value["ResourceStatus"].GetString());
        m_resourceStatusHasBeenSet = true;
    }

    if (value.HasMember("ResourceDelete") && !value["ResourceDelete"].IsNull())
    {
        if (!value["ResourceDelete"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AggregateResourceInfo.ResourceDelete` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceDelete = value["ResourceDelete"].GetUint64();
        m_resourceDeleteHasBeenSet = true;
    }

    if (value.HasMember("ResourceCreateTime") && !value["ResourceCreateTime"].IsNull())
    {
        if (!value["ResourceCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggregateResourceInfo.ResourceCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceCreateTime = string(value["ResourceCreateTime"].GetString());
        m_resourceCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AggregateResourceInfo.Tags` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `AggregateResourceInfo.ResourceZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceZone = string(value["ResourceZone"].GetString());
        m_resourceZoneHasBeenSet = true;
    }

    if (value.HasMember("ComplianceResult") && !value["ComplianceResult"].IsNull())
    {
        if (!value["ComplianceResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggregateResourceInfo.ComplianceResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_complianceResult = string(value["ComplianceResult"].GetString());
        m_complianceResultHasBeenSet = true;
    }

    if (value.HasMember("ResourceOwnerId") && !value["ResourceOwnerId"].IsNull())
    {
        if (!value["ResourceOwnerId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AggregateResourceInfo.ResourceOwnerId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceOwnerId = value["ResourceOwnerId"].GetUint64();
        m_resourceOwnerIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceOwnerName") && !value["ResourceOwnerName"].IsNull())
    {
        if (!value["ResourceOwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggregateResourceInfo.ResourceOwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceOwnerName = string(value["ResourceOwnerName"].GetString());
        m_resourceOwnerNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AggregateResourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_resourceOwnerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceOwnerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceOwnerId, allocator);
    }

    if (m_resourceOwnerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceOwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceOwnerName.c_str(), allocator).Move(), allocator);
    }

}


string AggregateResourceInfo::GetResourceType() const
{
    return m_resourceType;
}

void AggregateResourceInfo::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool AggregateResourceInfo::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string AggregateResourceInfo::GetResourceName() const
{
    return m_resourceName;
}

void AggregateResourceInfo::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool AggregateResourceInfo::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string AggregateResourceInfo::GetResourceId() const
{
    return m_resourceId;
}

void AggregateResourceInfo::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool AggregateResourceInfo::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string AggregateResourceInfo::GetResourceRegion() const
{
    return m_resourceRegion;
}

void AggregateResourceInfo::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool AggregateResourceInfo::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

string AggregateResourceInfo::GetResourceStatus() const
{
    return m_resourceStatus;
}

void AggregateResourceInfo::SetResourceStatus(const string& _resourceStatus)
{
    m_resourceStatus = _resourceStatus;
    m_resourceStatusHasBeenSet = true;
}

bool AggregateResourceInfo::ResourceStatusHasBeenSet() const
{
    return m_resourceStatusHasBeenSet;
}

uint64_t AggregateResourceInfo::GetResourceDelete() const
{
    return m_resourceDelete;
}

void AggregateResourceInfo::SetResourceDelete(const uint64_t& _resourceDelete)
{
    m_resourceDelete = _resourceDelete;
    m_resourceDeleteHasBeenSet = true;
}

bool AggregateResourceInfo::ResourceDeleteHasBeenSet() const
{
    return m_resourceDeleteHasBeenSet;
}

string AggregateResourceInfo::GetResourceCreateTime() const
{
    return m_resourceCreateTime;
}

void AggregateResourceInfo::SetResourceCreateTime(const string& _resourceCreateTime)
{
    m_resourceCreateTime = _resourceCreateTime;
    m_resourceCreateTimeHasBeenSet = true;
}

bool AggregateResourceInfo::ResourceCreateTimeHasBeenSet() const
{
    return m_resourceCreateTimeHasBeenSet;
}

vector<Tag> AggregateResourceInfo::GetTags() const
{
    return m_tags;
}

void AggregateResourceInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool AggregateResourceInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string AggregateResourceInfo::GetResourceZone() const
{
    return m_resourceZone;
}

void AggregateResourceInfo::SetResourceZone(const string& _resourceZone)
{
    m_resourceZone = _resourceZone;
    m_resourceZoneHasBeenSet = true;
}

bool AggregateResourceInfo::ResourceZoneHasBeenSet() const
{
    return m_resourceZoneHasBeenSet;
}

string AggregateResourceInfo::GetComplianceResult() const
{
    return m_complianceResult;
}

void AggregateResourceInfo::SetComplianceResult(const string& _complianceResult)
{
    m_complianceResult = _complianceResult;
    m_complianceResultHasBeenSet = true;
}

bool AggregateResourceInfo::ComplianceResultHasBeenSet() const
{
    return m_complianceResultHasBeenSet;
}

uint64_t AggregateResourceInfo::GetResourceOwnerId() const
{
    return m_resourceOwnerId;
}

void AggregateResourceInfo::SetResourceOwnerId(const uint64_t& _resourceOwnerId)
{
    m_resourceOwnerId = _resourceOwnerId;
    m_resourceOwnerIdHasBeenSet = true;
}

bool AggregateResourceInfo::ResourceOwnerIdHasBeenSet() const
{
    return m_resourceOwnerIdHasBeenSet;
}

string AggregateResourceInfo::GetResourceOwnerName() const
{
    return m_resourceOwnerName;
}

void AggregateResourceInfo::SetResourceOwnerName(const string& _resourceOwnerName)
{
    m_resourceOwnerName = _resourceOwnerName;
    m_resourceOwnerNameHasBeenSet = true;
}

bool AggregateResourceInfo::ResourceOwnerNameHasBeenSet() const
{
    return m_resourceOwnerNameHasBeenSet;
}

