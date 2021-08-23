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

#include <tencentcloud/emr/v20190103/model/ClusterSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ClusterSetting::ClusterSetting() :
    m_instanceChargeTypeHasBeenSet(false),
    m_supportHAHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_vPCSettingsHasBeenSet(false),
    m_loginSettingsHasBeenSet(false),
    m_tagSpecificationHasBeenSet(false),
    m_metaDBHasBeenSet(false),
    m_resourceSpecHasBeenSet(false),
    m_publicIpAssignedHasBeenSet(false),
    m_instanceChargePrepaidHasBeenSet(false),
    m_disasterRecoverGroupIdsHasBeenSet(false),
    m_cbsEncryptFlagHasBeenSet(false),
    m_remoteTcpDefaultPortHasBeenSet(false)
{
}

CoreInternalOutcome ClusterSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSetting.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("SupportHA") && !value["SupportHA"].IsNull())
    {
        if (!value["SupportHA"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSetting.SupportHA` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportHA = value["SupportHA"].GetBool();
        m_supportHAHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupIds") && !value["SecurityGroupIds"].IsNull())
    {
        if (!value["SecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterSetting.SecurityGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroupIds.push_back((*itr).GetString());
        }
        m_securityGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("Placement") && !value["Placement"].IsNull())
    {
        if (!value["Placement"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSetting.Placement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_placement.Deserialize(value["Placement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_placementHasBeenSet = true;
    }

    if (value.HasMember("VPCSettings") && !value["VPCSettings"].IsNull())
    {
        if (!value["VPCSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSetting.VPCSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vPCSettings.Deserialize(value["VPCSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vPCSettingsHasBeenSet = true;
    }

    if (value.HasMember("LoginSettings") && !value["LoginSettings"].IsNull())
    {
        if (!value["LoginSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSetting.LoginSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_loginSettings.Deserialize(value["LoginSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loginSettingsHasBeenSet = true;
    }

    if (value.HasMember("TagSpecification") && !value["TagSpecification"].IsNull())
    {
        if (!value["TagSpecification"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterSetting.TagSpecification` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSpecification"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagSpecification.push_back((*itr).GetString());
        }
        m_tagSpecificationHasBeenSet = true;
    }

    if (value.HasMember("MetaDB") && !value["MetaDB"].IsNull())
    {
        if (!value["MetaDB"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSetting.MetaDB` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaDB.Deserialize(value["MetaDB"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaDBHasBeenSet = true;
    }

    if (value.HasMember("ResourceSpec") && !value["ResourceSpec"].IsNull())
    {
        if (!value["ResourceSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSetting.ResourceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceSpec.Deserialize(value["ResourceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceSpecHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAssigned") && !value["PublicIpAssigned"].IsNull())
    {
        if (!value["PublicIpAssigned"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSetting.PublicIpAssigned` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_publicIpAssigned = value["PublicIpAssigned"].GetBool();
        m_publicIpAssignedHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargePrepaid") && !value["InstanceChargePrepaid"].IsNull())
    {
        if (!value["InstanceChargePrepaid"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSetting.InstanceChargePrepaid` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceChargePrepaid.Deserialize(value["InstanceChargePrepaid"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceChargePrepaidHasBeenSet = true;
    }

    if (value.HasMember("DisasterRecoverGroupIds") && !value["DisasterRecoverGroupIds"].IsNull())
    {
        if (!value["DisasterRecoverGroupIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSetting.DisasterRecoverGroupIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disasterRecoverGroupIds = string(value["DisasterRecoverGroupIds"].GetString());
        m_disasterRecoverGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("CbsEncryptFlag") && !value["CbsEncryptFlag"].IsNull())
    {
        if (!value["CbsEncryptFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSetting.CbsEncryptFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_cbsEncryptFlag = value["CbsEncryptFlag"].GetBool();
        m_cbsEncryptFlagHasBeenSet = true;
    }

    if (value.HasMember("RemoteTcpDefaultPort") && !value["RemoteTcpDefaultPort"].IsNull())
    {
        if (!value["RemoteTcpDefaultPort"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSetting.RemoteTcpDefaultPort` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_remoteTcpDefaultPort = value["RemoteTcpDefaultPort"].GetBool();
        m_remoteTcpDefaultPortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_supportHAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportHA";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportHA, allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_placementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vPCSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPCSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vPCSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_loginSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loginSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSpecification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagSpecification.begin(); itr != m_tagSpecification.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_metaDBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaDB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaDB.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resourceSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_publicIpAssignedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpAssigned";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicIpAssigned, allocator);
    }

    if (m_instanceChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceChargePrepaid.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_disasterRecoverGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisasterRecoverGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disasterRecoverGroupIds.c_str(), allocator).Move(), allocator);
    }

    if (m_cbsEncryptFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CbsEncryptFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cbsEncryptFlag, allocator);
    }

    if (m_remoteTcpDefaultPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteTcpDefaultPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remoteTcpDefaultPort, allocator);
    }

}


string ClusterSetting::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void ClusterSetting::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool ClusterSetting::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

bool ClusterSetting::GetSupportHA() const
{
    return m_supportHA;
}

void ClusterSetting::SetSupportHA(const bool& _supportHA)
{
    m_supportHA = _supportHA;
    m_supportHAHasBeenSet = true;
}

bool ClusterSetting::SupportHAHasBeenSet() const
{
    return m_supportHAHasBeenSet;
}

vector<string> ClusterSetting::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void ClusterSetting::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool ClusterSetting::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

Placement ClusterSetting::GetPlacement() const
{
    return m_placement;
}

void ClusterSetting::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool ClusterSetting::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

VPCSettings ClusterSetting::GetVPCSettings() const
{
    return m_vPCSettings;
}

void ClusterSetting::SetVPCSettings(const VPCSettings& _vPCSettings)
{
    m_vPCSettings = _vPCSettings;
    m_vPCSettingsHasBeenSet = true;
}

bool ClusterSetting::VPCSettingsHasBeenSet() const
{
    return m_vPCSettingsHasBeenSet;
}

LoginSettings ClusterSetting::GetLoginSettings() const
{
    return m_loginSettings;
}

void ClusterSetting::SetLoginSettings(const LoginSettings& _loginSettings)
{
    m_loginSettings = _loginSettings;
    m_loginSettingsHasBeenSet = true;
}

bool ClusterSetting::LoginSettingsHasBeenSet() const
{
    return m_loginSettingsHasBeenSet;
}

vector<string> ClusterSetting::GetTagSpecification() const
{
    return m_tagSpecification;
}

void ClusterSetting::SetTagSpecification(const vector<string>& _tagSpecification)
{
    m_tagSpecification = _tagSpecification;
    m_tagSpecificationHasBeenSet = true;
}

bool ClusterSetting::TagSpecificationHasBeenSet() const
{
    return m_tagSpecificationHasBeenSet;
}

MetaDbInfo ClusterSetting::GetMetaDB() const
{
    return m_metaDB;
}

void ClusterSetting::SetMetaDB(const MetaDbInfo& _metaDB)
{
    m_metaDB = _metaDB;
    m_metaDBHasBeenSet = true;
}

bool ClusterSetting::MetaDBHasBeenSet() const
{
    return m_metaDBHasBeenSet;
}

JobFlowResourceSpec ClusterSetting::GetResourceSpec() const
{
    return m_resourceSpec;
}

void ClusterSetting::SetResourceSpec(const JobFlowResourceSpec& _resourceSpec)
{
    m_resourceSpec = _resourceSpec;
    m_resourceSpecHasBeenSet = true;
}

bool ClusterSetting::ResourceSpecHasBeenSet() const
{
    return m_resourceSpecHasBeenSet;
}

bool ClusterSetting::GetPublicIpAssigned() const
{
    return m_publicIpAssigned;
}

void ClusterSetting::SetPublicIpAssigned(const bool& _publicIpAssigned)
{
    m_publicIpAssigned = _publicIpAssigned;
    m_publicIpAssignedHasBeenSet = true;
}

bool ClusterSetting::PublicIpAssignedHasBeenSet() const
{
    return m_publicIpAssignedHasBeenSet;
}

InstanceChargePrepaid ClusterSetting::GetInstanceChargePrepaid() const
{
    return m_instanceChargePrepaid;
}

void ClusterSetting::SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid)
{
    m_instanceChargePrepaid = _instanceChargePrepaid;
    m_instanceChargePrepaidHasBeenSet = true;
}

bool ClusterSetting::InstanceChargePrepaidHasBeenSet() const
{
    return m_instanceChargePrepaidHasBeenSet;
}

string ClusterSetting::GetDisasterRecoverGroupIds() const
{
    return m_disasterRecoverGroupIds;
}

void ClusterSetting::SetDisasterRecoverGroupIds(const string& _disasterRecoverGroupIds)
{
    m_disasterRecoverGroupIds = _disasterRecoverGroupIds;
    m_disasterRecoverGroupIdsHasBeenSet = true;
}

bool ClusterSetting::DisasterRecoverGroupIdsHasBeenSet() const
{
    return m_disasterRecoverGroupIdsHasBeenSet;
}

bool ClusterSetting::GetCbsEncryptFlag() const
{
    return m_cbsEncryptFlag;
}

void ClusterSetting::SetCbsEncryptFlag(const bool& _cbsEncryptFlag)
{
    m_cbsEncryptFlag = _cbsEncryptFlag;
    m_cbsEncryptFlagHasBeenSet = true;
}

bool ClusterSetting::CbsEncryptFlagHasBeenSet() const
{
    return m_cbsEncryptFlagHasBeenSet;
}

bool ClusterSetting::GetRemoteTcpDefaultPort() const
{
    return m_remoteTcpDefaultPort;
}

void ClusterSetting::SetRemoteTcpDefaultPort(const bool& _remoteTcpDefaultPort)
{
    m_remoteTcpDefaultPort = _remoteTcpDefaultPort;
    m_remoteTcpDefaultPortHasBeenSet = true;
}

bool ClusterSetting::RemoteTcpDefaultPortHasBeenSet() const
{
    return m_remoteTcpDefaultPortHasBeenSet;
}

