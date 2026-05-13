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

#include <tencentcloud/csip/v20221121/model/DspmDbAsset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmDbAsset::DspmDbAsset() :
    m_assetIdHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_accountCountHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_wanDomainHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_managerHasBeenSet(false),
    m_bindIdentifyHasBeenSet(false),
    m_isManagerHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_safetyAdviceHasBeenSet(false),
    m_logDeliveryStatusHasBeenSet(false),
    m_logDeliverySupportedHasBeenSet(false),
    m_dataScanInfoHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_securityAnalyseStatusHasBeenSet(false),
    m_totalAuditLogsHasBeenSet(false),
    m_logDeliveryDisableReasonHasBeenSet(false),
    m_oldestOnlineLogTimestampHasBeenSet(false),
    m_newestOnlineLogTimestampHasBeenSet(false),
    m_operationErrorMsgHasBeenSet(false),
    m_accountOptSupportedHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_identifyScanSupportedHasBeenSet(false)
{
}

CoreInternalOutcome DspmDbAsset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AccountCount") && !value["AccountCount"].IsNull())
    {
        if (!value["AccountCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.AccountCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountCount = value["AccountCount"].GetInt64();
        m_accountCountHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("WanDomain") && !value["WanDomain"].IsNull())
    {
        if (!value["WanDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.WanDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanDomain = string(value["WanDomain"].GetString());
        m_wanDomainHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Manager") && !value["Manager"].IsNull())
    {
        if (!value["Manager"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.Manager` is not array type"));

        const rapidjson::Value &tmpValue = value["Manager"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspmUinUser item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_manager.push_back(item);
        }
        m_managerHasBeenSet = true;
    }

    if (value.HasMember("BindIdentify") && !value["BindIdentify"].IsNull())
    {
        if (!value["BindIdentify"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.BindIdentify` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindIdentify = value["BindIdentify"].GetInt64();
        m_bindIdentifyHasBeenSet = true;
    }

    if (value.HasMember("IsManager") && !value["IsManager"].IsNull())
    {
        if (!value["IsManager"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.IsManager` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isManager = value["IsManager"].GetInt64();
        m_isManagerHasBeenSet = true;
    }

    if (value.HasMember("RiskCount") && !value["RiskCount"].IsNull())
    {
        if (!value["RiskCount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.RiskCount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_riskCount.Deserialize(value["RiskCount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_riskCountHasBeenSet = true;
    }

    if (value.HasMember("SafetyAdvice") && !value["SafetyAdvice"].IsNull())
    {
        if (!value["SafetyAdvice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.SafetyAdvice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_safetyAdvice = string(value["SafetyAdvice"].GetString());
        m_safetyAdviceHasBeenSet = true;
    }

    if (value.HasMember("LogDeliveryStatus") && !value["LogDeliveryStatus"].IsNull())
    {
        if (!value["LogDeliveryStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.LogDeliveryStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logDeliveryStatus = value["LogDeliveryStatus"].GetInt64();
        m_logDeliveryStatusHasBeenSet = true;
    }

    if (value.HasMember("LogDeliverySupported") && !value["LogDeliverySupported"].IsNull())
    {
        if (!value["LogDeliverySupported"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.LogDeliverySupported` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logDeliverySupported = value["LogDeliverySupported"].GetInt64();
        m_logDeliverySupportedHasBeenSet = true;
    }

    if (value.HasMember("DataScanInfo") && !value["DataScanInfo"].IsNull())
    {
        if (!value["DataScanInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.DataScanInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dataScanInfo.Deserialize(value["DataScanInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataScanInfoHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SecurityAnalyseStatus") && !value["SecurityAnalyseStatus"].IsNull())
    {
        if (!value["SecurityAnalyseStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.SecurityAnalyseStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_securityAnalyseStatus = value["SecurityAnalyseStatus"].GetInt64();
        m_securityAnalyseStatusHasBeenSet = true;
    }

    if (value.HasMember("TotalAuditLogs") && !value["TotalAuditLogs"].IsNull())
    {
        if (!value["TotalAuditLogs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.TotalAuditLogs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalAuditLogs = value["TotalAuditLogs"].GetUint64();
        m_totalAuditLogsHasBeenSet = true;
    }

    if (value.HasMember("LogDeliveryDisableReason") && !value["LogDeliveryDisableReason"].IsNull())
    {
        if (!value["LogDeliveryDisableReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.LogDeliveryDisableReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logDeliveryDisableReason = string(value["LogDeliveryDisableReason"].GetString());
        m_logDeliveryDisableReasonHasBeenSet = true;
    }

    if (value.HasMember("OldestOnlineLogTimestamp") && !value["OldestOnlineLogTimestamp"].IsNull())
    {
        if (!value["OldestOnlineLogTimestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.OldestOnlineLogTimestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_oldestOnlineLogTimestamp = value["OldestOnlineLogTimestamp"].GetUint64();
        m_oldestOnlineLogTimestampHasBeenSet = true;
    }

    if (value.HasMember("NewestOnlineLogTimestamp") && !value["NewestOnlineLogTimestamp"].IsNull())
    {
        if (!value["NewestOnlineLogTimestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.NewestOnlineLogTimestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_newestOnlineLogTimestamp = value["NewestOnlineLogTimestamp"].GetUint64();
        m_newestOnlineLogTimestampHasBeenSet = true;
    }

    if (value.HasMember("OperationErrorMsg") && !value["OperationErrorMsg"].IsNull())
    {
        if (!value["OperationErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.OperationErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationErrorMsg = string(value["OperationErrorMsg"].GetString());
        m_operationErrorMsgHasBeenSet = true;
    }

    if (value.HasMember("AccountOptSupported") && !value["AccountOptSupported"].IsNull())
    {
        if (!value["AccountOptSupported"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.AccountOptSupported` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountOptSupported = value["AccountOptSupported"].GetInt64();
        m_accountOptSupportedHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.InstanceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = value["InstanceType"].GetInt64();
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("IdentifyScanSupported") && !value["IdentifyScanSupported"].IsNull())
    {
        if (!value["IdentifyScanSupported"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDbAsset.IdentifyScanSupported` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_identifyScanSupported = value["IdentifyScanSupported"].GetInt64();
        m_identifyScanSupportedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmDbAsset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_accountCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountCount, allocator);
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

    if (m_wanDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_managerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manager";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_manager.begin(); itr != m_manager.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bindIdentifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindIdentify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindIdentify, allocator);
    }

    if (m_isManagerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsManager";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isManager, allocator);
    }

    if (m_riskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_riskCount.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_safetyAdviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SafetyAdvice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_safetyAdvice.c_str(), allocator).Move(), allocator);
    }

    if (m_logDeliveryStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogDeliveryStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logDeliveryStatus, allocator);
    }

    if (m_logDeliverySupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogDeliverySupported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logDeliverySupported, allocator);
    }

    if (m_dataScanInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataScanInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dataScanInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_securityAnalyseStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityAnalyseStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_securityAnalyseStatus, allocator);
    }

    if (m_totalAuditLogsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAuditLogs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAuditLogs, allocator);
    }

    if (m_logDeliveryDisableReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogDeliveryDisableReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logDeliveryDisableReason.c_str(), allocator).Move(), allocator);
    }

    if (m_oldestOnlineLogTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldestOnlineLogTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oldestOnlineLogTimestamp, allocator);
    }

    if (m_newestOnlineLogTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewestOnlineLogTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newestOnlineLogTimestamp, allocator);
    }

    if (m_operationErrorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationErrorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_accountOptSupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountOptSupported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountOptSupported, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceType, allocator);
    }

    if (m_identifyScanSupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyScanSupported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_identifyScanSupported, allocator);
    }

}


string DspmDbAsset::GetAssetId() const
{
    return m_assetId;
}

void DspmDbAsset::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DspmDbAsset::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string DspmDbAsset::GetAssetType() const
{
    return m_assetType;
}

void DspmDbAsset::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DspmDbAsset::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string DspmDbAsset::GetName() const
{
    return m_name;
}

void DspmDbAsset::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DspmDbAsset::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DspmDbAsset::GetAccountCount() const
{
    return m_accountCount;
}

void DspmDbAsset::SetAccountCount(const int64_t& _accountCount)
{
    m_accountCount = _accountCount;
    m_accountCountHasBeenSet = true;
}

bool DspmDbAsset::AccountCountHasBeenSet() const
{
    return m_accountCountHasBeenSet;
}

string DspmDbAsset::GetPublicIp() const
{
    return m_publicIp;
}

void DspmDbAsset::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool DspmDbAsset::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string DspmDbAsset::GetPrivateIp() const
{
    return m_privateIp;
}

void DspmDbAsset::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool DspmDbAsset::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string DspmDbAsset::GetWanDomain() const
{
    return m_wanDomain;
}

void DspmDbAsset::SetWanDomain(const string& _wanDomain)
{
    m_wanDomain = _wanDomain;
    m_wanDomainHasBeenSet = true;
}

bool DspmDbAsset::WanDomainHasBeenSet() const
{
    return m_wanDomainHasBeenSet;
}

string DspmDbAsset::GetRegion() const
{
    return m_region;
}

void DspmDbAsset::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DspmDbAsset::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DspmDbAsset::GetVpcId() const
{
    return m_vpcId;
}

void DspmDbAsset::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DspmDbAsset::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DspmDbAsset::GetVpcName() const
{
    return m_vpcName;
}

void DspmDbAsset::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool DspmDbAsset::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string DspmDbAsset::GetSubnetId() const
{
    return m_subnetId;
}

void DspmDbAsset::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DspmDbAsset::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string DspmDbAsset::GetSubnetName() const
{
    return m_subnetName;
}

void DspmDbAsset::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool DspmDbAsset::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

int64_t DspmDbAsset::GetStatus() const
{
    return m_status;
}

void DspmDbAsset::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DspmDbAsset::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DspmDbAsset::GetCreateTime() const
{
    return m_createTime;
}

void DspmDbAsset::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DspmDbAsset::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<DspmUinUser> DspmDbAsset::GetManager() const
{
    return m_manager;
}

void DspmDbAsset::SetManager(const vector<DspmUinUser>& _manager)
{
    m_manager = _manager;
    m_managerHasBeenSet = true;
}

bool DspmDbAsset::ManagerHasBeenSet() const
{
    return m_managerHasBeenSet;
}

int64_t DspmDbAsset::GetBindIdentify() const
{
    return m_bindIdentify;
}

void DspmDbAsset::SetBindIdentify(const int64_t& _bindIdentify)
{
    m_bindIdentify = _bindIdentify;
    m_bindIdentifyHasBeenSet = true;
}

bool DspmDbAsset::BindIdentifyHasBeenSet() const
{
    return m_bindIdentifyHasBeenSet;
}

int64_t DspmDbAsset::GetIsManager() const
{
    return m_isManager;
}

void DspmDbAsset::SetIsManager(const int64_t& _isManager)
{
    m_isManager = _isManager;
    m_isManagerHasBeenSet = true;
}

bool DspmDbAsset::IsManagerHasBeenSet() const
{
    return m_isManagerHasBeenSet;
}

DspmRiskCount DspmDbAsset::GetRiskCount() const
{
    return m_riskCount;
}

void DspmDbAsset::SetRiskCount(const DspmRiskCount& _riskCount)
{
    m_riskCount = _riskCount;
    m_riskCountHasBeenSet = true;
}

bool DspmDbAsset::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

string DspmDbAsset::GetSafetyAdvice() const
{
    return m_safetyAdvice;
}

void DspmDbAsset::SetSafetyAdvice(const string& _safetyAdvice)
{
    m_safetyAdvice = _safetyAdvice;
    m_safetyAdviceHasBeenSet = true;
}

bool DspmDbAsset::SafetyAdviceHasBeenSet() const
{
    return m_safetyAdviceHasBeenSet;
}

int64_t DspmDbAsset::GetLogDeliveryStatus() const
{
    return m_logDeliveryStatus;
}

void DspmDbAsset::SetLogDeliveryStatus(const int64_t& _logDeliveryStatus)
{
    m_logDeliveryStatus = _logDeliveryStatus;
    m_logDeliveryStatusHasBeenSet = true;
}

bool DspmDbAsset::LogDeliveryStatusHasBeenSet() const
{
    return m_logDeliveryStatusHasBeenSet;
}

int64_t DspmDbAsset::GetLogDeliverySupported() const
{
    return m_logDeliverySupported;
}

void DspmDbAsset::SetLogDeliverySupported(const int64_t& _logDeliverySupported)
{
    m_logDeliverySupported = _logDeliverySupported;
    m_logDeliverySupportedHasBeenSet = true;
}

bool DspmDbAsset::LogDeliverySupportedHasBeenSet() const
{
    return m_logDeliverySupportedHasBeenSet;
}

DspmAssetDataScanDetail DspmDbAsset::GetDataScanInfo() const
{
    return m_dataScanInfo;
}

void DspmDbAsset::SetDataScanInfo(const DspmAssetDataScanDetail& _dataScanInfo)
{
    m_dataScanInfo = _dataScanInfo;
    m_dataScanInfoHasBeenSet = true;
}

bool DspmDbAsset::DataScanInfoHasBeenSet() const
{
    return m_dataScanInfoHasBeenSet;
}

uint64_t DspmDbAsset::GetAppId() const
{
    return m_appId;
}

void DspmDbAsset::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DspmDbAsset::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DspmDbAsset::GetNickName() const
{
    return m_nickName;
}

void DspmDbAsset::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool DspmDbAsset::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string DspmDbAsset::GetUin() const
{
    return m_uin;
}

void DspmDbAsset::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DspmDbAsset::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t DspmDbAsset::GetSecurityAnalyseStatus() const
{
    return m_securityAnalyseStatus;
}

void DspmDbAsset::SetSecurityAnalyseStatus(const int64_t& _securityAnalyseStatus)
{
    m_securityAnalyseStatus = _securityAnalyseStatus;
    m_securityAnalyseStatusHasBeenSet = true;
}

bool DspmDbAsset::SecurityAnalyseStatusHasBeenSet() const
{
    return m_securityAnalyseStatusHasBeenSet;
}

uint64_t DspmDbAsset::GetTotalAuditLogs() const
{
    return m_totalAuditLogs;
}

void DspmDbAsset::SetTotalAuditLogs(const uint64_t& _totalAuditLogs)
{
    m_totalAuditLogs = _totalAuditLogs;
    m_totalAuditLogsHasBeenSet = true;
}

bool DspmDbAsset::TotalAuditLogsHasBeenSet() const
{
    return m_totalAuditLogsHasBeenSet;
}

string DspmDbAsset::GetLogDeliveryDisableReason() const
{
    return m_logDeliveryDisableReason;
}

void DspmDbAsset::SetLogDeliveryDisableReason(const string& _logDeliveryDisableReason)
{
    m_logDeliveryDisableReason = _logDeliveryDisableReason;
    m_logDeliveryDisableReasonHasBeenSet = true;
}

bool DspmDbAsset::LogDeliveryDisableReasonHasBeenSet() const
{
    return m_logDeliveryDisableReasonHasBeenSet;
}

uint64_t DspmDbAsset::GetOldestOnlineLogTimestamp() const
{
    return m_oldestOnlineLogTimestamp;
}

void DspmDbAsset::SetOldestOnlineLogTimestamp(const uint64_t& _oldestOnlineLogTimestamp)
{
    m_oldestOnlineLogTimestamp = _oldestOnlineLogTimestamp;
    m_oldestOnlineLogTimestampHasBeenSet = true;
}

bool DspmDbAsset::OldestOnlineLogTimestampHasBeenSet() const
{
    return m_oldestOnlineLogTimestampHasBeenSet;
}

uint64_t DspmDbAsset::GetNewestOnlineLogTimestamp() const
{
    return m_newestOnlineLogTimestamp;
}

void DspmDbAsset::SetNewestOnlineLogTimestamp(const uint64_t& _newestOnlineLogTimestamp)
{
    m_newestOnlineLogTimestamp = _newestOnlineLogTimestamp;
    m_newestOnlineLogTimestampHasBeenSet = true;
}

bool DspmDbAsset::NewestOnlineLogTimestampHasBeenSet() const
{
    return m_newestOnlineLogTimestampHasBeenSet;
}

string DspmDbAsset::GetOperationErrorMsg() const
{
    return m_operationErrorMsg;
}

void DspmDbAsset::SetOperationErrorMsg(const string& _operationErrorMsg)
{
    m_operationErrorMsg = _operationErrorMsg;
    m_operationErrorMsgHasBeenSet = true;
}

bool DspmDbAsset::OperationErrorMsgHasBeenSet() const
{
    return m_operationErrorMsgHasBeenSet;
}

int64_t DspmDbAsset::GetAccountOptSupported() const
{
    return m_accountOptSupported;
}

void DspmDbAsset::SetAccountOptSupported(const int64_t& _accountOptSupported)
{
    m_accountOptSupported = _accountOptSupported;
    m_accountOptSupportedHasBeenSet = true;
}

bool DspmDbAsset::AccountOptSupportedHasBeenSet() const
{
    return m_accountOptSupportedHasBeenSet;
}

int64_t DspmDbAsset::GetInstanceType() const
{
    return m_instanceType;
}

void DspmDbAsset::SetInstanceType(const int64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool DspmDbAsset::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t DspmDbAsset::GetIdentifyScanSupported() const
{
    return m_identifyScanSupported;
}

void DspmDbAsset::SetIdentifyScanSupported(const int64_t& _identifyScanSupported)
{
    m_identifyScanSupported = _identifyScanSupported;
    m_identifyScanSupportedHasBeenSet = true;
}

bool DspmDbAsset::IdentifyScanSupportedHasBeenSet() const
{
    return m_identifyScanSupportedHasBeenSet;
}

