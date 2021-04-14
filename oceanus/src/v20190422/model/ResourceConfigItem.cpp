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

#include <tencentcloud/oceanus/v20190422/model/ResourceConfigItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace rapidjson;
using namespace std;

ResourceConfigItem::ResourceConfigItem() :
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_resourceLocHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_refJobCountHasBeenSet(false)
{
}

CoreInternalOutcome ResourceConfigItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResourceConfigItem.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ResourceConfigItem.ResourceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = value["ResourceType"].GetInt64();
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResourceConfigItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ResourceConfigItem.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResourceConfigItem.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResourceConfigItem.CreatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = string(value["CreatorUin"].GetString());
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("ResourceLoc") && !value["ResourceLoc"].IsNull())
    {
        if (!value["ResourceLoc"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ResourceConfigItem.ResourceLoc` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceLoc.Deserialize(value["ResourceLoc"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceLocHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResourceConfigItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ResourceConfigItem.Version` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_version = value["Version"].GetInt64();
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResourceConfigItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ResourceConfigItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RefJobCount") && !value["RefJobCount"].IsNull())
    {
        if (!value["RefJobCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ResourceConfigItem.RefJobCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_refJobCount = value["RefJobCount"].GetInt64();
        m_refJobCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceConfigItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceType, allocator);
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

    if (m_resourceLocHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceLoc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_resourceLoc.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_version, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_refJobCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RefJobCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refJobCount, allocator);
    }

}


string ResourceConfigItem::GetResourceId() const
{
    return m_resourceId;
}

void ResourceConfigItem::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ResourceConfigItem::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

int64_t ResourceConfigItem::GetResourceType() const
{
    return m_resourceType;
}

void ResourceConfigItem::SetResourceType(const int64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ResourceConfigItem::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string ResourceConfigItem::GetRegion() const
{
    return m_region;
}

void ResourceConfigItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ResourceConfigItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t ResourceConfigItem::GetAppId() const
{
    return m_appId;
}

void ResourceConfigItem::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ResourceConfigItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ResourceConfigItem::GetOwnerUin() const
{
    return m_ownerUin;
}

void ResourceConfigItem::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ResourceConfigItem::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string ResourceConfigItem::GetCreatorUin() const
{
    return m_creatorUin;
}

void ResourceConfigItem::SetCreatorUin(const string& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool ResourceConfigItem::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

ResourceLoc ResourceConfigItem::GetResourceLoc() const
{
    return m_resourceLoc;
}

void ResourceConfigItem::SetResourceLoc(const ResourceLoc& _resourceLoc)
{
    m_resourceLoc = _resourceLoc;
    m_resourceLocHasBeenSet = true;
}

bool ResourceConfigItem::ResourceLocHasBeenSet() const
{
    return m_resourceLocHasBeenSet;
}

string ResourceConfigItem::GetCreateTime() const
{
    return m_createTime;
}

void ResourceConfigItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ResourceConfigItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t ResourceConfigItem::GetVersion() const
{
    return m_version;
}

void ResourceConfigItem::SetVersion(const int64_t& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ResourceConfigItem::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string ResourceConfigItem::GetRemark() const
{
    return m_remark;
}

void ResourceConfigItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ResourceConfigItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t ResourceConfigItem::GetStatus() const
{
    return m_status;
}

void ResourceConfigItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ResourceConfigItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ResourceConfigItem::GetRefJobCount() const
{
    return m_refJobCount;
}

void ResourceConfigItem::SetRefJobCount(const int64_t& _refJobCount)
{
    m_refJobCount = _refJobCount;
    m_refJobCountHasBeenSet = true;
}

bool ResourceConfigItem::RefJobCountHasBeenSet() const
{
    return m_refJobCountHasBeenSet;
}

