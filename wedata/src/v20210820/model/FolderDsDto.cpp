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

#include <tencentcloud/wedata/v20210820/model/FolderDsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

FolderDsDto::FolderDsDto() :
    m_idHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_parentsFolderIdHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_workflowsHasBeenSet(false),
    m_totalFoldersHasBeenSet(false),
    m_foldersHasBeenSet(false),
    m_findTypeHasBeenSet(false)
{
}

CoreInternalOutcome FolderDsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FolderDsDto.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FolderDsDto.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FolderDsDto.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FolderDsDto.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FolderDsDto.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ParentsFolderId") && !value["ParentsFolderId"].IsNull())
    {
        if (!value["ParentsFolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FolderDsDto.ParentsFolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentsFolderId = string(value["ParentsFolderId"].GetString());
        m_parentsFolderIdHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FolderDsDto.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Workflows") && !value["Workflows"].IsNull())
    {
        if (!value["Workflows"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FolderDsDto.Workflows` is not array type"));

        const rapidjson::Value &tmpValue = value["Workflows"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WorkflowCanvasOpsDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_workflows.push_back(item);
        }
        m_workflowsHasBeenSet = true;
    }

    if (value.HasMember("TotalFolders") && !value["TotalFolders"].IsNull())
    {
        if (!value["TotalFolders"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FolderDsDto.TotalFolders` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalFolders = value["TotalFolders"].GetInt64();
        m_totalFoldersHasBeenSet = true;
    }

    if (value.HasMember("Folders") && !value["Folders"].IsNull())
    {
        if (!value["Folders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FolderDsDto.Folders` is not array type"));

        const rapidjson::Value &tmpValue = value["Folders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FolderDsDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_folders.push_back(item);
        }
        m_foldersHasBeenSet = true;
    }

    if (value.HasMember("FindType") && !value["FindType"].IsNull())
    {
        if (!value["FindType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FolderDsDto.FindType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_findType = string(value["FindType"].GetString());
        m_findTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FolderDsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_parentsFolderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentsFolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentsFolderId.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_workflowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Workflows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_workflows.begin(); itr != m_workflows.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalFoldersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalFolders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalFolders, allocator);
    }

    if (m_foldersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Folders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_folders.begin(); itr != m_folders.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_findTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FindType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_findType.c_str(), allocator).Move(), allocator);
    }

}


string FolderDsDto::GetId() const
{
    return m_id;
}

void FolderDsDto::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool FolderDsDto::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string FolderDsDto::GetCreateTime() const
{
    return m_createTime;
}

void FolderDsDto::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool FolderDsDto::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string FolderDsDto::GetName() const
{
    return m_name;
}

void FolderDsDto::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool FolderDsDto::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string FolderDsDto::GetProjectId() const
{
    return m_projectId;
}

void FolderDsDto::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool FolderDsDto::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string FolderDsDto::GetUpdateTime() const
{
    return m_updateTime;
}

void FolderDsDto::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool FolderDsDto::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string FolderDsDto::GetParentsFolderId() const
{
    return m_parentsFolderId;
}

void FolderDsDto::SetParentsFolderId(const string& _parentsFolderId)
{
    m_parentsFolderId = _parentsFolderId;
    m_parentsFolderIdHasBeenSet = true;
}

bool FolderDsDto::ParentsFolderIdHasBeenSet() const
{
    return m_parentsFolderIdHasBeenSet;
}

int64_t FolderDsDto::GetTotal() const
{
    return m_total;
}

void FolderDsDto::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool FolderDsDto::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<WorkflowCanvasOpsDto> FolderDsDto::GetWorkflows() const
{
    return m_workflows;
}

void FolderDsDto::SetWorkflows(const vector<WorkflowCanvasOpsDto>& _workflows)
{
    m_workflows = _workflows;
    m_workflowsHasBeenSet = true;
}

bool FolderDsDto::WorkflowsHasBeenSet() const
{
    return m_workflowsHasBeenSet;
}

int64_t FolderDsDto::GetTotalFolders() const
{
    return m_totalFolders;
}

void FolderDsDto::SetTotalFolders(const int64_t& _totalFolders)
{
    m_totalFolders = _totalFolders;
    m_totalFoldersHasBeenSet = true;
}

bool FolderDsDto::TotalFoldersHasBeenSet() const
{
    return m_totalFoldersHasBeenSet;
}

vector<FolderDsDto> FolderDsDto::GetFolders() const
{
    return m_folders;
}

void FolderDsDto::SetFolders(const vector<FolderDsDto>& _folders)
{
    m_folders = _folders;
    m_foldersHasBeenSet = true;
}

bool FolderDsDto::FoldersHasBeenSet() const
{
    return m_foldersHasBeenSet;
}

string FolderDsDto::GetFindType() const
{
    return m_findType;
}

void FolderDsDto::SetFindType(const string& _findType)
{
    m_findType = _findType;
    m_findTypeHasBeenSet = true;
}

bool FolderDsDto::FindTypeHasBeenSet() const
{
    return m_findTypeHasBeenSet;
}

