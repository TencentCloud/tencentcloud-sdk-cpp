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

#include <tencentcloud/tke/v20180525/model/UpgradeTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

UpgradeTask::UpgradeTask() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_componentHasBeenSet(false),
    m_relatedResourcesHasBeenSet(false),
    m_upgradeImpactHasBeenSet(false),
    m_planedStartAtHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
}

CoreInternalOutcome UpgradeTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeTask.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeTask.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Component") && !value["Component"].IsNull())
    {
        if (!value["Component"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeTask.Component` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_component = string(value["Component"].GetString());
        m_componentHasBeenSet = true;
    }

    if (value.HasMember("RelatedResources") && !value["RelatedResources"].IsNull())
    {
        if (!value["RelatedResources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpgradeTask.RelatedResources` is not array type"));

        const rapidjson::Value &tmpValue = value["RelatedResources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_relatedResources.push_back((*itr).GetString());
        }
        m_relatedResourcesHasBeenSet = true;
    }

    if (value.HasMember("UpgradeImpact") && !value["UpgradeImpact"].IsNull())
    {
        if (!value["UpgradeImpact"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeTask.UpgradeImpact` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upgradeImpact = string(value["UpgradeImpact"].GetString());
        m_upgradeImpactHasBeenSet = true;
    }

    if (value.HasMember("PlanedStartAt") && !value["PlanedStartAt"].IsNull())
    {
        if (!value["PlanedStartAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeTask.PlanedStartAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planedStartAt = string(value["PlanedStartAt"].GetString());
        m_planedStartAtHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeTask.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpgradeTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_componentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Component";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_component.c_str(), allocator).Move(), allocator);
    }

    if (m_relatedResourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedResources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_relatedResources.begin(); itr != m_relatedResources.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_upgradeImpactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeImpact";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upgradeImpact.c_str(), allocator).Move(), allocator);
    }

    if (m_planedStartAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanedStartAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_planedStartAt.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

}


int64_t UpgradeTask::GetID() const
{
    return m_iD;
}

void UpgradeTask::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool UpgradeTask::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string UpgradeTask::GetName() const
{
    return m_name;
}

void UpgradeTask::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpgradeTask::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpgradeTask::GetComponent() const
{
    return m_component;
}

void UpgradeTask::SetComponent(const string& _component)
{
    m_component = _component;
    m_componentHasBeenSet = true;
}

bool UpgradeTask::ComponentHasBeenSet() const
{
    return m_componentHasBeenSet;
}

vector<string> UpgradeTask::GetRelatedResources() const
{
    return m_relatedResources;
}

void UpgradeTask::SetRelatedResources(const vector<string>& _relatedResources)
{
    m_relatedResources = _relatedResources;
    m_relatedResourcesHasBeenSet = true;
}

bool UpgradeTask::RelatedResourcesHasBeenSet() const
{
    return m_relatedResourcesHasBeenSet;
}

string UpgradeTask::GetUpgradeImpact() const
{
    return m_upgradeImpact;
}

void UpgradeTask::SetUpgradeImpact(const string& _upgradeImpact)
{
    m_upgradeImpact = _upgradeImpact;
    m_upgradeImpactHasBeenSet = true;
}

bool UpgradeTask::UpgradeImpactHasBeenSet() const
{
    return m_upgradeImpactHasBeenSet;
}

string UpgradeTask::GetPlanedStartAt() const
{
    return m_planedStartAt;
}

void UpgradeTask::SetPlanedStartAt(const string& _planedStartAt)
{
    m_planedStartAt = _planedStartAt;
    m_planedStartAtHasBeenSet = true;
}

bool UpgradeTask::PlanedStartAtHasBeenSet() const
{
    return m_planedStartAtHasBeenSet;
}

string UpgradeTask::GetCreatedAt() const
{
    return m_createdAt;
}

void UpgradeTask::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool UpgradeTask::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

