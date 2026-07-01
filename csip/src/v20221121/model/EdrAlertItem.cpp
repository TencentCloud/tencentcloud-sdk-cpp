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

#include <tencentcloud/csip/v20221121/model/EdrAlertItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

EdrAlertItem::EdrAlertItem() :
    m_idHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_alertIdHasBeenSet(false),
    m_alertCategoryHasBeenSet(false),
    m_alertSubTypeHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_attackStageHasBeenSet(false),
    m_detectModeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_isProVersionHasBeenSet(false),
    m_alertSourceHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_containerIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_eventCountHasBeenSet(false),
    m_firstDetectTimeHasBeenSet(false),
    m_latestDetectTimeHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_raspOpenHasBeenSet(false)
{
}

CoreInternalOutcome EdrAlertItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AlertId") && !value["AlertId"].IsNull())
    {
        if (!value["AlertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.AlertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alertId = string(value["AlertId"].GetString());
        m_alertIdHasBeenSet = true;
    }

    if (value.HasMember("AlertCategory") && !value["AlertCategory"].IsNull())
    {
        if (!value["AlertCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.AlertCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alertCategory = string(value["AlertCategory"].GetString());
        m_alertCategoryHasBeenSet = true;
    }

    if (value.HasMember("AlertSubType") && !value["AlertSubType"].IsNull())
    {
        if (!value["AlertSubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.AlertSubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alertSubType = string(value["AlertSubType"].GetString());
        m_alertSubTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.RuleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = value["RuleType"].GetInt64();
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AttackStage") && !value["AttackStage"].IsNull())
    {
        if (!value["AttackStage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.AttackStage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackStage = string(value["AttackStage"].GetString());
        m_attackStageHasBeenSet = true;
    }

    if (value.HasMember("DetectMode") && !value["DetectMode"].IsNull())
    {
        if (!value["DetectMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.DetectMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectMode = string(value["DetectMode"].GetString());
        m_detectModeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("IsProVersion") && !value["IsProVersion"].IsNull())
    {
        if (!value["IsProVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.IsProVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isProVersion = value["IsProVersion"].GetInt64();
        m_isProVersionHasBeenSet = true;
    }

    if (value.HasMember("AlertSource") && !value["AlertSource"].IsNull())
    {
        if (!value["AlertSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.AlertSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alertSource = string(value["AlertSource"].GetString());
        m_alertSourceHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerId") && !value["ContainerId"].IsNull())
    {
        if (!value["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(value["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("EventCount") && !value["EventCount"].IsNull())
    {
        if (!value["EventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.EventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCount = value["EventCount"].GetInt64();
        m_eventCountHasBeenSet = true;
    }

    if (value.HasMember("FirstDetectTime") && !value["FirstDetectTime"].IsNull())
    {
        if (!value["FirstDetectTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.FirstDetectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstDetectTime = string(value["FirstDetectTime"].GetString());
        m_firstDetectTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestDetectTime") && !value["LatestDetectTime"].IsNull())
    {
        if (!value["LatestDetectTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.LatestDetectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestDetectTime = string(value["LatestDetectTime"].GetString());
        m_latestDetectTimeHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("ContentType") && !value["ContentType"].IsNull())
    {
        if (!value["ContentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.ContentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentType = string(value["ContentType"].GetString());
        m_contentTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("RaspOpen") && !value["RaspOpen"].IsNull())
    {
        if (!value["RaspOpen"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertItem.RaspOpen` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_raspOpen = value["RaspOpen"].GetBool();
        m_raspOpenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdrAlertItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_alertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alertId.c_str(), allocator).Move(), allocator);
    }

    if (m_alertCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alertCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_alertSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertSubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alertSubType.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleType, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_attackStageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackStage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackStage.c_str(), allocator).Move(), allocator);
    }

    if (m_detectModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectMode.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_isProVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsProVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isProVersion, allocator);
    }

    if (m_alertSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alertSource.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_eventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCount, allocator);
    }

    if (m_firstDetectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstDetectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstDetectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestDetectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestDetectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestDetectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_raspOpenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RaspOpen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_raspOpen, allocator);
    }

}


int64_t EdrAlertItem::GetId() const
{
    return m_id;
}

void EdrAlertItem::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool EdrAlertItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t EdrAlertItem::GetAppId() const
{
    return m_appId;
}

void EdrAlertItem::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool EdrAlertItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string EdrAlertItem::GetAlertId() const
{
    return m_alertId;
}

void EdrAlertItem::SetAlertId(const string& _alertId)
{
    m_alertId = _alertId;
    m_alertIdHasBeenSet = true;
}

bool EdrAlertItem::AlertIdHasBeenSet() const
{
    return m_alertIdHasBeenSet;
}

string EdrAlertItem::GetAlertCategory() const
{
    return m_alertCategory;
}

void EdrAlertItem::SetAlertCategory(const string& _alertCategory)
{
    m_alertCategory = _alertCategory;
    m_alertCategoryHasBeenSet = true;
}

bool EdrAlertItem::AlertCategoryHasBeenSet() const
{
    return m_alertCategoryHasBeenSet;
}

string EdrAlertItem::GetAlertSubType() const
{
    return m_alertSubType;
}

void EdrAlertItem::SetAlertSubType(const string& _alertSubType)
{
    m_alertSubType = _alertSubType;
    m_alertSubTypeHasBeenSet = true;
}

bool EdrAlertItem::AlertSubTypeHasBeenSet() const
{
    return m_alertSubTypeHasBeenSet;
}

string EdrAlertItem::GetRuleId() const
{
    return m_ruleId;
}

void EdrAlertItem::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool EdrAlertItem::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

int64_t EdrAlertItem::GetRuleType() const
{
    return m_ruleType;
}

void EdrAlertItem::SetRuleType(const int64_t& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool EdrAlertItem::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string EdrAlertItem::GetLevel() const
{
    return m_level;
}

void EdrAlertItem::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool EdrAlertItem::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string EdrAlertItem::GetStatus() const
{
    return m_status;
}

void EdrAlertItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EdrAlertItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string EdrAlertItem::GetAttackStage() const
{
    return m_attackStage;
}

void EdrAlertItem::SetAttackStage(const string& _attackStage)
{
    m_attackStage = _attackStage;
    m_attackStageHasBeenSet = true;
}

bool EdrAlertItem::AttackStageHasBeenSet() const
{
    return m_attackStageHasBeenSet;
}

string EdrAlertItem::GetDetectMode() const
{
    return m_detectMode;
}

void EdrAlertItem::SetDetectMode(const string& _detectMode)
{
    m_detectMode = _detectMode;
    m_detectModeHasBeenSet = true;
}

bool EdrAlertItem::DetectModeHasBeenSet() const
{
    return m_detectModeHasBeenSet;
}

string EdrAlertItem::GetInstanceId() const
{
    return m_instanceId;
}

void EdrAlertItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool EdrAlertItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string EdrAlertItem::GetQuuid() const
{
    return m_quuid;
}

void EdrAlertItem::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool EdrAlertItem::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

int64_t EdrAlertItem::GetIsProVersion() const
{
    return m_isProVersion;
}

void EdrAlertItem::SetIsProVersion(const int64_t& _isProVersion)
{
    m_isProVersion = _isProVersion;
    m_isProVersionHasBeenSet = true;
}

bool EdrAlertItem::IsProVersionHasBeenSet() const
{
    return m_isProVersionHasBeenSet;
}

string EdrAlertItem::GetAlertSource() const
{
    return m_alertSource;
}

void EdrAlertItem::SetAlertSource(const string& _alertSource)
{
    m_alertSource = _alertSource;
    m_alertSourceHasBeenSet = true;
}

bool EdrAlertItem::AlertSourceHasBeenSet() const
{
    return m_alertSourceHasBeenSet;
}

string EdrAlertItem::GetImageId() const
{
    return m_imageId;
}

void EdrAlertItem::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool EdrAlertItem::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string EdrAlertItem::GetContainerId() const
{
    return m_containerId;
}

void EdrAlertItem::SetContainerId(const string& _containerId)
{
    m_containerId = _containerId;
    m_containerIdHasBeenSet = true;
}

bool EdrAlertItem::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

string EdrAlertItem::GetClusterId() const
{
    return m_clusterId;
}

void EdrAlertItem::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool EdrAlertItem::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t EdrAlertItem::GetEventCount() const
{
    return m_eventCount;
}

void EdrAlertItem::SetEventCount(const int64_t& _eventCount)
{
    m_eventCount = _eventCount;
    m_eventCountHasBeenSet = true;
}

bool EdrAlertItem::EventCountHasBeenSet() const
{
    return m_eventCountHasBeenSet;
}

string EdrAlertItem::GetFirstDetectTime() const
{
    return m_firstDetectTime;
}

void EdrAlertItem::SetFirstDetectTime(const string& _firstDetectTime)
{
    m_firstDetectTime = _firstDetectTime;
    m_firstDetectTimeHasBeenSet = true;
}

bool EdrAlertItem::FirstDetectTimeHasBeenSet() const
{
    return m_firstDetectTimeHasBeenSet;
}

string EdrAlertItem::GetLatestDetectTime() const
{
    return m_latestDetectTime;
}

void EdrAlertItem::SetLatestDetectTime(const string& _latestDetectTime)
{
    m_latestDetectTime = _latestDetectTime;
    m_latestDetectTimeHasBeenSet = true;
}

bool EdrAlertItem::LatestDetectTimeHasBeenSet() const
{
    return m_latestDetectTimeHasBeenSet;
}

string EdrAlertItem::GetRuleName() const
{
    return m_ruleName;
}

void EdrAlertItem::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool EdrAlertItem::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string EdrAlertItem::GetContentType() const
{
    return m_contentType;
}

void EdrAlertItem::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool EdrAlertItem::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

string EdrAlertItem::GetInstanceName() const
{
    return m_instanceName;
}

void EdrAlertItem::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool EdrAlertItem::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string EdrAlertItem::GetPublicIp() const
{
    return m_publicIp;
}

void EdrAlertItem::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool EdrAlertItem::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string EdrAlertItem::GetPrivateIp() const
{
    return m_privateIp;
}

void EdrAlertItem::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool EdrAlertItem::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

bool EdrAlertItem::GetRaspOpen() const
{
    return m_raspOpen;
}

void EdrAlertItem::SetRaspOpen(const bool& _raspOpen)
{
    m_raspOpen = _raspOpen;
    m_raspOpenHasBeenSet = true;
}

bool EdrAlertItem::RaspOpenHasBeenSet() const
{
    return m_raspOpenHasBeenSet;
}

