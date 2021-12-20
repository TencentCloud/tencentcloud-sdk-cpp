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

#include <tencentcloud/ckafka/v20190819/model/ZoneResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

ZoneResponse::ZoneResponse() :
    m_zoneListHasBeenSet(false),
    m_maxBuyInstanceNumHasBeenSet(false),
    m_maxBandwidthHasBeenSet(false),
    m_unitPriceHasBeenSet(false),
    m_messagePriceHasBeenSet(false),
    m_clusterInfoHasBeenSet(false),
    m_standardHasBeenSet(false),
    m_standardS2HasBeenSet(false),
    m_professionHasBeenSet(false),
    m_physicalHasBeenSet(false),
    m_publicNetworkHasBeenSet(false),
    m_publicNetworkLimitHasBeenSet(false)
{
}

CoreInternalOutcome ZoneResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneList") && !value["ZoneList"].IsNull())
    {
        if (!value["ZoneList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneResponse.ZoneList` is not array type"));

        const rapidjson::Value &tmpValue = value["ZoneList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ZoneInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_zoneList.push_back(item);
        }
        m_zoneListHasBeenSet = true;
    }

    if (value.HasMember("MaxBuyInstanceNum") && !value["MaxBuyInstanceNum"].IsNull())
    {
        if (!value["MaxBuyInstanceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResponse.MaxBuyInstanceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBuyInstanceNum = value["MaxBuyInstanceNum"].GetInt64();
        m_maxBuyInstanceNumHasBeenSet = true;
    }

    if (value.HasMember("MaxBandwidth") && !value["MaxBandwidth"].IsNull())
    {
        if (!value["MaxBandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResponse.MaxBandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBandwidth = value["MaxBandwidth"].GetInt64();
        m_maxBandwidthHasBeenSet = true;
    }

    if (value.HasMember("UnitPrice") && !value["UnitPrice"].IsNull())
    {
        if (!value["UnitPrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResponse.UnitPrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_unitPrice.Deserialize(value["UnitPrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_unitPriceHasBeenSet = true;
    }

    if (value.HasMember("MessagePrice") && !value["MessagePrice"].IsNull())
    {
        if (!value["MessagePrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResponse.MessagePrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_messagePrice.Deserialize(value["MessagePrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_messagePriceHasBeenSet = true;
    }

    if (value.HasMember("ClusterInfo") && !value["ClusterInfo"].IsNull())
    {
        if (!value["ClusterInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneResponse.ClusterInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ClusterInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClusterInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clusterInfo.push_back(item);
        }
        m_clusterInfoHasBeenSet = true;
    }

    if (value.HasMember("Standard") && !value["Standard"].IsNull())
    {
        if (!value["Standard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResponse.Standard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standard = string(value["Standard"].GetString());
        m_standardHasBeenSet = true;
    }

    if (value.HasMember("StandardS2") && !value["StandardS2"].IsNull())
    {
        if (!value["StandardS2"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResponse.StandardS2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standardS2 = string(value["StandardS2"].GetString());
        m_standardS2HasBeenSet = true;
    }

    if (value.HasMember("Profession") && !value["Profession"].IsNull())
    {
        if (!value["Profession"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResponse.Profession` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_profession = string(value["Profession"].GetString());
        m_professionHasBeenSet = true;
    }

    if (value.HasMember("Physical") && !value["Physical"].IsNull())
    {
        if (!value["Physical"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResponse.Physical` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_physical = string(value["Physical"].GetString());
        m_physicalHasBeenSet = true;
    }

    if (value.HasMember("PublicNetwork") && !value["PublicNetwork"].IsNull())
    {
        if (!value["PublicNetwork"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResponse.PublicNetwork` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicNetwork = string(value["PublicNetwork"].GetString());
        m_publicNetworkHasBeenSet = true;
    }

    if (value.HasMember("PublicNetworkLimit") && !value["PublicNetworkLimit"].IsNull())
    {
        if (!value["PublicNetworkLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResponse.PublicNetworkLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicNetworkLimit = string(value["PublicNetworkLimit"].GetString());
        m_publicNetworkLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zoneList.begin(); itr != m_zoneList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_maxBuyInstanceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBuyInstanceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBuyInstanceNum, allocator);
    }

    if (m_maxBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBandwidth, allocator);
    }

    if (m_unitPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_unitPrice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_messagePriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessagePrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_messagePrice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clusterInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusterInfo.begin(); itr != m_clusterInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_standardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Standard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_standard.c_str(), allocator).Move(), allocator);
    }

    if (m_standardS2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardS2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_standardS2.c_str(), allocator).Move(), allocator);
    }

    if (m_professionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profession";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_profession.c_str(), allocator).Move(), allocator);
    }

    if (m_physicalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Physical";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_physical.c_str(), allocator).Move(), allocator);
    }

    if (m_publicNetworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicNetwork";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicNetwork.c_str(), allocator).Move(), allocator);
    }

    if (m_publicNetworkLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicNetworkLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicNetworkLimit.c_str(), allocator).Move(), allocator);
    }

}


vector<ZoneInfo> ZoneResponse::GetZoneList() const
{
    return m_zoneList;
}

void ZoneResponse::SetZoneList(const vector<ZoneInfo>& _zoneList)
{
    m_zoneList = _zoneList;
    m_zoneListHasBeenSet = true;
}

bool ZoneResponse::ZoneListHasBeenSet() const
{
    return m_zoneListHasBeenSet;
}

int64_t ZoneResponse::GetMaxBuyInstanceNum() const
{
    return m_maxBuyInstanceNum;
}

void ZoneResponse::SetMaxBuyInstanceNum(const int64_t& _maxBuyInstanceNum)
{
    m_maxBuyInstanceNum = _maxBuyInstanceNum;
    m_maxBuyInstanceNumHasBeenSet = true;
}

bool ZoneResponse::MaxBuyInstanceNumHasBeenSet() const
{
    return m_maxBuyInstanceNumHasBeenSet;
}

int64_t ZoneResponse::GetMaxBandwidth() const
{
    return m_maxBandwidth;
}

void ZoneResponse::SetMaxBandwidth(const int64_t& _maxBandwidth)
{
    m_maxBandwidth = _maxBandwidth;
    m_maxBandwidthHasBeenSet = true;
}

bool ZoneResponse::MaxBandwidthHasBeenSet() const
{
    return m_maxBandwidthHasBeenSet;
}

Price ZoneResponse::GetUnitPrice() const
{
    return m_unitPrice;
}

void ZoneResponse::SetUnitPrice(const Price& _unitPrice)
{
    m_unitPrice = _unitPrice;
    m_unitPriceHasBeenSet = true;
}

bool ZoneResponse::UnitPriceHasBeenSet() const
{
    return m_unitPriceHasBeenSet;
}

Price ZoneResponse::GetMessagePrice() const
{
    return m_messagePrice;
}

void ZoneResponse::SetMessagePrice(const Price& _messagePrice)
{
    m_messagePrice = _messagePrice;
    m_messagePriceHasBeenSet = true;
}

bool ZoneResponse::MessagePriceHasBeenSet() const
{
    return m_messagePriceHasBeenSet;
}

vector<ClusterInfo> ZoneResponse::GetClusterInfo() const
{
    return m_clusterInfo;
}

void ZoneResponse::SetClusterInfo(const vector<ClusterInfo>& _clusterInfo)
{
    m_clusterInfo = _clusterInfo;
    m_clusterInfoHasBeenSet = true;
}

bool ZoneResponse::ClusterInfoHasBeenSet() const
{
    return m_clusterInfoHasBeenSet;
}

string ZoneResponse::GetStandard() const
{
    return m_standard;
}

void ZoneResponse::SetStandard(const string& _standard)
{
    m_standard = _standard;
    m_standardHasBeenSet = true;
}

bool ZoneResponse::StandardHasBeenSet() const
{
    return m_standardHasBeenSet;
}

string ZoneResponse::GetStandardS2() const
{
    return m_standardS2;
}

void ZoneResponse::SetStandardS2(const string& _standardS2)
{
    m_standardS2 = _standardS2;
    m_standardS2HasBeenSet = true;
}

bool ZoneResponse::StandardS2HasBeenSet() const
{
    return m_standardS2HasBeenSet;
}

string ZoneResponse::GetProfession() const
{
    return m_profession;
}

void ZoneResponse::SetProfession(const string& _profession)
{
    m_profession = _profession;
    m_professionHasBeenSet = true;
}

bool ZoneResponse::ProfessionHasBeenSet() const
{
    return m_professionHasBeenSet;
}

string ZoneResponse::GetPhysical() const
{
    return m_physical;
}

void ZoneResponse::SetPhysical(const string& _physical)
{
    m_physical = _physical;
    m_physicalHasBeenSet = true;
}

bool ZoneResponse::PhysicalHasBeenSet() const
{
    return m_physicalHasBeenSet;
}

string ZoneResponse::GetPublicNetwork() const
{
    return m_publicNetwork;
}

void ZoneResponse::SetPublicNetwork(const string& _publicNetwork)
{
    m_publicNetwork = _publicNetwork;
    m_publicNetworkHasBeenSet = true;
}

bool ZoneResponse::PublicNetworkHasBeenSet() const
{
    return m_publicNetworkHasBeenSet;
}

string ZoneResponse::GetPublicNetworkLimit() const
{
    return m_publicNetworkLimit;
}

void ZoneResponse::SetPublicNetworkLimit(const string& _publicNetworkLimit)
{
    m_publicNetworkLimit = _publicNetworkLimit;
    m_publicNetworkLimitHasBeenSet = true;
}

bool ZoneResponse::PublicNetworkLimitHasBeenSet() const
{
    return m_publicNetworkLimitHasBeenSet;
}

