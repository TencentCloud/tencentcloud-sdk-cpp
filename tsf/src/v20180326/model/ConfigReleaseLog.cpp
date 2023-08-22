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

#include <tencentcloud/tsf/v20180326/model/ConfigReleaseLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ConfigReleaseLog::ConfigReleaseLog() :
    m_configReleaseLogIdHasBeenSet(false),
    m_configIdHasBeenSet(false),
    m_configNameHasBeenSet(false),
    m_configVersionHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_releaseTimeHasBeenSet(false),
    m_releaseDescHasBeenSet(false),
    m_releaseStatusHasBeenSet(false),
    m_lastConfigIdHasBeenSet(false),
    m_lastConfigNameHasBeenSet(false),
    m_lastConfigVersionHasBeenSet(false),
    m_rollbackFlagHasBeenSet(false),
    m_releasedConfigCenterHasBeenSet(false)
{
}

CoreInternalOutcome ConfigReleaseLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigReleaseLogId") && !value["ConfigReleaseLogId"].IsNull())
    {
        if (!value["ConfigReleaseLogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigReleaseLog.ConfigReleaseLogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configReleaseLogId = string(value["ConfigReleaseLogId"].GetString());
        m_configReleaseLogIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigReleaseLog.ConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configId = string(value["ConfigId"].GetString());
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigName") && !value["ConfigName"].IsNull())
    {
        if (!value["ConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigReleaseLog.ConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configName = string(value["ConfigName"].GetString());
        m_configNameHasBeenSet = true;
    }

    if (value.HasMember("ConfigVersion") && !value["ConfigVersion"].IsNull())
    {
        if (!value["ConfigVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigReleaseLog.ConfigVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configVersion = string(value["ConfigVersion"].GetString());
        m_configVersionHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigReleaseLog.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigReleaseLog.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigReleaseLog.NamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = string(value["NamespaceId"].GetString());
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigReleaseLog.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigReleaseLog.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigReleaseLog.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ReleaseTime") && !value["ReleaseTime"].IsNull())
    {
        if (!value["ReleaseTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigReleaseLog.ReleaseTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseTime = string(value["ReleaseTime"].GetString());
        m_releaseTimeHasBeenSet = true;
    }

    if (value.HasMember("ReleaseDesc") && !value["ReleaseDesc"].IsNull())
    {
        if (!value["ReleaseDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigReleaseLog.ReleaseDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseDesc = string(value["ReleaseDesc"].GetString());
        m_releaseDescHasBeenSet = true;
    }

    if (value.HasMember("ReleaseStatus") && !value["ReleaseStatus"].IsNull())
    {
        if (!value["ReleaseStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigReleaseLog.ReleaseStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseStatus = string(value["ReleaseStatus"].GetString());
        m_releaseStatusHasBeenSet = true;
    }

    if (value.HasMember("LastConfigId") && !value["LastConfigId"].IsNull())
    {
        if (!value["LastConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigReleaseLog.LastConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastConfigId = string(value["LastConfigId"].GetString());
        m_lastConfigIdHasBeenSet = true;
    }

    if (value.HasMember("LastConfigName") && !value["LastConfigName"].IsNull())
    {
        if (!value["LastConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigReleaseLog.LastConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastConfigName = string(value["LastConfigName"].GetString());
        m_lastConfigNameHasBeenSet = true;
    }

    if (value.HasMember("LastConfigVersion") && !value["LastConfigVersion"].IsNull())
    {
        if (!value["LastConfigVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigReleaseLog.LastConfigVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastConfigVersion = string(value["LastConfigVersion"].GetString());
        m_lastConfigVersionHasBeenSet = true;
    }

    if (value.HasMember("RollbackFlag") && !value["RollbackFlag"].IsNull())
    {
        if (!value["RollbackFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigReleaseLog.RollbackFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_rollbackFlag = value["RollbackFlag"].GetBool();
        m_rollbackFlagHasBeenSet = true;
    }

    if (value.HasMember("ReleasedConfigCenter") && !value["ReleasedConfigCenter"].IsNull())
    {
        if (!value["ReleasedConfigCenter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigReleaseLog.ReleasedConfigCenter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releasedConfigCenter = string(value["ReleasedConfigCenter"].GetString());
        m_releasedConfigCenterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigReleaseLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configReleaseLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigReleaseLogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configReleaseLogId.c_str(), allocator).Move(), allocator);
    }

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_configNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configName.c_str(), allocator).Move(), allocator);
    }

    if (m_configVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseTime.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_lastConfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastConfigId.c_str(), allocator).Move(), allocator);
    }

    if (m_lastConfigNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastConfigName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastConfigVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastConfigVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastConfigVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_rollbackFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rollbackFlag, allocator);
    }

    if (m_releasedConfigCenterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleasedConfigCenter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releasedConfigCenter.c_str(), allocator).Move(), allocator);
    }

}


string ConfigReleaseLog::GetConfigReleaseLogId() const
{
    return m_configReleaseLogId;
}

void ConfigReleaseLog::SetConfigReleaseLogId(const string& _configReleaseLogId)
{
    m_configReleaseLogId = _configReleaseLogId;
    m_configReleaseLogIdHasBeenSet = true;
}

bool ConfigReleaseLog::ConfigReleaseLogIdHasBeenSet() const
{
    return m_configReleaseLogIdHasBeenSet;
}

string ConfigReleaseLog::GetConfigId() const
{
    return m_configId;
}

void ConfigReleaseLog::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool ConfigReleaseLog::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string ConfigReleaseLog::GetConfigName() const
{
    return m_configName;
}

void ConfigReleaseLog::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool ConfigReleaseLog::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

string ConfigReleaseLog::GetConfigVersion() const
{
    return m_configVersion;
}

void ConfigReleaseLog::SetConfigVersion(const string& _configVersion)
{
    m_configVersion = _configVersion;
    m_configVersionHasBeenSet = true;
}

bool ConfigReleaseLog::ConfigVersionHasBeenSet() const
{
    return m_configVersionHasBeenSet;
}

string ConfigReleaseLog::GetGroupId() const
{
    return m_groupId;
}

void ConfigReleaseLog::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ConfigReleaseLog::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ConfigReleaseLog::GetGroupName() const
{
    return m_groupName;
}

void ConfigReleaseLog::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool ConfigReleaseLog::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string ConfigReleaseLog::GetNamespaceId() const
{
    return m_namespaceId;
}

void ConfigReleaseLog::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool ConfigReleaseLog::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string ConfigReleaseLog::GetNamespaceName() const
{
    return m_namespaceName;
}

void ConfigReleaseLog::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool ConfigReleaseLog::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

string ConfigReleaseLog::GetClusterId() const
{
    return m_clusterId;
}

void ConfigReleaseLog::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ConfigReleaseLog::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ConfigReleaseLog::GetClusterName() const
{
    return m_clusterName;
}

void ConfigReleaseLog::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ConfigReleaseLog::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string ConfigReleaseLog::GetReleaseTime() const
{
    return m_releaseTime;
}

void ConfigReleaseLog::SetReleaseTime(const string& _releaseTime)
{
    m_releaseTime = _releaseTime;
    m_releaseTimeHasBeenSet = true;
}

bool ConfigReleaseLog::ReleaseTimeHasBeenSet() const
{
    return m_releaseTimeHasBeenSet;
}

string ConfigReleaseLog::GetReleaseDesc() const
{
    return m_releaseDesc;
}

void ConfigReleaseLog::SetReleaseDesc(const string& _releaseDesc)
{
    m_releaseDesc = _releaseDesc;
    m_releaseDescHasBeenSet = true;
}

bool ConfigReleaseLog::ReleaseDescHasBeenSet() const
{
    return m_releaseDescHasBeenSet;
}

string ConfigReleaseLog::GetReleaseStatus() const
{
    return m_releaseStatus;
}

void ConfigReleaseLog::SetReleaseStatus(const string& _releaseStatus)
{
    m_releaseStatus = _releaseStatus;
    m_releaseStatusHasBeenSet = true;
}

bool ConfigReleaseLog::ReleaseStatusHasBeenSet() const
{
    return m_releaseStatusHasBeenSet;
}

string ConfigReleaseLog::GetLastConfigId() const
{
    return m_lastConfigId;
}

void ConfigReleaseLog::SetLastConfigId(const string& _lastConfigId)
{
    m_lastConfigId = _lastConfigId;
    m_lastConfigIdHasBeenSet = true;
}

bool ConfigReleaseLog::LastConfigIdHasBeenSet() const
{
    return m_lastConfigIdHasBeenSet;
}

string ConfigReleaseLog::GetLastConfigName() const
{
    return m_lastConfigName;
}

void ConfigReleaseLog::SetLastConfigName(const string& _lastConfigName)
{
    m_lastConfigName = _lastConfigName;
    m_lastConfigNameHasBeenSet = true;
}

bool ConfigReleaseLog::LastConfigNameHasBeenSet() const
{
    return m_lastConfigNameHasBeenSet;
}

string ConfigReleaseLog::GetLastConfigVersion() const
{
    return m_lastConfigVersion;
}

void ConfigReleaseLog::SetLastConfigVersion(const string& _lastConfigVersion)
{
    m_lastConfigVersion = _lastConfigVersion;
    m_lastConfigVersionHasBeenSet = true;
}

bool ConfigReleaseLog::LastConfigVersionHasBeenSet() const
{
    return m_lastConfigVersionHasBeenSet;
}

bool ConfigReleaseLog::GetRollbackFlag() const
{
    return m_rollbackFlag;
}

void ConfigReleaseLog::SetRollbackFlag(const bool& _rollbackFlag)
{
    m_rollbackFlag = _rollbackFlag;
    m_rollbackFlagHasBeenSet = true;
}

bool ConfigReleaseLog::RollbackFlagHasBeenSet() const
{
    return m_rollbackFlagHasBeenSet;
}

string ConfigReleaseLog::GetReleasedConfigCenter() const
{
    return m_releasedConfigCenter;
}

void ConfigReleaseLog::SetReleasedConfigCenter(const string& _releasedConfigCenter)
{
    m_releasedConfigCenter = _releasedConfigCenter;
    m_releasedConfigCenterHasBeenSet = true;
}

bool ConfigReleaseLog::ReleasedConfigCenterHasBeenSet() const
{
    return m_releasedConfigCenterHasBeenSet;
}

