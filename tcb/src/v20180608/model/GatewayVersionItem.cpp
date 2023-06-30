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

#include <tencentcloud/tcb/v20180608/model/GatewayVersionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

GatewayVersionItem::GatewayVersionItem() :
    m_versionNameHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_buildIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_customConfigHasBeenSet(false)
{
}

CoreInternalOutcome GatewayVersionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayVersionItem.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayVersionItem.Weight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetUint64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayVersionItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayVersionItem.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayVersionItem.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("BuildId") && !value["BuildId"].IsNull())
    {
        if (!value["BuildId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayVersionItem.BuildId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_buildId = value["BuildId"].GetUint64();
        m_buildIdHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayVersionItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayVersionItem.Priority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetUint64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayVersionItem.IsDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetBool();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("CustomConfig") && !value["CustomConfig"].IsNull())
    {
        if (!value["CustomConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayVersionItem.CustomConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customConfig.Deserialize(value["CustomConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GatewayVersionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
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

    if (m_buildIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_buildId, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_customConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string GatewayVersionItem::GetVersionName() const
{
    return m_versionName;
}

void GatewayVersionItem::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool GatewayVersionItem::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

uint64_t GatewayVersionItem::GetWeight() const
{
    return m_weight;
}

void GatewayVersionItem::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool GatewayVersionItem::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string GatewayVersionItem::GetStatus() const
{
    return m_status;
}

void GatewayVersionItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool GatewayVersionItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string GatewayVersionItem::GetCreatedTime() const
{
    return m_createdTime;
}

void GatewayVersionItem::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool GatewayVersionItem::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string GatewayVersionItem::GetUpdatedTime() const
{
    return m_updatedTime;
}

void GatewayVersionItem::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool GatewayVersionItem::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

uint64_t GatewayVersionItem::GetBuildId() const
{
    return m_buildId;
}

void GatewayVersionItem::SetBuildId(const uint64_t& _buildId)
{
    m_buildId = _buildId;
    m_buildIdHasBeenSet = true;
}

bool GatewayVersionItem::BuildIdHasBeenSet() const
{
    return m_buildIdHasBeenSet;
}

string GatewayVersionItem::GetRemark() const
{
    return m_remark;
}

void GatewayVersionItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool GatewayVersionItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t GatewayVersionItem::GetPriority() const
{
    return m_priority;
}

void GatewayVersionItem::SetPriority(const uint64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool GatewayVersionItem::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

bool GatewayVersionItem::GetIsDefault() const
{
    return m_isDefault;
}

void GatewayVersionItem::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool GatewayVersionItem::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

WxGatewayCustomConfig GatewayVersionItem::GetCustomConfig() const
{
    return m_customConfig;
}

void GatewayVersionItem::SetCustomConfig(const WxGatewayCustomConfig& _customConfig)
{
    m_customConfig = _customConfig;
    m_customConfigHasBeenSet = true;
}

bool GatewayVersionItem::CustomConfigHasBeenSet() const
{
    return m_customConfigHasBeenSet;
}

