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

#include <tencentcloud/wedata/v20210820/model/Project.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

Project::Project() :
    m_tenantIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_tenantHasBeenSet(false),
    m_adminUsersHasBeenSet(false),
    m_clustersHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_secondModuleListHasBeenSet(false),
    m_ownerHasBeenSet(false)
{
}

CoreInternalOutcome Project::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TenantId") && !value["TenantId"].IsNull())
    {
        if (!value["TenantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.TenantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tenantId = string(value["TenantId"].GetString());
        m_tenantIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Creator` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_creator.Deserialize(value["Creator"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("Tenant") && !value["Tenant"].IsNull())
    {
        if (!value["Tenant"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Tenant` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tenant.Deserialize(value["Tenant"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tenantHasBeenSet = true;
    }

    if (value.HasMember("AdminUsers") && !value["AdminUsers"].IsNull())
    {
        if (!value["AdminUsers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Project.AdminUsers` is not array type"));

        const rapidjson::Value &tmpValue = value["AdminUsers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BaseUser item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_adminUsers.push_back(item);
        }
        m_adminUsersHasBeenSet = true;
    }

    if (value.HasMember("Clusters") && !value["Clusters"].IsNull())
    {
        if (!value["Clusters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Project.Clusters` is not array type"));

        const rapidjson::Value &tmpValue = value["Clusters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BaseClusterInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clusters.push_back(item);
        }
        m_clustersHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Params` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_params = string(value["Params"].GetString());
        m_paramsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("SecondModuleList") && !value["SecondModuleList"].IsNull())
    {
        if (!value["SecondModuleList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Project.SecondModuleList` is not array type"));

        const rapidjson::Value &tmpValue = value["SecondModuleList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_secondModuleList.push_back((*itr).GetString());
        }
        m_secondModuleListHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Owner` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_owner.Deserialize(value["Owner"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Project::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tenantId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_creator.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tenantHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tenant";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tenant.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_adminUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_adminUsers.begin(); itr != m_adminUsers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_clustersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Clusters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusters.begin(); itr != m_clusters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_params.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_secondModuleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondModuleList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_secondModuleList.begin(); itr != m_secondModuleList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_owner.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Project::GetTenantId() const
{
    return m_tenantId;
}

void Project::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool Project::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

string Project::GetProjectId() const
{
    return m_projectId;
}

void Project::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Project::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string Project::GetProjectName() const
{
    return m_projectName;
}

void Project::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool Project::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string Project::GetDisplayName() const
{
    return m_displayName;
}

void Project::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool Project::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string Project::GetRegion() const
{
    return m_region;
}

void Project::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool Project::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string Project::GetDescription() const
{
    return m_description;
}

void Project::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Project::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Project::GetCreateTime() const
{
    return m_createTime;
}

void Project::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Project::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

BaseUser Project::GetCreator() const
{
    return m_creator;
}

void Project::SetCreator(const BaseUser& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool Project::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

BaseTenant Project::GetTenant() const
{
    return m_tenant;
}

void Project::SetTenant(const BaseTenant& _tenant)
{
    m_tenant = _tenant;
    m_tenantHasBeenSet = true;
}

bool Project::TenantHasBeenSet() const
{
    return m_tenantHasBeenSet;
}

vector<BaseUser> Project::GetAdminUsers() const
{
    return m_adminUsers;
}

void Project::SetAdminUsers(const vector<BaseUser>& _adminUsers)
{
    m_adminUsers = _adminUsers;
    m_adminUsersHasBeenSet = true;
}

bool Project::AdminUsersHasBeenSet() const
{
    return m_adminUsersHasBeenSet;
}

vector<BaseClusterInfo> Project::GetClusters() const
{
    return m_clusters;
}

void Project::SetClusters(const vector<BaseClusterInfo>& _clusters)
{
    m_clusters = _clusters;
    m_clustersHasBeenSet = true;
}

bool Project::ClustersHasBeenSet() const
{
    return m_clustersHasBeenSet;
}

string Project::GetParams() const
{
    return m_params;
}

void Project::SetParams(const string& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool Project::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

uint64_t Project::GetStatus() const
{
    return m_status;
}

void Project::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Project::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Project::GetModel() const
{
    return m_model;
}

void Project::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool Project::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

vector<string> Project::GetSecondModuleList() const
{
    return m_secondModuleList;
}

void Project::SetSecondModuleList(const vector<string>& _secondModuleList)
{
    m_secondModuleList = _secondModuleList;
    m_secondModuleListHasBeenSet = true;
}

bool Project::SecondModuleListHasBeenSet() const
{
    return m_secondModuleListHasBeenSet;
}

BaseUser Project::GetOwner() const
{
    return m_owner;
}

void Project::SetOwner(const BaseUser& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool Project::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

