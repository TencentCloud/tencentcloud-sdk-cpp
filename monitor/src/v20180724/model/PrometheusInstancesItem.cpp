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

#include <tencentcloud/monitor/v20180724/model/PrometheusInstancesItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PrometheusInstancesItem::PrometheusInstancesItem() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_dataRetentionTimeHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_grafanaURLHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_enableGrafanaHasBeenSet(false),
    m_iPv4AddressHasBeenSet(false),
    m_tagSpecificationHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_chargeStatusHasBeenSet(false),
    m_specNameHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_isNearExpireHasBeenSet(false),
    m_authTokenHasBeenSet(false),
    m_remoteWriteHasBeenSet(false),
    m_apiRootPathHasBeenSet(false),
    m_proxyAddressHasBeenSet(false),
    m_grafanaStatusHasBeenSet(false),
    m_grafanaIpWhiteListHasBeenSet(false),
    m_grantHasBeenSet(false),
    m_grafanaInstanceIdHasBeenSet(false),
    m_alertRuleLimitHasBeenSet(false),
    m_recordingRuleLimitHasBeenSet(false),
    m_migrationTypeHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusInstancesItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.InstanceChargeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = value["InstanceChargeType"].GetInt64();
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("DataRetentionTime") && !value["DataRetentionTime"].IsNull())
    {
        if (!value["DataRetentionTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.DataRetentionTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataRetentionTime = value["DataRetentionTime"].GetInt64();
        m_dataRetentionTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.InstanceStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = value["InstanceStatus"].GetInt64();
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("GrafanaURL") && !value["GrafanaURL"].IsNull())
    {
        if (!value["GrafanaURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.GrafanaURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grafanaURL = string(value["GrafanaURL"].GetString());
        m_grafanaURLHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("EnableGrafana") && !value["EnableGrafana"].IsNull())
    {
        if (!value["EnableGrafana"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.EnableGrafana` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableGrafana = value["EnableGrafana"].GetInt64();
        m_enableGrafanaHasBeenSet = true;
    }

    if (value.HasMember("IPv4Address") && !value["IPv4Address"].IsNull())
    {
        if (!value["IPv4Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.IPv4Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iPv4Address = string(value["IPv4Address"].GetString());
        m_iPv4AddressHasBeenSet = true;
    }

    if (value.HasMember("TagSpecification") && !value["TagSpecification"].IsNull())
    {
        if (!value["TagSpecification"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.TagSpecification` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSpecification"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrometheusTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSpecification.push_back(item);
        }
        m_tagSpecificationHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("ChargeStatus") && !value["ChargeStatus"].IsNull())
    {
        if (!value["ChargeStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.ChargeStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chargeStatus = value["ChargeStatus"].GetInt64();
        m_chargeStatusHasBeenSet = true;
    }

    if (value.HasMember("SpecName") && !value["SpecName"].IsNull())
    {
        if (!value["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(value["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("IsNearExpire") && !value["IsNearExpire"].IsNull())
    {
        if (!value["IsNearExpire"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.IsNearExpire` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isNearExpire = value["IsNearExpire"].GetInt64();
        m_isNearExpireHasBeenSet = true;
    }

    if (value.HasMember("AuthToken") && !value["AuthToken"].IsNull())
    {
        if (!value["AuthToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.AuthToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authToken = string(value["AuthToken"].GetString());
        m_authTokenHasBeenSet = true;
    }

    if (value.HasMember("RemoteWrite") && !value["RemoteWrite"].IsNull())
    {
        if (!value["RemoteWrite"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.RemoteWrite` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteWrite = string(value["RemoteWrite"].GetString());
        m_remoteWriteHasBeenSet = true;
    }

    if (value.HasMember("ApiRootPath") && !value["ApiRootPath"].IsNull())
    {
        if (!value["ApiRootPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.ApiRootPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiRootPath = string(value["ApiRootPath"].GetString());
        m_apiRootPathHasBeenSet = true;
    }

    if (value.HasMember("ProxyAddress") && !value["ProxyAddress"].IsNull())
    {
        if (!value["ProxyAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.ProxyAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyAddress = string(value["ProxyAddress"].GetString());
        m_proxyAddressHasBeenSet = true;
    }

    if (value.HasMember("GrafanaStatus") && !value["GrafanaStatus"].IsNull())
    {
        if (!value["GrafanaStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.GrafanaStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_grafanaStatus = value["GrafanaStatus"].GetInt64();
        m_grafanaStatusHasBeenSet = true;
    }

    if (value.HasMember("GrafanaIpWhiteList") && !value["GrafanaIpWhiteList"].IsNull())
    {
        if (!value["GrafanaIpWhiteList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.GrafanaIpWhiteList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grafanaIpWhiteList = string(value["GrafanaIpWhiteList"].GetString());
        m_grafanaIpWhiteListHasBeenSet = true;
    }

    if (value.HasMember("Grant") && !value["Grant"].IsNull())
    {
        if (!value["Grant"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.Grant` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_grant.Deserialize(value["Grant"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_grantHasBeenSet = true;
    }

    if (value.HasMember("GrafanaInstanceId") && !value["GrafanaInstanceId"].IsNull())
    {
        if (!value["GrafanaInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.GrafanaInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grafanaInstanceId = string(value["GrafanaInstanceId"].GetString());
        m_grafanaInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("AlertRuleLimit") && !value["AlertRuleLimit"].IsNull())
    {
        if (!value["AlertRuleLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.AlertRuleLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alertRuleLimit = value["AlertRuleLimit"].GetInt64();
        m_alertRuleLimitHasBeenSet = true;
    }

    if (value.HasMember("RecordingRuleLimit") && !value["RecordingRuleLimit"].IsNull())
    {
        if (!value["RecordingRuleLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.RecordingRuleLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordingRuleLimit = value["RecordingRuleLimit"].GetInt64();
        m_recordingRuleLimitHasBeenSet = true;
    }

    if (value.HasMember("MigrationType") && !value["MigrationType"].IsNull())
    {
        if (!value["MigrationType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstancesItem.MigrationType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_migrationType = value["MigrationType"].GetInt64();
        m_migrationTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusInstancesItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceChargeType, allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
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

    if (m_dataRetentionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataRetentionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataRetentionTime, allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceStatus, allocator);
    }

    if (m_grafanaURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrafanaURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grafanaURL.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_enableGrafanaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableGrafana";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableGrafana, allocator);
    }

    if (m_iPv4AddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv4Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iPv4Address.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSpecification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSpecification.begin(); itr != m_tagSpecification.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chargeStatus, allocator);
    }

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_isNearExpireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNearExpire";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNearExpire, allocator);
    }

    if (m_authTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authToken.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteWriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteWrite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteWrite.c_str(), allocator).Move(), allocator);
    }

    if (m_apiRootPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiRootPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiRootPath.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_grafanaStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrafanaStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_grafanaStatus, allocator);
    }

    if (m_grafanaIpWhiteListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrafanaIpWhiteList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grafanaIpWhiteList.c_str(), allocator).Move(), allocator);
    }

    if (m_grantHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grant";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_grant.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_grafanaInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrafanaInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grafanaInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_alertRuleLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertRuleLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alertRuleLimit, allocator);
    }

    if (m_recordingRuleLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordingRuleLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordingRuleLimit, allocator);
    }

    if (m_migrationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_migrationType, allocator);
    }

}


string PrometheusInstancesItem::GetInstanceId() const
{
    return m_instanceId;
}

void PrometheusInstancesItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool PrometheusInstancesItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string PrometheusInstancesItem::GetInstanceName() const
{
    return m_instanceName;
}

void PrometheusInstancesItem::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool PrometheusInstancesItem::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t PrometheusInstancesItem::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void PrometheusInstancesItem::SetInstanceChargeType(const int64_t& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool PrometheusInstancesItem::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

int64_t PrometheusInstancesItem::GetRegionId() const
{
    return m_regionId;
}

void PrometheusInstancesItem::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool PrometheusInstancesItem::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string PrometheusInstancesItem::GetZone() const
{
    return m_zone;
}

void PrometheusInstancesItem::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool PrometheusInstancesItem::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string PrometheusInstancesItem::GetVpcId() const
{
    return m_vpcId;
}

void PrometheusInstancesItem::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool PrometheusInstancesItem::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string PrometheusInstancesItem::GetSubnetId() const
{
    return m_subnetId;
}

void PrometheusInstancesItem::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool PrometheusInstancesItem::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t PrometheusInstancesItem::GetDataRetentionTime() const
{
    return m_dataRetentionTime;
}

void PrometheusInstancesItem::SetDataRetentionTime(const int64_t& _dataRetentionTime)
{
    m_dataRetentionTime = _dataRetentionTime;
    m_dataRetentionTimeHasBeenSet = true;
}

bool PrometheusInstancesItem::DataRetentionTimeHasBeenSet() const
{
    return m_dataRetentionTimeHasBeenSet;
}

int64_t PrometheusInstancesItem::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void PrometheusInstancesItem::SetInstanceStatus(const int64_t& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool PrometheusInstancesItem::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string PrometheusInstancesItem::GetGrafanaURL() const
{
    return m_grafanaURL;
}

void PrometheusInstancesItem::SetGrafanaURL(const string& _grafanaURL)
{
    m_grafanaURL = _grafanaURL;
    m_grafanaURLHasBeenSet = true;
}

bool PrometheusInstancesItem::GrafanaURLHasBeenSet() const
{
    return m_grafanaURLHasBeenSet;
}

string PrometheusInstancesItem::GetCreatedAt() const
{
    return m_createdAt;
}

void PrometheusInstancesItem::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool PrometheusInstancesItem::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

int64_t PrometheusInstancesItem::GetEnableGrafana() const
{
    return m_enableGrafana;
}

void PrometheusInstancesItem::SetEnableGrafana(const int64_t& _enableGrafana)
{
    m_enableGrafana = _enableGrafana;
    m_enableGrafanaHasBeenSet = true;
}

bool PrometheusInstancesItem::EnableGrafanaHasBeenSet() const
{
    return m_enableGrafanaHasBeenSet;
}

string PrometheusInstancesItem::GetIPv4Address() const
{
    return m_iPv4Address;
}

void PrometheusInstancesItem::SetIPv4Address(const string& _iPv4Address)
{
    m_iPv4Address = _iPv4Address;
    m_iPv4AddressHasBeenSet = true;
}

bool PrometheusInstancesItem::IPv4AddressHasBeenSet() const
{
    return m_iPv4AddressHasBeenSet;
}

vector<PrometheusTag> PrometheusInstancesItem::GetTagSpecification() const
{
    return m_tagSpecification;
}

void PrometheusInstancesItem::SetTagSpecification(const vector<PrometheusTag>& _tagSpecification)
{
    m_tagSpecification = _tagSpecification;
    m_tagSpecificationHasBeenSet = true;
}

bool PrometheusInstancesItem::TagSpecificationHasBeenSet() const
{
    return m_tagSpecificationHasBeenSet;
}

string PrometheusInstancesItem::GetExpireTime() const
{
    return m_expireTime;
}

void PrometheusInstancesItem::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool PrometheusInstancesItem::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t PrometheusInstancesItem::GetChargeStatus() const
{
    return m_chargeStatus;
}

void PrometheusInstancesItem::SetChargeStatus(const int64_t& _chargeStatus)
{
    m_chargeStatus = _chargeStatus;
    m_chargeStatusHasBeenSet = true;
}

bool PrometheusInstancesItem::ChargeStatusHasBeenSet() const
{
    return m_chargeStatusHasBeenSet;
}

string PrometheusInstancesItem::GetSpecName() const
{
    return m_specName;
}

void PrometheusInstancesItem::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool PrometheusInstancesItem::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

int64_t PrometheusInstancesItem::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void PrometheusInstancesItem::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool PrometheusInstancesItem::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t PrometheusInstancesItem::GetIsNearExpire() const
{
    return m_isNearExpire;
}

void PrometheusInstancesItem::SetIsNearExpire(const int64_t& _isNearExpire)
{
    m_isNearExpire = _isNearExpire;
    m_isNearExpireHasBeenSet = true;
}

bool PrometheusInstancesItem::IsNearExpireHasBeenSet() const
{
    return m_isNearExpireHasBeenSet;
}

string PrometheusInstancesItem::GetAuthToken() const
{
    return m_authToken;
}

void PrometheusInstancesItem::SetAuthToken(const string& _authToken)
{
    m_authToken = _authToken;
    m_authTokenHasBeenSet = true;
}

bool PrometheusInstancesItem::AuthTokenHasBeenSet() const
{
    return m_authTokenHasBeenSet;
}

string PrometheusInstancesItem::GetRemoteWrite() const
{
    return m_remoteWrite;
}

void PrometheusInstancesItem::SetRemoteWrite(const string& _remoteWrite)
{
    m_remoteWrite = _remoteWrite;
    m_remoteWriteHasBeenSet = true;
}

bool PrometheusInstancesItem::RemoteWriteHasBeenSet() const
{
    return m_remoteWriteHasBeenSet;
}

string PrometheusInstancesItem::GetApiRootPath() const
{
    return m_apiRootPath;
}

void PrometheusInstancesItem::SetApiRootPath(const string& _apiRootPath)
{
    m_apiRootPath = _apiRootPath;
    m_apiRootPathHasBeenSet = true;
}

bool PrometheusInstancesItem::ApiRootPathHasBeenSet() const
{
    return m_apiRootPathHasBeenSet;
}

string PrometheusInstancesItem::GetProxyAddress() const
{
    return m_proxyAddress;
}

void PrometheusInstancesItem::SetProxyAddress(const string& _proxyAddress)
{
    m_proxyAddress = _proxyAddress;
    m_proxyAddressHasBeenSet = true;
}

bool PrometheusInstancesItem::ProxyAddressHasBeenSet() const
{
    return m_proxyAddressHasBeenSet;
}

int64_t PrometheusInstancesItem::GetGrafanaStatus() const
{
    return m_grafanaStatus;
}

void PrometheusInstancesItem::SetGrafanaStatus(const int64_t& _grafanaStatus)
{
    m_grafanaStatus = _grafanaStatus;
    m_grafanaStatusHasBeenSet = true;
}

bool PrometheusInstancesItem::GrafanaStatusHasBeenSet() const
{
    return m_grafanaStatusHasBeenSet;
}

string PrometheusInstancesItem::GetGrafanaIpWhiteList() const
{
    return m_grafanaIpWhiteList;
}

void PrometheusInstancesItem::SetGrafanaIpWhiteList(const string& _grafanaIpWhiteList)
{
    m_grafanaIpWhiteList = _grafanaIpWhiteList;
    m_grafanaIpWhiteListHasBeenSet = true;
}

bool PrometheusInstancesItem::GrafanaIpWhiteListHasBeenSet() const
{
    return m_grafanaIpWhiteListHasBeenSet;
}

PrometheusInstanceGrantInfo PrometheusInstancesItem::GetGrant() const
{
    return m_grant;
}

void PrometheusInstancesItem::SetGrant(const PrometheusInstanceGrantInfo& _grant)
{
    m_grant = _grant;
    m_grantHasBeenSet = true;
}

bool PrometheusInstancesItem::GrantHasBeenSet() const
{
    return m_grantHasBeenSet;
}

string PrometheusInstancesItem::GetGrafanaInstanceId() const
{
    return m_grafanaInstanceId;
}

void PrometheusInstancesItem::SetGrafanaInstanceId(const string& _grafanaInstanceId)
{
    m_grafanaInstanceId = _grafanaInstanceId;
    m_grafanaInstanceIdHasBeenSet = true;
}

bool PrometheusInstancesItem::GrafanaInstanceIdHasBeenSet() const
{
    return m_grafanaInstanceIdHasBeenSet;
}

int64_t PrometheusInstancesItem::GetAlertRuleLimit() const
{
    return m_alertRuleLimit;
}

void PrometheusInstancesItem::SetAlertRuleLimit(const int64_t& _alertRuleLimit)
{
    m_alertRuleLimit = _alertRuleLimit;
    m_alertRuleLimitHasBeenSet = true;
}

bool PrometheusInstancesItem::AlertRuleLimitHasBeenSet() const
{
    return m_alertRuleLimitHasBeenSet;
}

int64_t PrometheusInstancesItem::GetRecordingRuleLimit() const
{
    return m_recordingRuleLimit;
}

void PrometheusInstancesItem::SetRecordingRuleLimit(const int64_t& _recordingRuleLimit)
{
    m_recordingRuleLimit = _recordingRuleLimit;
    m_recordingRuleLimitHasBeenSet = true;
}

bool PrometheusInstancesItem::RecordingRuleLimitHasBeenSet() const
{
    return m_recordingRuleLimitHasBeenSet;
}

int64_t PrometheusInstancesItem::GetMigrationType() const
{
    return m_migrationType;
}

void PrometheusInstancesItem::SetMigrationType(const int64_t& _migrationType)
{
    m_migrationType = _migrationType;
    m_migrationTypeHasBeenSet = true;
}

bool PrometheusInstancesItem::MigrationTypeHasBeenSet() const
{
    return m_migrationTypeHasBeenSet;
}

