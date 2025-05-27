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

#include <tencentcloud/tione/v20211111/model/Service.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

Service::Service() :
    m_serviceGroupIdHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_serviceGroupNameHasBeenSet(false),
    m_serviceDescriptionHasBeenSet(false),
    m_serviceInfoHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_ingressNameHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_subUinHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_businessStatusHasBeenSet(false),
    m_serviceLimitHasBeenSet(false),
    m_scheduledActionHasBeenSet(false),
    m_createFailedReasonHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_billingInfoHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_createSourceHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_latestVersionHasBeenSet(false),
    m_resourceGroupSWTypeHasBeenSet(false),
    m_archiveStatusHasBeenSet(false),
    m_deployTypeHasBeenSet(false),
    m_instancePerReplicasHasBeenSet(false),
    m_monitorSourceHasBeenSet(false)
{
}

CoreInternalOutcome Service::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceGroupId") && !value["ServiceGroupId"].IsNull())
    {
        if (!value["ServiceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.ServiceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceGroupId = string(value["ServiceGroupId"].GetString());
        m_serviceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceGroupName") && !value["ServiceGroupName"].IsNull())
    {
        if (!value["ServiceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.ServiceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceGroupName = string(value["ServiceGroupName"].GetString());
        m_serviceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceDescription") && !value["ServiceDescription"].IsNull())
    {
        if (!value["ServiceDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.ServiceDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceDescription = string(value["ServiceDescription"].GetString());
        m_serviceDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ServiceInfo") && !value["ServiceInfo"].IsNull())
    {
        if (!value["ServiceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Service.ServiceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_serviceInfo.Deserialize(value["ServiceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceInfoHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupName") && !value["ResourceGroupName"].IsNull())
    {
        if (!value["ResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.ResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupName = string(value["ResourceGroupName"].GetString());
        m_resourceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Service.Tags` is not array type"));

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

    if (value.HasMember("IngressName") && !value["IngressName"].IsNull())
    {
        if (!value["IngressName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.IngressName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ingressName = string(value["IngressName"].GetString());
        m_ingressNameHasBeenSet = true;
    }

    if (value.HasMember("CreatedBy") && !value["CreatedBy"].IsNull())
    {
        if (!value["CreatedBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.CreatedBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdBy = string(value["CreatedBy"].GetString());
        m_createdByHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.SubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = string(value["SubUin"].GetString());
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Service.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("BusinessStatus") && !value["BusinessStatus"].IsNull())
    {
        if (!value["BusinessStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.BusinessStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessStatus = string(value["BusinessStatus"].GetString());
        m_businessStatusHasBeenSet = true;
    }

    if (value.HasMember("ServiceLimit") && !value["ServiceLimit"].IsNull())
    {
        if (!value["ServiceLimit"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Service.ServiceLimit` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_serviceLimit.Deserialize(value["ServiceLimit"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceLimitHasBeenSet = true;
    }

    if (value.HasMember("ScheduledAction") && !value["ScheduledAction"].IsNull())
    {
        if (!value["ScheduledAction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Service.ScheduledAction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scheduledAction.Deserialize(value["ScheduledAction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scheduledActionHasBeenSet = true;
    }

    if (value.HasMember("CreateFailedReason") && !value["CreateFailedReason"].IsNull())
    {
        if (!value["CreateFailedReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.CreateFailedReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createFailedReason = string(value["CreateFailedReason"].GetString());
        m_createFailedReasonHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("BillingInfo") && !value["BillingInfo"].IsNull())
    {
        if (!value["BillingInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.BillingInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingInfo = string(value["BillingInfo"].GetString());
        m_billingInfoHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Service.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("CreateSource") && !value["CreateSource"].IsNull())
    {
        if (!value["CreateSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.CreateSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createSource = string(value["CreateSource"].GetString());
        m_createSourceHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("LatestVersion") && !value["LatestVersion"].IsNull())
    {
        if (!value["LatestVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.LatestVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestVersion = string(value["LatestVersion"].GetString());
        m_latestVersionHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupSWType") && !value["ResourceGroupSWType"].IsNull())
    {
        if (!value["ResourceGroupSWType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.ResourceGroupSWType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupSWType = string(value["ResourceGroupSWType"].GetString());
        m_resourceGroupSWTypeHasBeenSet = true;
    }

    if (value.HasMember("ArchiveStatus") && !value["ArchiveStatus"].IsNull())
    {
        if (!value["ArchiveStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.ArchiveStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_archiveStatus = string(value["ArchiveStatus"].GetString());
        m_archiveStatusHasBeenSet = true;
    }

    if (value.HasMember("DeployType") && !value["DeployType"].IsNull())
    {
        if (!value["DeployType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.DeployType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployType = string(value["DeployType"].GetString());
        m_deployTypeHasBeenSet = true;
    }

    if (value.HasMember("InstancePerReplicas") && !value["InstancePerReplicas"].IsNull())
    {
        if (!value["InstancePerReplicas"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.InstancePerReplicas` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instancePerReplicas = string(value["InstancePerReplicas"].GetString());
        m_instancePerReplicasHasBeenSet = true;
    }

    if (value.HasMember("MonitorSource") && !value["MonitorSource"].IsNull())
    {
        if (!value["MonitorSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.MonitorSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorSource = string(value["MonitorSource"].GetString());
        m_monitorSourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Service::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupName.c_str(), allocator).Move(), allocator);
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

    if (m_ingressNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IngressName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ingressName.c_str(), allocator).Move(), allocator);
    }

    if (m_createdByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdBy.c_str(), allocator).Move(), allocator);
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

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_subUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUin.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_businessStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceLimit.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scheduledActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scheduledAction.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createFailedReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateFailedReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createFailedReason.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_billingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_createSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createSource.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_latestVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupSWTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupSWType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupSWType.c_str(), allocator).Move(), allocator);
    }

    if (m_archiveStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchiveStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_archiveStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_deployTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployType.c_str(), allocator).Move(), allocator);
    }

    if (m_instancePerReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstancePerReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instancePerReplicas.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitorSource.c_str(), allocator).Move(), allocator);
    }

}


string Service::GetServiceGroupId() const
{
    return m_serviceGroupId;
}

void Service::SetServiceGroupId(const string& _serviceGroupId)
{
    m_serviceGroupId = _serviceGroupId;
    m_serviceGroupIdHasBeenSet = true;
}

bool Service::ServiceGroupIdHasBeenSet() const
{
    return m_serviceGroupIdHasBeenSet;
}

string Service::GetServiceId() const
{
    return m_serviceId;
}

void Service::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool Service::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string Service::GetServiceGroupName() const
{
    return m_serviceGroupName;
}

void Service::SetServiceGroupName(const string& _serviceGroupName)
{
    m_serviceGroupName = _serviceGroupName;
    m_serviceGroupNameHasBeenSet = true;
}

bool Service::ServiceGroupNameHasBeenSet() const
{
    return m_serviceGroupNameHasBeenSet;
}

string Service::GetServiceDescription() const
{
    return m_serviceDescription;
}

void Service::SetServiceDescription(const string& _serviceDescription)
{
    m_serviceDescription = _serviceDescription;
    m_serviceDescriptionHasBeenSet = true;
}

bool Service::ServiceDescriptionHasBeenSet() const
{
    return m_serviceDescriptionHasBeenSet;
}

ServiceInfo Service::GetServiceInfo() const
{
    return m_serviceInfo;
}

void Service::SetServiceInfo(const ServiceInfo& _serviceInfo)
{
    m_serviceInfo = _serviceInfo;
    m_serviceInfoHasBeenSet = true;
}

bool Service::ServiceInfoHasBeenSet() const
{
    return m_serviceInfoHasBeenSet;
}

string Service::GetClusterId() const
{
    return m_clusterId;
}

void Service::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool Service::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string Service::GetRegion() const
{
    return m_region;
}

void Service::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool Service::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string Service::GetNamespace() const
{
    return m_namespace;
}

void Service::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool Service::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string Service::GetChargeType() const
{
    return m_chargeType;
}

void Service::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool Service::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string Service::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void Service::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool Service::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

string Service::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void Service::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool Service::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}

vector<Tag> Service::GetTags() const
{
    return m_tags;
}

void Service::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Service::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string Service::GetIngressName() const
{
    return m_ingressName;
}

void Service::SetIngressName(const string& _ingressName)
{
    m_ingressName = _ingressName;
    m_ingressNameHasBeenSet = true;
}

bool Service::IngressNameHasBeenSet() const
{
    return m_ingressNameHasBeenSet;
}

string Service::GetCreatedBy() const
{
    return m_createdBy;
}

void Service::SetCreatedBy(const string& _createdBy)
{
    m_createdBy = _createdBy;
    m_createdByHasBeenSet = true;
}

bool Service::CreatedByHasBeenSet() const
{
    return m_createdByHasBeenSet;
}

string Service::GetCreateTime() const
{
    return m_createTime;
}

void Service::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Service::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Service::GetUpdateTime() const
{
    return m_updateTime;
}

void Service::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Service::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string Service::GetUin() const
{
    return m_uin;
}

void Service::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool Service::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string Service::GetSubUin() const
{
    return m_subUin;
}

void Service::SetSubUin(const string& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool Service::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

int64_t Service::GetAppId() const
{
    return m_appId;
}

void Service::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool Service::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string Service::GetBusinessStatus() const
{
    return m_businessStatus;
}

void Service::SetBusinessStatus(const string& _businessStatus)
{
    m_businessStatus = _businessStatus;
    m_businessStatusHasBeenSet = true;
}

bool Service::BusinessStatusHasBeenSet() const
{
    return m_businessStatusHasBeenSet;
}

ServiceLimit Service::GetServiceLimit() const
{
    return m_serviceLimit;
}

void Service::SetServiceLimit(const ServiceLimit& _serviceLimit)
{
    m_serviceLimit = _serviceLimit;
    m_serviceLimitHasBeenSet = true;
}

bool Service::ServiceLimitHasBeenSet() const
{
    return m_serviceLimitHasBeenSet;
}

ScheduledAction Service::GetScheduledAction() const
{
    return m_scheduledAction;
}

void Service::SetScheduledAction(const ScheduledAction& _scheduledAction)
{
    m_scheduledAction = _scheduledAction;
    m_scheduledActionHasBeenSet = true;
}

bool Service::ScheduledActionHasBeenSet() const
{
    return m_scheduledActionHasBeenSet;
}

string Service::GetCreateFailedReason() const
{
    return m_createFailedReason;
}

void Service::SetCreateFailedReason(const string& _createFailedReason)
{
    m_createFailedReason = _createFailedReason;
    m_createFailedReasonHasBeenSet = true;
}

bool Service::CreateFailedReasonHasBeenSet() const
{
    return m_createFailedReasonHasBeenSet;
}

string Service::GetStatus() const
{
    return m_status;
}

void Service::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Service::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Service::GetBillingInfo() const
{
    return m_billingInfo;
}

void Service::SetBillingInfo(const string& _billingInfo)
{
    m_billingInfo = _billingInfo;
    m_billingInfoHasBeenSet = true;
}

bool Service::BillingInfoHasBeenSet() const
{
    return m_billingInfoHasBeenSet;
}

int64_t Service::GetWeight() const
{
    return m_weight;
}

void Service::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool Service::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string Service::GetCreateSource() const
{
    return m_createSource;
}

void Service::SetCreateSource(const string& _createSource)
{
    m_createSource = _createSource;
    m_createSourceHasBeenSet = true;
}

bool Service::CreateSourceHasBeenSet() const
{
    return m_createSourceHasBeenSet;
}

string Service::GetVersion() const
{
    return m_version;
}

void Service::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool Service::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string Service::GetLatestVersion() const
{
    return m_latestVersion;
}

void Service::SetLatestVersion(const string& _latestVersion)
{
    m_latestVersion = _latestVersion;
    m_latestVersionHasBeenSet = true;
}

bool Service::LatestVersionHasBeenSet() const
{
    return m_latestVersionHasBeenSet;
}

string Service::GetResourceGroupSWType() const
{
    return m_resourceGroupSWType;
}

void Service::SetResourceGroupSWType(const string& _resourceGroupSWType)
{
    m_resourceGroupSWType = _resourceGroupSWType;
    m_resourceGroupSWTypeHasBeenSet = true;
}

bool Service::ResourceGroupSWTypeHasBeenSet() const
{
    return m_resourceGroupSWTypeHasBeenSet;
}

string Service::GetArchiveStatus() const
{
    return m_archiveStatus;
}

void Service::SetArchiveStatus(const string& _archiveStatus)
{
    m_archiveStatus = _archiveStatus;
    m_archiveStatusHasBeenSet = true;
}

bool Service::ArchiveStatusHasBeenSet() const
{
    return m_archiveStatusHasBeenSet;
}

string Service::GetDeployType() const
{
    return m_deployType;
}

void Service::SetDeployType(const string& _deployType)
{
    m_deployType = _deployType;
    m_deployTypeHasBeenSet = true;
}

bool Service::DeployTypeHasBeenSet() const
{
    return m_deployTypeHasBeenSet;
}

string Service::GetInstancePerReplicas() const
{
    return m_instancePerReplicas;
}

void Service::SetInstancePerReplicas(const string& _instancePerReplicas)
{
    m_instancePerReplicas = _instancePerReplicas;
    m_instancePerReplicasHasBeenSet = true;
}

bool Service::InstancePerReplicasHasBeenSet() const
{
    return m_instancePerReplicasHasBeenSet;
}

string Service::GetMonitorSource() const
{
    return m_monitorSource;
}

void Service::SetMonitorSource(const string& _monitorSource)
{
    m_monitorSource = _monitorSource;
    m_monitorSourceHasBeenSet = true;
}

bool Service::MonitorSourceHasBeenSet() const
{
    return m_monitorSourceHasBeenSet;
}

