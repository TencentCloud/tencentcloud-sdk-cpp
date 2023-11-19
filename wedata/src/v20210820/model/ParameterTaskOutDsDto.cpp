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

#include <tencentcloud/wedata/v20210820/model/ParameterTaskOutDsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ParameterTaskOutDsDto::ParameterTaskOutDsDto() :
    m_idHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_paramKeyHasBeenSet(false),
    m_paramDescHasBeenSet(false),
    m_paramDefineHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false)
{
}

CoreInternalOutcome ParameterTaskOutDsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTaskOutDsDto.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTaskOutDsDto.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("ParamKey") && !value["ParamKey"].IsNull())
    {
        if (!value["ParamKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTaskOutDsDto.ParamKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramKey = string(value["ParamKey"].GetString());
        m_paramKeyHasBeenSet = true;
    }

    if (value.HasMember("ParamDesc") && !value["ParamDesc"].IsNull())
    {
        if (!value["ParamDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTaskOutDsDto.ParamDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramDesc = string(value["ParamDesc"].GetString());
        m_paramDescHasBeenSet = true;
    }

    if (value.HasMember("ParamDefine") && !value["ParamDefine"].IsNull())
    {
        if (!value["ParamDefine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTaskOutDsDto.ParamDefine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramDefine = string(value["ParamDefine"].GetString());
        m_paramDefineHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTaskOutDsDto.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTaskOutDsDto.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTaskOutDsDto.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTaskOutDsDto.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTaskOutDsDto.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParameterTaskOutDsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_paramKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramKey.c_str(), allocator).Move(), allocator);
    }

    if (m_paramDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_paramDefineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamDefine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramDefine.c_str(), allocator).Move(), allocator);
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

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
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

}


int64_t ParameterTaskOutDsDto::GetId() const
{
    return m_id;
}

void ParameterTaskOutDsDto::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ParameterTaskOutDsDto::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ParameterTaskOutDsDto::GetTaskId() const
{
    return m_taskId;
}

void ParameterTaskOutDsDto::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ParameterTaskOutDsDto::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ParameterTaskOutDsDto::GetParamKey() const
{
    return m_paramKey;
}

void ParameterTaskOutDsDto::SetParamKey(const string& _paramKey)
{
    m_paramKey = _paramKey;
    m_paramKeyHasBeenSet = true;
}

bool ParameterTaskOutDsDto::ParamKeyHasBeenSet() const
{
    return m_paramKeyHasBeenSet;
}

string ParameterTaskOutDsDto::GetParamDesc() const
{
    return m_paramDesc;
}

void ParameterTaskOutDsDto::SetParamDesc(const string& _paramDesc)
{
    m_paramDesc = _paramDesc;
    m_paramDescHasBeenSet = true;
}

bool ParameterTaskOutDsDto::ParamDescHasBeenSet() const
{
    return m_paramDescHasBeenSet;
}

string ParameterTaskOutDsDto::GetParamDefine() const
{
    return m_paramDefine;
}

void ParameterTaskOutDsDto::SetParamDefine(const string& _paramDefine)
{
    m_paramDefine = _paramDefine;
    m_paramDefineHasBeenSet = true;
}

bool ParameterTaskOutDsDto::ParamDefineHasBeenSet() const
{
    return m_paramDefineHasBeenSet;
}

string ParameterTaskOutDsDto::GetCreateTime() const
{
    return m_createTime;
}

void ParameterTaskOutDsDto::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ParameterTaskOutDsDto::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ParameterTaskOutDsDto::GetUpdateTime() const
{
    return m_updateTime;
}

void ParameterTaskOutDsDto::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ParameterTaskOutDsDto::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ParameterTaskOutDsDto::GetTaskName() const
{
    return m_taskName;
}

void ParameterTaskOutDsDto::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool ParameterTaskOutDsDto::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string ParameterTaskOutDsDto::GetProjectId() const
{
    return m_projectId;
}

void ParameterTaskOutDsDto::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ParameterTaskOutDsDto::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ParameterTaskOutDsDto::GetProjectName() const
{
    return m_projectName;
}

void ParameterTaskOutDsDto::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool ParameterTaskOutDsDto::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

