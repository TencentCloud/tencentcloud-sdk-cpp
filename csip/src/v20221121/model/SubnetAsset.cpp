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

#include <tencentcloud/csip/v20221121/model/SubnetAsset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

SubnetAsset::SubnetAsset() :
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_nickHasBeenSet(false),
    m_cIDRHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_cVMHasBeenSet(false),
    m_availableIpHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_configureRiskHasBeenSet(false),
    m_scanTaskHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false),
    m_isCoreHasBeenSet(false),
    m_isNewAssetHasBeenSet(false)
{
}

CoreInternalOutcome SubnetAsset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetAsset.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetAsset.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetAsset.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetAsset.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetAsset.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetAsset.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetAsset.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubnetAsset.Tag` is not array type"));

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

    if (value.HasMember("Nick") && !value["Nick"].IsNull())
    {
        if (!value["Nick"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetAsset.Nick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nick = string(value["Nick"].GetString());
        m_nickHasBeenSet = true;
    }

    if (value.HasMember("CIDR") && !value["CIDR"].IsNull())
    {
        if (!value["CIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetAsset.CIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cIDR = string(value["CIDR"].GetString());
        m_cIDRHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetAsset.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("CVM") && !value["CVM"].IsNull())
    {
        if (!value["CVM"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetAsset.CVM` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cVM = value["CVM"].GetInt64();
        m_cVMHasBeenSet = true;
    }

    if (value.HasMember("AvailableIp") && !value["AvailableIp"].IsNull())
    {
        if (!value["AvailableIp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetAsset.AvailableIp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availableIp = value["AvailableIp"].GetInt64();
        m_availableIpHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetAsset.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ConfigureRisk") && !value["ConfigureRisk"].IsNull())
    {
        if (!value["ConfigureRisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetAsset.ConfigureRisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_configureRisk = value["ConfigureRisk"].GetInt64();
        m_configureRiskHasBeenSet = true;
    }

    if (value.HasMember("ScanTask") && !value["ScanTask"].IsNull())
    {
        if (!value["ScanTask"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetAsset.ScanTask` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanTask = value["ScanTask"].GetInt64();
        m_scanTaskHasBeenSet = true;
    }

    if (value.HasMember("LastScanTime") && !value["LastScanTime"].IsNull())
    {
        if (!value["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetAsset.LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(value["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }

    if (value.HasMember("IsCore") && !value["IsCore"].IsNull())
    {
        if (!value["IsCore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetAsset.IsCore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isCore = value["IsCore"].GetUint64();
        m_isCoreHasBeenSet = true;
    }

    if (value.HasMember("IsNewAsset") && !value["IsNewAsset"].IsNull())
    {
        if (!value["IsNewAsset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetAsset.IsNewAsset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isNewAsset = value["IsNewAsset"].GetUint64();
        m_isNewAssetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubnetAsset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

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

    if (m_nickHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nick";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nick.c_str(), allocator).Move(), allocator);
    }

    if (m_cIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_cVMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cVM, allocator);
    }

    if (m_availableIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableIp, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_configureRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigureRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configureRisk, allocator);
    }

    if (m_scanTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanTask, allocator);
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanTime.c_str(), allocator).Move(), allocator);
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


string SubnetAsset::GetAppId() const
{
    return m_appId;
}

void SubnetAsset::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool SubnetAsset::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string SubnetAsset::GetUin() const
{
    return m_uin;
}

void SubnetAsset::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool SubnetAsset::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string SubnetAsset::GetAssetId() const
{
    return m_assetId;
}

void SubnetAsset::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool SubnetAsset::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string SubnetAsset::GetAssetName() const
{
    return m_assetName;
}

void SubnetAsset::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool SubnetAsset::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string SubnetAsset::GetRegion() const
{
    return m_region;
}

void SubnetAsset::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SubnetAsset::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string SubnetAsset::GetVpcId() const
{
    return m_vpcId;
}

void SubnetAsset::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool SubnetAsset::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string SubnetAsset::GetVpcName() const
{
    return m_vpcName;
}

void SubnetAsset::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool SubnetAsset::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

vector<Tag> SubnetAsset::GetTag() const
{
    return m_tag;
}

void SubnetAsset::SetTag(const vector<Tag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool SubnetAsset::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string SubnetAsset::GetNick() const
{
    return m_nick;
}

void SubnetAsset::SetNick(const string& _nick)
{
    m_nick = _nick;
    m_nickHasBeenSet = true;
}

bool SubnetAsset::NickHasBeenSet() const
{
    return m_nickHasBeenSet;
}

string SubnetAsset::GetCIDR() const
{
    return m_cIDR;
}

void SubnetAsset::SetCIDR(const string& _cIDR)
{
    m_cIDR = _cIDR;
    m_cIDRHasBeenSet = true;
}

bool SubnetAsset::CIDRHasBeenSet() const
{
    return m_cIDRHasBeenSet;
}

string SubnetAsset::GetZone() const
{
    return m_zone;
}

void SubnetAsset::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool SubnetAsset::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t SubnetAsset::GetCVM() const
{
    return m_cVM;
}

void SubnetAsset::SetCVM(const int64_t& _cVM)
{
    m_cVM = _cVM;
    m_cVMHasBeenSet = true;
}

bool SubnetAsset::CVMHasBeenSet() const
{
    return m_cVMHasBeenSet;
}

int64_t SubnetAsset::GetAvailableIp() const
{
    return m_availableIp;
}

void SubnetAsset::SetAvailableIp(const int64_t& _availableIp)
{
    m_availableIp = _availableIp;
    m_availableIpHasBeenSet = true;
}

bool SubnetAsset::AvailableIpHasBeenSet() const
{
    return m_availableIpHasBeenSet;
}

string SubnetAsset::GetCreateTime() const
{
    return m_createTime;
}

void SubnetAsset::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SubnetAsset::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t SubnetAsset::GetConfigureRisk() const
{
    return m_configureRisk;
}

void SubnetAsset::SetConfigureRisk(const int64_t& _configureRisk)
{
    m_configureRisk = _configureRisk;
    m_configureRiskHasBeenSet = true;
}

bool SubnetAsset::ConfigureRiskHasBeenSet() const
{
    return m_configureRiskHasBeenSet;
}

int64_t SubnetAsset::GetScanTask() const
{
    return m_scanTask;
}

void SubnetAsset::SetScanTask(const int64_t& _scanTask)
{
    m_scanTask = _scanTask;
    m_scanTaskHasBeenSet = true;
}

bool SubnetAsset::ScanTaskHasBeenSet() const
{
    return m_scanTaskHasBeenSet;
}

string SubnetAsset::GetLastScanTime() const
{
    return m_lastScanTime;
}

void SubnetAsset::SetLastScanTime(const string& _lastScanTime)
{
    m_lastScanTime = _lastScanTime;
    m_lastScanTimeHasBeenSet = true;
}

bool SubnetAsset::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

uint64_t SubnetAsset::GetIsCore() const
{
    return m_isCore;
}

void SubnetAsset::SetIsCore(const uint64_t& _isCore)
{
    m_isCore = _isCore;
    m_isCoreHasBeenSet = true;
}

bool SubnetAsset::IsCoreHasBeenSet() const
{
    return m_isCoreHasBeenSet;
}

uint64_t SubnetAsset::GetIsNewAsset() const
{
    return m_isNewAsset;
}

void SubnetAsset::SetIsNewAsset(const uint64_t& _isNewAsset)
{
    m_isNewAsset = _isNewAsset;
    m_isNewAssetHasBeenSet = true;
}

bool SubnetAsset::IsNewAssetHasBeenSet() const
{
    return m_isNewAssetHasBeenSet;
}

