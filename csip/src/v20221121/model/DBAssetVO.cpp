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

#include <tencentcloud/csip/v20221121/model/DBAssetVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DBAssetVO::DBAssetVO() :
    m_assetIdHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_assetCreateTimeHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false),
    m_configurationRiskHasBeenSet(false),
    m_attackHasBeenSet(false),
    m_accessHasBeenSet(false),
    m_scanTaskHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_portHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isCoreHasBeenSet(false),
    m_isNewAssetHasBeenSet(false)
{
}

CoreInternalOutcome DBAssetVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBAssetVO.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBAssetVO.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBAssetVO.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBAssetVO.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBAssetVO.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBAssetVO.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBAssetVO.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("AssetCreateTime") && !value["AssetCreateTime"].IsNull())
    {
        if (!value["AssetCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBAssetVO.AssetCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetCreateTime = string(value["AssetCreateTime"].GetString());
        m_assetCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("LastScanTime") && !value["LastScanTime"].IsNull())
    {
        if (!value["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBAssetVO.LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(value["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }

    if (value.HasMember("ConfigurationRisk") && !value["ConfigurationRisk"].IsNull())
    {
        if (!value["ConfigurationRisk"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DBAssetVO.ConfigurationRisk` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_configurationRisk = value["ConfigurationRisk"].GetUint64();
        m_configurationRiskHasBeenSet = true;
    }

    if (value.HasMember("Attack") && !value["Attack"].IsNull())
    {
        if (!value["Attack"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DBAssetVO.Attack` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attack = value["Attack"].GetUint64();
        m_attackHasBeenSet = true;
    }

    if (value.HasMember("Access") && !value["Access"].IsNull())
    {
        if (!value["Access"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DBAssetVO.Access` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_access = value["Access"].GetUint64();
        m_accessHasBeenSet = true;
    }

    if (value.HasMember("ScanTask") && !value["ScanTask"].IsNull())
    {
        if (!value["ScanTask"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DBAssetVO.ScanTask` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanTask = value["ScanTask"].GetUint64();
        m_scanTaskHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DBAssetVO.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBAssetVO.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBAssetVO.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DBAssetVO.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DBAssetVO.Tag` is not array type"));

        const rapidjson::Value &tmpValue = value["Tag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tag.push_back(item);
        }
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBAssetVO.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBAssetVO.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DBAssetVO.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsCore") && !value["IsCore"].IsNull())
    {
        if (!value["IsCore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DBAssetVO.IsCore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isCore = value["IsCore"].GetUint64();
        m_isCoreHasBeenSet = true;
    }

    if (value.HasMember("IsNewAsset") && !value["IsNewAsset"].IsNull())
    {
        if (!value["IsNewAsset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DBAssetVO.IsNewAsset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isNewAsset = value["IsNewAsset"].GetUint64();
        m_isNewAssetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DBAssetVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
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

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_assetCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_configurationRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigurationRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configurationRisk, allocator);
    }

    if (m_attackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attack, allocator);
    }

    if (m_accessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Access";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_access, allocator);
    }

    if (m_scanTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanTask, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_isCoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCore, allocator);
    }

    if (m_isNewAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNewAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNewAsset, allocator);
    }

}


string DBAssetVO::GetAssetId() const
{
    return m_assetId;
}

void DBAssetVO::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DBAssetVO::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string DBAssetVO::GetAssetName() const
{
    return m_assetName;
}

void DBAssetVO::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool DBAssetVO::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string DBAssetVO::GetAssetType() const
{
    return m_assetType;
}

void DBAssetVO::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DBAssetVO::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string DBAssetVO::GetVpcId() const
{
    return m_vpcId;
}

void DBAssetVO::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DBAssetVO::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DBAssetVO::GetVpcName() const
{
    return m_vpcName;
}

void DBAssetVO::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool DBAssetVO::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string DBAssetVO::GetRegion() const
{
    return m_region;
}

void DBAssetVO::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DBAssetVO::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DBAssetVO::GetDomain() const
{
    return m_domain;
}

void DBAssetVO::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DBAssetVO::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DBAssetVO::GetAssetCreateTime() const
{
    return m_assetCreateTime;
}

void DBAssetVO::SetAssetCreateTime(const string& _assetCreateTime)
{
    m_assetCreateTime = _assetCreateTime;
    m_assetCreateTimeHasBeenSet = true;
}

bool DBAssetVO::AssetCreateTimeHasBeenSet() const
{
    return m_assetCreateTimeHasBeenSet;
}

string DBAssetVO::GetLastScanTime() const
{
    return m_lastScanTime;
}

void DBAssetVO::SetLastScanTime(const string& _lastScanTime)
{
    m_lastScanTime = _lastScanTime;
    m_lastScanTimeHasBeenSet = true;
}

bool DBAssetVO::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

uint64_t DBAssetVO::GetConfigurationRisk() const
{
    return m_configurationRisk;
}

void DBAssetVO::SetConfigurationRisk(const uint64_t& _configurationRisk)
{
    m_configurationRisk = _configurationRisk;
    m_configurationRiskHasBeenSet = true;
}

bool DBAssetVO::ConfigurationRiskHasBeenSet() const
{
    return m_configurationRiskHasBeenSet;
}

uint64_t DBAssetVO::GetAttack() const
{
    return m_attack;
}

void DBAssetVO::SetAttack(const uint64_t& _attack)
{
    m_attack = _attack;
    m_attackHasBeenSet = true;
}

bool DBAssetVO::AttackHasBeenSet() const
{
    return m_attackHasBeenSet;
}

uint64_t DBAssetVO::GetAccess() const
{
    return m_access;
}

void DBAssetVO::SetAccess(const uint64_t& _access)
{
    m_access = _access;
    m_accessHasBeenSet = true;
}

bool DBAssetVO::AccessHasBeenSet() const
{
    return m_accessHasBeenSet;
}

uint64_t DBAssetVO::GetScanTask() const
{
    return m_scanTask;
}

void DBAssetVO::SetScanTask(const uint64_t& _scanTask)
{
    m_scanTask = _scanTask;
    m_scanTaskHasBeenSet = true;
}

bool DBAssetVO::ScanTaskHasBeenSet() const
{
    return m_scanTaskHasBeenSet;
}

uint64_t DBAssetVO::GetAppId() const
{
    return m_appId;
}

void DBAssetVO::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DBAssetVO::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DBAssetVO::GetUin() const
{
    return m_uin;
}

void DBAssetVO::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DBAssetVO::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DBAssetVO::GetNickName() const
{
    return m_nickName;
}

void DBAssetVO::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool DBAssetVO::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

uint64_t DBAssetVO::GetPort() const
{
    return m_port;
}

void DBAssetVO::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool DBAssetVO::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

vector<Tag> DBAssetVO::GetTag() const
{
    return m_tag;
}

void DBAssetVO::SetTag(const vector<Tag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool DBAssetVO::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string DBAssetVO::GetPrivateIp() const
{
    return m_privateIp;
}

void DBAssetVO::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool DBAssetVO::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string DBAssetVO::GetPublicIp() const
{
    return m_publicIp;
}

void DBAssetVO::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool DBAssetVO::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

uint64_t DBAssetVO::GetStatus() const
{
    return m_status;
}

void DBAssetVO::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DBAssetVO::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DBAssetVO::GetIsCore() const
{
    return m_isCore;
}

void DBAssetVO::SetIsCore(const uint64_t& _isCore)
{
    m_isCore = _isCore;
    m_isCoreHasBeenSet = true;
}

bool DBAssetVO::IsCoreHasBeenSet() const
{
    return m_isCoreHasBeenSet;
}

uint64_t DBAssetVO::GetIsNewAsset() const
{
    return m_isNewAsset;
}

void DBAssetVO::SetIsNewAsset(const uint64_t& _isNewAsset)
{
    m_isNewAsset = _isNewAsset;
    m_isNewAssetHasBeenSet = true;
}

bool DBAssetVO::IsNewAssetHasBeenSet() const
{
    return m_isNewAssetHasBeenSet;
}

