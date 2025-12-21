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

#include <tencentcloud/ags/v20250920/model/SandboxTool.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

SandboxTool::SandboxTool() :
    m_toolIdHasBeenSet(false),
    m_toolNameHasBeenSet(false),
    m_toolTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultTimeoutSecondsHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_storageMountsHasBeenSet(false)
{
}

CoreInternalOutcome SandboxTool::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ToolId") && !value["ToolId"].IsNull())
    {
        if (!value["ToolId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxTool.ToolId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolId = string(value["ToolId"].GetString());
        m_toolIdHasBeenSet = true;
    }

    if (value.HasMember("ToolName") && !value["ToolName"].IsNull())
    {
        if (!value["ToolName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxTool.ToolName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolName = string(value["ToolName"].GetString());
        m_toolNameHasBeenSet = true;
    }

    if (value.HasMember("ToolType") && !value["ToolType"].IsNull())
    {
        if (!value["ToolType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxTool.ToolType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolType = string(value["ToolType"].GetString());
        m_toolTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxTool.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxTool.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("DefaultTimeoutSeconds") && !value["DefaultTimeoutSeconds"].IsNull())
    {
        if (!value["DefaultTimeoutSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxTool.DefaultTimeoutSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultTimeoutSeconds = value["DefaultTimeoutSeconds"].GetUint64();
        m_defaultTimeoutSecondsHasBeenSet = true;
    }

    if (value.HasMember("NetworkConfiguration") && !value["NetworkConfiguration"].IsNull())
    {
        if (!value["NetworkConfiguration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxTool.NetworkConfiguration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_networkConfiguration.Deserialize(value["NetworkConfiguration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_networkConfigurationHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SandboxTool.Tags` is not array type"));

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

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxTool.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxTool.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("RoleArn") && !value["RoleArn"].IsNull())
    {
        if (!value["RoleArn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxTool.RoleArn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleArn = string(value["RoleArn"].GetString());
        m_roleArnHasBeenSet = true;
    }

    if (value.HasMember("StorageMounts") && !value["StorageMounts"].IsNull())
    {
        if (!value["StorageMounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SandboxTool.StorageMounts` is not array type"));

        const rapidjson::Value &tmpValue = value["StorageMounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StorageMount item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_storageMounts.push_back(item);
        }
        m_storageMountsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SandboxTool::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_toolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolId.c_str(), allocator).Move(), allocator);
    }

    if (m_toolNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolName.c_str(), allocator).Move(), allocator);
    }

    if (m_toolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultTimeoutSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultTimeoutSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultTimeoutSeconds, allocator);
    }

    if (m_networkConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_networkConfiguration.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_roleArnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleArn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleArn.c_str(), allocator).Move(), allocator);
    }

    if (m_storageMountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageMounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_storageMounts.begin(); itr != m_storageMounts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SandboxTool::GetToolId() const
{
    return m_toolId;
}

void SandboxTool::SetToolId(const string& _toolId)
{
    m_toolId = _toolId;
    m_toolIdHasBeenSet = true;
}

bool SandboxTool::ToolIdHasBeenSet() const
{
    return m_toolIdHasBeenSet;
}

string SandboxTool::GetToolName() const
{
    return m_toolName;
}

void SandboxTool::SetToolName(const string& _toolName)
{
    m_toolName = _toolName;
    m_toolNameHasBeenSet = true;
}

bool SandboxTool::ToolNameHasBeenSet() const
{
    return m_toolNameHasBeenSet;
}

string SandboxTool::GetToolType() const
{
    return m_toolType;
}

void SandboxTool::SetToolType(const string& _toolType)
{
    m_toolType = _toolType;
    m_toolTypeHasBeenSet = true;
}

bool SandboxTool::ToolTypeHasBeenSet() const
{
    return m_toolTypeHasBeenSet;
}

string SandboxTool::GetStatus() const
{
    return m_status;
}

void SandboxTool::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SandboxTool::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SandboxTool::GetDescription() const
{
    return m_description;
}

void SandboxTool::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SandboxTool::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t SandboxTool::GetDefaultTimeoutSeconds() const
{
    return m_defaultTimeoutSeconds;
}

void SandboxTool::SetDefaultTimeoutSeconds(const uint64_t& _defaultTimeoutSeconds)
{
    m_defaultTimeoutSeconds = _defaultTimeoutSeconds;
    m_defaultTimeoutSecondsHasBeenSet = true;
}

bool SandboxTool::DefaultTimeoutSecondsHasBeenSet() const
{
    return m_defaultTimeoutSecondsHasBeenSet;
}

NetworkConfiguration SandboxTool::GetNetworkConfiguration() const
{
    return m_networkConfiguration;
}

void SandboxTool::SetNetworkConfiguration(const NetworkConfiguration& _networkConfiguration)
{
    m_networkConfiguration = _networkConfiguration;
    m_networkConfigurationHasBeenSet = true;
}

bool SandboxTool::NetworkConfigurationHasBeenSet() const
{
    return m_networkConfigurationHasBeenSet;
}

vector<Tag> SandboxTool::GetTags() const
{
    return m_tags;
}

void SandboxTool::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool SandboxTool::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string SandboxTool::GetCreateTime() const
{
    return m_createTime;
}

void SandboxTool::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SandboxTool::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SandboxTool::GetUpdateTime() const
{
    return m_updateTime;
}

void SandboxTool::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SandboxTool::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string SandboxTool::GetRoleArn() const
{
    return m_roleArn;
}

void SandboxTool::SetRoleArn(const string& _roleArn)
{
    m_roleArn = _roleArn;
    m_roleArnHasBeenSet = true;
}

bool SandboxTool::RoleArnHasBeenSet() const
{
    return m_roleArnHasBeenSet;
}

vector<StorageMount> SandboxTool::GetStorageMounts() const
{
    return m_storageMounts;
}

void SandboxTool::SetStorageMounts(const vector<StorageMount>& _storageMounts)
{
    m_storageMounts = _storageMounts;
    m_storageMountsHasBeenSet = true;
}

bool SandboxTool::StorageMountsHasBeenSet() const
{
    return m_storageMountsHasBeenSet;
}

