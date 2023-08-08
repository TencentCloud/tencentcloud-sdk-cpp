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

#include <tencentcloud/csip/v20221121/model/Vpc.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

Vpc::Vpc() :
    m_subnetHasBeenSet(false),
    m_connectedVpcHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_cVMHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_dNSHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_cIDRHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nickHasBeenSet(false),
    m_isNewAssetHasBeenSet(false),
    m_isCoreHasBeenSet(false)
{
}

CoreInternalOutcome Vpc::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Subnet") && !value["Subnet"].IsNull())
    {
        if (!value["Subnet"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Vpc.Subnet` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subnet = value["Subnet"].GetUint64();
        m_subnetHasBeenSet = true;
    }

    if (value.HasMember("ConnectedVpc") && !value["ConnectedVpc"].IsNull())
    {
        if (!value["ConnectedVpc"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Vpc.ConnectedVpc` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_connectedVpc = value["ConnectedVpc"].GetUint64();
        m_connectedVpcHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vpc.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vpc.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("CVM") && !value["CVM"].IsNull())
    {
        if (!value["CVM"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Vpc.CVM` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cVM = value["CVM"].GetUint64();
        m_cVMHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Vpc.Tag` is not array type"));

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

    if (value.HasMember("DNS") && !value["DNS"].IsNull())
    {
        if (!value["DNS"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Vpc.DNS` is not array type"));

        const rapidjson::Value &tmpValue = value["DNS"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dNS.push_back((*itr).GetString());
        }
        m_dNSHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vpc.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("CIDR") && !value["CIDR"].IsNull())
    {
        if (!value["CIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vpc.CIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cIDR = string(value["CIDR"].GetString());
        m_cIDRHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vpc.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vpc.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vpc.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Nick") && !value["Nick"].IsNull())
    {
        if (!value["Nick"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vpc.Nick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nick = string(value["Nick"].GetString());
        m_nickHasBeenSet = true;
    }

    if (value.HasMember("IsNewAsset") && !value["IsNewAsset"].IsNull())
    {
        if (!value["IsNewAsset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Vpc.IsNewAsset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isNewAsset = value["IsNewAsset"].GetUint64();
        m_isNewAssetHasBeenSet = true;
    }

    if (value.HasMember("IsCore") && !value["IsCore"].IsNull())
    {
        if (!value["IsCore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Vpc.IsCore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isCore = value["IsCore"].GetUint64();
        m_isCoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Vpc::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subnetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subnet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subnet, allocator);
    }

    if (m_connectedVpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectedVpc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectedVpc, allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_cVMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cVM, allocator);
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

    if (m_dNSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DNS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dNS.begin(); itr != m_dNS.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_cIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

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

    if (m_nickHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nick";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nick.c_str(), allocator).Move(), allocator);
    }

    if (m_isNewAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNewAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNewAsset, allocator);
    }

    if (m_isCoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCore, allocator);
    }

}


uint64_t Vpc::GetSubnet() const
{
    return m_subnet;
}

void Vpc::SetSubnet(const uint64_t& _subnet)
{
    m_subnet = _subnet;
    m_subnetHasBeenSet = true;
}

bool Vpc::SubnetHasBeenSet() const
{
    return m_subnetHasBeenSet;
}

uint64_t Vpc::GetConnectedVpc() const
{
    return m_connectedVpc;
}

void Vpc::SetConnectedVpc(const uint64_t& _connectedVpc)
{
    m_connectedVpc = _connectedVpc;
    m_connectedVpcHasBeenSet = true;
}

bool Vpc::ConnectedVpcHasBeenSet() const
{
    return m_connectedVpcHasBeenSet;
}

string Vpc::GetAssetId() const
{
    return m_assetId;
}

void Vpc::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool Vpc::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string Vpc::GetRegion() const
{
    return m_region;
}

void Vpc::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool Vpc::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t Vpc::GetCVM() const
{
    return m_cVM;
}

void Vpc::SetCVM(const uint64_t& _cVM)
{
    m_cVM = _cVM;
    m_cVMHasBeenSet = true;
}

bool Vpc::CVMHasBeenSet() const
{
    return m_cVMHasBeenSet;
}

vector<Tag> Vpc::GetTag() const
{
    return m_tag;
}

void Vpc::SetTag(const vector<Tag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool Vpc::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

vector<string> Vpc::GetDNS() const
{
    return m_dNS;
}

void Vpc::SetDNS(const vector<string>& _dNS)
{
    m_dNS = _dNS;
    m_dNSHasBeenSet = true;
}

bool Vpc::DNSHasBeenSet() const
{
    return m_dNSHasBeenSet;
}

string Vpc::GetAssetName() const
{
    return m_assetName;
}

void Vpc::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool Vpc::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string Vpc::GetCIDR() const
{
    return m_cIDR;
}

void Vpc::SetCIDR(const string& _cIDR)
{
    m_cIDR = _cIDR;
    m_cIDRHasBeenSet = true;
}

bool Vpc::CIDRHasBeenSet() const
{
    return m_cIDRHasBeenSet;
}

string Vpc::GetCreateTime() const
{
    return m_createTime;
}

void Vpc::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Vpc::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Vpc::GetAppId() const
{
    return m_appId;
}

void Vpc::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool Vpc::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string Vpc::GetUin() const
{
    return m_uin;
}

void Vpc::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool Vpc::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string Vpc::GetNick() const
{
    return m_nick;
}

void Vpc::SetNick(const string& _nick)
{
    m_nick = _nick;
    m_nickHasBeenSet = true;
}

bool Vpc::NickHasBeenSet() const
{
    return m_nickHasBeenSet;
}

uint64_t Vpc::GetIsNewAsset() const
{
    return m_isNewAsset;
}

void Vpc::SetIsNewAsset(const uint64_t& _isNewAsset)
{
    m_isNewAsset = _isNewAsset;
    m_isNewAssetHasBeenSet = true;
}

bool Vpc::IsNewAssetHasBeenSet() const
{
    return m_isNewAssetHasBeenSet;
}

uint64_t Vpc::GetIsCore() const
{
    return m_isCore;
}

void Vpc::SetIsCore(const uint64_t& _isCore)
{
    m_isCore = _isCore;
    m_isCoreHasBeenSet = true;
}

bool Vpc::IsCoreHasBeenSet() const
{
    return m_isCoreHasBeenSet;
}

