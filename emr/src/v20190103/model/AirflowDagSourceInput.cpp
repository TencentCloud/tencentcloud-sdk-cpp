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

#include <tencentcloud/emr/v20190103/model/AirflowDagSourceInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

AirflowDagSourceInput::AirflowDagSourceInput() :
    m_enabledHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_cfsHasBeenSet(false),
    m_gitHasBeenSet(false)
{
}

CoreInternalOutcome AirflowDagSourceInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AirflowDagSourceInput.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirflowDagSourceInput.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Cfs") && !value["Cfs"].IsNull())
    {
        if (!value["Cfs"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AirflowDagSourceInput.Cfs` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cfs.Deserialize(value["Cfs"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cfsHasBeenSet = true;
    }

    if (value.HasMember("Git") && !value["Git"].IsNull())
    {
        if (!value["Git"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AirflowDagSourceInput.Git` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_git.Deserialize(value["Git"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AirflowDagSourceInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_cfsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cfs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cfs.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_gitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Git";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_git.ToJsonObject(value[key.c_str()], allocator);
    }

}


bool AirflowDagSourceInput::GetEnabled() const
{
    return m_enabled;
}

void AirflowDagSourceInput::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool AirflowDagSourceInput::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string AirflowDagSourceInput::GetType() const
{
    return m_type;
}

void AirflowDagSourceInput::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AirflowDagSourceInput::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

AirflowCfsSource AirflowDagSourceInput::GetCfs() const
{
    return m_cfs;
}

void AirflowDagSourceInput::SetCfs(const AirflowCfsSource& _cfs)
{
    m_cfs = _cfs;
    m_cfsHasBeenSet = true;
}

bool AirflowDagSourceInput::CfsHasBeenSet() const
{
    return m_cfsHasBeenSet;
}

AirflowGitSource AirflowDagSourceInput::GetGit() const
{
    return m_git;
}

void AirflowDagSourceInput::SetGit(const AirflowGitSource& _git)
{
    m_git = _git;
    m_gitHasBeenSet = true;
}

bool AirflowDagSourceInput::GitHasBeenSet() const
{
    return m_gitHasBeenSet;
}

