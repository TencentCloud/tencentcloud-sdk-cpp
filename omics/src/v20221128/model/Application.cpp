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

#include <tencentcloud/omics/v20221128/model/Application.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

Application::Application() :
    m_applicationIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_entrypointHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_creatorIdHasBeenSet(false),
    m_versionCountHasBeenSet(false),
    m_versionsHasBeenSet(false),
    m_gitSourceHasBeenSet(false),
    m_runConstraintsHasBeenSet(false),
    m_cosSourceHasBeenSet(false),
    m_sortOrderHasBeenSet(false)
{
}

CoreInternalOutcome Application::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Entrypoint") && !value["Entrypoint"].IsNull())
    {
        if (!value["Entrypoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.Entrypoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entrypoint = string(value["Entrypoint"].GetString());
        m_entrypointHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreatorId") && !value["CreatorId"].IsNull())
    {
        if (!value["CreatorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.CreatorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorId = string(value["CreatorId"].GetString());
        m_creatorIdHasBeenSet = true;
    }

    if (value.HasMember("VersionCount") && !value["VersionCount"].IsNull())
    {
        if (!value["VersionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Application.VersionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_versionCount = value["VersionCount"].GetInt64();
        m_versionCountHasBeenSet = true;
    }

    if (value.HasMember("Versions") && !value["Versions"].IsNull())
    {
        if (!value["Versions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Application.Versions` is not array type"));

        const rapidjson::Value &tmpValue = value["Versions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApplicationVersion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_versions.push_back(item);
        }
        m_versionsHasBeenSet = true;
    }

    if (value.HasMember("GitSource") && !value["GitSource"].IsNull())
    {
        if (!value["GitSource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Application.GitSource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gitSource.Deserialize(value["GitSource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gitSourceHasBeenSet = true;
    }

    if (value.HasMember("RunConstraints") && !value["RunConstraints"].IsNull())
    {
        if (!value["RunConstraints"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Application.RunConstraints` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_runConstraints.Deserialize(value["RunConstraints"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_runConstraintsHasBeenSet = true;
    }

    if (value.HasMember("CosSource") && !value["CosSource"].IsNull())
    {
        if (!value["CosSource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Application.CosSource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cosSource.Deserialize(value["CosSource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosSourceHasBeenSet = true;
    }

    if (value.HasMember("SortOrder") && !value["SortOrder"].IsNull())
    {
        if (!value["SortOrder"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Application.SortOrder` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sortOrder = value["SortOrder"].GetInt64();
        m_sortOrderHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Application::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_entrypointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entrypoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entrypoint.c_str(), allocator).Move(), allocator);
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

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_versionCount, allocator);
    }

    if (m_versionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Versions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_versions.begin(); itr != m_versions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_gitSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GitSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gitSource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_runConstraintsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunConstraints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_runConstraints.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cosSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosSource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sortOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sortOrder, allocator);
    }

}


string Application::GetApplicationId() const
{
    return m_applicationId;
}

void Application::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool Application::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string Application::GetProjectId() const
{
    return m_projectId;
}

void Application::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Application::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string Application::GetName() const
{
    return m_name;
}

void Application::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Application::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Application::GetDescription() const
{
    return m_description;
}

void Application::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Application::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Application::GetType() const
{
    return m_type;
}

void Application::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Application::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Application::GetEntrypoint() const
{
    return m_entrypoint;
}

void Application::SetEntrypoint(const string& _entrypoint)
{
    m_entrypoint = _entrypoint;
    m_entrypointHasBeenSet = true;
}

bool Application::EntrypointHasBeenSet() const
{
    return m_entrypointHasBeenSet;
}

string Application::GetCreateTime() const
{
    return m_createTime;
}

void Application::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Application::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Application::GetUpdateTime() const
{
    return m_updateTime;
}

void Application::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Application::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string Application::GetCreator() const
{
    return m_creator;
}

void Application::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool Application::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string Application::GetCreatorId() const
{
    return m_creatorId;
}

void Application::SetCreatorId(const string& _creatorId)
{
    m_creatorId = _creatorId;
    m_creatorIdHasBeenSet = true;
}

bool Application::CreatorIdHasBeenSet() const
{
    return m_creatorIdHasBeenSet;
}

int64_t Application::GetVersionCount() const
{
    return m_versionCount;
}

void Application::SetVersionCount(const int64_t& _versionCount)
{
    m_versionCount = _versionCount;
    m_versionCountHasBeenSet = true;
}

bool Application::VersionCountHasBeenSet() const
{
    return m_versionCountHasBeenSet;
}

vector<ApplicationVersion> Application::GetVersions() const
{
    return m_versions;
}

void Application::SetVersions(const vector<ApplicationVersion>& _versions)
{
    m_versions = _versions;
    m_versionsHasBeenSet = true;
}

bool Application::VersionsHasBeenSet() const
{
    return m_versionsHasBeenSet;
}

GitInfo Application::GetGitSource() const
{
    return m_gitSource;
}

void Application::SetGitSource(const GitInfo& _gitSource)
{
    m_gitSource = _gitSource;
    m_gitSourceHasBeenSet = true;
}

bool Application::GitSourceHasBeenSet() const
{
    return m_gitSourceHasBeenSet;
}

RunConstraints Application::GetRunConstraints() const
{
    return m_runConstraints;
}

void Application::SetRunConstraints(const RunConstraints& _runConstraints)
{
    m_runConstraints = _runConstraints;
    m_runConstraintsHasBeenSet = true;
}

bool Application::RunConstraintsHasBeenSet() const
{
    return m_runConstraintsHasBeenSet;
}

CosFileInfo Application::GetCosSource() const
{
    return m_cosSource;
}

void Application::SetCosSource(const CosFileInfo& _cosSource)
{
    m_cosSource = _cosSource;
    m_cosSourceHasBeenSet = true;
}

bool Application::CosSourceHasBeenSet() const
{
    return m_cosSourceHasBeenSet;
}

int64_t Application::GetSortOrder() const
{
    return m_sortOrder;
}

void Application::SetSortOrder(const int64_t& _sortOrder)
{
    m_sortOrder = _sortOrder;
    m_sortOrderHasBeenSet = true;
}

bool Application::SortOrderHasBeenSet() const
{
    return m_sortOrderHasBeenSet;
}

