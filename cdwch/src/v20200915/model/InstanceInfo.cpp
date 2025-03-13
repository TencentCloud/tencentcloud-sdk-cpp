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

#include <tencentcloud/cdwch/v20200915/model/InstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

InstanceInfo::InstanceInfo() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_masterSummaryHasBeenSet(false),
    m_commonSummaryHasBeenSet(false),
    m_hAHasBeenSet(false),
    m_accessInfoHasBeenSet(false),
    m_idHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_zoneDescHasBeenSet(false),
    m_flowMsgHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_monitorHasBeenSet(false),
    m_hasClsTopicHasBeenSet(false),
    m_clsTopicIdHasBeenSet(false),
    m_clsLogSetIdHasBeenSet(false),
    m_enableXMLConfigHasBeenSet(false),
    m_regionDescHasBeenSet(false),
    m_eipHasBeenSet(false),
    m_cosMoveFactorHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_isElasticHasBeenSet(false),
    m_instanceStateInfoHasBeenSet(false),
    m_hAZkHasBeenSet(false),
    m_mountDiskTypeHasBeenSet(false),
    m_cHProxyVipHasBeenSet(false),
    m_cosBucketNameHasBeenSet(false),
    m_canAttachCbsHasBeenSet(false),
    m_canAttachCbsLvmHasBeenSet(false),
    m_canAttachCosHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_upgradeVersionsHasBeenSet(false),
    m_esIndexIdHasBeenSet(false),
    m_esIndexUsernameHasBeenSet(false),
    m_esIndexPasswordHasBeenSet(false),
    m_hasEsIndexHasBeenSet(false),
    m_isSecondaryZoneHasBeenSet(false),
    m_secondaryZoneInfoHasBeenSet(false),
    m_clickHouseKeeperHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_isWhiteSGsHasBeenSet(false),
    m_bindSGsHasBeenSet(false),
    m_hasPublicCloudClbHasBeenSet(false)
{
}

CoreInternalOutcome InstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("MasterSummary") && !value["MasterSummary"].IsNull())
    {
        if (!value["MasterSummary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MasterSummary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_masterSummary.Deserialize(value["MasterSummary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_masterSummaryHasBeenSet = true;
    }

    if (value.HasMember("CommonSummary") && !value["CommonSummary"].IsNull())
    {
        if (!value["CommonSummary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CommonSummary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_commonSummary.Deserialize(value["CommonSummary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_commonSummaryHasBeenSet = true;
    }

    if (value.HasMember("HA") && !value["HA"].IsNull())
    {
        if (!value["HA"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.HA` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hA = string(value["HA"].GetString());
        m_hAHasBeenSet = true;
    }

    if (value.HasMember("AccessInfo") && !value["AccessInfo"].IsNull())
    {
        if (!value["AccessInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AccessInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessInfo = string(value["AccessInfo"].GetString());
        m_accessInfoHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneDesc") && !value["ZoneDesc"].IsNull())
    {
        if (!value["ZoneDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ZoneDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneDesc = string(value["ZoneDesc"].GetString());
        m_zoneDescHasBeenSet = true;
    }

    if (value.HasMember("FlowMsg") && !value["FlowMsg"].IsNull())
    {
        if (!value["FlowMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.FlowMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowMsg = string(value["FlowMsg"].GetString());
        m_flowMsgHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.RenewFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetBool();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Tags` is not array type"));

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

    if (value.HasMember("Monitor") && !value["Monitor"].IsNull())
    {
        if (!value["Monitor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Monitor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitor = string(value["Monitor"].GetString());
        m_monitorHasBeenSet = true;
    }

    if (value.HasMember("HasClsTopic") && !value["HasClsTopic"].IsNull())
    {
        if (!value["HasClsTopic"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.HasClsTopic` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasClsTopic = value["HasClsTopic"].GetBool();
        m_hasClsTopicHasBeenSet = true;
    }

    if (value.HasMember("ClsTopicId") && !value["ClsTopicId"].IsNull())
    {
        if (!value["ClsTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ClsTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsTopicId = string(value["ClsTopicId"].GetString());
        m_clsTopicIdHasBeenSet = true;
    }

    if (value.HasMember("ClsLogSetId") && !value["ClsLogSetId"].IsNull())
    {
        if (!value["ClsLogSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ClsLogSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsLogSetId = string(value["ClsLogSetId"].GetString());
        m_clsLogSetIdHasBeenSet = true;
    }

    if (value.HasMember("EnableXMLConfig") && !value["EnableXMLConfig"].IsNull())
    {
        if (!value["EnableXMLConfig"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EnableXMLConfig` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableXMLConfig = value["EnableXMLConfig"].GetInt64();
        m_enableXMLConfigHasBeenSet = true;
    }

    if (value.HasMember("RegionDesc") && !value["RegionDesc"].IsNull())
    {
        if (!value["RegionDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.RegionDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionDesc = string(value["RegionDesc"].GetString());
        m_regionDescHasBeenSet = true;
    }

    if (value.HasMember("Eip") && !value["Eip"].IsNull())
    {
        if (!value["Eip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Eip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eip = string(value["Eip"].GetString());
        m_eipHasBeenSet = true;
    }

    if (value.HasMember("CosMoveFactor") && !value["CosMoveFactor"].IsNull())
    {
        if (!value["CosMoveFactor"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CosMoveFactor` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cosMoveFactor = value["CosMoveFactor"].GetInt64();
        m_cosMoveFactorHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("IsElastic") && !value["IsElastic"].IsNull())
    {
        if (!value["IsElastic"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.IsElastic` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isElastic = value["IsElastic"].GetBool();
        m_isElasticHasBeenSet = true;
    }

    if (value.HasMember("InstanceStateInfo") && !value["InstanceStateInfo"].IsNull())
    {
        if (!value["InstanceStateInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceStateInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceStateInfo.Deserialize(value["InstanceStateInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceStateInfoHasBeenSet = true;
    }

    if (value.HasMember("HAZk") && !value["HAZk"].IsNull())
    {
        if (!value["HAZk"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.HAZk` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hAZk = value["HAZk"].GetBool();
        m_hAZkHasBeenSet = true;
    }

    if (value.HasMember("MountDiskType") && !value["MountDiskType"].IsNull())
    {
        if (!value["MountDiskType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MountDiskType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mountDiskType = value["MountDiskType"].GetInt64();
        m_mountDiskTypeHasBeenSet = true;
    }

    if (value.HasMember("CHProxyVip") && !value["CHProxyVip"].IsNull())
    {
        if (!value["CHProxyVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CHProxyVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cHProxyVip = string(value["CHProxyVip"].GetString());
        m_cHProxyVipHasBeenSet = true;
    }

    if (value.HasMember("CosBucketName") && !value["CosBucketName"].IsNull())
    {
        if (!value["CosBucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CosBucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketName = string(value["CosBucketName"].GetString());
        m_cosBucketNameHasBeenSet = true;
    }

    if (value.HasMember("CanAttachCbs") && !value["CanAttachCbs"].IsNull())
    {
        if (!value["CanAttachCbs"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CanAttachCbs` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canAttachCbs = value["CanAttachCbs"].GetBool();
        m_canAttachCbsHasBeenSet = true;
    }

    if (value.HasMember("CanAttachCbsLvm") && !value["CanAttachCbsLvm"].IsNull())
    {
        if (!value["CanAttachCbsLvm"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CanAttachCbsLvm` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canAttachCbsLvm = value["CanAttachCbsLvm"].GetBool();
        m_canAttachCbsLvmHasBeenSet = true;
    }

    if (value.HasMember("CanAttachCos") && !value["CanAttachCos"].IsNull())
    {
        if (!value["CanAttachCos"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CanAttachCos` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canAttachCos = value["CanAttachCos"].GetBool();
        m_canAttachCosHasBeenSet = true;
    }

    if (value.HasMember("Components") && !value["Components"].IsNull())
    {
        if (!value["Components"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Components` is not array type"));

        const rapidjson::Value &tmpValue = value["Components"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_components.push_back(item);
        }
        m_componentsHasBeenSet = true;
    }

    if (value.HasMember("UpgradeVersions") && !value["UpgradeVersions"].IsNull())
    {
        if (!value["UpgradeVersions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.UpgradeVersions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upgradeVersions = string(value["UpgradeVersions"].GetString());
        m_upgradeVersionsHasBeenSet = true;
    }

    if (value.HasMember("EsIndexId") && !value["EsIndexId"].IsNull())
    {
        if (!value["EsIndexId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EsIndexId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_esIndexId = string(value["EsIndexId"].GetString());
        m_esIndexIdHasBeenSet = true;
    }

    if (value.HasMember("EsIndexUsername") && !value["EsIndexUsername"].IsNull())
    {
        if (!value["EsIndexUsername"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EsIndexUsername` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_esIndexUsername = string(value["EsIndexUsername"].GetString());
        m_esIndexUsernameHasBeenSet = true;
    }

    if (value.HasMember("EsIndexPassword") && !value["EsIndexPassword"].IsNull())
    {
        if (!value["EsIndexPassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EsIndexPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_esIndexPassword = string(value["EsIndexPassword"].GetString());
        m_esIndexPasswordHasBeenSet = true;
    }

    if (value.HasMember("HasEsIndex") && !value["HasEsIndex"].IsNull())
    {
        if (!value["HasEsIndex"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.HasEsIndex` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasEsIndex = value["HasEsIndex"].GetBool();
        m_hasEsIndexHasBeenSet = true;
    }

    if (value.HasMember("IsSecondaryZone") && !value["IsSecondaryZone"].IsNull())
    {
        if (!value["IsSecondaryZone"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.IsSecondaryZone` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSecondaryZone = value["IsSecondaryZone"].GetBool();
        m_isSecondaryZoneHasBeenSet = true;
    }

    if (value.HasMember("SecondaryZoneInfo") && !value["SecondaryZoneInfo"].IsNull())
    {
        if (!value["SecondaryZoneInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SecondaryZoneInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryZoneInfo = string(value["SecondaryZoneInfo"].GetString());
        m_secondaryZoneInfoHasBeenSet = true;
    }

    if (value.HasMember("ClickHouseKeeper") && !value["ClickHouseKeeper"].IsNull())
    {
        if (!value["ClickHouseKeeper"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ClickHouseKeeper` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_clickHouseKeeper = value["ClickHouseKeeper"].GetBool();
        m_clickHouseKeeperHasBeenSet = true;
    }

    if (value.HasMember("Details") && !value["Details"].IsNull())
    {
        if (!value["Details"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Details` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_details.Deserialize(value["Details"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_detailsHasBeenSet = true;
    }

    if (value.HasMember("IsWhiteSGs") && !value["IsWhiteSGs"].IsNull())
    {
        if (!value["IsWhiteSGs"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.IsWhiteSGs` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isWhiteSGs = value["IsWhiteSGs"].GetBool();
        m_isWhiteSGsHasBeenSet = true;
    }

    if (value.HasMember("BindSGs") && !value["BindSGs"].IsNull())
    {
        if (!value["BindSGs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.BindSGs` is not array type"));

        const rapidjson::Value &tmpValue = value["BindSGs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bindSGs.push_back((*itr).GetString());
        }
        m_bindSGsHasBeenSet = true;
    }

    if (value.HasMember("HasPublicCloudClb") && !value["HasPublicCloudClb"].IsNull())
    {
        if (!value["HasPublicCloudClb"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.HasPublicCloudClb` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasPublicCloudClb = value["HasPublicCloudClb"].GetBool();
        m_hasPublicCloudClbHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
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

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_masterSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_masterSummary.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_commonSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_commonSummary.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HA";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hA.c_str(), allocator).Move(), allocator);
    }

    if (m_accessInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_zoneDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_flowMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
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

    if (m_monitorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Monitor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitor.c_str(), allocator).Move(), allocator);
    }

    if (m_hasClsTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasClsTopic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasClsTopic, allocator);
    }

    if (m_clsTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clsTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_clsLogSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsLogSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clsLogSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableXMLConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableXMLConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableXMLConfig, allocator);
    }

    if (m_regionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_eipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Eip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eip.c_str(), allocator).Move(), allocator);
    }

    if (m_cosMoveFactorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosMoveFactor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cosMoveFactor, allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_isElasticHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsElastic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isElastic, allocator);
    }

    if (m_instanceStateInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStateInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceStateInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hAZkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HAZk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hAZk, allocator);
    }

    if (m_mountDiskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountDiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mountDiskType, allocator);
    }

    if (m_cHProxyVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CHProxyVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cHProxyVip.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_canAttachCbsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanAttachCbs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canAttachCbs, allocator);
    }

    if (m_canAttachCbsLvmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanAttachCbsLvm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canAttachCbsLvm, allocator);
    }

    if (m_canAttachCosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanAttachCos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canAttachCos, allocator);
    }

    if (m_componentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Components";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_components.begin(); itr != m_components.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_upgradeVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeVersions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upgradeVersions.c_str(), allocator).Move(), allocator);
    }

    if (m_esIndexIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsIndexId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_esIndexId.c_str(), allocator).Move(), allocator);
    }

    if (m_esIndexUsernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsIndexUsername";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_esIndexUsername.c_str(), allocator).Move(), allocator);
    }

    if (m_esIndexPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsIndexPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_esIndexPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_hasEsIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasEsIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasEsIndex, allocator);
    }

    if (m_isSecondaryZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSecondaryZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSecondaryZone, allocator);
    }

    if (m_secondaryZoneInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryZoneInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondaryZoneInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_clickHouseKeeperHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClickHouseKeeper";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clickHouseKeeper, allocator);
    }

    if (m_detailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Details";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_details.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isWhiteSGsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWhiteSGs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isWhiteSGs, allocator);
    }

    if (m_bindSGsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindSGs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bindSGs.begin(); itr != m_bindSGs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hasPublicCloudClbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasPublicCloudClb";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasPublicCloudClb, allocator);
    }

}


string InstanceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceInfo::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string InstanceInfo::GetStatus() const
{
    return m_status;
}

void InstanceInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string InstanceInfo::GetVersion() const
{
    return m_version;
}

void InstanceInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool InstanceInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string InstanceInfo::GetRegion() const
{
    return m_region;
}

void InstanceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InstanceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string InstanceInfo::GetZone() const
{
    return m_zone;
}

void InstanceInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InstanceInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string InstanceInfo::GetVpcId() const
{
    return m_vpcId;
}

void InstanceInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool InstanceInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string InstanceInfo::GetSubnetId() const
{
    return m_subnetId;
}

void InstanceInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool InstanceInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string InstanceInfo::GetPayMode() const
{
    return m_payMode;
}

void InstanceInfo::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool InstanceInfo::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string InstanceInfo::GetCreateTime() const
{
    return m_createTime;
}

void InstanceInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InstanceInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string InstanceInfo::GetExpireTime() const
{
    return m_expireTime;
}

void InstanceInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool InstanceInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

NodesSummary InstanceInfo::GetMasterSummary() const
{
    return m_masterSummary;
}

void InstanceInfo::SetMasterSummary(const NodesSummary& _masterSummary)
{
    m_masterSummary = _masterSummary;
    m_masterSummaryHasBeenSet = true;
}

bool InstanceInfo::MasterSummaryHasBeenSet() const
{
    return m_masterSummaryHasBeenSet;
}

NodesSummary InstanceInfo::GetCommonSummary() const
{
    return m_commonSummary;
}

void InstanceInfo::SetCommonSummary(const NodesSummary& _commonSummary)
{
    m_commonSummary = _commonSummary;
    m_commonSummaryHasBeenSet = true;
}

bool InstanceInfo::CommonSummaryHasBeenSet() const
{
    return m_commonSummaryHasBeenSet;
}

string InstanceInfo::GetHA() const
{
    return m_hA;
}

void InstanceInfo::SetHA(const string& _hA)
{
    m_hA = _hA;
    m_hAHasBeenSet = true;
}

bool InstanceInfo::HAHasBeenSet() const
{
    return m_hAHasBeenSet;
}

string InstanceInfo::GetAccessInfo() const
{
    return m_accessInfo;
}

void InstanceInfo::SetAccessInfo(const string& _accessInfo)
{
    m_accessInfo = _accessInfo;
    m_accessInfoHasBeenSet = true;
}

bool InstanceInfo::AccessInfoHasBeenSet() const
{
    return m_accessInfoHasBeenSet;
}

int64_t InstanceInfo::GetId() const
{
    return m_id;
}

void InstanceInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool InstanceInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t InstanceInfo::GetRegionId() const
{
    return m_regionId;
}

void InstanceInfo::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool InstanceInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string InstanceInfo::GetZoneDesc() const
{
    return m_zoneDesc;
}

void InstanceInfo::SetZoneDesc(const string& _zoneDesc)
{
    m_zoneDesc = _zoneDesc;
    m_zoneDescHasBeenSet = true;
}

bool InstanceInfo::ZoneDescHasBeenSet() const
{
    return m_zoneDescHasBeenSet;
}

string InstanceInfo::GetFlowMsg() const
{
    return m_flowMsg;
}

void InstanceInfo::SetFlowMsg(const string& _flowMsg)
{
    m_flowMsg = _flowMsg;
    m_flowMsgHasBeenSet = true;
}

bool InstanceInfo::FlowMsgHasBeenSet() const
{
    return m_flowMsgHasBeenSet;
}

string InstanceInfo::GetStatusDesc() const
{
    return m_statusDesc;
}

void InstanceInfo::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool InstanceInfo::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

bool InstanceInfo::GetRenewFlag() const
{
    return m_renewFlag;
}

void InstanceInfo::SetRenewFlag(const bool& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool InstanceInfo::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

vector<Tag> InstanceInfo::GetTags() const
{
    return m_tags;
}

void InstanceInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool InstanceInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string InstanceInfo::GetMonitor() const
{
    return m_monitor;
}

void InstanceInfo::SetMonitor(const string& _monitor)
{
    m_monitor = _monitor;
    m_monitorHasBeenSet = true;
}

bool InstanceInfo::MonitorHasBeenSet() const
{
    return m_monitorHasBeenSet;
}

bool InstanceInfo::GetHasClsTopic() const
{
    return m_hasClsTopic;
}

void InstanceInfo::SetHasClsTopic(const bool& _hasClsTopic)
{
    m_hasClsTopic = _hasClsTopic;
    m_hasClsTopicHasBeenSet = true;
}

bool InstanceInfo::HasClsTopicHasBeenSet() const
{
    return m_hasClsTopicHasBeenSet;
}

string InstanceInfo::GetClsTopicId() const
{
    return m_clsTopicId;
}

void InstanceInfo::SetClsTopicId(const string& _clsTopicId)
{
    m_clsTopicId = _clsTopicId;
    m_clsTopicIdHasBeenSet = true;
}

bool InstanceInfo::ClsTopicIdHasBeenSet() const
{
    return m_clsTopicIdHasBeenSet;
}

string InstanceInfo::GetClsLogSetId() const
{
    return m_clsLogSetId;
}

void InstanceInfo::SetClsLogSetId(const string& _clsLogSetId)
{
    m_clsLogSetId = _clsLogSetId;
    m_clsLogSetIdHasBeenSet = true;
}

bool InstanceInfo::ClsLogSetIdHasBeenSet() const
{
    return m_clsLogSetIdHasBeenSet;
}

int64_t InstanceInfo::GetEnableXMLConfig() const
{
    return m_enableXMLConfig;
}

void InstanceInfo::SetEnableXMLConfig(const int64_t& _enableXMLConfig)
{
    m_enableXMLConfig = _enableXMLConfig;
    m_enableXMLConfigHasBeenSet = true;
}

bool InstanceInfo::EnableXMLConfigHasBeenSet() const
{
    return m_enableXMLConfigHasBeenSet;
}

string InstanceInfo::GetRegionDesc() const
{
    return m_regionDesc;
}

void InstanceInfo::SetRegionDesc(const string& _regionDesc)
{
    m_regionDesc = _regionDesc;
    m_regionDescHasBeenSet = true;
}

bool InstanceInfo::RegionDescHasBeenSet() const
{
    return m_regionDescHasBeenSet;
}

string InstanceInfo::GetEip() const
{
    return m_eip;
}

void InstanceInfo::SetEip(const string& _eip)
{
    m_eip = _eip;
    m_eipHasBeenSet = true;
}

bool InstanceInfo::EipHasBeenSet() const
{
    return m_eipHasBeenSet;
}

int64_t InstanceInfo::GetCosMoveFactor() const
{
    return m_cosMoveFactor;
}

void InstanceInfo::SetCosMoveFactor(const int64_t& _cosMoveFactor)
{
    m_cosMoveFactor = _cosMoveFactor;
    m_cosMoveFactorHasBeenSet = true;
}

bool InstanceInfo::CosMoveFactorHasBeenSet() const
{
    return m_cosMoveFactorHasBeenSet;
}

string InstanceInfo::GetKind() const
{
    return m_kind;
}

void InstanceInfo::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool InstanceInfo::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

bool InstanceInfo::GetIsElastic() const
{
    return m_isElastic;
}

void InstanceInfo::SetIsElastic(const bool& _isElastic)
{
    m_isElastic = _isElastic;
    m_isElasticHasBeenSet = true;
}

bool InstanceInfo::IsElasticHasBeenSet() const
{
    return m_isElasticHasBeenSet;
}

InstanceStateInfo InstanceInfo::GetInstanceStateInfo() const
{
    return m_instanceStateInfo;
}

void InstanceInfo::SetInstanceStateInfo(const InstanceStateInfo& _instanceStateInfo)
{
    m_instanceStateInfo = _instanceStateInfo;
    m_instanceStateInfoHasBeenSet = true;
}

bool InstanceInfo::InstanceStateInfoHasBeenSet() const
{
    return m_instanceStateInfoHasBeenSet;
}

bool InstanceInfo::GetHAZk() const
{
    return m_hAZk;
}

void InstanceInfo::SetHAZk(const bool& _hAZk)
{
    m_hAZk = _hAZk;
    m_hAZkHasBeenSet = true;
}

bool InstanceInfo::HAZkHasBeenSet() const
{
    return m_hAZkHasBeenSet;
}

int64_t InstanceInfo::GetMountDiskType() const
{
    return m_mountDiskType;
}

void InstanceInfo::SetMountDiskType(const int64_t& _mountDiskType)
{
    m_mountDiskType = _mountDiskType;
    m_mountDiskTypeHasBeenSet = true;
}

bool InstanceInfo::MountDiskTypeHasBeenSet() const
{
    return m_mountDiskTypeHasBeenSet;
}

string InstanceInfo::GetCHProxyVip() const
{
    return m_cHProxyVip;
}

void InstanceInfo::SetCHProxyVip(const string& _cHProxyVip)
{
    m_cHProxyVip = _cHProxyVip;
    m_cHProxyVipHasBeenSet = true;
}

bool InstanceInfo::CHProxyVipHasBeenSet() const
{
    return m_cHProxyVipHasBeenSet;
}

string InstanceInfo::GetCosBucketName() const
{
    return m_cosBucketName;
}

void InstanceInfo::SetCosBucketName(const string& _cosBucketName)
{
    m_cosBucketName = _cosBucketName;
    m_cosBucketNameHasBeenSet = true;
}

bool InstanceInfo::CosBucketNameHasBeenSet() const
{
    return m_cosBucketNameHasBeenSet;
}

bool InstanceInfo::GetCanAttachCbs() const
{
    return m_canAttachCbs;
}

void InstanceInfo::SetCanAttachCbs(const bool& _canAttachCbs)
{
    m_canAttachCbs = _canAttachCbs;
    m_canAttachCbsHasBeenSet = true;
}

bool InstanceInfo::CanAttachCbsHasBeenSet() const
{
    return m_canAttachCbsHasBeenSet;
}

bool InstanceInfo::GetCanAttachCbsLvm() const
{
    return m_canAttachCbsLvm;
}

void InstanceInfo::SetCanAttachCbsLvm(const bool& _canAttachCbsLvm)
{
    m_canAttachCbsLvm = _canAttachCbsLvm;
    m_canAttachCbsLvmHasBeenSet = true;
}

bool InstanceInfo::CanAttachCbsLvmHasBeenSet() const
{
    return m_canAttachCbsLvmHasBeenSet;
}

bool InstanceInfo::GetCanAttachCos() const
{
    return m_canAttachCos;
}

void InstanceInfo::SetCanAttachCos(const bool& _canAttachCos)
{
    m_canAttachCos = _canAttachCos;
    m_canAttachCosHasBeenSet = true;
}

bool InstanceInfo::CanAttachCosHasBeenSet() const
{
    return m_canAttachCosHasBeenSet;
}

vector<ServiceInfo> InstanceInfo::GetComponents() const
{
    return m_components;
}

void InstanceInfo::SetComponents(const vector<ServiceInfo>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool InstanceInfo::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}

string InstanceInfo::GetUpgradeVersions() const
{
    return m_upgradeVersions;
}

void InstanceInfo::SetUpgradeVersions(const string& _upgradeVersions)
{
    m_upgradeVersions = _upgradeVersions;
    m_upgradeVersionsHasBeenSet = true;
}

bool InstanceInfo::UpgradeVersionsHasBeenSet() const
{
    return m_upgradeVersionsHasBeenSet;
}

string InstanceInfo::GetEsIndexId() const
{
    return m_esIndexId;
}

void InstanceInfo::SetEsIndexId(const string& _esIndexId)
{
    m_esIndexId = _esIndexId;
    m_esIndexIdHasBeenSet = true;
}

bool InstanceInfo::EsIndexIdHasBeenSet() const
{
    return m_esIndexIdHasBeenSet;
}

string InstanceInfo::GetEsIndexUsername() const
{
    return m_esIndexUsername;
}

void InstanceInfo::SetEsIndexUsername(const string& _esIndexUsername)
{
    m_esIndexUsername = _esIndexUsername;
    m_esIndexUsernameHasBeenSet = true;
}

bool InstanceInfo::EsIndexUsernameHasBeenSet() const
{
    return m_esIndexUsernameHasBeenSet;
}

string InstanceInfo::GetEsIndexPassword() const
{
    return m_esIndexPassword;
}

void InstanceInfo::SetEsIndexPassword(const string& _esIndexPassword)
{
    m_esIndexPassword = _esIndexPassword;
    m_esIndexPasswordHasBeenSet = true;
}

bool InstanceInfo::EsIndexPasswordHasBeenSet() const
{
    return m_esIndexPasswordHasBeenSet;
}

bool InstanceInfo::GetHasEsIndex() const
{
    return m_hasEsIndex;
}

void InstanceInfo::SetHasEsIndex(const bool& _hasEsIndex)
{
    m_hasEsIndex = _hasEsIndex;
    m_hasEsIndexHasBeenSet = true;
}

bool InstanceInfo::HasEsIndexHasBeenSet() const
{
    return m_hasEsIndexHasBeenSet;
}

bool InstanceInfo::GetIsSecondaryZone() const
{
    return m_isSecondaryZone;
}

void InstanceInfo::SetIsSecondaryZone(const bool& _isSecondaryZone)
{
    m_isSecondaryZone = _isSecondaryZone;
    m_isSecondaryZoneHasBeenSet = true;
}

bool InstanceInfo::IsSecondaryZoneHasBeenSet() const
{
    return m_isSecondaryZoneHasBeenSet;
}

string InstanceInfo::GetSecondaryZoneInfo() const
{
    return m_secondaryZoneInfo;
}

void InstanceInfo::SetSecondaryZoneInfo(const string& _secondaryZoneInfo)
{
    m_secondaryZoneInfo = _secondaryZoneInfo;
    m_secondaryZoneInfoHasBeenSet = true;
}

bool InstanceInfo::SecondaryZoneInfoHasBeenSet() const
{
    return m_secondaryZoneInfoHasBeenSet;
}

bool InstanceInfo::GetClickHouseKeeper() const
{
    return m_clickHouseKeeper;
}

void InstanceInfo::SetClickHouseKeeper(const bool& _clickHouseKeeper)
{
    m_clickHouseKeeper = _clickHouseKeeper;
    m_clickHouseKeeperHasBeenSet = true;
}

bool InstanceInfo::ClickHouseKeeperHasBeenSet() const
{
    return m_clickHouseKeeperHasBeenSet;
}

InstanceDetail InstanceInfo::GetDetails() const
{
    return m_details;
}

void InstanceInfo::SetDetails(const InstanceDetail& _details)
{
    m_details = _details;
    m_detailsHasBeenSet = true;
}

bool InstanceInfo::DetailsHasBeenSet() const
{
    return m_detailsHasBeenSet;
}

bool InstanceInfo::GetIsWhiteSGs() const
{
    return m_isWhiteSGs;
}

void InstanceInfo::SetIsWhiteSGs(const bool& _isWhiteSGs)
{
    m_isWhiteSGs = _isWhiteSGs;
    m_isWhiteSGsHasBeenSet = true;
}

bool InstanceInfo::IsWhiteSGsHasBeenSet() const
{
    return m_isWhiteSGsHasBeenSet;
}

vector<string> InstanceInfo::GetBindSGs() const
{
    return m_bindSGs;
}

void InstanceInfo::SetBindSGs(const vector<string>& _bindSGs)
{
    m_bindSGs = _bindSGs;
    m_bindSGsHasBeenSet = true;
}

bool InstanceInfo::BindSGsHasBeenSet() const
{
    return m_bindSGsHasBeenSet;
}

bool InstanceInfo::GetHasPublicCloudClb() const
{
    return m_hasPublicCloudClb;
}

void InstanceInfo::SetHasPublicCloudClb(const bool& _hasPublicCloudClb)
{
    m_hasPublicCloudClb = _hasPublicCloudClb;
    m_hasPublicCloudClbHasBeenSet = true;
}

bool InstanceInfo::HasPublicCloudClbHasBeenSet() const
{
    return m_hasPublicCloudClbHasBeenSet;
}

