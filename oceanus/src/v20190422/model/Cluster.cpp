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

#include <tencentcloud/oceanus/v20190422/model/Cluster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

Cluster::Cluster() :
    m_clusterIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_cuNumHasBeenSet(false),
    m_cuMemHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_cCNsHasBeenSet(false),
    m_netEnvironmentTypeHasBeenSet(false),
    m_freeCuNumHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_isolatedTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_secondsUntilExpiryHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_defaultCOSBucketHasBeenSet(false),
    m_cLSLogSetHasBeenSet(false),
    m_cLSTopicIdHasBeenSet(false),
    m_cLSLogNameHasBeenSet(false),
    m_cLSTopicNameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_freeCuHasBeenSet(false),
    m_defaultLogCollectConfHasBeenSet(false),
    m_customizedDNSEnabledHasBeenSet(false),
    m_correlationsHasBeenSet(false),
    m_runningCuHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_isNeedManageNodeHasBeenSet(false),
    m_clusterSessionsHasBeenSet(false),
    m_archGenerationHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_ordersHasBeenSet(false),
    m_sqlGatewaysHasBeenSet(false),
    m_webUITypeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_subEksHasBeenSet(false),
    m_agentSerialIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_billingResourceModeHasBeenSet(false),
    m_memRatioHasBeenSet(false),
    m_crossTenantEniModeHasBeenSet(false),
    m_totalCpuHasBeenSet(false),
    m_totalMemHasBeenSet(false),
    m_runningCpuHasBeenSet(false),
    m_runningMemHasBeenSet(false),
    m_setatsHasBeenSet(false)
{
}

CoreInternalOutcome Cluster::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.CreatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = string(value["CreatorUin"].GetString());
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CuNum") && !value["CuNum"].IsNull())
    {
        if (!value["CuNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.CuNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cuNum = value["CuNum"].GetUint64();
        m_cuNumHasBeenSet = true;
    }

    if (value.HasMember("CuMem") && !value["CuMem"].IsNull())
    {
        if (!value["CuMem"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.CuMem` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cuMem = value["CuMem"].GetUint64();
        m_cuMemHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("CCNs") && !value["CCNs"].IsNull())
    {
        if (!value["CCNs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Cluster.CCNs` is not array type"));

        const rapidjson::Value &tmpValue = value["CCNs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CCN item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cCNs.push_back(item);
        }
        m_cCNsHasBeenSet = true;
    }

    if (value.HasMember("NetEnvironmentType") && !value["NetEnvironmentType"].IsNull())
    {
        if (!value["NetEnvironmentType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.NetEnvironmentType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_netEnvironmentType = value["NetEnvironmentType"].GetUint64();
        m_netEnvironmentTypeHasBeenSet = true;
    }

    if (value.HasMember("FreeCuNum") && !value["FreeCuNum"].IsNull())
    {
        if (!value["FreeCuNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.FreeCuNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_freeCuNum = value["FreeCuNum"].GetInt64();
        m_freeCuNumHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Cluster.Tags` is not array type"));

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

    if (value.HasMember("IsolatedTime") && !value["IsolatedTime"].IsNull())
    {
        if (!value["IsolatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.IsolatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedTime = string(value["IsolatedTime"].GetString());
        m_isolatedTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("SecondsUntilExpiry") && !value["SecondsUntilExpiry"].IsNull())
    {
        if (!value["SecondsUntilExpiry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.SecondsUntilExpiry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondsUntilExpiry = string(value["SecondsUntilExpiry"].GetString());
        m_secondsUntilExpiryHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("DefaultCOSBucket") && !value["DefaultCOSBucket"].IsNull())
    {
        if (!value["DefaultCOSBucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.DefaultCOSBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultCOSBucket = string(value["DefaultCOSBucket"].GetString());
        m_defaultCOSBucketHasBeenSet = true;
    }

    if (value.HasMember("CLSLogSet") && !value["CLSLogSet"].IsNull())
    {
        if (!value["CLSLogSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.CLSLogSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cLSLogSet = string(value["CLSLogSet"].GetString());
        m_cLSLogSetHasBeenSet = true;
    }

    if (value.HasMember("CLSTopicId") && !value["CLSTopicId"].IsNull())
    {
        if (!value["CLSTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.CLSTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cLSTopicId = string(value["CLSTopicId"].GetString());
        m_cLSTopicIdHasBeenSet = true;
    }

    if (value.HasMember("CLSLogName") && !value["CLSLogName"].IsNull())
    {
        if (!value["CLSLogName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.CLSLogName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cLSLogName = string(value["CLSLogName"].GetString());
        m_cLSLogNameHasBeenSet = true;
    }

    if (value.HasMember("CLSTopicName") && !value["CLSTopicName"].IsNull())
    {
        if (!value["CLSTopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.CLSTopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cLSTopicName = string(value["CLSTopicName"].GetString());
        m_cLSTopicNameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Version` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_version.Deserialize(value["Version"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_versionHasBeenSet = true;
    }

    if (value.HasMember("FreeCu") && !value["FreeCu"].IsNull())
    {
        if (!value["FreeCu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.FreeCu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_freeCu = value["FreeCu"].GetDouble();
        m_freeCuHasBeenSet = true;
    }

    if (value.HasMember("DefaultLogCollectConf") && !value["DefaultLogCollectConf"].IsNull())
    {
        if (!value["DefaultLogCollectConf"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.DefaultLogCollectConf` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultLogCollectConf = string(value["DefaultLogCollectConf"].GetString());
        m_defaultLogCollectConfHasBeenSet = true;
    }

    if (value.HasMember("CustomizedDNSEnabled") && !value["CustomizedDNSEnabled"].IsNull())
    {
        if (!value["CustomizedDNSEnabled"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.CustomizedDNSEnabled` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_customizedDNSEnabled = value["CustomizedDNSEnabled"].GetInt64();
        m_customizedDNSEnabledHasBeenSet = true;
    }

    if (value.HasMember("Correlations") && !value["Correlations"].IsNull())
    {
        if (!value["Correlations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Cluster.Correlations` is not array type"));

        const rapidjson::Value &tmpValue = value["Correlations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WorkSpaceClusterItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_correlations.push_back(item);
        }
        m_correlationsHasBeenSet = true;
    }

    if (value.HasMember("RunningCu") && !value["RunningCu"].IsNull())
    {
        if (!value["RunningCu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.RunningCu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_runningCu = value["RunningCu"].GetDouble();
        m_runningCuHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("IsNeedManageNode") && !value["IsNeedManageNode"].IsNull())
    {
        if (!value["IsNeedManageNode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.IsNeedManageNode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isNeedManageNode = value["IsNeedManageNode"].GetInt64();
        m_isNeedManageNodeHasBeenSet = true;
    }

    if (value.HasMember("ClusterSessions") && !value["ClusterSessions"].IsNull())
    {
        if (!value["ClusterSessions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterSessions` is not array type"));

        const rapidjson::Value &tmpValue = value["ClusterSessions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClusterSession item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clusterSessions.push_back(item);
        }
        m_clusterSessionsHasBeenSet = true;
    }

    if (value.HasMember("ArchGeneration") && !value["ArchGeneration"].IsNull())
    {
        if (!value["ArchGeneration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ArchGeneration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_archGeneration = value["ArchGeneration"].GetUint64();
        m_archGenerationHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = value["ClusterType"].GetUint64();
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("Orders") && !value["Orders"].IsNull())
    {
        if (!value["Orders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Cluster.Orders` is not array type"));

        const rapidjson::Value &tmpValue = value["Orders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Order item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_orders.push_back(item);
        }
        m_ordersHasBeenSet = true;
    }

    if (value.HasMember("SqlGateways") && !value["SqlGateways"].IsNull())
    {
        if (!value["SqlGateways"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Cluster.SqlGateways` is not array type"));

        const rapidjson::Value &tmpValue = value["SqlGateways"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SqlGatewayItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sqlGateways.push_back(item);
        }
        m_sqlGatewaysHasBeenSet = true;
    }

    if (value.HasMember("WebUIType") && !value["WebUIType"].IsNull())
    {
        if (!value["WebUIType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.WebUIType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_webUIType = value["WebUIType"].GetInt64();
        m_webUITypeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SubEks") && !value["SubEks"].IsNull())
    {
        if (!value["SubEks"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.SubEks` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subEks.Deserialize(value["SubEks"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subEksHasBeenSet = true;
    }

    if (value.HasMember("AgentSerialId") && !value["AgentSerialId"].IsNull())
    {
        if (!value["AgentSerialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.AgentSerialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentSerialId = string(value["AgentSerialId"].GetString());
        m_agentSerialIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ResourceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = value["ResourceType"].GetInt64();
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("BillingResourceMode") && !value["BillingResourceMode"].IsNull())
    {
        if (!value["BillingResourceMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.BillingResourceMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingResourceMode = string(value["BillingResourceMode"].GetString());
        m_billingResourceModeHasBeenSet = true;
    }

    if (value.HasMember("MemRatio") && !value["MemRatio"].IsNull())
    {
        if (!value["MemRatio"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.MemRatio` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memRatio = value["MemRatio"].GetInt64();
        m_memRatioHasBeenSet = true;
    }

    if (value.HasMember("CrossTenantEniMode") && !value["CrossTenantEniMode"].IsNull())
    {
        if (!value["CrossTenantEniMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.CrossTenantEniMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_crossTenantEniMode = value["CrossTenantEniMode"].GetInt64();
        m_crossTenantEniModeHasBeenSet = true;
    }

    if (value.HasMember("TotalCpu") && !value["TotalCpu"].IsNull())
    {
        if (!value["TotalCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.TotalCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalCpu = value["TotalCpu"].GetDouble();
        m_totalCpuHasBeenSet = true;
    }

    if (value.HasMember("TotalMem") && !value["TotalMem"].IsNull())
    {
        if (!value["TotalMem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.TotalMem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalMem = value["TotalMem"].GetDouble();
        m_totalMemHasBeenSet = true;
    }

    if (value.HasMember("RunningCpu") && !value["RunningCpu"].IsNull())
    {
        if (!value["RunningCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.RunningCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_runningCpu = value["RunningCpu"].GetDouble();
        m_runningCpuHasBeenSet = true;
    }

    if (value.HasMember("RunningMem") && !value["RunningMem"].IsNull())
    {
        if (!value["RunningMem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.RunningMem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_runningMem = value["RunningMem"].GetDouble();
        m_runningMemHasBeenSet = true;
    }

    if (value.HasMember("Setats") && !value["Setats"].IsNull())
    {
        if (!value["Setats"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Setats` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_setats.Deserialize(value["Setats"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_setatsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Cluster::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorUin.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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

    if (m_cuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cuNum, allocator);
    }

    if (m_cuMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CuMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cuMem, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_cCNsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CCNs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cCNs.begin(); itr != m_cCNs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_netEnvironmentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetEnvironmentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_netEnvironmentType, allocator);
    }

    if (m_freeCuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeCuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freeCuNum, allocator);
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

    if (m_isolatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_secondsUntilExpiryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondsUntilExpiry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondsUntilExpiry.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_defaultCOSBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultCOSBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultCOSBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_cLSLogSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLSLogSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cLSLogSet.c_str(), allocator).Move(), allocator);
    }

    if (m_cLSTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLSTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cLSTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_cLSLogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLSLogName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cLSLogName.c_str(), allocator).Move(), allocator);
    }

    if (m_cLSTopicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLSTopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cLSTopicName.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_version.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_freeCuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeCu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freeCu, allocator);
    }

    if (m_defaultLogCollectConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultLogCollectConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultLogCollectConf.c_str(), allocator).Move(), allocator);
    }

    if (m_customizedDNSEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomizedDNSEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customizedDNSEnabled, allocator);
    }

    if (m_correlationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Correlations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_correlations.begin(); itr != m_correlations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_runningCuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningCu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningCu, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_isNeedManageNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNeedManageNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNeedManageNode, allocator);
    }

    if (m_clusterSessionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterSessions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusterSessions.begin(); itr != m_clusterSessions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_archGenerationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchGeneration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_archGeneration, allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterType, allocator);
    }

    if (m_ordersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Orders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_orders.begin(); itr != m_orders.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sqlGatewaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlGateways";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sqlGateways.begin(); itr != m_sqlGateways.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_webUITypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebUIType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webUIType, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_subEksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubEks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subEks.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_agentSerialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentSerialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentSerialId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceType, allocator);
    }

    if (m_billingResourceModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingResourceMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingResourceMode.c_str(), allocator).Move(), allocator);
    }

    if (m_memRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memRatio, allocator);
    }

    if (m_crossTenantEniModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossTenantEniMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crossTenantEniMode, allocator);
    }

    if (m_totalCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCpu, allocator);
    }

    if (m_totalMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalMem, allocator);
    }

    if (m_runningCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningCpu, allocator);
    }

    if (m_runningMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningMem, allocator);
    }

    if (m_setatsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Setats";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_setats.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Cluster::GetClusterId() const
{
    return m_clusterId;
}

void Cluster::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool Cluster::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string Cluster::GetName() const
{
    return m_name;
}

void Cluster::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Cluster::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Cluster::GetRegion() const
{
    return m_region;
}

void Cluster::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool Cluster::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t Cluster::GetAppId() const
{
    return m_appId;
}

void Cluster::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool Cluster::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string Cluster::GetOwnerUin() const
{
    return m_ownerUin;
}

void Cluster::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool Cluster::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string Cluster::GetCreatorUin() const
{
    return m_creatorUin;
}

void Cluster::SetCreatorUin(const string& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool Cluster::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

int64_t Cluster::GetStatus() const
{
    return m_status;
}

void Cluster::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Cluster::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Cluster::GetRemark() const
{
    return m_remark;
}

void Cluster::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool Cluster::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string Cluster::GetCreateTime() const
{
    return m_createTime;
}

void Cluster::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Cluster::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Cluster::GetUpdateTime() const
{
    return m_updateTime;
}

void Cluster::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Cluster::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t Cluster::GetCuNum() const
{
    return m_cuNum;
}

void Cluster::SetCuNum(const uint64_t& _cuNum)
{
    m_cuNum = _cuNum;
    m_cuNumHasBeenSet = true;
}

bool Cluster::CuNumHasBeenSet() const
{
    return m_cuNumHasBeenSet;
}

uint64_t Cluster::GetCuMem() const
{
    return m_cuMem;
}

void Cluster::SetCuMem(const uint64_t& _cuMem)
{
    m_cuMem = _cuMem;
    m_cuMemHasBeenSet = true;
}

bool Cluster::CuMemHasBeenSet() const
{
    return m_cuMemHasBeenSet;
}

string Cluster::GetZone() const
{
    return m_zone;
}

void Cluster::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool Cluster::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string Cluster::GetStatusDesc() const
{
    return m_statusDesc;
}

void Cluster::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool Cluster::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

vector<CCN> Cluster::GetCCNs() const
{
    return m_cCNs;
}

void Cluster::SetCCNs(const vector<CCN>& _cCNs)
{
    m_cCNs = _cCNs;
    m_cCNsHasBeenSet = true;
}

bool Cluster::CCNsHasBeenSet() const
{
    return m_cCNsHasBeenSet;
}

uint64_t Cluster::GetNetEnvironmentType() const
{
    return m_netEnvironmentType;
}

void Cluster::SetNetEnvironmentType(const uint64_t& _netEnvironmentType)
{
    m_netEnvironmentType = _netEnvironmentType;
    m_netEnvironmentTypeHasBeenSet = true;
}

bool Cluster::NetEnvironmentTypeHasBeenSet() const
{
    return m_netEnvironmentTypeHasBeenSet;
}

int64_t Cluster::GetFreeCuNum() const
{
    return m_freeCuNum;
}

void Cluster::SetFreeCuNum(const int64_t& _freeCuNum)
{
    m_freeCuNum = _freeCuNum;
    m_freeCuNumHasBeenSet = true;
}

bool Cluster::FreeCuNumHasBeenSet() const
{
    return m_freeCuNumHasBeenSet;
}

vector<Tag> Cluster::GetTags() const
{
    return m_tags;
}

void Cluster::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Cluster::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string Cluster::GetIsolatedTime() const
{
    return m_isolatedTime;
}

void Cluster::SetIsolatedTime(const string& _isolatedTime)
{
    m_isolatedTime = _isolatedTime;
    m_isolatedTimeHasBeenSet = true;
}

bool Cluster::IsolatedTimeHasBeenSet() const
{
    return m_isolatedTimeHasBeenSet;
}

string Cluster::GetExpireTime() const
{
    return m_expireTime;
}

void Cluster::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool Cluster::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string Cluster::GetSecondsUntilExpiry() const
{
    return m_secondsUntilExpiry;
}

void Cluster::SetSecondsUntilExpiry(const string& _secondsUntilExpiry)
{
    m_secondsUntilExpiry = _secondsUntilExpiry;
    m_secondsUntilExpiryHasBeenSet = true;
}

bool Cluster::SecondsUntilExpiryHasBeenSet() const
{
    return m_secondsUntilExpiryHasBeenSet;
}

int64_t Cluster::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void Cluster::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool Cluster::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string Cluster::GetDefaultCOSBucket() const
{
    return m_defaultCOSBucket;
}

void Cluster::SetDefaultCOSBucket(const string& _defaultCOSBucket)
{
    m_defaultCOSBucket = _defaultCOSBucket;
    m_defaultCOSBucketHasBeenSet = true;
}

bool Cluster::DefaultCOSBucketHasBeenSet() const
{
    return m_defaultCOSBucketHasBeenSet;
}

string Cluster::GetCLSLogSet() const
{
    return m_cLSLogSet;
}

void Cluster::SetCLSLogSet(const string& _cLSLogSet)
{
    m_cLSLogSet = _cLSLogSet;
    m_cLSLogSetHasBeenSet = true;
}

bool Cluster::CLSLogSetHasBeenSet() const
{
    return m_cLSLogSetHasBeenSet;
}

string Cluster::GetCLSTopicId() const
{
    return m_cLSTopicId;
}

void Cluster::SetCLSTopicId(const string& _cLSTopicId)
{
    m_cLSTopicId = _cLSTopicId;
    m_cLSTopicIdHasBeenSet = true;
}

bool Cluster::CLSTopicIdHasBeenSet() const
{
    return m_cLSTopicIdHasBeenSet;
}

string Cluster::GetCLSLogName() const
{
    return m_cLSLogName;
}

void Cluster::SetCLSLogName(const string& _cLSLogName)
{
    m_cLSLogName = _cLSLogName;
    m_cLSLogNameHasBeenSet = true;
}

bool Cluster::CLSLogNameHasBeenSet() const
{
    return m_cLSLogNameHasBeenSet;
}

string Cluster::GetCLSTopicName() const
{
    return m_cLSTopicName;
}

void Cluster::SetCLSTopicName(const string& _cLSTopicName)
{
    m_cLSTopicName = _cLSTopicName;
    m_cLSTopicNameHasBeenSet = true;
}

bool Cluster::CLSTopicNameHasBeenSet() const
{
    return m_cLSTopicNameHasBeenSet;
}

ClusterVersion Cluster::GetVersion() const
{
    return m_version;
}

void Cluster::SetVersion(const ClusterVersion& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool Cluster::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

double Cluster::GetFreeCu() const
{
    return m_freeCu;
}

void Cluster::SetFreeCu(const double& _freeCu)
{
    m_freeCu = _freeCu;
    m_freeCuHasBeenSet = true;
}

bool Cluster::FreeCuHasBeenSet() const
{
    return m_freeCuHasBeenSet;
}

string Cluster::GetDefaultLogCollectConf() const
{
    return m_defaultLogCollectConf;
}

void Cluster::SetDefaultLogCollectConf(const string& _defaultLogCollectConf)
{
    m_defaultLogCollectConf = _defaultLogCollectConf;
    m_defaultLogCollectConfHasBeenSet = true;
}

bool Cluster::DefaultLogCollectConfHasBeenSet() const
{
    return m_defaultLogCollectConfHasBeenSet;
}

int64_t Cluster::GetCustomizedDNSEnabled() const
{
    return m_customizedDNSEnabled;
}

void Cluster::SetCustomizedDNSEnabled(const int64_t& _customizedDNSEnabled)
{
    m_customizedDNSEnabled = _customizedDNSEnabled;
    m_customizedDNSEnabledHasBeenSet = true;
}

bool Cluster::CustomizedDNSEnabledHasBeenSet() const
{
    return m_customizedDNSEnabledHasBeenSet;
}

vector<WorkSpaceClusterItem> Cluster::GetCorrelations() const
{
    return m_correlations;
}

void Cluster::SetCorrelations(const vector<WorkSpaceClusterItem>& _correlations)
{
    m_correlations = _correlations;
    m_correlationsHasBeenSet = true;
}

bool Cluster::CorrelationsHasBeenSet() const
{
    return m_correlationsHasBeenSet;
}

double Cluster::GetRunningCu() const
{
    return m_runningCu;
}

void Cluster::SetRunningCu(const double& _runningCu)
{
    m_runningCu = _runningCu;
    m_runningCuHasBeenSet = true;
}

bool Cluster::RunningCuHasBeenSet() const
{
    return m_runningCuHasBeenSet;
}

int64_t Cluster::GetPayMode() const
{
    return m_payMode;
}

void Cluster::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool Cluster::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t Cluster::GetIsNeedManageNode() const
{
    return m_isNeedManageNode;
}

void Cluster::SetIsNeedManageNode(const int64_t& _isNeedManageNode)
{
    m_isNeedManageNode = _isNeedManageNode;
    m_isNeedManageNodeHasBeenSet = true;
}

bool Cluster::IsNeedManageNodeHasBeenSet() const
{
    return m_isNeedManageNodeHasBeenSet;
}

vector<ClusterSession> Cluster::GetClusterSessions() const
{
    return m_clusterSessions;
}

void Cluster::SetClusterSessions(const vector<ClusterSession>& _clusterSessions)
{
    m_clusterSessions = _clusterSessions;
    m_clusterSessionsHasBeenSet = true;
}

bool Cluster::ClusterSessionsHasBeenSet() const
{
    return m_clusterSessionsHasBeenSet;
}

uint64_t Cluster::GetArchGeneration() const
{
    return m_archGeneration;
}

void Cluster::SetArchGeneration(const uint64_t& _archGeneration)
{
    m_archGeneration = _archGeneration;
    m_archGenerationHasBeenSet = true;
}

bool Cluster::ArchGenerationHasBeenSet() const
{
    return m_archGenerationHasBeenSet;
}

uint64_t Cluster::GetClusterType() const
{
    return m_clusterType;
}

void Cluster::SetClusterType(const uint64_t& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool Cluster::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

vector<Order> Cluster::GetOrders() const
{
    return m_orders;
}

void Cluster::SetOrders(const vector<Order>& _orders)
{
    m_orders = _orders;
    m_ordersHasBeenSet = true;
}

bool Cluster::OrdersHasBeenSet() const
{
    return m_ordersHasBeenSet;
}

vector<SqlGatewayItem> Cluster::GetSqlGateways() const
{
    return m_sqlGateways;
}

void Cluster::SetSqlGateways(const vector<SqlGatewayItem>& _sqlGateways)
{
    m_sqlGateways = _sqlGateways;
    m_sqlGatewaysHasBeenSet = true;
}

bool Cluster::SqlGatewaysHasBeenSet() const
{
    return m_sqlGatewaysHasBeenSet;
}

int64_t Cluster::GetWebUIType() const
{
    return m_webUIType;
}

void Cluster::SetWebUIType(const int64_t& _webUIType)
{
    m_webUIType = _webUIType;
    m_webUITypeHasBeenSet = true;
}

bool Cluster::WebUITypeHasBeenSet() const
{
    return m_webUITypeHasBeenSet;
}

int64_t Cluster::GetType() const
{
    return m_type;
}

void Cluster::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Cluster::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

SubEks Cluster::GetSubEks() const
{
    return m_subEks;
}

void Cluster::SetSubEks(const SubEks& _subEks)
{
    m_subEks = _subEks;
    m_subEksHasBeenSet = true;
}

bool Cluster::SubEksHasBeenSet() const
{
    return m_subEksHasBeenSet;
}

string Cluster::GetAgentSerialId() const
{
    return m_agentSerialId;
}

void Cluster::SetAgentSerialId(const string& _agentSerialId)
{
    m_agentSerialId = _agentSerialId;
    m_agentSerialIdHasBeenSet = true;
}

bool Cluster::AgentSerialIdHasBeenSet() const
{
    return m_agentSerialIdHasBeenSet;
}

int64_t Cluster::GetResourceType() const
{
    return m_resourceType;
}

void Cluster::SetResourceType(const int64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool Cluster::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string Cluster::GetBillingResourceMode() const
{
    return m_billingResourceMode;
}

void Cluster::SetBillingResourceMode(const string& _billingResourceMode)
{
    m_billingResourceMode = _billingResourceMode;
    m_billingResourceModeHasBeenSet = true;
}

bool Cluster::BillingResourceModeHasBeenSet() const
{
    return m_billingResourceModeHasBeenSet;
}

int64_t Cluster::GetMemRatio() const
{
    return m_memRatio;
}

void Cluster::SetMemRatio(const int64_t& _memRatio)
{
    m_memRatio = _memRatio;
    m_memRatioHasBeenSet = true;
}

bool Cluster::MemRatioHasBeenSet() const
{
    return m_memRatioHasBeenSet;
}

int64_t Cluster::GetCrossTenantEniMode() const
{
    return m_crossTenantEniMode;
}

void Cluster::SetCrossTenantEniMode(const int64_t& _crossTenantEniMode)
{
    m_crossTenantEniMode = _crossTenantEniMode;
    m_crossTenantEniModeHasBeenSet = true;
}

bool Cluster::CrossTenantEniModeHasBeenSet() const
{
    return m_crossTenantEniModeHasBeenSet;
}

double Cluster::GetTotalCpu() const
{
    return m_totalCpu;
}

void Cluster::SetTotalCpu(const double& _totalCpu)
{
    m_totalCpu = _totalCpu;
    m_totalCpuHasBeenSet = true;
}

bool Cluster::TotalCpuHasBeenSet() const
{
    return m_totalCpuHasBeenSet;
}

double Cluster::GetTotalMem() const
{
    return m_totalMem;
}

void Cluster::SetTotalMem(const double& _totalMem)
{
    m_totalMem = _totalMem;
    m_totalMemHasBeenSet = true;
}

bool Cluster::TotalMemHasBeenSet() const
{
    return m_totalMemHasBeenSet;
}

double Cluster::GetRunningCpu() const
{
    return m_runningCpu;
}

void Cluster::SetRunningCpu(const double& _runningCpu)
{
    m_runningCpu = _runningCpu;
    m_runningCpuHasBeenSet = true;
}

bool Cluster::RunningCpuHasBeenSet() const
{
    return m_runningCpuHasBeenSet;
}

double Cluster::GetRunningMem() const
{
    return m_runningMem;
}

void Cluster::SetRunningMem(const double& _runningMem)
{
    m_runningMem = _runningMem;
    m_runningMemHasBeenSet = true;
}

bool Cluster::RunningMemHasBeenSet() const
{
    return m_runningMemHasBeenSet;
}

Setats Cluster::GetSetats() const
{
    return m_setats;
}

void Cluster::SetSetats(const Setats& _setats)
{
    m_setats = _setats;
    m_setatsHasBeenSet = true;
}

bool Cluster::SetatsHasBeenSet() const
{
    return m_setatsHasBeenSet;
}

