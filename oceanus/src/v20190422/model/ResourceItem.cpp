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
    m_refJobCountHasBeenSet(false),
    m_isJobRunHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false),
    m_refJobStatusCountSetHasBeenSet(false),
    m_connectorHasBeenSet(false),
    m_connectorVersionHasBeenSet(false),
    m_connectionMethodHasBeenSet(false),
    m_relatedResourceIdHasBeenSet(false),
    m_iconHasBeenSet(false),
    m_connectorNameHasBeenSet(false),
    m_connectorUrlHasBeenSet(false)
{
}

CoreInternalOutcome ResourceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.ResourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = value["ResourceType"].GetUint64();
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceLoc") && !value["ResourceLoc"].IsNull())
    {
        if (!value["ResourceLoc"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.ResourceLoc` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ResourceItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.CreatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = string(value["CreatorUin"].GetString());
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestResourceConfigVersion") && !value["LatestResourceConfigVersion"].IsNull())
    {
        if (!value["LatestResourceConfigVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.LatestResourceConfigVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_latestResourceConfigVersion = value["LatestResourceConfigVersion"].GetInt64();
        m_latestResourceConfigVersionHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("VersionCount") && !value["VersionCount"].IsNull())
    {
        if (!value["VersionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.VersionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_versionCount = value["VersionCount"].GetInt64();
        m_versionCountHasBeenSet = true;
    }

    if (value.HasMember("RefJobCount") && !value["RefJobCount"].IsNull())
    {
        if (!value["RefJobCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.RefJobCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_refJobCount = value["RefJobCount"].GetInt64();
        m_refJobCountHasBeenSet = true;
    }

    if (value.HasMember("IsJobRun") && !value["IsJobRun"].IsNull())
    {
        if (!value["IsJobRun"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.IsJobRun` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isJobRun = value["IsJobRun"].GetInt64();
        m_isJobRunHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("WorkSpaceId") && !value["WorkSpaceId"].IsNull())
    {
        if (!value["WorkSpaceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.WorkSpaceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workSpaceId = value["WorkSpaceId"].GetInt64();
        m_workSpaceIdHasBeenSet = true;
    }

    if (value.HasMember("RefJobStatusCountSet") && !value["RefJobStatusCountSet"].IsNull())
    {
        if (!value["RefJobStatusCountSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceItem.RefJobStatusCountSet` is not array type"));

        const rapidjson::Value &tmpValue = value["RefJobStatusCountSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RefJobStatusCountItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_refJobStatusCountSet.push_back(item);
        }
        m_refJobStatusCountSetHasBeenSet = true;
    }

    if (value.HasMember("Connector") && !value["Connector"].IsNull())
    {
        if (!value["Connector"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.Connector` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connector = string(value["Connector"].GetString());
        m_connectorHasBeenSet = true;
    }

    if (value.HasMember("ConnectorVersion") && !value["ConnectorVersion"].IsNull())
    {
        if (!value["ConnectorVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.ConnectorVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectorVersion = string(value["ConnectorVersion"].GetString());
        m_connectorVersionHasBeenSet = true;
    }

    if (value.HasMember("ConnectionMethod") && !value["ConnectionMethod"].IsNull())
    {
        if (!value["ConnectionMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.ConnectionMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectionMethod = string(value["ConnectionMethod"].GetString());
        m_connectionMethodHasBeenSet = true;
    }

    if (value.HasMember("RelatedResourceId") && !value["RelatedResourceId"].IsNull())
    {
        if (!value["RelatedResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.RelatedResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relatedResourceId = string(value["RelatedResourceId"].GetString());
        m_relatedResourceIdHasBeenSet = true;
    }

    if (value.HasMember("Icon") && !value["Icon"].IsNull())
    {
        if (!value["Icon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.Icon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_icon = string(value["Icon"].GetString());
        m_iconHasBeenSet = true;
    }

    if (value.HasMember("ConnectorName") && !value["ConnectorName"].IsNull())
    {
        if (!value["ConnectorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.ConnectorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectorName = string(value["ConnectorName"].GetString());
        m_connectorNameHasBeenSet = true;
    }

    if (value.HasMember("ConnectorUrl") && !value["ConnectorUrl"].IsNull())
    {
        if (!value["ConnectorUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.ConnectorUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectorUrl = string(value["ConnectorUrl"].GetString());
        m_connectorUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceType, allocator);
    }

    if (m_resourceLocHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceLoc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceLoc.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorUin.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestResourceConfigVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestResourceConfigVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latestResourceConfigVersion, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_versionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_versionCount, allocator);
    }

    if (m_refJobCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefJobCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refJobCount, allocator);
    }

    if (m_isJobRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsJobRun";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isJobRun, allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_workSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workSpaceId, allocator);
    }

    if (m_refJobStatusCountSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefJobStatusCountSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_refJobStatusCountSet.begin(); itr != m_refJobStatusCountSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_connectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Connector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connector.c_str(), allocator).Move(), allocator);
    }

    if (m_connectorVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectorVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectorVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectionMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_relatedResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relatedResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_iconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Icon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_icon.c_str(), allocator).Move(), allocator);
    }

    if (m_connectorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectorName.c_str(), allocator).Move(), allocator);
    }

    if (m_connectorUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectorUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectorUrl.c_str(), allocator).Move(), allocator);
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

int64_t ResourceItem::GetIsJobRun() const
{
    return m_isJobRun;
}

void ResourceItem::SetIsJobRun(const int64_t& _isJobRun)
{
    m_isJobRun = _isJobRun;
    m_isJobRunHasBeenSet = true;
}

bool ResourceItem::IsJobRunHasBeenSet() const
{
    return m_isJobRunHasBeenSet;
}

string ResourceItem::GetFileName() const
{
    return m_fileName;
}

void ResourceItem::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ResourceItem::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

int64_t ResourceItem::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void ResourceItem::SetWorkSpaceId(const int64_t& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool ResourceItem::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}

vector<RefJobStatusCountItem> ResourceItem::GetRefJobStatusCountSet() const
{
    return m_refJobStatusCountSet;
}

void ResourceItem::SetRefJobStatusCountSet(const vector<RefJobStatusCountItem>& _refJobStatusCountSet)
{
    m_refJobStatusCountSet = _refJobStatusCountSet;
    m_refJobStatusCountSetHasBeenSet = true;
}

bool ResourceItem::RefJobStatusCountSetHasBeenSet() const
{
    return m_refJobStatusCountSetHasBeenSet;
}

string ResourceItem::GetConnector() const
{
    return m_connector;
}

void ResourceItem::SetConnector(const string& _connector)
{
    m_connector = _connector;
    m_connectorHasBeenSet = true;
}

bool ResourceItem::ConnectorHasBeenSet() const
{
    return m_connectorHasBeenSet;
}

string ResourceItem::GetConnectorVersion() const
{
    return m_connectorVersion;
}

void ResourceItem::SetConnectorVersion(const string& _connectorVersion)
{
    m_connectorVersion = _connectorVersion;
    m_connectorVersionHasBeenSet = true;
}

bool ResourceItem::ConnectorVersionHasBeenSet() const
{
    return m_connectorVersionHasBeenSet;
}

string ResourceItem::GetConnectionMethod() const
{
    return m_connectionMethod;
}

void ResourceItem::SetConnectionMethod(const string& _connectionMethod)
{
    m_connectionMethod = _connectionMethod;
    m_connectionMethodHasBeenSet = true;
}

bool ResourceItem::ConnectionMethodHasBeenSet() const
{
    return m_connectionMethodHasBeenSet;
}

string ResourceItem::GetRelatedResourceId() const
{
    return m_relatedResourceId;
}

void ResourceItem::SetRelatedResourceId(const string& _relatedResourceId)
{
    m_relatedResourceId = _relatedResourceId;
    m_relatedResourceIdHasBeenSet = true;
}

bool ResourceItem::RelatedResourceIdHasBeenSet() const
{
    return m_relatedResourceIdHasBeenSet;
}

string ResourceItem::GetIcon() const
{
    return m_icon;
}

void ResourceItem::SetIcon(const string& _icon)
{
    m_icon = _icon;
    m_iconHasBeenSet = true;
}

bool ResourceItem::IconHasBeenSet() const
{
    return m_iconHasBeenSet;
}

string ResourceItem::GetConnectorName() const
{
    return m_connectorName;
}

void ResourceItem::SetConnectorName(const string& _connectorName)
{
    m_connectorName = _connectorName;
    m_connectorNameHasBeenSet = true;
}

bool ResourceItem::ConnectorNameHasBeenSet() const
{
    return m_connectorNameHasBeenSet;
}

string ResourceItem::GetConnectorUrl() const
{
    return m_connectorUrl;
}

void ResourceItem::SetConnectorUrl(const string& _connectorUrl)
{
    m_connectorUrl = _connectorUrl;
    m_connectorUrlHasBeenSet = true;
}

bool ResourceItem::ConnectorUrlHasBeenSet() const
{
    return m_connectorUrlHasBeenSet;
}

