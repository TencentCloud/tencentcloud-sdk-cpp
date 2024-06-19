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
    m_publicNetworkLimitHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_forceCheckTagHasBeenSet(false)
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

    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResponse.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResponse.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResponse.Offset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetInt64();
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("Limit") && !value["Limit"].IsNull())
    {
        if (!value["Limit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResponse.Limit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_limit = value["Limit"].GetInt64();
        m_limitHasBeenSet = true;
    }

    if (value.HasMember("ForceCheckTag") && !value["ForceCheckTag"].IsNull())
    {
        if (!value["ForceCheckTag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResponse.ForceCheckTag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_forceCheckTag = value["ForceCheckTag"].GetBool();
        m_forceCheckTagHasBeenSet = true;
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

    if (m_requestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limit, allocator);
    }

    if (m_forceCheckTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceCheckTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forceCheckTag, allocator);
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

string ZoneResponse::GetRequestId() const
{
    return m_requestId;
}

void ZoneResponse::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool ZoneResponse::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

string ZoneResponse::GetVersion() const
{
    return m_version;
}

void ZoneResponse::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ZoneResponse::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

int64_t ZoneResponse::GetOffset() const
{
    return m_offset;
}

void ZoneResponse::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ZoneResponse::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t ZoneResponse::GetLimit() const
{
    return m_limit;
}

void ZoneResponse::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ZoneResponse::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

bool ZoneResponse::GetForceCheckTag() const
{
    return m_forceCheckTag;
}

void ZoneResponse::SetForceCheckTag(const bool& _forceCheckTag)
{
    m_forceCheckTag = _forceCheckTag;
    m_forceCheckTagHasBeenSet = true;
}

bool ZoneResponse::ForceCheckTagHasBeenSet() const
{
    return m_forceCheckTagHasBeenSet;
}

