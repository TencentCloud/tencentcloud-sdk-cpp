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

#include <tencentcloud/cds/v20180420/model/AssetsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cds::V20180420::Model;
using namespace std;

AssetsInfo::AssetsInfo() :
    m_addTimeHasBeenSet(false),
    m_aidHasBeenSet(false),
    m_assetsIpHasBeenSet(false),
    m_assetsNameHasBeenSet(false),
    m_assetsPortHasBeenSet(false),
    m_assetsTypeHasBeenSet(false),
    m_assetsVersionHasBeenSet(false),
    m_assetsAddTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_addTypeHasBeenSet(false),
    m_assetSubnetIdHasBeenSet(false),
    m_uploadPemHasBeenSet(false),
    m_aliveStatusHasBeenSet(false),
    m_agentOnHasBeenSet(false),
    m_casbOnHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_availableHasBeenSet(false),
    m_cdbOnHasBeenSet(false),
    m_dbPlatformHasBeenSet(false),
    m_dbCharsetHasBeenSet(false),
    m_osPolicyHasBeenSet(false),
    m_bidirectionOnHasBeenSet(false),
    m_bidirectionMaxLineHasBeenSet(false),
    m_bidirectionMaxStorageHasBeenSet(false),
    m_bidirectionAllowHasBeenSet(false),
    m_bidirectionDeliveryHasBeenSet(false),
    m_roStatusHasBeenSet(false),
    m_agentBoundHasBeenSet(false),
    m_cdbErrorMsgHasBeenSet(false),
    m_dsgcBindingInfoHasBeenSet(false),
    m_bindingRulesHasBeenSet(false),
    m_bindingModelsHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_assetGroupIdHasBeenSet(false),
    m_isNewCloudAuditHasBeenSet(false),
    m_trafficMirrorOnHasBeenSet(false),
    m_auditScopeHasBeenSet(false),
    m_instanceGroupIdHasBeenSet(false),
    m_assetGroupsHasBeenSet(false)
{
}

CoreInternalOutcome AssetsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.AddTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = value["AddTime"].GetUint64();
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("Aid") && !value["Aid"].IsNull())
    {
        if (!value["Aid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.Aid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aid = value["Aid"].GetUint64();
        m_aidHasBeenSet = true;
    }

    if (value.HasMember("AssetsIp") && !value["AssetsIp"].IsNull())
    {
        if (!value["AssetsIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.AssetsIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetsIp = string(value["AssetsIp"].GetString());
        m_assetsIpHasBeenSet = true;
    }

    if (value.HasMember("AssetsName") && !value["AssetsName"].IsNull())
    {
        if (!value["AssetsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.AssetsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetsName = string(value["AssetsName"].GetString());
        m_assetsNameHasBeenSet = true;
    }

    if (value.HasMember("AssetsPort") && !value["AssetsPort"].IsNull())
    {
        if (!value["AssetsPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.AssetsPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_assetsPort = value["AssetsPort"].GetUint64();
        m_assetsPortHasBeenSet = true;
    }

    if (value.HasMember("AssetsType") && !value["AssetsType"].IsNull())
    {
        if (!value["AssetsType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.AssetsType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetsType = string(value["AssetsType"].GetString());
        m_assetsTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetsVersion") && !value["AssetsVersion"].IsNull())
    {
        if (!value["AssetsVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.AssetsVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetsVersion = string(value["AssetsVersion"].GetString());
        m_assetsVersionHasBeenSet = true;
    }

    if (value.HasMember("AssetsAddType") && !value["AssetsAddType"].IsNull())
    {
        if (!value["AssetsAddType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.AssetsAddType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_assetsAddType = value["AssetsAddType"].GetUint64();
        m_assetsAddTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("Permission") && !value["Permission"].IsNull())
    {
        if (!value["Permission"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.Permission` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_permission = value["Permission"].GetInt64();
        m_permissionHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("AddType") && !value["AddType"].IsNull())
    {
        if (!value["AddType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.AddType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_addType = value["AddType"].GetUint64();
        m_addTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetSubnetId") && !value["AssetSubnetId"].IsNull())
    {
        if (!value["AssetSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.AssetSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetSubnetId = string(value["AssetSubnetId"].GetString());
        m_assetSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("UploadPem") && !value["UploadPem"].IsNull())
    {
        if (!value["UploadPem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.UploadPem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uploadPem = value["UploadPem"].GetInt64();
        m_uploadPemHasBeenSet = true;
    }

    if (value.HasMember("AliveStatus") && !value["AliveStatus"].IsNull())
    {
        if (!value["AliveStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.AliveStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aliveStatus = value["AliveStatus"].GetInt64();
        m_aliveStatusHasBeenSet = true;
    }

    if (value.HasMember("AgentOn") && !value["AgentOn"].IsNull())
    {
        if (!value["AgentOn"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.AgentOn` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_agentOn = value["AgentOn"].GetUint64();
        m_agentOnHasBeenSet = true;
    }

    if (value.HasMember("CasbOn") && !value["CasbOn"].IsNull())
    {
        if (!value["CasbOn"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.CasbOn` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_casbOn = value["CasbOn"].GetUint64();
        m_casbOnHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("Available") && !value["Available"].IsNull())
    {
        if (!value["Available"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.Available` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_available = string(value["Available"].GetString());
        m_availableHasBeenSet = true;
    }

    if (value.HasMember("CdbOn") && !value["CdbOn"].IsNull())
    {
        if (!value["CdbOn"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.CdbOn` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cdbOn = value["CdbOn"].GetUint64();
        m_cdbOnHasBeenSet = true;
    }

    if (value.HasMember("DbPlatform") && !value["DbPlatform"].IsNull())
    {
        if (!value["DbPlatform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.DbPlatform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbPlatform = string(value["DbPlatform"].GetString());
        m_dbPlatformHasBeenSet = true;
    }

    if (value.HasMember("DbCharset") && !value["DbCharset"].IsNull())
    {
        if (!value["DbCharset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.DbCharset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbCharset = string(value["DbCharset"].GetString());
        m_dbCharsetHasBeenSet = true;
    }

    if (value.HasMember("OsPolicy") && !value["OsPolicy"].IsNull())
    {
        if (!value["OsPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.OsPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osPolicy = string(value["OsPolicy"].GetString());
        m_osPolicyHasBeenSet = true;
    }

    if (value.HasMember("BidirectionOn") && !value["BidirectionOn"].IsNull())
    {
        if (!value["BidirectionOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.BidirectionOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bidirectionOn = value["BidirectionOn"].GetInt64();
        m_bidirectionOnHasBeenSet = true;
    }

    if (value.HasMember("BidirectionMaxLine") && !value["BidirectionMaxLine"].IsNull())
    {
        if (!value["BidirectionMaxLine"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.BidirectionMaxLine` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bidirectionMaxLine = value["BidirectionMaxLine"].GetInt64();
        m_bidirectionMaxLineHasBeenSet = true;
    }

    if (value.HasMember("BidirectionMaxStorage") && !value["BidirectionMaxStorage"].IsNull())
    {
        if (!value["BidirectionMaxStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.BidirectionMaxStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bidirectionMaxStorage = value["BidirectionMaxStorage"].GetInt64();
        m_bidirectionMaxStorageHasBeenSet = true;
    }

    if (value.HasMember("BidirectionAllow") && !value["BidirectionAllow"].IsNull())
    {
        if (!value["BidirectionAllow"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.BidirectionAllow` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bidirectionAllow = value["BidirectionAllow"].GetInt64();
        m_bidirectionAllowHasBeenSet = true;
    }

    if (value.HasMember("BidirectionDelivery") && !value["BidirectionDelivery"].IsNull())
    {
        if (!value["BidirectionDelivery"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.BidirectionDelivery` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bidirectionDelivery = value["BidirectionDelivery"].GetUint64();
        m_bidirectionDeliveryHasBeenSet = true;
    }

    if (value.HasMember("RoStatus") && !value["RoStatus"].IsNull())
    {
        if (!value["RoStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.RoStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roStatus = string(value["RoStatus"].GetString());
        m_roStatusHasBeenSet = true;
    }

    if (value.HasMember("AgentBound") && !value["AgentBound"].IsNull())
    {
        if (!value["AgentBound"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.AgentBound` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_agentBound = value["AgentBound"].GetBool();
        m_agentBoundHasBeenSet = true;
    }

    if (value.HasMember("CdbErrorMsg") && !value["CdbErrorMsg"].IsNull())
    {
        if (!value["CdbErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.CdbErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdbErrorMsg = string(value["CdbErrorMsg"].GetString());
        m_cdbErrorMsgHasBeenSet = true;
    }

    if (value.HasMember("DsgcBindingInfo") && !value["DsgcBindingInfo"].IsNull())
    {
        if (!value["DsgcBindingInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.DsgcBindingInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dsgcBindingInfo.Deserialize(value["DsgcBindingInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dsgcBindingInfoHasBeenSet = true;
    }

    if (value.HasMember("BindingRules") && !value["BindingRules"].IsNull())
    {
        if (!value["BindingRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.BindingRules` is not array type"));

        const rapidjson::Value &tmpValue = value["BindingRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IdWithName item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bindingRules.push_back(item);
        }
        m_bindingRulesHasBeenSet = true;
    }

    if (value.HasMember("BindingModels") && !value["BindingModels"].IsNull())
    {
        if (!value["BindingModels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.BindingModels` is not array type"));

        const rapidjson::Value &tmpValue = value["BindingModels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IdWithName item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bindingModels.push_back(item);
        }
        m_bindingModelsHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("AssetGroupId") && !value["AssetGroupId"].IsNull())
    {
        if (!value["AssetGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.AssetGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_assetGroupId = value["AssetGroupId"].GetUint64();
        m_assetGroupIdHasBeenSet = true;
    }

    if (value.HasMember("IsNewCloudAudit") && !value["IsNewCloudAudit"].IsNull())
    {
        if (!value["IsNewCloudAudit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.IsNewCloudAudit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isNewCloudAudit = value["IsNewCloudAudit"].GetBool();
        m_isNewCloudAuditHasBeenSet = true;
    }

    if (value.HasMember("TrafficMirrorOn") && !value["TrafficMirrorOn"].IsNull())
    {
        if (!value["TrafficMirrorOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.TrafficMirrorOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_trafficMirrorOn = value["TrafficMirrorOn"].GetInt64();
        m_trafficMirrorOnHasBeenSet = true;
    }

    if (value.HasMember("AuditScope") && !value["AuditScope"].IsNull())
    {
        if (!value["AuditScope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.AuditScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditScope = string(value["AuditScope"].GetString());
        m_auditScopeHasBeenSet = true;
    }

    if (value.HasMember("InstanceGroupId") && !value["InstanceGroupId"].IsNull())
    {
        if (!value["InstanceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.InstanceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceGroupId = string(value["InstanceGroupId"].GetString());
        m_instanceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("AssetGroups") && !value["AssetGroups"].IsNull())
    {
        if (!value["AssetGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetsInfo.AssetGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["AssetGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IdWithName item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_assetGroups.push_back(item);
        }
        m_assetGroupsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addTime, allocator);
    }

    if (m_aidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Aid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aid, allocator);
    }

    if (m_assetsIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetsIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetsIp.c_str(), allocator).Move(), allocator);
    }

    if (m_assetsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetsName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetsPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetsPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetsPort, allocator);
    }

    if (m_assetsTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetsType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetsVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetsVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetsVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_assetsAddTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetsAddType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetsAddType, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_permission, allocator);
    }

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

    if (m_addTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addType, allocator);
    }

    if (m_assetSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadPemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadPem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uploadPem, allocator);
    }

    if (m_aliveStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliveStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aliveStatus, allocator);
    }

    if (m_agentOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentOn, allocator);
    }

    if (m_casbOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CasbOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_casbOn, allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_availableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Available";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_available.c_str(), allocator).Move(), allocator);
    }

    if (m_cdbOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdbOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cdbOn, allocator);
    }

    if (m_dbPlatformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbPlatform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbPlatform.c_str(), allocator).Move(), allocator);
    }

    if (m_dbCharsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbCharset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbCharset.c_str(), allocator).Move(), allocator);
    }

    if (m_osPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_bidirectionOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BidirectionOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bidirectionOn, allocator);
    }

    if (m_bidirectionMaxLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BidirectionMaxLine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bidirectionMaxLine, allocator);
    }

    if (m_bidirectionMaxStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BidirectionMaxStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bidirectionMaxStorage, allocator);
    }

    if (m_bidirectionAllowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BidirectionAllow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bidirectionAllow, allocator);
    }

    if (m_bidirectionDeliveryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BidirectionDelivery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bidirectionDelivery, allocator);
    }

    if (m_roStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_agentBoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentBound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentBound, allocator);
    }

    if (m_cdbErrorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdbErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdbErrorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_dsgcBindingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DsgcBindingInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dsgcBindingInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bindingRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindingRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindingRules.begin(); itr != m_bindingRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bindingModelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindingModels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindingModels.begin(); itr != m_bindingModels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetGroupId, allocator);
    }

    if (m_isNewCloudAuditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNewCloudAudit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNewCloudAudit, allocator);
    }

    if (m_trafficMirrorOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMirrorOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trafficMirrorOn, allocator);
    }

    if (m_auditScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditScope.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_assetGroups.begin(); itr != m_assetGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t AssetsInfo::GetAddTime() const
{
    return m_addTime;
}

void AssetsInfo::SetAddTime(const uint64_t& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool AssetsInfo::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

uint64_t AssetsInfo::GetAid() const
{
    return m_aid;
}

void AssetsInfo::SetAid(const uint64_t& _aid)
{
    m_aid = _aid;
    m_aidHasBeenSet = true;
}

bool AssetsInfo::AidHasBeenSet() const
{
    return m_aidHasBeenSet;
}

string AssetsInfo::GetAssetsIp() const
{
    return m_assetsIp;
}

void AssetsInfo::SetAssetsIp(const string& _assetsIp)
{
    m_assetsIp = _assetsIp;
    m_assetsIpHasBeenSet = true;
}

bool AssetsInfo::AssetsIpHasBeenSet() const
{
    return m_assetsIpHasBeenSet;
}

string AssetsInfo::GetAssetsName() const
{
    return m_assetsName;
}

void AssetsInfo::SetAssetsName(const string& _assetsName)
{
    m_assetsName = _assetsName;
    m_assetsNameHasBeenSet = true;
}

bool AssetsInfo::AssetsNameHasBeenSet() const
{
    return m_assetsNameHasBeenSet;
}

uint64_t AssetsInfo::GetAssetsPort() const
{
    return m_assetsPort;
}

void AssetsInfo::SetAssetsPort(const uint64_t& _assetsPort)
{
    m_assetsPort = _assetsPort;
    m_assetsPortHasBeenSet = true;
}

bool AssetsInfo::AssetsPortHasBeenSet() const
{
    return m_assetsPortHasBeenSet;
}

string AssetsInfo::GetAssetsType() const
{
    return m_assetsType;
}

void AssetsInfo::SetAssetsType(const string& _assetsType)
{
    m_assetsType = _assetsType;
    m_assetsTypeHasBeenSet = true;
}

bool AssetsInfo::AssetsTypeHasBeenSet() const
{
    return m_assetsTypeHasBeenSet;
}

string AssetsInfo::GetAssetsVersion() const
{
    return m_assetsVersion;
}

void AssetsInfo::SetAssetsVersion(const string& _assetsVersion)
{
    m_assetsVersion = _assetsVersion;
    m_assetsVersionHasBeenSet = true;
}

bool AssetsInfo::AssetsVersionHasBeenSet() const
{
    return m_assetsVersionHasBeenSet;
}

uint64_t AssetsInfo::GetAssetsAddType() const
{
    return m_assetsAddType;
}

void AssetsInfo::SetAssetsAddType(const uint64_t& _assetsAddType)
{
    m_assetsAddType = _assetsAddType;
    m_assetsAddTypeHasBeenSet = true;
}

bool AssetsInfo::AssetsAddTypeHasBeenSet() const
{
    return m_assetsAddTypeHasBeenSet;
}

uint64_t AssetsInfo::GetStatus() const
{
    return m_status;
}

void AssetsInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AssetsInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t AssetsInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void AssetsInfo::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AssetsInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AssetsInfo::GetVpcId() const
{
    return m_vpcId;
}

void AssetsInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool AssetsInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string AssetsInfo::GetRegionId() const
{
    return m_regionId;
}

void AssetsInfo::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool AssetsInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

int64_t AssetsInfo::GetPermission() const
{
    return m_permission;
}

void AssetsInfo::SetPermission(const int64_t& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool AssetsInfo::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

string AssetsInfo::GetInstanceId() const
{
    return m_instanceId;
}

void AssetsInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AssetsInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AssetsInfo::GetInstanceName() const
{
    return m_instanceName;
}

void AssetsInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool AssetsInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

uint64_t AssetsInfo::GetAddType() const
{
    return m_addType;
}

void AssetsInfo::SetAddType(const uint64_t& _addType)
{
    m_addType = _addType;
    m_addTypeHasBeenSet = true;
}

bool AssetsInfo::AddTypeHasBeenSet() const
{
    return m_addTypeHasBeenSet;
}

string AssetsInfo::GetAssetSubnetId() const
{
    return m_assetSubnetId;
}

void AssetsInfo::SetAssetSubnetId(const string& _assetSubnetId)
{
    m_assetSubnetId = _assetSubnetId;
    m_assetSubnetIdHasBeenSet = true;
}

bool AssetsInfo::AssetSubnetIdHasBeenSet() const
{
    return m_assetSubnetIdHasBeenSet;
}

int64_t AssetsInfo::GetUploadPem() const
{
    return m_uploadPem;
}

void AssetsInfo::SetUploadPem(const int64_t& _uploadPem)
{
    m_uploadPem = _uploadPem;
    m_uploadPemHasBeenSet = true;
}

bool AssetsInfo::UploadPemHasBeenSet() const
{
    return m_uploadPemHasBeenSet;
}

int64_t AssetsInfo::GetAliveStatus() const
{
    return m_aliveStatus;
}

void AssetsInfo::SetAliveStatus(const int64_t& _aliveStatus)
{
    m_aliveStatus = _aliveStatus;
    m_aliveStatusHasBeenSet = true;
}

bool AssetsInfo::AliveStatusHasBeenSet() const
{
    return m_aliveStatusHasBeenSet;
}

uint64_t AssetsInfo::GetAgentOn() const
{
    return m_agentOn;
}

void AssetsInfo::SetAgentOn(const uint64_t& _agentOn)
{
    m_agentOn = _agentOn;
    m_agentOnHasBeenSet = true;
}

bool AssetsInfo::AgentOnHasBeenSet() const
{
    return m_agentOnHasBeenSet;
}

uint64_t AssetsInfo::GetCasbOn() const
{
    return m_casbOn;
}

void AssetsInfo::SetCasbOn(const uint64_t& _casbOn)
{
    m_casbOn = _casbOn;
    m_casbOnHasBeenSet = true;
}

bool AssetsInfo::CasbOnHasBeenSet() const
{
    return m_casbOnHasBeenSet;
}

string AssetsInfo::GetGroupId() const
{
    return m_groupId;
}

void AssetsInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool AssetsInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string AssetsInfo::GetAvailable() const
{
    return m_available;
}

void AssetsInfo::SetAvailable(const string& _available)
{
    m_available = _available;
    m_availableHasBeenSet = true;
}

bool AssetsInfo::AvailableHasBeenSet() const
{
    return m_availableHasBeenSet;
}

uint64_t AssetsInfo::GetCdbOn() const
{
    return m_cdbOn;
}

void AssetsInfo::SetCdbOn(const uint64_t& _cdbOn)
{
    m_cdbOn = _cdbOn;
    m_cdbOnHasBeenSet = true;
}

bool AssetsInfo::CdbOnHasBeenSet() const
{
    return m_cdbOnHasBeenSet;
}

string AssetsInfo::GetDbPlatform() const
{
    return m_dbPlatform;
}

void AssetsInfo::SetDbPlatform(const string& _dbPlatform)
{
    m_dbPlatform = _dbPlatform;
    m_dbPlatformHasBeenSet = true;
}

bool AssetsInfo::DbPlatformHasBeenSet() const
{
    return m_dbPlatformHasBeenSet;
}

string AssetsInfo::GetDbCharset() const
{
    return m_dbCharset;
}

void AssetsInfo::SetDbCharset(const string& _dbCharset)
{
    m_dbCharset = _dbCharset;
    m_dbCharsetHasBeenSet = true;
}

bool AssetsInfo::DbCharsetHasBeenSet() const
{
    return m_dbCharsetHasBeenSet;
}

string AssetsInfo::GetOsPolicy() const
{
    return m_osPolicy;
}

void AssetsInfo::SetOsPolicy(const string& _osPolicy)
{
    m_osPolicy = _osPolicy;
    m_osPolicyHasBeenSet = true;
}

bool AssetsInfo::OsPolicyHasBeenSet() const
{
    return m_osPolicyHasBeenSet;
}

int64_t AssetsInfo::GetBidirectionOn() const
{
    return m_bidirectionOn;
}

void AssetsInfo::SetBidirectionOn(const int64_t& _bidirectionOn)
{
    m_bidirectionOn = _bidirectionOn;
    m_bidirectionOnHasBeenSet = true;
}

bool AssetsInfo::BidirectionOnHasBeenSet() const
{
    return m_bidirectionOnHasBeenSet;
}

int64_t AssetsInfo::GetBidirectionMaxLine() const
{
    return m_bidirectionMaxLine;
}

void AssetsInfo::SetBidirectionMaxLine(const int64_t& _bidirectionMaxLine)
{
    m_bidirectionMaxLine = _bidirectionMaxLine;
    m_bidirectionMaxLineHasBeenSet = true;
}

bool AssetsInfo::BidirectionMaxLineHasBeenSet() const
{
    return m_bidirectionMaxLineHasBeenSet;
}

int64_t AssetsInfo::GetBidirectionMaxStorage() const
{
    return m_bidirectionMaxStorage;
}

void AssetsInfo::SetBidirectionMaxStorage(const int64_t& _bidirectionMaxStorage)
{
    m_bidirectionMaxStorage = _bidirectionMaxStorage;
    m_bidirectionMaxStorageHasBeenSet = true;
}

bool AssetsInfo::BidirectionMaxStorageHasBeenSet() const
{
    return m_bidirectionMaxStorageHasBeenSet;
}

int64_t AssetsInfo::GetBidirectionAllow() const
{
    return m_bidirectionAllow;
}

void AssetsInfo::SetBidirectionAllow(const int64_t& _bidirectionAllow)
{
    m_bidirectionAllow = _bidirectionAllow;
    m_bidirectionAllowHasBeenSet = true;
}

bool AssetsInfo::BidirectionAllowHasBeenSet() const
{
    return m_bidirectionAllowHasBeenSet;
}

uint64_t AssetsInfo::GetBidirectionDelivery() const
{
    return m_bidirectionDelivery;
}

void AssetsInfo::SetBidirectionDelivery(const uint64_t& _bidirectionDelivery)
{
    m_bidirectionDelivery = _bidirectionDelivery;
    m_bidirectionDeliveryHasBeenSet = true;
}

bool AssetsInfo::BidirectionDeliveryHasBeenSet() const
{
    return m_bidirectionDeliveryHasBeenSet;
}

string AssetsInfo::GetRoStatus() const
{
    return m_roStatus;
}

void AssetsInfo::SetRoStatus(const string& _roStatus)
{
    m_roStatus = _roStatus;
    m_roStatusHasBeenSet = true;
}

bool AssetsInfo::RoStatusHasBeenSet() const
{
    return m_roStatusHasBeenSet;
}

bool AssetsInfo::GetAgentBound() const
{
    return m_agentBound;
}

void AssetsInfo::SetAgentBound(const bool& _agentBound)
{
    m_agentBound = _agentBound;
    m_agentBoundHasBeenSet = true;
}

bool AssetsInfo::AgentBoundHasBeenSet() const
{
    return m_agentBoundHasBeenSet;
}

string AssetsInfo::GetCdbErrorMsg() const
{
    return m_cdbErrorMsg;
}

void AssetsInfo::SetCdbErrorMsg(const string& _cdbErrorMsg)
{
    m_cdbErrorMsg = _cdbErrorMsg;
    m_cdbErrorMsgHasBeenSet = true;
}

bool AssetsInfo::CdbErrorMsgHasBeenSet() const
{
    return m_cdbErrorMsgHasBeenSet;
}

DsgcBindingInfo AssetsInfo::GetDsgcBindingInfo() const
{
    return m_dsgcBindingInfo;
}

void AssetsInfo::SetDsgcBindingInfo(const DsgcBindingInfo& _dsgcBindingInfo)
{
    m_dsgcBindingInfo = _dsgcBindingInfo;
    m_dsgcBindingInfoHasBeenSet = true;
}

bool AssetsInfo::DsgcBindingInfoHasBeenSet() const
{
    return m_dsgcBindingInfoHasBeenSet;
}

vector<IdWithName> AssetsInfo::GetBindingRules() const
{
    return m_bindingRules;
}

void AssetsInfo::SetBindingRules(const vector<IdWithName>& _bindingRules)
{
    m_bindingRules = _bindingRules;
    m_bindingRulesHasBeenSet = true;
}

bool AssetsInfo::BindingRulesHasBeenSet() const
{
    return m_bindingRulesHasBeenSet;
}

vector<IdWithName> AssetsInfo::GetBindingModels() const
{
    return m_bindingModels;
}

void AssetsInfo::SetBindingModels(const vector<IdWithName>& _bindingModels)
{
    m_bindingModels = _bindingModels;
    m_bindingModelsHasBeenSet = true;
}

bool AssetsInfo::BindingModelsHasBeenSet() const
{
    return m_bindingModelsHasBeenSet;
}

string AssetsInfo::GetGroupName() const
{
    return m_groupName;
}

void AssetsInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool AssetsInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

uint64_t AssetsInfo::GetAssetGroupId() const
{
    return m_assetGroupId;
}

void AssetsInfo::SetAssetGroupId(const uint64_t& _assetGroupId)
{
    m_assetGroupId = _assetGroupId;
    m_assetGroupIdHasBeenSet = true;
}

bool AssetsInfo::AssetGroupIdHasBeenSet() const
{
    return m_assetGroupIdHasBeenSet;
}

bool AssetsInfo::GetIsNewCloudAudit() const
{
    return m_isNewCloudAudit;
}

void AssetsInfo::SetIsNewCloudAudit(const bool& _isNewCloudAudit)
{
    m_isNewCloudAudit = _isNewCloudAudit;
    m_isNewCloudAuditHasBeenSet = true;
}

bool AssetsInfo::IsNewCloudAuditHasBeenSet() const
{
    return m_isNewCloudAuditHasBeenSet;
}

int64_t AssetsInfo::GetTrafficMirrorOn() const
{
    return m_trafficMirrorOn;
}

void AssetsInfo::SetTrafficMirrorOn(const int64_t& _trafficMirrorOn)
{
    m_trafficMirrorOn = _trafficMirrorOn;
    m_trafficMirrorOnHasBeenSet = true;
}

bool AssetsInfo::TrafficMirrorOnHasBeenSet() const
{
    return m_trafficMirrorOnHasBeenSet;
}

string AssetsInfo::GetAuditScope() const
{
    return m_auditScope;
}

void AssetsInfo::SetAuditScope(const string& _auditScope)
{
    m_auditScope = _auditScope;
    m_auditScopeHasBeenSet = true;
}

bool AssetsInfo::AuditScopeHasBeenSet() const
{
    return m_auditScopeHasBeenSet;
}

string AssetsInfo::GetInstanceGroupId() const
{
    return m_instanceGroupId;
}

void AssetsInfo::SetInstanceGroupId(const string& _instanceGroupId)
{
    m_instanceGroupId = _instanceGroupId;
    m_instanceGroupIdHasBeenSet = true;
}

bool AssetsInfo::InstanceGroupIdHasBeenSet() const
{
    return m_instanceGroupIdHasBeenSet;
}

vector<IdWithName> AssetsInfo::GetAssetGroups() const
{
    return m_assetGroups;
}

void AssetsInfo::SetAssetGroups(const vector<IdWithName>& _assetGroups)
{
    m_assetGroups = _assetGroups;
    m_assetGroupsHasBeenSet = true;
}

bool AssetsInfo::AssetGroupsHasBeenSet() const
{
    return m_assetGroupsHasBeenSet;
}

