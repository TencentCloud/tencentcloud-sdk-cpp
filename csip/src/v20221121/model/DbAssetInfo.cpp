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

#include <tencentcloud/csip/v20221121/model/DbAssetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DbAssetInfo::DbAssetInfo() :
    m_cFWStatusHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_cFWProtectLevelHasBeenSet(false),
    m_tagHasBeenSet(false)
{
}

CoreInternalOutcome DbAssetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CFWStatus") && !value["CFWStatus"].IsNull())
    {
        if (!value["CFWStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DbAssetInfo.CFWStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cFWStatus = value["CFWStatus"].GetUint64();
        m_cFWStatusHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbAssetInfo.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbAssetInfo.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbAssetInfo.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbAssetInfo.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbAssetInfo.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbAssetInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbAssetInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbAssetInfo.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("CFWProtectLevel") && !value["CFWProtectLevel"].IsNull())
    {
        if (!value["CFWProtectLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DbAssetInfo.CFWProtectLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cFWProtectLevel = value["CFWProtectLevel"].GetUint64();
        m_cFWProtectLevelHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DbAssetInfo.Tag` is not array type"));

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


    return CoreInternalOutcome(true);
}

void DbAssetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cFWStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFWStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cFWStatus, allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
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

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_cFWProtectLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFWProtectLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cFWProtectLevel, allocator);
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

}


uint64_t DbAssetInfo::GetCFWStatus() const
{
    return m_cFWStatus;
}

void DbAssetInfo::SetCFWStatus(const uint64_t& _cFWStatus)
{
    m_cFWStatus = _cFWStatus;
    m_cFWStatusHasBeenSet = true;
}

bool DbAssetInfo::CFWStatusHasBeenSet() const
{
    return m_cFWStatusHasBeenSet;
}

string DbAssetInfo::GetAssetId() const
{
    return m_assetId;
}

void DbAssetInfo::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DbAssetInfo::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string DbAssetInfo::GetVpcName() const
{
    return m_vpcName;
}

void DbAssetInfo::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool DbAssetInfo::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string DbAssetInfo::GetAssetType() const
{
    return m_assetType;
}

void DbAssetInfo::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DbAssetInfo::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string DbAssetInfo::GetPublicIp() const
{
    return m_publicIp;
}

void DbAssetInfo::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool DbAssetInfo::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string DbAssetInfo::GetPrivateIp() const
{
    return m_privateIp;
}

void DbAssetInfo::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool DbAssetInfo::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string DbAssetInfo::GetRegion() const
{
    return m_region;
}

void DbAssetInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DbAssetInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DbAssetInfo::GetVpcId() const
{
    return m_vpcId;
}

void DbAssetInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DbAssetInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DbAssetInfo::GetAssetName() const
{
    return m_assetName;
}

void DbAssetInfo::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool DbAssetInfo::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

uint64_t DbAssetInfo::GetCFWProtectLevel() const
{
    return m_cFWProtectLevel;
}

void DbAssetInfo::SetCFWProtectLevel(const uint64_t& _cFWProtectLevel)
{
    m_cFWProtectLevel = _cFWProtectLevel;
    m_cFWProtectLevelHasBeenSet = true;
}

bool DbAssetInfo::CFWProtectLevelHasBeenSet() const
{
    return m_cFWProtectLevelHasBeenSet;
}

vector<Tag> DbAssetInfo::GetTag() const
{
    return m_tag;
}

void DbAssetInfo::SetTag(const vector<Tag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool DbAssetInfo::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

