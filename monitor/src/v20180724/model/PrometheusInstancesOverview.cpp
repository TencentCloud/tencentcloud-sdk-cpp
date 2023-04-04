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

#include <tencentcloud/monitor/v20180724/model/PrometheusInstancesOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PrometheusInstancesOverview::PrometheusInstancesOverview() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_chargeStatusHasBeenSet(false),
    m_enableGrafanaHasBeenSet(false),
    m_grafanaURLHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_specNameHasBeenSet(false),
    m_dataRetentionTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_boundTotalHasBeenSet(false),
    m_boundNormalHasBeenSet(false),
    m_resourcePackageStatusHasBeenSet(false),
    m_resourcePackageSpecNameHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusInstancesOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesOverview.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesOverview.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesOverview.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesOverview.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesOverview.InstanceStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = value["InstanceStatus"].GetInt64();
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("ChargeStatus") && !value["ChargeStatus"].IsNull())
    {
        if (!value["ChargeStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesOverview.ChargeStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chargeStatus = value["ChargeStatus"].GetInt64();
        m_chargeStatusHasBeenSet = true;
    }

    if (value.HasMember("EnableGrafana") && !value["EnableGrafana"].IsNull())
    {
        if (!value["EnableGrafana"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesOverview.EnableGrafana` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableGrafana = value["EnableGrafana"].GetInt64();
        m_enableGrafanaHasBeenSet = true;
    }

    if (value.HasMember("GrafanaURL") && !value["GrafanaURL"].IsNull())
    {
        if (!value["GrafanaURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesOverview.GrafanaURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grafanaURL = string(value["GrafanaURL"].GetString());
        m_grafanaURLHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesOverview.InstanceChargeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = value["InstanceChargeType"].GetInt64();
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("SpecName") && !value["SpecName"].IsNull())
    {
        if (!value["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesOverview.SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(value["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (value.HasMember("DataRetentionTime") && !value["DataRetentionTime"].IsNull())
    {
        if (!value["DataRetentionTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesOverview.DataRetentionTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataRetentionTime = value["DataRetentionTime"].GetInt64();
        m_dataRetentionTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesOverview.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesOverview.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("BoundTotal") && !value["BoundTotal"].IsNull())
    {
        if (!value["BoundTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesOverview.BoundTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_boundTotal = value["BoundTotal"].GetInt64();
        m_boundTotalHasBeenSet = true;
    }

    if (value.HasMember("BoundNormal") && !value["BoundNormal"].IsNull())
    {
        if (!value["BoundNormal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesOverview.BoundNormal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_boundNormal = value["BoundNormal"].GetInt64();
        m_boundNormalHasBeenSet = true;
    }

    if (value.HasMember("ResourcePackageStatus") && !value["ResourcePackageStatus"].IsNull())
    {
        if (!value["ResourcePackageStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesOverview.ResourcePackageStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePackageStatus = value["ResourcePackageStatus"].GetInt64();
        m_resourcePackageStatusHasBeenSet = true;
    }

    if (value.HasMember("ResourcePackageSpecName") && !value["ResourcePackageSpecName"].IsNull())
    {
        if (!value["ResourcePackageSpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesOverview.ResourcePackageSpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePackageSpecName = string(value["ResourcePackageSpecName"].GetString());
        m_resourcePackageSpecNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusInstancesOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceStatus, allocator);
    }

    if (m_chargeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chargeStatus, allocator);
    }

    if (m_enableGrafanaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableGrafana";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableGrafana, allocator);
    }

    if (m_grafanaURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrafanaURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grafanaURL.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceChargeType, allocator);
    }

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataRetentionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataRetentionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataRetentionTime, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_boundTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoundTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_boundTotal, allocator);
    }

    if (m_boundNormalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoundNormal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_boundNormal, allocator);
    }

    if (m_resourcePackageStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePackageStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourcePackageStatus, allocator);
    }

    if (m_resourcePackageSpecNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePackageSpecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourcePackageSpecName.c_str(), allocator).Move(), allocator);
    }

}


string PrometheusInstancesOverview::GetInstanceId() const
{
    return m_instanceId;
}

void PrometheusInstancesOverview::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool PrometheusInstancesOverview::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string PrometheusInstancesOverview::GetInstanceName() const
{
    return m_instanceName;
}

void PrometheusInstancesOverview::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool PrometheusInstancesOverview::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string PrometheusInstancesOverview::GetVpcId() const
{
    return m_vpcId;
}

void PrometheusInstancesOverview::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool PrometheusInstancesOverview::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string PrometheusInstancesOverview::GetSubnetId() const
{
    return m_subnetId;
}

void PrometheusInstancesOverview::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool PrometheusInstancesOverview::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t PrometheusInstancesOverview::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void PrometheusInstancesOverview::SetInstanceStatus(const int64_t& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool PrometheusInstancesOverview::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

int64_t PrometheusInstancesOverview::GetChargeStatus() const
{
    return m_chargeStatus;
}

void PrometheusInstancesOverview::SetChargeStatus(const int64_t& _chargeStatus)
{
    m_chargeStatus = _chargeStatus;
    m_chargeStatusHasBeenSet = true;
}

bool PrometheusInstancesOverview::ChargeStatusHasBeenSet() const
{
    return m_chargeStatusHasBeenSet;
}

int64_t PrometheusInstancesOverview::GetEnableGrafana() const
{
    return m_enableGrafana;
}

void PrometheusInstancesOverview::SetEnableGrafana(const int64_t& _enableGrafana)
{
    m_enableGrafana = _enableGrafana;
    m_enableGrafanaHasBeenSet = true;
}

bool PrometheusInstancesOverview::EnableGrafanaHasBeenSet() const
{
    return m_enableGrafanaHasBeenSet;
}

string PrometheusInstancesOverview::GetGrafanaURL() const
{
    return m_grafanaURL;
}

void PrometheusInstancesOverview::SetGrafanaURL(const string& _grafanaURL)
{
    m_grafanaURL = _grafanaURL;
    m_grafanaURLHasBeenSet = true;
}

bool PrometheusInstancesOverview::GrafanaURLHasBeenSet() const
{
    return m_grafanaURLHasBeenSet;
}

int64_t PrometheusInstancesOverview::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void PrometheusInstancesOverview::SetInstanceChargeType(const int64_t& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool PrometheusInstancesOverview::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

string PrometheusInstancesOverview::GetSpecName() const
{
    return m_specName;
}

void PrometheusInstancesOverview::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool PrometheusInstancesOverview::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

int64_t PrometheusInstancesOverview::GetDataRetentionTime() const
{
    return m_dataRetentionTime;
}

void PrometheusInstancesOverview::SetDataRetentionTime(const int64_t& _dataRetentionTime)
{
    m_dataRetentionTime = _dataRetentionTime;
    m_dataRetentionTimeHasBeenSet = true;
}

bool PrometheusInstancesOverview::DataRetentionTimeHasBeenSet() const
{
    return m_dataRetentionTimeHasBeenSet;
}

string PrometheusInstancesOverview::GetExpireTime() const
{
    return m_expireTime;
}

void PrometheusInstancesOverview::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool PrometheusInstancesOverview::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t PrometheusInstancesOverview::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void PrometheusInstancesOverview::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool PrometheusInstancesOverview::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t PrometheusInstancesOverview::GetBoundTotal() const
{
    return m_boundTotal;
}

void PrometheusInstancesOverview::SetBoundTotal(const int64_t& _boundTotal)
{
    m_boundTotal = _boundTotal;
    m_boundTotalHasBeenSet = true;
}

bool PrometheusInstancesOverview::BoundTotalHasBeenSet() const
{
    return m_boundTotalHasBeenSet;
}

int64_t PrometheusInstancesOverview::GetBoundNormal() const
{
    return m_boundNormal;
}

void PrometheusInstancesOverview::SetBoundNormal(const int64_t& _boundNormal)
{
    m_boundNormal = _boundNormal;
    m_boundNormalHasBeenSet = true;
}

bool PrometheusInstancesOverview::BoundNormalHasBeenSet() const
{
    return m_boundNormalHasBeenSet;
}

int64_t PrometheusInstancesOverview::GetResourcePackageStatus() const
{
    return m_resourcePackageStatus;
}

void PrometheusInstancesOverview::SetResourcePackageStatus(const int64_t& _resourcePackageStatus)
{
    m_resourcePackageStatus = _resourcePackageStatus;
    m_resourcePackageStatusHasBeenSet = true;
}

bool PrometheusInstancesOverview::ResourcePackageStatusHasBeenSet() const
{
    return m_resourcePackageStatusHasBeenSet;
}

string PrometheusInstancesOverview::GetResourcePackageSpecName() const
{
    return m_resourcePackageSpecName;
}

void PrometheusInstancesOverview::SetResourcePackageSpecName(const string& _resourcePackageSpecName)
{
    m_resourcePackageSpecName = _resourcePackageSpecName;
    m_resourcePackageSpecNameHasBeenSet = true;
}

bool PrometheusInstancesOverview::ResourcePackageSpecNameHasBeenSet() const
{
    return m_resourcePackageSpecNameHasBeenSet;
}

