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

#include <tencentcloud/wedata/v20210820/model/ParameterTaskInDsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ParameterTaskInDsDto::ParameterTaskInDsDto() :
    m_idHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_paramKeyHasBeenSet(false),
    m_paramDescHasBeenSet(false),
    m_fromTaskIdHasBeenSet(false),
    m_fromParamKeyHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_fromTaskNameHasBeenSet(false),
    m_fromProjectIdHasBeenSet(false),
    m_fromProjectNameHasBeenSet(false)
{
}

CoreInternalOutcome ParameterTaskInDsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTaskInDsDto.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTaskInDsDto.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("ParamKey") && !value["ParamKey"].IsNull())
    {
        if (!value["ParamKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTaskInDsDto.ParamKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramKey = string(value["ParamKey"].GetString());
        m_paramKeyHasBeenSet = true;
    }

    if (value.HasMember("ParamDesc") && !value["ParamDesc"].IsNull())
    {
        if (!value["ParamDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTaskInDsDto.ParamDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramDesc = string(value["ParamDesc"].GetString());
        m_paramDescHasBeenSet = true;
    }

    if (value.HasMember("FromTaskId") && !value["FromTaskId"].IsNull())
    {
        if (!value["FromTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTaskInDsDto.FromTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromTaskId = string(value["FromTaskId"].GetString());
        m_fromTaskIdHasBeenSet = true;
    }

    if (value.HasMember("FromParamKey") && !value["FromParamKey"].IsNull())
    {
        if (!value["FromParamKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTaskInDsDto.FromParamKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromParamKey = string(value["FromParamKey"].GetString());
        m_fromParamKeyHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTaskInDsDto.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTaskInDsDto.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("FromTaskName") && !value["FromTaskName"].IsNull())
    {
        if (!value["FromTaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTaskInDsDto.FromTaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromTaskName = string(value["FromTaskName"].GetString());
        m_fromTaskNameHasBeenSet = true;
    }

    if (value.HasMember("FromProjectId") && !value["FromProjectId"].IsNull())
    {
        if (!value["FromProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTaskInDsDto.FromProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromProjectId = string(value["FromProjectId"].GetString());
        m_fromProjectIdHasBeenSet = true;
    }

    if (value.HasMember("FromProjectName") && !value["FromProjectName"].IsNull())
    {
        if (!value["FromProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterTaskInDsDto.FromProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromProjectName = string(value["FromProjectName"].GetString());
        m_fromProjectNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParameterTaskInDsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_fromTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fromTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_fromParamKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromParamKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fromParamKey.c_str(), allocator).Move(), allocator);
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

    if (m_fromTaskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromTaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fromTaskName.c_str(), allocator).Move(), allocator);
    }

    if (m_fromProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fromProjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_fromProjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fromProjectName.c_str(), allocator).Move(), allocator);
    }

}


int64_t ParameterTaskInDsDto::GetId() const
{
    return m_id;
}

void ParameterTaskInDsDto::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ParameterTaskInDsDto::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ParameterTaskInDsDto::GetTaskId() const
{
    return m_taskId;
}

void ParameterTaskInDsDto::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ParameterTaskInDsDto::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ParameterTaskInDsDto::GetParamKey() const
{
    return m_paramKey;
}

void ParameterTaskInDsDto::SetParamKey(const string& _paramKey)
{
    m_paramKey = _paramKey;
    m_paramKeyHasBeenSet = true;
}

bool ParameterTaskInDsDto::ParamKeyHasBeenSet() const
{
    return m_paramKeyHasBeenSet;
}

string ParameterTaskInDsDto::GetParamDesc() const
{
    return m_paramDesc;
}

void ParameterTaskInDsDto::SetParamDesc(const string& _paramDesc)
{
    m_paramDesc = _paramDesc;
    m_paramDescHasBeenSet = true;
}

bool ParameterTaskInDsDto::ParamDescHasBeenSet() const
{
    return m_paramDescHasBeenSet;
}

string ParameterTaskInDsDto::GetFromTaskId() const
{
    return m_fromTaskId;
}

void ParameterTaskInDsDto::SetFromTaskId(const string& _fromTaskId)
{
    m_fromTaskId = _fromTaskId;
    m_fromTaskIdHasBeenSet = true;
}

bool ParameterTaskInDsDto::FromTaskIdHasBeenSet() const
{
    return m_fromTaskIdHasBeenSet;
}

string ParameterTaskInDsDto::GetFromParamKey() const
{
    return m_fromParamKey;
}

void ParameterTaskInDsDto::SetFromParamKey(const string& _fromParamKey)
{
    m_fromParamKey = _fromParamKey;
    m_fromParamKeyHasBeenSet = true;
}

bool ParameterTaskInDsDto::FromParamKeyHasBeenSet() const
{
    return m_fromParamKeyHasBeenSet;
}

string ParameterTaskInDsDto::GetCreateTime() const
{
    return m_createTime;
}

void ParameterTaskInDsDto::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ParameterTaskInDsDto::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ParameterTaskInDsDto::GetUpdateTime() const
{
    return m_updateTime;
}

void ParameterTaskInDsDto::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ParameterTaskInDsDto::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ParameterTaskInDsDto::GetFromTaskName() const
{
    return m_fromTaskName;
}

void ParameterTaskInDsDto::SetFromTaskName(const string& _fromTaskName)
{
    m_fromTaskName = _fromTaskName;
    m_fromTaskNameHasBeenSet = true;
}

bool ParameterTaskInDsDto::FromTaskNameHasBeenSet() const
{
    return m_fromTaskNameHasBeenSet;
}

string ParameterTaskInDsDto::GetFromProjectId() const
{
    return m_fromProjectId;
}

void ParameterTaskInDsDto::SetFromProjectId(const string& _fromProjectId)
{
    m_fromProjectId = _fromProjectId;
    m_fromProjectIdHasBeenSet = true;
}

bool ParameterTaskInDsDto::FromProjectIdHasBeenSet() const
{
    return m_fromProjectIdHasBeenSet;
}

string ParameterTaskInDsDto::GetFromProjectName() const
{
    return m_fromProjectName;
}

void ParameterTaskInDsDto::SetFromProjectName(const string& _fromProjectName)
{
    m_fromProjectName = _fromProjectName;
    m_fromProjectNameHasBeenSet = true;
}

bool ParameterTaskInDsDto::FromProjectNameHasBeenSet() const
{
    return m_fromProjectNameHasBeenSet;
}

