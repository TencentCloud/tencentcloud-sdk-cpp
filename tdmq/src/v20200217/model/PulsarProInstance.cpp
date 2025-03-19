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

#include <tencentcloud/tdmq/v20200217/model/PulsarProInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

PulsarProInstance::PulsarProInstance() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceVersionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_configDisplayHasBeenSet(false),
    m_maxTpsHasBeenSet(false),
    m_maxStorageHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_specNameHasBeenSet(false),
    m_scalableTpsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_maxBandWidthHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_billingLabelVersionHasBeenSet(false),
    m_tenantHasBeenSet(false)
{
}

CoreInternalOutcome PulsarProInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProInstance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceVersion") && !value["InstanceVersion"].IsNull())
    {
        if (!value["InstanceVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProInstance.InstanceVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceVersion = string(value["InstanceVersion"].GetString());
        m_instanceVersionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProInstance.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ConfigDisplay") && !value["ConfigDisplay"].IsNull())
    {
        if (!value["ConfigDisplay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProInstance.ConfigDisplay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configDisplay = string(value["ConfigDisplay"].GetString());
        m_configDisplayHasBeenSet = true;
    }

    if (value.HasMember("MaxTps") && !value["MaxTps"].IsNull())
    {
        if (!value["MaxTps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProInstance.MaxTps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTps = value["MaxTps"].GetUint64();
        m_maxTpsHasBeenSet = true;
    }

    if (value.HasMember("MaxStorage") && !value["MaxStorage"].IsNull())
    {
        if (!value["MaxStorage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProInstance.MaxStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStorage = value["MaxStorage"].GetUint64();
        m_maxStorageHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProInstance.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProInstance.AutoRenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetUint64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProInstance.PayMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetUint64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProInstance.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("SpecName") && !value["SpecName"].IsNull())
    {
        if (!value["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProInstance.SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(value["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (value.HasMember("ScalableTps") && !value["ScalableTps"].IsNull())
    {
        if (!value["ScalableTps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProInstance.ScalableTps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scalableTps = value["ScalableTps"].GetUint64();
        m_scalableTpsHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProInstance.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProInstance.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("MaxBandWidth") && !value["MaxBandWidth"].IsNull())
    {
        if (!value["MaxBandWidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProInstance.MaxBandWidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBandWidth = value["MaxBandWidth"].GetUint64();
        m_maxBandWidthHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PulsarProInstance.Tags` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `PulsarProInstance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("BillingLabelVersion") && !value["BillingLabelVersion"].IsNull())
    {
        if (!value["BillingLabelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProInstance.BillingLabelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingLabelVersion = string(value["BillingLabelVersion"].GetString());
        m_billingLabelVersionHasBeenSet = true;
    }

    if (value.HasMember("Tenant") && !value["Tenant"].IsNull())
    {
        if (!value["Tenant"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProInstance.Tenant` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tenant = string(value["Tenant"].GetString());
        m_tenantHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PulsarProInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_scalableTpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalableTps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scalableTps, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_maxBandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBandWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBandWidth, allocator);
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

    if (m_billingLabelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingLabelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingLabelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_tenantHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tenant";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tenant.c_str(), allocator).Move(), allocator);
    }

}


string PulsarProInstance::GetInstanceId() const
{
    return m_instanceId;
}

void PulsarProInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool PulsarProInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string PulsarProInstance::GetInstanceName() const
{
    return m_instanceName;
}

void PulsarProInstance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool PulsarProInstance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string PulsarProInstance::GetInstanceVersion() const
{
    return m_instanceVersion;
}

void PulsarProInstance::SetInstanceVersion(const string& _instanceVersion)
{
    m_instanceVersion = _instanceVersion;
    m_instanceVersionHasBeenSet = true;
}

bool PulsarProInstance::InstanceVersionHasBeenSet() const
{
    return m_instanceVersionHasBeenSet;
}

uint64_t PulsarProInstance::GetStatus() const
{
    return m_status;
}

void PulsarProInstance::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PulsarProInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PulsarProInstance::GetConfigDisplay() const
{
    return m_configDisplay;
}

void PulsarProInstance::SetConfigDisplay(const string& _configDisplay)
{
    m_configDisplay = _configDisplay;
    m_configDisplayHasBeenSet = true;
}

bool PulsarProInstance::ConfigDisplayHasBeenSet() const
{
    return m_configDisplayHasBeenSet;
}

uint64_t PulsarProInstance::GetMaxTps() const
{
    return m_maxTps;
}

void PulsarProInstance::SetMaxTps(const uint64_t& _maxTps)
{
    m_maxTps = _maxTps;
    m_maxTpsHasBeenSet = true;
}

bool PulsarProInstance::MaxTpsHasBeenSet() const
{
    return m_maxTpsHasBeenSet;
}

uint64_t PulsarProInstance::GetMaxStorage() const
{
    return m_maxStorage;
}

void PulsarProInstance::SetMaxStorage(const uint64_t& _maxStorage)
{
    m_maxStorage = _maxStorage;
    m_maxStorageHasBeenSet = true;
}

bool PulsarProInstance::MaxStorageHasBeenSet() const
{
    return m_maxStorageHasBeenSet;
}

uint64_t PulsarProInstance::GetExpireTime() const
{
    return m_expireTime;
}

void PulsarProInstance::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool PulsarProInstance::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

uint64_t PulsarProInstance::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void PulsarProInstance::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool PulsarProInstance::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

uint64_t PulsarProInstance::GetPayMode() const
{
    return m_payMode;
}

void PulsarProInstance::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool PulsarProInstance::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string PulsarProInstance::GetRemark() const
{
    return m_remark;
}

void PulsarProInstance::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool PulsarProInstance::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string PulsarProInstance::GetSpecName() const
{
    return m_specName;
}

void PulsarProInstance::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool PulsarProInstance::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

uint64_t PulsarProInstance::GetScalableTps() const
{
    return m_scalableTps;
}

void PulsarProInstance::SetScalableTps(const uint64_t& _scalableTps)
{
    m_scalableTps = _scalableTps;
    m_scalableTpsHasBeenSet = true;
}

bool PulsarProInstance::ScalableTpsHasBeenSet() const
{
    return m_scalableTpsHasBeenSet;
}

string PulsarProInstance::GetVpcId() const
{
    return m_vpcId;
}

void PulsarProInstance::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool PulsarProInstance::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string PulsarProInstance::GetSubnetId() const
{
    return m_subnetId;
}

void PulsarProInstance::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool PulsarProInstance::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

uint64_t PulsarProInstance::GetMaxBandWidth() const
{
    return m_maxBandWidth;
}

void PulsarProInstance::SetMaxBandWidth(const uint64_t& _maxBandWidth)
{
    m_maxBandWidth = _maxBandWidth;
    m_maxBandWidthHasBeenSet = true;
}

bool PulsarProInstance::MaxBandWidthHasBeenSet() const
{
    return m_maxBandWidthHasBeenSet;
}

vector<Tag> PulsarProInstance::GetTags() const
{
    return m_tags;
}

void PulsarProInstance::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool PulsarProInstance::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string PulsarProInstance::GetCreateTime() const
{
    return m_createTime;
}

void PulsarProInstance::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PulsarProInstance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string PulsarProInstance::GetBillingLabelVersion() const
{
    return m_billingLabelVersion;
}

void PulsarProInstance::SetBillingLabelVersion(const string& _billingLabelVersion)
{
    m_billingLabelVersion = _billingLabelVersion;
    m_billingLabelVersionHasBeenSet = true;
}

bool PulsarProInstance::BillingLabelVersionHasBeenSet() const
{
    return m_billingLabelVersionHasBeenSet;
}

string PulsarProInstance::GetTenant() const
{
    return m_tenant;
}

void PulsarProInstance::SetTenant(const string& _tenant)
{
    m_tenant = _tenant;
    m_tenantHasBeenSet = true;
}

bool PulsarProInstance::TenantHasBeenSet() const
{
    return m_tenantHasBeenSet;
}

