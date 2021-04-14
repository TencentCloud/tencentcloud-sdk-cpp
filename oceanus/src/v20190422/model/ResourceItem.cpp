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

#include <tencentcloud/oceanus/v20190422/model/ResourceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace rapidjson;
using namespace std;

ResourceItem::ResourceItem() :
    m_resourceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceLocHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_latestResourceConfigVersionHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_versionCountHasBeenSet(false),
    m_refJobCountHasBeenSet(false)
{
}

CoreInternalOutcome ResourceItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResourceItem.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResourceItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ResourceItem.ResourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = value["ResourceType"].GetUint64();
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceLoc") && !value["ResourceLoc"].IsNull())
    {
        if (!value["ResourceLoc"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ResourceItem.ResourceLoc` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceLoc.Deserialize(value["ResourceLoc"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceLocHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResourceItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ResourceItem.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResourceItem.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResourceItem.CreatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = string(value["CreatorUin"].GetString());
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResourceItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResourceItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestResourceConfigVersion") && !value["LatestResourceConfigVersion"].IsNull())
    {
        if (!value["LatestResourceConfigVersion"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ResourceItem.LatestResourceConfigVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_latestResourceConfigVersion = value["LatestResourceConfigVersion"].GetInt64();
        m_latestResourceConfigVersionHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResourceItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("VersionCount") && !value["VersionCount"].IsNull())
    {
        if (!value["VersionCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ResourceItem.VersionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_versionCount = value["VersionCount"].GetInt64();
        m_versionCountHasBeenSet = true;
    }

    if (value.HasMember("RefJobCount") && !value["RefJobCount"].IsNull())
    {
        if (!value["RefJobCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ResourceItem.RefJobCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_refJobCount = value["RefJobCount"].GetInt64();
        m_refJobCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceType, allocator);
    }

    if (m_resourceLocHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceLoc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_resourceLoc.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_regionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_creatorUin.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestResourceConfigVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LatestResourceConfigVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latestResourceConfigVersion, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_versionCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VersionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_versionCount, allocator);
    }

    if (m_refJobCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RefJobCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refJobCount, allocator);
    }

}


string ResourceItem::GetResourceId() const
{
    return m_resourceId;
}

void ResourceItem::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ResourceItem::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ResourceItem::GetName() const
{
    return m_name;
}

void ResourceItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ResourceItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ResourceItem::GetResourceType() const
{
    return m_resourceType;
}

void ResourceItem::SetResourceType(const uint64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ResourceItem::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

ResourceLoc ResourceItem::GetResourceLoc() const
{
    return m_resourceLoc;
}

void ResourceItem::SetResourceLoc(const ResourceLoc& _resourceLoc)
{
    m_resourceLoc = _resourceLoc;
    m_resourceLocHasBeenSet = true;
}

bool ResourceItem::ResourceLocHasBeenSet() const
{
    return m_resourceLocHasBeenSet;
}

string ResourceItem::GetRegion() const
{
    return m_region;
}

void ResourceItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ResourceItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t ResourceItem::GetAppId() const
{
    return m_appId;
}

void ResourceItem::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ResourceItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ResourceItem::GetOwnerUin() const
{
    return m_ownerUin;
}

void ResourceItem::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ResourceItem::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string ResourceItem::GetCreatorUin() const
{
    return m_creatorUin;
}

void ResourceItem::SetCreatorUin(const string& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool ResourceItem::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

string ResourceItem::GetCreateTime() const
{
    return m_createTime;
}

void ResourceItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ResourceItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ResourceItem::GetUpdateTime() const
{
    return m_updateTime;
}

void ResourceItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ResourceItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t ResourceItem::GetLatestResourceConfigVersion() const
{
    return m_latestResourceConfigVersion;
}

void ResourceItem::SetLatestResourceConfigVersion(const int64_t& _latestResourceConfigVersion)
{
    m_latestResourceConfigVersion = _latestResourceConfigVersion;
    m_latestResourceConfigVersionHasBeenSet = true;
}

bool ResourceItem::LatestResourceConfigVersionHasBeenSet() const
{
    return m_latestResourceConfigVersionHasBeenSet;
}

string ResourceItem::GetRemark() const
{
    return m_remark;
}

void ResourceItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ResourceItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t ResourceItem::GetVersionCount() const
{
    return m_versionCount;
}

void ResourceItem::SetVersionCount(const int64_t& _versionCount)
{
    m_versionCount = _versionCount;
    m_versionCountHasBeenSet = true;
}

bool ResourceItem::VersionCountHasBeenSet() const
{
    return m_versionCountHasBeenSet;
}

int64_t ResourceItem::GetRefJobCount() const
{
    return m_refJobCount;
}

void ResourceItem::SetRefJobCount(const int64_t& _refJobCount)
{
    m_refJobCount = _refJobCount;
    m_refJobCountHasBeenSet = true;
}

bool ResourceItem::RefJobCountHasBeenSet() const
{
    return m_refJobCountHasBeenSet;
}

