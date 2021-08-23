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

#include <tencentcloud/tcr/v20190924/model/TcrRepositoryInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

TcrRepositoryInfo::TcrRepositoryInfo() :
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_publicHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_briefDescriptionHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome TcrRepositoryInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TcrRepositoryInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TcrRepositoryInfo.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TcrRepositoryInfo.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("Public") && !value["Public"].IsNull())
    {
        if (!value["Public"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TcrRepositoryInfo.Public` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_public = value["Public"].GetBool();
        m_publicHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TcrRepositoryInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("BriefDescription") && !value["BriefDescription"].IsNull())
    {
        if (!value["BriefDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TcrRepositoryInfo.BriefDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_briefDescription = string(value["BriefDescription"].GetString());
        m_briefDescriptionHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TcrRepositoryInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TcrRepositoryInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_publicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Public";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_public, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_briefDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BriefDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_briefDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string TcrRepositoryInfo::GetName() const
{
    return m_name;
}

void TcrRepositoryInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TcrRepositoryInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TcrRepositoryInfo::GetNamespace() const
{
    return m_namespace;
}

void TcrRepositoryInfo::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool TcrRepositoryInfo::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string TcrRepositoryInfo::GetCreationTime() const
{
    return m_creationTime;
}

void TcrRepositoryInfo::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool TcrRepositoryInfo::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

bool TcrRepositoryInfo::GetPublic() const
{
    return m_public;
}

void TcrRepositoryInfo::SetPublic(const bool& _public)
{
    m_public = _public;
    m_publicHasBeenSet = true;
}

bool TcrRepositoryInfo::PublicHasBeenSet() const
{
    return m_publicHasBeenSet;
}

string TcrRepositoryInfo::GetDescription() const
{
    return m_description;
}

void TcrRepositoryInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TcrRepositoryInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string TcrRepositoryInfo::GetBriefDescription() const
{
    return m_briefDescription;
}

void TcrRepositoryInfo::SetBriefDescription(const string& _briefDescription)
{
    m_briefDescription = _briefDescription;
    m_briefDescriptionHasBeenSet = true;
}

bool TcrRepositoryInfo::BriefDescriptionHasBeenSet() const
{
    return m_briefDescriptionHasBeenSet;
}

string TcrRepositoryInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void TcrRepositoryInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TcrRepositoryInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

