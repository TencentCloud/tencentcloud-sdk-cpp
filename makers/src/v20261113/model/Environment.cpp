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

#include <tencentcloud/makers/v20261113/model/Environment.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Makers::V20261113::Model;
using namespace std;

Environment::Environment() :
    m_slugHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_branchesHasBeenSet(false),
    m_autoDeployHasBeenSet(false),
    m_customDomainsHasBeenSet(false),
    m_envVarsHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_modifiedOnHasBeenSet(false)
{
}

CoreInternalOutcome Environment::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Slug") && !value["Slug"].IsNull())
    {
        if (!value["Slug"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.Slug` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slug = string(value["Slug"].GetString());
        m_slugHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Branches") && !value["Branches"].IsNull())
    {
        if (!value["Branches"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Environment.Branches` is not array type"));

        const rapidjson::Value &tmpValue = value["Branches"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_branches.push_back((*itr).GetString());
        }
        m_branchesHasBeenSet = true;
    }

    if (value.HasMember("AutoDeploy") && !value["AutoDeploy"].IsNull())
    {
        if (!value["AutoDeploy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.AutoDeploy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoDeploy = value["AutoDeploy"].GetBool();
        m_autoDeployHasBeenSet = true;
    }

    if (value.HasMember("CustomDomains") && !value["CustomDomains"].IsNull())
    {
        if (!value["CustomDomains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Environment.CustomDomains` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomDomains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_customDomains.push_back((*itr).GetString());
        }
        m_customDomainsHasBeenSet = true;
    }

    if (value.HasMember("EnvVars") && !value["EnvVars"].IsNull())
    {
        if (!value["EnvVars"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Environment.EnvVars` is not array type"));

        const rapidjson::Value &tmpValue = value["EnvVars"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EnvironmentEnvVar item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_envVars.push_back(item);
        }
        m_envVarsHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("ModifiedOn") && !value["ModifiedOn"].IsNull())
    {
        if (!value["ModifiedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Environment.ModifiedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedOn = string(value["ModifiedOn"].GetString());
        m_modifiedOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Environment::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_slugHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Slug";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slug.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_branchesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Branches";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_branches.begin(); itr != m_branches.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_autoDeployHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoDeploy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoDeploy, allocator);
    }

    if (m_customDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomDomains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customDomains.begin(); itr != m_customDomains.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_envVarsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvVars";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envVars.begin(); itr != m_envVars.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedOn.c_str(), allocator).Move(), allocator);
    }

}


string Environment::GetSlug() const
{
    return m_slug;
}

void Environment::SetSlug(const string& _slug)
{
    m_slug = _slug;
    m_slugHasBeenSet = true;
}

bool Environment::SlugHasBeenSet() const
{
    return m_slugHasBeenSet;
}

string Environment::GetName() const
{
    return m_name;
}

void Environment::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Environment::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Environment::GetType() const
{
    return m_type;
}

void Environment::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Environment::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> Environment::GetBranches() const
{
    return m_branches;
}

void Environment::SetBranches(const vector<string>& _branches)
{
    m_branches = _branches;
    m_branchesHasBeenSet = true;
}

bool Environment::BranchesHasBeenSet() const
{
    return m_branchesHasBeenSet;
}

bool Environment::GetAutoDeploy() const
{
    return m_autoDeploy;
}

void Environment::SetAutoDeploy(const bool& _autoDeploy)
{
    m_autoDeploy = _autoDeploy;
    m_autoDeployHasBeenSet = true;
}

bool Environment::AutoDeployHasBeenSet() const
{
    return m_autoDeployHasBeenSet;
}

vector<string> Environment::GetCustomDomains() const
{
    return m_customDomains;
}

void Environment::SetCustomDomains(const vector<string>& _customDomains)
{
    m_customDomains = _customDomains;
    m_customDomainsHasBeenSet = true;
}

bool Environment::CustomDomainsHasBeenSet() const
{
    return m_customDomainsHasBeenSet;
}

vector<EnvironmentEnvVar> Environment::GetEnvVars() const
{
    return m_envVars;
}

void Environment::SetEnvVars(const vector<EnvironmentEnvVar>& _envVars)
{
    m_envVars = _envVars;
    m_envVarsHasBeenSet = true;
}

bool Environment::EnvVarsHasBeenSet() const
{
    return m_envVarsHasBeenSet;
}

string Environment::GetCreatedOn() const
{
    return m_createdOn;
}

void Environment::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool Environment::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string Environment::GetModifiedOn() const
{
    return m_modifiedOn;
}

void Environment::SetModifiedOn(const string& _modifiedOn)
{
    m_modifiedOn = _modifiedOn;
    m_modifiedOnHasBeenSet = true;
}

bool Environment::ModifiedOnHasBeenSet() const
{
    return m_modifiedOnHasBeenSet;
}

