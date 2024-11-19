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

#include <tencentcloud/omics/v20221128/model/ApplicationVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

ApplicationVersion::ApplicationVersion() :
    m_typeHasBeenSet(false),
    m_applicationVersionIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_entrypointHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_creatorNameHasBeenSet(false),
    m_creatorIdHasBeenSet(false),
    m_gitInfoHasBeenSet(false),
    m_gitSourceHasBeenSet(false),
    m_cosSourceHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationVersion.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationVersionId") && !value["ApplicationVersionId"].IsNull())
    {
        if (!value["ApplicationVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationVersion.ApplicationVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationVersionId = string(value["ApplicationVersionId"].GetString());
        m_applicationVersionIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationVersion.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationVersion.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Entrypoint") && !value["Entrypoint"].IsNull())
    {
        if (!value["Entrypoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationVersion.Entrypoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entrypoint = string(value["Entrypoint"].GetString());
        m_entrypointHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationVersion.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatorName") && !value["CreatorName"].IsNull())
    {
        if (!value["CreatorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationVersion.CreatorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorName = string(value["CreatorName"].GetString());
        m_creatorNameHasBeenSet = true;
    }

    if (value.HasMember("CreatorId") && !value["CreatorId"].IsNull())
    {
        if (!value["CreatorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationVersion.CreatorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorId = string(value["CreatorId"].GetString());
        m_creatorIdHasBeenSet = true;
    }

    if (value.HasMember("GitInfo") && !value["GitInfo"].IsNull())
    {
        if (!value["GitInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationVersion.GitInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gitInfo = string(value["GitInfo"].GetString());
        m_gitInfoHasBeenSet = true;
    }

    if (value.HasMember("GitSource") && !value["GitSource"].IsNull())
    {
        if (!value["GitSource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationVersion.GitSource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gitSource.Deserialize(value["GitSource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gitSourceHasBeenSet = true;
    }

    if (value.HasMember("CosSource") && !value["CosSource"].IsNull())
    {
        if (!value["CosSource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationVersion.CosSource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cosSource.Deserialize(value["CosSource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosSourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationVersionId.c_str(), allocator).Move(), allocator);
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

    if (m_creatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorName.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorId.c_str(), allocator).Move(), allocator);
    }

    if (m_gitInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GitInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gitInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_gitSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GitSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gitSource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cosSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosSource.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ApplicationVersion::GetType() const
{
    return m_type;
}

void ApplicationVersion::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ApplicationVersion::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ApplicationVersion::GetApplicationVersionId() const
{
    return m_applicationVersionId;
}

void ApplicationVersion::SetApplicationVersionId(const string& _applicationVersionId)
{
    m_applicationVersionId = _applicationVersionId;
    m_applicationVersionIdHasBeenSet = true;
}

bool ApplicationVersion::ApplicationVersionIdHasBeenSet() const
{
    return m_applicationVersionIdHasBeenSet;
}

string ApplicationVersion::GetName() const
{
    return m_name;
}

void ApplicationVersion::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ApplicationVersion::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ApplicationVersion::GetDescription() const
{
    return m_description;
}

void ApplicationVersion::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ApplicationVersion::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ApplicationVersion::GetEntrypoint() const
{
    return m_entrypoint;
}

void ApplicationVersion::SetEntrypoint(const string& _entrypoint)
{
    m_entrypoint = _entrypoint;
    m_entrypointHasBeenSet = true;
}

bool ApplicationVersion::EntrypointHasBeenSet() const
{
    return m_entrypointHasBeenSet;
}

string ApplicationVersion::GetCreateTime() const
{
    return m_createTime;
}

void ApplicationVersion::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ApplicationVersion::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ApplicationVersion::GetCreatorName() const
{
    return m_creatorName;
}

void ApplicationVersion::SetCreatorName(const string& _creatorName)
{
    m_creatorName = _creatorName;
    m_creatorNameHasBeenSet = true;
}

bool ApplicationVersion::CreatorNameHasBeenSet() const
{
    return m_creatorNameHasBeenSet;
}

string ApplicationVersion::GetCreatorId() const
{
    return m_creatorId;
}

void ApplicationVersion::SetCreatorId(const string& _creatorId)
{
    m_creatorId = _creatorId;
    m_creatorIdHasBeenSet = true;
}

bool ApplicationVersion::CreatorIdHasBeenSet() const
{
    return m_creatorIdHasBeenSet;
}

string ApplicationVersion::GetGitInfo() const
{
    return m_gitInfo;
}

void ApplicationVersion::SetGitInfo(const string& _gitInfo)
{
    m_gitInfo = _gitInfo;
    m_gitInfoHasBeenSet = true;
}

bool ApplicationVersion::GitInfoHasBeenSet() const
{
    return m_gitInfoHasBeenSet;
}

GitInfo ApplicationVersion::GetGitSource() const
{
    return m_gitSource;
}

void ApplicationVersion::SetGitSource(const GitInfo& _gitSource)
{
    m_gitSource = _gitSource;
    m_gitSourceHasBeenSet = true;
}

bool ApplicationVersion::GitSourceHasBeenSet() const
{
    return m_gitSourceHasBeenSet;
}

CosFileInfo ApplicationVersion::GetCosSource() const
{
    return m_cosSource;
}

void ApplicationVersion::SetCosSource(const CosFileInfo& _cosSource)
{
    m_cosSource = _cosSource;
    m_cosSourceHasBeenSet = true;
}

bool ApplicationVersion::CosSourceHasBeenSet() const
{
    return m_cosSourceHasBeenSet;
}

