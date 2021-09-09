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

#include <tencentcloud/tcb/v20180608/model/CodeSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CodeSource::CodeSource() :
    m_typeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_workDirHasBeenSet(false),
    m_codingPackageNameHasBeenSet(false),
    m_codingPackageVersionHasBeenSet(false),
    m_rawCodeHasBeenSet(false),
    m_branchHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false)
{
}

CoreInternalOutcome CodeSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSource.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSource.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSource.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("WorkDir") && !value["WorkDir"].IsNull())
    {
        if (!value["WorkDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSource.WorkDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workDir = string(value["WorkDir"].GetString());
        m_workDirHasBeenSet = true;
    }

    if (value.HasMember("CodingPackageName") && !value["CodingPackageName"].IsNull())
    {
        if (!value["CodingPackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSource.CodingPackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codingPackageName = string(value["CodingPackageName"].GetString());
        m_codingPackageNameHasBeenSet = true;
    }

    if (value.HasMember("CodingPackageVersion") && !value["CodingPackageVersion"].IsNull())
    {
        if (!value["CodingPackageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSource.CodingPackageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codingPackageVersion = string(value["CodingPackageVersion"].GetString());
        m_codingPackageVersionHasBeenSet = true;
    }

    if (value.HasMember("RawCode") && !value["RawCode"].IsNull())
    {
        if (!value["RawCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSource.RawCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rawCode = string(value["RawCode"].GetString());
        m_rawCodeHasBeenSet = true;
    }

    if (value.HasMember("Branch") && !value["Branch"].IsNull())
    {
        if (!value["Branch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSource.Branch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_branch = string(value["Branch"].GetString());
        m_branchHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSource.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSource.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CodeSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_workDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workDir.c_str(), allocator).Move(), allocator);
    }

    if (m_codingPackageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodingPackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codingPackageName.c_str(), allocator).Move(), allocator);
    }

    if (m_codingPackageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodingPackageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codingPackageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_rawCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RawCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rawCode.c_str(), allocator).Move(), allocator);
    }

    if (m_branchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Branch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_branch.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

}


string CodeSource::GetType() const
{
    return m_type;
}

void CodeSource::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CodeSource::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CodeSource::GetUrl() const
{
    return m_url;
}

void CodeSource::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CodeSource::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string CodeSource::GetName() const
{
    return m_name;
}

void CodeSource::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CodeSource::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CodeSource::GetWorkDir() const
{
    return m_workDir;
}

void CodeSource::SetWorkDir(const string& _workDir)
{
    m_workDir = _workDir;
    m_workDirHasBeenSet = true;
}

bool CodeSource::WorkDirHasBeenSet() const
{
    return m_workDirHasBeenSet;
}

string CodeSource::GetCodingPackageName() const
{
    return m_codingPackageName;
}

void CodeSource::SetCodingPackageName(const string& _codingPackageName)
{
    m_codingPackageName = _codingPackageName;
    m_codingPackageNameHasBeenSet = true;
}

bool CodeSource::CodingPackageNameHasBeenSet() const
{
    return m_codingPackageNameHasBeenSet;
}

string CodeSource::GetCodingPackageVersion() const
{
    return m_codingPackageVersion;
}

void CodeSource::SetCodingPackageVersion(const string& _codingPackageVersion)
{
    m_codingPackageVersion = _codingPackageVersion;
    m_codingPackageVersionHasBeenSet = true;
}

bool CodeSource::CodingPackageVersionHasBeenSet() const
{
    return m_codingPackageVersionHasBeenSet;
}

string CodeSource::GetRawCode() const
{
    return m_rawCode;
}

void CodeSource::SetRawCode(const string& _rawCode)
{
    m_rawCode = _rawCode;
    m_rawCodeHasBeenSet = true;
}

bool CodeSource::RawCodeHasBeenSet() const
{
    return m_rawCodeHasBeenSet;
}

string CodeSource::GetBranch() const
{
    return m_branch;
}

void CodeSource::SetBranch(const string& _branch)
{
    m_branch = _branch;
    m_branchHasBeenSet = true;
}

bool CodeSource::BranchHasBeenSet() const
{
    return m_branchHasBeenSet;
}

int64_t CodeSource::GetProjectId() const
{
    return m_projectId;
}

void CodeSource::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CodeSource::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CodeSource::GetProjectName() const
{
    return m_projectName;
}

void CodeSource::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool CodeSource::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

