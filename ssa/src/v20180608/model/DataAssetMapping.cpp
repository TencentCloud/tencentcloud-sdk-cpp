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

#include <tencentcloud/ssa/v20180608/model/DataAssetMapping.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

DataAssetMapping::DataAssetMapping() :
    m_assetIpHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_instidHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_assetRegionEnHasBeenSet(false),
    m_assetRegionCnHasBeenSet(false),
    m_assetNetworkHasBeenSet(false),
    m_assetStatusEnHasBeenSet(false),
    m_assetStatusCnHasBeenSet(false),
    m_isWhiteHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_portHasBeenSet(false),
    m_componentHasBeenSet(false),
    m_assetInstanceTypeHasBeenSet(false),
    m_isIntranetHasBeenSet(false)
{
}

CoreInternalOutcome DataAssetMapping::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetIp") && !value["AssetIp"].IsNull())
    {
        if (!value["AssetIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataAssetMapping.AssetIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetIp = string(value["AssetIp"].GetString());
        m_assetIpHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataAssetMapping.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("Instid") && !value["Instid"].IsNull())
    {
        if (!value["Instid"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataAssetMapping.Instid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instid = string(value["Instid"].GetString());
        m_instidHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataAssetMapping.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetRegionEn") && !value["AssetRegionEn"].IsNull())
    {
        if (!value["AssetRegionEn"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataAssetMapping.AssetRegionEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetRegionEn = string(value["AssetRegionEn"].GetString());
        m_assetRegionEnHasBeenSet = true;
    }

    if (value.HasMember("AssetRegionCn") && !value["AssetRegionCn"].IsNull())
    {
        if (!value["AssetRegionCn"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataAssetMapping.AssetRegionCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetRegionCn = string(value["AssetRegionCn"].GetString());
        m_assetRegionCnHasBeenSet = true;
    }

    if (value.HasMember("AssetNetwork") && !value["AssetNetwork"].IsNull())
    {
        if (!value["AssetNetwork"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataAssetMapping.AssetNetwork` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetNetwork = string(value["AssetNetwork"].GetString());
        m_assetNetworkHasBeenSet = true;
    }

    if (value.HasMember("AssetStatusEn") && !value["AssetStatusEn"].IsNull())
    {
        if (!value["AssetStatusEn"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataAssetMapping.AssetStatusEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetStatusEn = string(value["AssetStatusEn"].GetString());
        m_assetStatusEnHasBeenSet = true;
    }

    if (value.HasMember("AssetStatusCn") && !value["AssetStatusCn"].IsNull())
    {
        if (!value["AssetStatusCn"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataAssetMapping.AssetStatusCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetStatusCn = string(value["AssetStatusCn"].GetString());
        m_assetStatusCnHasBeenSet = true;
    }

    if (value.HasMember("IsWhite") && !value["IsWhite"].IsNull())
    {
        if (!value["IsWhite"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataAssetMapping.IsWhite` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isWhite = string(value["IsWhite"].GetString());
        m_isWhiteHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataAssetMapping.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataAssetMapping.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Error("response `DataAssetMapping.Tag` is not array type"));

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

    if (value.HasMember("Group") && !value["Group"].IsNull())
    {
        if (!value["Group"].IsArray())
            return CoreInternalOutcome(Error("response `DataAssetMapping.Group` is not array type"));

        const rapidjson::Value &tmpValue = value["Group"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_group.push_back((*itr).GetString());
        }
        m_groupHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataAssetMapping.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Component") && !value["Component"].IsNull())
    {
        if (!value["Component"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataAssetMapping.Component` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_component = string(value["Component"].GetString());
        m_componentHasBeenSet = true;
    }

    if (value.HasMember("AssetInstanceType") && !value["AssetInstanceType"].IsNull())
    {
        if (!value["AssetInstanceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataAssetMapping.AssetInstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetInstanceType = string(value["AssetInstanceType"].GetString());
        m_assetInstanceTypeHasBeenSet = true;
    }

    if (value.HasMember("IsIntranet") && !value["IsIntranet"].IsNull())
    {
        if (!value["IsIntranet"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DataAssetMapping.IsIntranet` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isIntranet = value["IsIntranet"].GetUint64();
        m_isIntranetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataAssetMapping::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetIp.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_instidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instid.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetRegionEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetRegionEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetRegionEn.c_str(), allocator).Move(), allocator);
    }

    if (m_assetRegionCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetRegionCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetRegionCn.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNetworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetNetwork";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetNetwork.c_str(), allocator).Move(), allocator);
    }

    if (m_assetStatusEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetStatusEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetStatusEn.c_str(), allocator).Move(), allocator);
    }

    if (m_assetStatusCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetStatusCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetStatusCn.c_str(), allocator).Move(), allocator);
    }

    if (m_isWhiteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWhite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isWhite.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
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

    if (m_groupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Group";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_group.begin(); itr != m_group.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_componentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Component";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_component.c_str(), allocator).Move(), allocator);
    }

    if (m_assetInstanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetInstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetInstanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_isIntranetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIntranet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isIntranet, allocator);
    }

}


string DataAssetMapping::GetAssetIp() const
{
    return m_assetIp;
}

void DataAssetMapping::SetAssetIp(const string& _assetIp)
{
    m_assetIp = _assetIp;
    m_assetIpHasBeenSet = true;
}

bool DataAssetMapping::AssetIpHasBeenSet() const
{
    return m_assetIpHasBeenSet;
}

string DataAssetMapping::GetAssetName() const
{
    return m_assetName;
}

void DataAssetMapping::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool DataAssetMapping::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string DataAssetMapping::GetInstid() const
{
    return m_instid;
}

void DataAssetMapping::SetInstid(const string& _instid)
{
    m_instid = _instid;
    m_instidHasBeenSet = true;
}

bool DataAssetMapping::InstidHasBeenSet() const
{
    return m_instidHasBeenSet;
}

string DataAssetMapping::GetAssetType() const
{
    return m_assetType;
}

void DataAssetMapping::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DataAssetMapping::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string DataAssetMapping::GetAssetRegionEn() const
{
    return m_assetRegionEn;
}

void DataAssetMapping::SetAssetRegionEn(const string& _assetRegionEn)
{
    m_assetRegionEn = _assetRegionEn;
    m_assetRegionEnHasBeenSet = true;
}

bool DataAssetMapping::AssetRegionEnHasBeenSet() const
{
    return m_assetRegionEnHasBeenSet;
}

string DataAssetMapping::GetAssetRegionCn() const
{
    return m_assetRegionCn;
}

void DataAssetMapping::SetAssetRegionCn(const string& _assetRegionCn)
{
    m_assetRegionCn = _assetRegionCn;
    m_assetRegionCnHasBeenSet = true;
}

bool DataAssetMapping::AssetRegionCnHasBeenSet() const
{
    return m_assetRegionCnHasBeenSet;
}

string DataAssetMapping::GetAssetNetwork() const
{
    return m_assetNetwork;
}

void DataAssetMapping::SetAssetNetwork(const string& _assetNetwork)
{
    m_assetNetwork = _assetNetwork;
    m_assetNetworkHasBeenSet = true;
}

bool DataAssetMapping::AssetNetworkHasBeenSet() const
{
    return m_assetNetworkHasBeenSet;
}

string DataAssetMapping::GetAssetStatusEn() const
{
    return m_assetStatusEn;
}

void DataAssetMapping::SetAssetStatusEn(const string& _assetStatusEn)
{
    m_assetStatusEn = _assetStatusEn;
    m_assetStatusEnHasBeenSet = true;
}

bool DataAssetMapping::AssetStatusEnHasBeenSet() const
{
    return m_assetStatusEnHasBeenSet;
}

string DataAssetMapping::GetAssetStatusCn() const
{
    return m_assetStatusCn;
}

void DataAssetMapping::SetAssetStatusCn(const string& _assetStatusCn)
{
    m_assetStatusCn = _assetStatusCn;
    m_assetStatusCnHasBeenSet = true;
}

bool DataAssetMapping::AssetStatusCnHasBeenSet() const
{
    return m_assetStatusCnHasBeenSet;
}

string DataAssetMapping::GetIsWhite() const
{
    return m_isWhite;
}

void DataAssetMapping::SetIsWhite(const string& _isWhite)
{
    m_isWhite = _isWhite;
    m_isWhiteHasBeenSet = true;
}

bool DataAssetMapping::IsWhiteHasBeenSet() const
{
    return m_isWhiteHasBeenSet;
}

string DataAssetMapping::GetStatus() const
{
    return m_status;
}

void DataAssetMapping::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DataAssetMapping::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DataAssetMapping::GetTime() const
{
    return m_time;
}

void DataAssetMapping::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool DataAssetMapping::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

vector<Tag> DataAssetMapping::GetTag() const
{
    return m_tag;
}

void DataAssetMapping::SetTag(const vector<Tag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool DataAssetMapping::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

vector<string> DataAssetMapping::GetGroup() const
{
    return m_group;
}

void DataAssetMapping::SetGroup(const vector<string>& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool DataAssetMapping::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

string DataAssetMapping::GetPort() const
{
    return m_port;
}

void DataAssetMapping::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool DataAssetMapping::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string DataAssetMapping::GetComponent() const
{
    return m_component;
}

void DataAssetMapping::SetComponent(const string& _component)
{
    m_component = _component;
    m_componentHasBeenSet = true;
}

bool DataAssetMapping::ComponentHasBeenSet() const
{
    return m_componentHasBeenSet;
}

string DataAssetMapping::GetAssetInstanceType() const
{
    return m_assetInstanceType;
}

void DataAssetMapping::SetAssetInstanceType(const string& _assetInstanceType)
{
    m_assetInstanceType = _assetInstanceType;
    m_assetInstanceTypeHasBeenSet = true;
}

bool DataAssetMapping::AssetInstanceTypeHasBeenSet() const
{
    return m_assetInstanceTypeHasBeenSet;
}

uint64_t DataAssetMapping::GetIsIntranet() const
{
    return m_isIntranet;
}

void DataAssetMapping::SetIsIntranet(const uint64_t& _isIntranet)
{
    m_isIntranet = _isIntranet;
    m_isIntranetHasBeenSet = true;
}

bool DataAssetMapping::IsIntranetHasBeenSet() const
{
    return m_isIntranetHasBeenSet;
}

