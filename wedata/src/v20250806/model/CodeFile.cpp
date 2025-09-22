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

#include <tencentcloud/wedata/v20250806/model/CodeFile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CodeFile::CodeFile() :
    m_codeFileIdHasBeenSet(false),
    m_codeFileNameHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_codeFileConfigHasBeenSet(false),
    m_codeFileContentHasBeenSet(false),
    m_updateUserUinHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_accessScopeHasBeenSet(false),
    m_pathHasBeenSet(false)
{
}

CoreInternalOutcome CodeFile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CodeFileId") && !value["CodeFileId"].IsNull())
    {
        if (!value["CodeFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeFile.CodeFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeFileId = string(value["CodeFileId"].GetString());
        m_codeFileIdHasBeenSet = true;
    }

    if (value.HasMember("CodeFileName") && !value["CodeFileName"].IsNull())
    {
        if (!value["CodeFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeFile.CodeFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeFileName = string(value["CodeFileName"].GetString());
        m_codeFileNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeFile.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("CodeFileConfig") && !value["CodeFileConfig"].IsNull())
    {
        if (!value["CodeFileConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CodeFile.CodeFileConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_codeFileConfig.Deserialize(value["CodeFileConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_codeFileConfigHasBeenSet = true;
    }

    if (value.HasMember("CodeFileContent") && !value["CodeFileContent"].IsNull())
    {
        if (!value["CodeFileContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeFile.CodeFileContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeFileContent = string(value["CodeFileContent"].GetString());
        m_codeFileContentHasBeenSet = true;
    }

    if (value.HasMember("UpdateUserUin") && !value["UpdateUserUin"].IsNull())
    {
        if (!value["UpdateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeFile.UpdateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUserUin = string(value["UpdateUserUin"].GetString());
        m_updateUserUinHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeFile.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeFile.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeFile.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AccessScope") && !value["AccessScope"].IsNull())
    {
        if (!value["AccessScope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeFile.AccessScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessScope = string(value["AccessScope"].GetString());
        m_accessScopeHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeFile.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CodeFile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_codeFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_codeFileConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeFileConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_codeFileConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_codeFileContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeFileContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeFileContent.c_str(), allocator).Move(), allocator);
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


string CodeFile::GetCodeFileId() const
{
    return m_codeFileId;
}

void CodeFile::SetCodeFileId(const string& _codeFileId)
{
    m_codeFileId = _codeFileId;
    m_codeFileIdHasBeenSet = true;
}

bool CodeFile::CodeFileIdHasBeenSet() const
{
    return m_codeFileIdHasBeenSet;
}

string CodeFile::GetCodeFileName() const
{
    return m_codeFileName;
}

void CodeFile::SetCodeFileName(const string& _codeFileName)
{
    m_codeFileName = _codeFileName;
    m_codeFileNameHasBeenSet = true;
}

bool CodeFile::CodeFileNameHasBeenSet() const
{
    return m_codeFileNameHasBeenSet;
}

string CodeFile::GetOwnerUin() const
{
    return m_ownerUin;
}

void CodeFile::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool CodeFile::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

CodeFileConfig CodeFile::GetCodeFileConfig() const
{
    return m_codeFileConfig;
}

void CodeFile::SetCodeFileConfig(const CodeFileConfig& _codeFileConfig)
{
    m_codeFileConfig = _codeFileConfig;
    m_codeFileConfigHasBeenSet = true;
}

bool CodeFile::CodeFileConfigHasBeenSet() const
{
    return m_codeFileConfigHasBeenSet;
}

string CodeFile::GetCodeFileContent() const
{
    return m_codeFileContent;
}

void CodeFile::SetCodeFileContent(const string& _codeFileContent)
{
    m_codeFileContent = _codeFileContent;
    m_codeFileContentHasBeenSet = true;
}

bool CodeFile::CodeFileContentHasBeenSet() const
{
    return m_codeFileContentHasBeenSet;
}

string CodeFile::GetUpdateUserUin() const
{
    return m_updateUserUin;
}

void CodeFile::SetUpdateUserUin(const string& _updateUserUin)
{
    m_updateUserUin = _updateUserUin;
    m_updateUserUinHasBeenSet = true;
}

bool CodeFile::UpdateUserUinHasBeenSet() const
{
    return m_updateUserUinHasBeenSet;
}

string CodeFile::GetProjectId() const
{
    return m_projectId;
}

void CodeFile::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CodeFile::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CodeFile::GetUpdateTime() const
{
    return m_updateTime;
}

void CodeFile::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CodeFile::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string CodeFile::GetCreateTime() const
{
    return m_createTime;
}

void CodeFile::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CodeFile::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CodeFile::GetAccessScope() const
{
    return m_accessScope;
}

void CodeFile::SetAccessScope(const string& _accessScope)
{
    m_accessScope = _accessScope;
    m_accessScopeHasBeenSet = true;
}

bool CodeFile::AccessScopeHasBeenSet() const
{
    return m_accessScopeHasBeenSet;
}

string CodeFile::GetPath() const
{
    return m_path;
}

void CodeFile::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool CodeFile::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

