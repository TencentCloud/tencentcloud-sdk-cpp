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

#include <tencentcloud/ags/v20250920/model/Deployment.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

Deployment::Deployment() :
    m_deploymentIdHasBeenSet(false),
    m_deploymentNameHasBeenSet(false),
    m_toolIdHasBeenSet(false),
    m_scalingConfigurationHasBeenSet(false),
    m_lifecycleConfigurationHasBeenSet(false),
    m_affinityConfigurationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome Deployment::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeploymentId") && !value["DeploymentId"].IsNull())
    {
        if (!value["DeploymentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.DeploymentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deploymentId = string(value["DeploymentId"].GetString());
        m_deploymentIdHasBeenSet = true;
    }

    if (value.HasMember("DeploymentName") && !value["DeploymentName"].IsNull())
    {
        if (!value["DeploymentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.DeploymentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deploymentName = string(value["DeploymentName"].GetString());
        m_deploymentNameHasBeenSet = true;
    }

    if (value.HasMember("ToolId") && !value["ToolId"].IsNull())
    {
        if (!value["ToolId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.ToolId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolId = string(value["ToolId"].GetString());
        m_toolIdHasBeenSet = true;
    }

    if (value.HasMember("ScalingConfiguration") && !value["ScalingConfiguration"].IsNull())
    {
        if (!value["ScalingConfiguration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.ScalingConfiguration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scalingConfiguration.Deserialize(value["ScalingConfiguration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scalingConfigurationHasBeenSet = true;
    }

    if (value.HasMember("LifecycleConfiguration") && !value["LifecycleConfiguration"].IsNull())
    {
        if (!value["LifecycleConfiguration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.LifecycleConfiguration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lifecycleConfiguration.Deserialize(value["LifecycleConfiguration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lifecycleConfigurationHasBeenSet = true;
    }

    if (value.HasMember("AffinityConfiguration") && !value["AffinityConfiguration"].IsNull())
    {
        if (!value["AffinityConfiguration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.AffinityConfiguration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_affinityConfiguration.Deserialize(value["AffinityConfiguration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_affinityConfigurationHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusReason") && !value["StatusReason"].IsNull())
    {
        if (!value["StatusReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.StatusReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusReason = string(value["StatusReason"].GetString());
        m_statusReasonHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Deployment.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Deployment::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deploymentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploymentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deploymentId.c_str(), allocator).Move(), allocator);
    }

    if (m_deploymentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploymentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deploymentName.c_str(), allocator).Move(), allocator);
    }

    if (m_toolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolId.c_str(), allocator).Move(), allocator);
    }

    if (m_scalingConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalingConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scalingConfiguration.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lifecycleConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lifecycleConfiguration.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_affinityConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffinityConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_affinityConfiguration.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_statusReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusReason.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Deployment::GetDeploymentId() const
{
    return m_deploymentId;
}

void Deployment::SetDeploymentId(const string& _deploymentId)
{
    m_deploymentId = _deploymentId;
    m_deploymentIdHasBeenSet = true;
}

bool Deployment::DeploymentIdHasBeenSet() const
{
    return m_deploymentIdHasBeenSet;
}

string Deployment::GetDeploymentName() const
{
    return m_deploymentName;
}

void Deployment::SetDeploymentName(const string& _deploymentName)
{
    m_deploymentName = _deploymentName;
    m_deploymentNameHasBeenSet = true;
}

bool Deployment::DeploymentNameHasBeenSet() const
{
    return m_deploymentNameHasBeenSet;
}

string Deployment::GetToolId() const
{
    return m_toolId;
}

void Deployment::SetToolId(const string& _toolId)
{
    m_toolId = _toolId;
    m_toolIdHasBeenSet = true;
}

bool Deployment::ToolIdHasBeenSet() const
{
    return m_toolIdHasBeenSet;
}

ScalingConfiguration Deployment::GetScalingConfiguration() const
{
    return m_scalingConfiguration;
}

void Deployment::SetScalingConfiguration(const ScalingConfiguration& _scalingConfiguration)
{
    m_scalingConfiguration = _scalingConfiguration;
    m_scalingConfigurationHasBeenSet = true;
}

bool Deployment::ScalingConfigurationHasBeenSet() const
{
    return m_scalingConfigurationHasBeenSet;
}

LifecycleConfiguration Deployment::GetLifecycleConfiguration() const
{
    return m_lifecycleConfiguration;
}

void Deployment::SetLifecycleConfiguration(const LifecycleConfiguration& _lifecycleConfiguration)
{
    m_lifecycleConfiguration = _lifecycleConfiguration;
    m_lifecycleConfigurationHasBeenSet = true;
}

bool Deployment::LifecycleConfigurationHasBeenSet() const
{
    return m_lifecycleConfigurationHasBeenSet;
}

AffinityConfiguration Deployment::GetAffinityConfiguration() const
{
    return m_affinityConfiguration;
}

void Deployment::SetAffinityConfiguration(const AffinityConfiguration& _affinityConfiguration)
{
    m_affinityConfiguration = _affinityConfiguration;
    m_affinityConfigurationHasBeenSet = true;
}

bool Deployment::AffinityConfigurationHasBeenSet() const
{
    return m_affinityConfigurationHasBeenSet;
}

string Deployment::GetStatus() const
{
    return m_status;
}

void Deployment::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Deployment::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Deployment::GetStatusReason() const
{
    return m_statusReason;
}

void Deployment::SetStatusReason(const string& _statusReason)
{
    m_statusReason = _statusReason;
    m_statusReasonHasBeenSet = true;
}

bool Deployment::StatusReasonHasBeenSet() const
{
    return m_statusReasonHasBeenSet;
}

string Deployment::GetCreatedTime() const
{
    return m_createdTime;
}

void Deployment::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool Deployment::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string Deployment::GetUpdatedTime() const
{
    return m_updatedTime;
}

void Deployment::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool Deployment::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

vector<Tag> Deployment::GetTags() const
{
    return m_tags;
}

void Deployment::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Deployment::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

