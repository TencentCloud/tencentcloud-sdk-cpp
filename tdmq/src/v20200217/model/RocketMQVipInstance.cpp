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

#include <tencentcloud/tdmq/v20200217/model/RocketMQVipInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RocketMQVipInstance::RocketMQVipInstance() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceVersionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_configDisplayHasBeenSet(false),
    m_maxTpsHasBeenSet(false),
    m_maxBandWidthHasBeenSet(false),
    m_maxStorageHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_specNameHasBeenSet(false),
    m_maxRetentionHasBeenSet(false),
    m_minRetentionHasBeenSet(false),
    m_retentionHasBeenSet(false),
    m_aclEnabledHasBeenSet(false),
    m_destroyTimeHasBeenSet(false)
{
}

CoreInternalOutcome RocketMQVipInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQVipInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQVipInstance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceVersion") && !value["InstanceVersion"].IsNull())
    {
        if (!value["InstanceVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQVipInstance.InstanceVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceVersion = string(value["InstanceVersion"].GetString());
        m_instanceVersionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQVipInstance.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQVipInstance.NodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetUint64();
        m_nodeCountHasBeenSet = true;
    }

    if (value.HasMember("ConfigDisplay") && !value["ConfigDisplay"].IsNull())
    {
        if (!value["ConfigDisplay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQVipInstance.ConfigDisplay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configDisplay = string(value["ConfigDisplay"].GetString());
        m_configDisplayHasBeenSet = true;
    }

    if (value.HasMember("MaxTps") && !value["MaxTps"].IsNull())
    {
        if (!value["MaxTps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQVipInstance.MaxTps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTps = value["MaxTps"].GetUint64();
        m_maxTpsHasBeenSet = true;
    }

    if (value.HasMember("MaxBandWidth") && !value["MaxBandWidth"].IsNull())
    {
        if (!value["MaxBandWidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQVipInstance.MaxBandWidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBandWidth = value["MaxBandWidth"].GetUint64();
        m_maxBandWidthHasBeenSet = true;
    }

    if (value.HasMember("MaxStorage") && !value["MaxStorage"].IsNull())
    {
        if (!value["MaxStorage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQVipInstance.MaxStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStorage = value["MaxStorage"].GetUint64();
        m_maxStorageHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQVipInstance.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQVipInstance.AutoRenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetUint64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQVipInstance.PayMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetUint64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQVipInstance.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("SpecName") && !value["SpecName"].IsNull())
    {
        if (!value["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQVipInstance.SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(value["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (value.HasMember("MaxRetention") && !value["MaxRetention"].IsNull())
    {
        if (!value["MaxRetention"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQVipInstance.MaxRetention` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRetention = value["MaxRetention"].GetInt64();
        m_maxRetentionHasBeenSet = true;
    }

    if (value.HasMember("MinRetention") && !value["MinRetention"].IsNull())
    {
        if (!value["MinRetention"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQVipInstance.MinRetention` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minRetention = value["MinRetention"].GetInt64();
        m_minRetentionHasBeenSet = true;
    }

    if (value.HasMember("Retention") && !value["Retention"].IsNull())
    {
        if (!value["Retention"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQVipInstance.Retention` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retention = value["Retention"].GetInt64();
        m_retentionHasBeenSet = true;
    }

    if (value.HasMember("AclEnabled") && !value["AclEnabled"].IsNull())
    {
        if (!value["AclEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQVipInstance.AclEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_aclEnabled = value["AclEnabled"].GetBool();
        m_aclEnabledHasBeenSet = true;
    }

    if (value.HasMember("DestroyTime") && !value["DestroyTime"].IsNull())
    {
        if (!value["DestroyTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQVipInstance.DestroyTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_destroyTime = value["DestroyTime"].GetUint64();
        m_destroyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RocketMQVipInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_configDisplayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigDisplay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configDisplay.c_str(), allocator).Move(), allocator);
    }

    if (m_maxTpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTps, allocator);
    }

    if (m_maxBandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBandWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBandWidth, allocator);
    }

    if (m_maxStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStorage, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
    }

    if (m_maxRetentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRetention, allocator);
    }

    if (m_minRetentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinRetention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minRetention, allocator);
    }

    if (m_retentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Retention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retention, allocator);
    }

    if (m_aclEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aclEnabled, allocator);
    }

    if (m_destroyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestroyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_destroyTime, allocator);
    }

}


string RocketMQVipInstance::GetInstanceId() const
{
    return m_instanceId;
}

void RocketMQVipInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RocketMQVipInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RocketMQVipInstance::GetInstanceName() const
{
    return m_instanceName;
}

void RocketMQVipInstance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool RocketMQVipInstance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string RocketMQVipInstance::GetInstanceVersion() const
{
    return m_instanceVersion;
}

void RocketMQVipInstance::SetInstanceVersion(const string& _instanceVersion)
{
    m_instanceVersion = _instanceVersion;
    m_instanceVersionHasBeenSet = true;
}

bool RocketMQVipInstance::InstanceVersionHasBeenSet() const
{
    return m_instanceVersionHasBeenSet;
}

uint64_t RocketMQVipInstance::GetStatus() const
{
    return m_status;
}

void RocketMQVipInstance::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RocketMQVipInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t RocketMQVipInstance::GetNodeCount() const
{
    return m_nodeCount;
}

void RocketMQVipInstance::SetNodeCount(const uint64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool RocketMQVipInstance::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

string RocketMQVipInstance::GetConfigDisplay() const
{
    return m_configDisplay;
}

void RocketMQVipInstance::SetConfigDisplay(const string& _configDisplay)
{
    m_configDisplay = _configDisplay;
    m_configDisplayHasBeenSet = true;
}

bool RocketMQVipInstance::ConfigDisplayHasBeenSet() const
{
    return m_configDisplayHasBeenSet;
}

uint64_t RocketMQVipInstance::GetMaxTps() const
{
    return m_maxTps;
}

void RocketMQVipInstance::SetMaxTps(const uint64_t& _maxTps)
{
    m_maxTps = _maxTps;
    m_maxTpsHasBeenSet = true;
}

bool RocketMQVipInstance::MaxTpsHasBeenSet() const
{
    return m_maxTpsHasBeenSet;
}

uint64_t RocketMQVipInstance::GetMaxBandWidth() const
{
    return m_maxBandWidth;
}

void RocketMQVipInstance::SetMaxBandWidth(const uint64_t& _maxBandWidth)
{
    m_maxBandWidth = _maxBandWidth;
    m_maxBandWidthHasBeenSet = true;
}

bool RocketMQVipInstance::MaxBandWidthHasBeenSet() const
{
    return m_maxBandWidthHasBeenSet;
}

uint64_t RocketMQVipInstance::GetMaxStorage() const
{
    return m_maxStorage;
}

void RocketMQVipInstance::SetMaxStorage(const uint64_t& _maxStorage)
{
    m_maxStorage = _maxStorage;
    m_maxStorageHasBeenSet = true;
}

bool RocketMQVipInstance::MaxStorageHasBeenSet() const
{
    return m_maxStorageHasBeenSet;
}

uint64_t RocketMQVipInstance::GetExpireTime() const
{
    return m_expireTime;
}

void RocketMQVipInstance::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool RocketMQVipInstance::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

uint64_t RocketMQVipInstance::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void RocketMQVipInstance::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool RocketMQVipInstance::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

uint64_t RocketMQVipInstance::GetPayMode() const
{
    return m_payMode;
}

void RocketMQVipInstance::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool RocketMQVipInstance::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string RocketMQVipInstance::GetRemark() const
{
    return m_remark;
}

void RocketMQVipInstance::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RocketMQVipInstance::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string RocketMQVipInstance::GetSpecName() const
{
    return m_specName;
}

void RocketMQVipInstance::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool RocketMQVipInstance::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

int64_t RocketMQVipInstance::GetMaxRetention() const
{
    return m_maxRetention;
}

void RocketMQVipInstance::SetMaxRetention(const int64_t& _maxRetention)
{
    m_maxRetention = _maxRetention;
    m_maxRetentionHasBeenSet = true;
}

bool RocketMQVipInstance::MaxRetentionHasBeenSet() const
{
    return m_maxRetentionHasBeenSet;
}

int64_t RocketMQVipInstance::GetMinRetention() const
{
    return m_minRetention;
}

void RocketMQVipInstance::SetMinRetention(const int64_t& _minRetention)
{
    m_minRetention = _minRetention;
    m_minRetentionHasBeenSet = true;
}

bool RocketMQVipInstance::MinRetentionHasBeenSet() const
{
    return m_minRetentionHasBeenSet;
}

int64_t RocketMQVipInstance::GetRetention() const
{
    return m_retention;
}

void RocketMQVipInstance::SetRetention(const int64_t& _retention)
{
    m_retention = _retention;
    m_retentionHasBeenSet = true;
}

bool RocketMQVipInstance::RetentionHasBeenSet() const
{
    return m_retentionHasBeenSet;
}

bool RocketMQVipInstance::GetAclEnabled() const
{
    return m_aclEnabled;
}

void RocketMQVipInstance::SetAclEnabled(const bool& _aclEnabled)
{
    m_aclEnabled = _aclEnabled;
    m_aclEnabledHasBeenSet = true;
}

bool RocketMQVipInstance::AclEnabledHasBeenSet() const
{
    return m_aclEnabledHasBeenSet;
}

uint64_t RocketMQVipInstance::GetDestroyTime() const
{
    return m_destroyTime;
}

void RocketMQVipInstance::SetDestroyTime(const uint64_t& _destroyTime)
{
    m_destroyTime = _destroyTime;
    m_destroyTimeHasBeenSet = true;
}

bool RocketMQVipInstance::DestroyTimeHasBeenSet() const
{
    return m_destroyTimeHasBeenSet;
}

