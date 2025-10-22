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

#include <tencentcloud/wedata/v20250806/model/SQLScript.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

SQLScript::SQLScript() :
    m_scriptIdHasBeenSet(false),
    m_scriptNameHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_parentFolderPathHasBeenSet(false),
    m_scriptConfigHasBeenSet(false),
    m_scriptContentHasBeenSet(false),
    m_updateUserUinHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_accessScopeHasBeenSet(false),
    m_pathHasBeenSet(false)
{
}

CoreInternalOutcome SQLScript::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScriptId") && !value["ScriptId"].IsNull())
    {
        if (!value["ScriptId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLScript.ScriptId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scriptId = string(value["ScriptId"].GetString());
        m_scriptIdHasBeenSet = true;
    }

    if (value.HasMember("ScriptName") && !value["ScriptName"].IsNull())
    {
        if (!value["ScriptName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLScript.ScriptName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scriptName = string(value["ScriptName"].GetString());
        m_scriptNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLScript.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("ParentFolderPath") && !value["ParentFolderPath"].IsNull())
    {
        if (!value["ParentFolderPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLScript.ParentFolderPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentFolderPath = string(value["ParentFolderPath"].GetString());
        m_parentFolderPathHasBeenSet = true;
    }

    if (value.HasMember("ScriptConfig") && !value["ScriptConfig"].IsNull())
    {
        if (!value["ScriptConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SQLScript.ScriptConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scriptConfig.Deserialize(value["ScriptConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scriptConfigHasBeenSet = true;
    }

    if (value.HasMember("ScriptContent") && !value["ScriptContent"].IsNull())
    {
        if (!value["ScriptContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLScript.ScriptContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scriptContent = string(value["ScriptContent"].GetString());
        m_scriptContentHasBeenSet = true;
    }

    if (value.HasMember("UpdateUserUin") && !value["UpdateUserUin"].IsNull())
    {
        if (!value["UpdateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLScript.UpdateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUserUin = string(value["UpdateUserUin"].GetString());
        m_updateUserUinHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLScript.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLScript.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLScript.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AccessScope") && !value["AccessScope"].IsNull())
    {
        if (!value["AccessScope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLScript.AccessScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessScope = string(value["AccessScope"].GetString());
        m_accessScopeHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLScript.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SQLScript::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scriptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scriptId.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scriptName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_parentFolderPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentFolderPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentFolderPath.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scriptConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scriptContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scriptContent.c_str(), allocator).Move(), allocator);
    }

    if (m_updateUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateUserUin.c_str(), allocator).Move(), allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_accessScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessScope.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

}


string SQLScript::GetScriptId() const
{
    return m_scriptId;
}

void SQLScript::SetScriptId(const string& _scriptId)
{
    m_scriptId = _scriptId;
    m_scriptIdHasBeenSet = true;
}

bool SQLScript::ScriptIdHasBeenSet() const
{
    return m_scriptIdHasBeenSet;
}

string SQLScript::GetScriptName() const
{
    return m_scriptName;
}

void SQLScript::SetScriptName(const string& _scriptName)
{
    m_scriptName = _scriptName;
    m_scriptNameHasBeenSet = true;
}

bool SQLScript::ScriptNameHasBeenSet() const
{
    return m_scriptNameHasBeenSet;
}

string SQLScript::GetOwnerUin() const
{
    return m_ownerUin;
}

void SQLScript::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool SQLScript::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string SQLScript::GetParentFolderPath() const
{
    return m_parentFolderPath;
}

void SQLScript::SetParentFolderPath(const string& _parentFolderPath)
{
    m_parentFolderPath = _parentFolderPath;
    m_parentFolderPathHasBeenSet = true;
}

bool SQLScript::ParentFolderPathHasBeenSet() const
{
    return m_parentFolderPathHasBeenSet;
}

SQLScriptConfig SQLScript::GetScriptConfig() const
{
    return m_scriptConfig;
}

void SQLScript::SetScriptConfig(const SQLScriptConfig& _scriptConfig)
{
    m_scriptConfig = _scriptConfig;
    m_scriptConfigHasBeenSet = true;
}

bool SQLScript::ScriptConfigHasBeenSet() const
{
    return m_scriptConfigHasBeenSet;
}

string SQLScript::GetScriptContent() const
{
    return m_scriptContent;
}

void SQLScript::SetScriptContent(const string& _scriptContent)
{
    m_scriptContent = _scriptContent;
    m_scriptContentHasBeenSet = true;
}

bool SQLScript::ScriptContentHasBeenSet() const
{
    return m_scriptContentHasBeenSet;
}

string SQLScript::GetUpdateUserUin() const
{
    return m_updateUserUin;
}

void SQLScript::SetUpdateUserUin(const string& _updateUserUin)
{
    m_updateUserUin = _updateUserUin;
    m_updateUserUinHasBeenSet = true;
}

bool SQLScript::UpdateUserUinHasBeenSet() const
{
    return m_updateUserUinHasBeenSet;
}

string SQLScript::GetProjectId() const
{
    return m_projectId;
}

void SQLScript::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SQLScript::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string SQLScript::GetUpdateTime() const
{
    return m_updateTime;
}

void SQLScript::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SQLScript::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string SQLScript::GetCreateTime() const
{
    return m_createTime;
}

void SQLScript::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SQLScript::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SQLScript::GetAccessScope() const
{
    return m_accessScope;
}

void SQLScript::SetAccessScope(const string& _accessScope)
{
    m_accessScope = _accessScope;
    m_accessScopeHasBeenSet = true;
}

bool SQLScript::AccessScopeHasBeenSet() const
{
    return m_accessScopeHasBeenSet;
}

string SQLScript::GetPath() const
{
    return m_path;
}

void SQLScript::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool SQLScript::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

