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

#include <tencentcloud/vpc/v20170312/model/PeerConnection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

PeerConnection::PeerConnection() :
    m_sourceVpcIdHasBeenSet(false),
    m_peerVpcIdHasBeenSet(false),
    m_peeringConnectionIdHasBeenSet(false),
    m_peeringConnectionNameHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_isNgwHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_destinationRegionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_peerAppIdHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_sourceUinHasBeenSet(false),
    m_destinationUinHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_qosLevelHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_destinationVpcIdHasBeenSet(false)
{
}

CoreInternalOutcome PeerConnection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceVpcId") && !value["SourceVpcId"].IsNull())
    {
        if (!value["SourceVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeerConnection.SourceVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceVpcId = string(value["SourceVpcId"].GetString());
        m_sourceVpcIdHasBeenSet = true;
    }

    if (value.HasMember("PeerVpcId") && !value["PeerVpcId"].IsNull())
    {
        if (!value["PeerVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeerConnection.PeerVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peerVpcId = string(value["PeerVpcId"].GetString());
        m_peerVpcIdHasBeenSet = true;
    }

    if (value.HasMember("PeeringConnectionId") && !value["PeeringConnectionId"].IsNull())
    {
        if (!value["PeeringConnectionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeerConnection.PeeringConnectionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peeringConnectionId = string(value["PeeringConnectionId"].GetString());
        m_peeringConnectionIdHasBeenSet = true;
    }

    if (value.HasMember("PeeringConnectionName") && !value["PeeringConnectionName"].IsNull())
    {
        if (!value["PeeringConnectionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeerConnection.PeeringConnectionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peeringConnectionName = string(value["PeeringConnectionName"].GetString());
        m_peeringConnectionNameHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeerConnection.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("IsNgw") && !value["IsNgw"].IsNull())
    {
        if (!value["IsNgw"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PeerConnection.IsNgw` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isNgw = value["IsNgw"].GetBool();
        m_isNgwHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PeerConnection.Bandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetInt64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("SourceRegion") && !value["SourceRegion"].IsNull())
    {
        if (!value["SourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeerConnection.SourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceRegion = string(value["SourceRegion"].GetString());
        m_sourceRegionHasBeenSet = true;
    }

    if (value.HasMember("DestinationRegion") && !value["DestinationRegion"].IsNull())
    {
        if (!value["DestinationRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeerConnection.DestinationRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationRegion = string(value["DestinationRegion"].GetString());
        m_destinationRegionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeerConnection.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PeerConnection.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("PeerAppId") && !value["PeerAppId"].IsNull())
    {
        if (!value["PeerAppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PeerConnection.PeerAppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_peerAppId = value["PeerAppId"].GetInt64();
        m_peerAppIdHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeerConnection.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceUin") && !value["SourceUin"].IsNull())
    {
        if (!value["SourceUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PeerConnection.SourceUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceUin = value["SourceUin"].GetInt64();
        m_sourceUinHasBeenSet = true;
    }

    if (value.HasMember("DestinationUin") && !value["DestinationUin"].IsNull())
    {
        if (!value["DestinationUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PeerConnection.DestinationUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_destinationUin = value["DestinationUin"].GetInt64();
        m_destinationUinHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PeerConnection.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }

    if (value.HasMember("QosLevel") && !value["QosLevel"].IsNull())
    {
        if (!value["QosLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeerConnection.QosLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qosLevel = string(value["QosLevel"].GetString());
        m_qosLevelHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeerConnection.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("DestinationVpcId") && !value["DestinationVpcId"].IsNull())
    {
        if (!value["DestinationVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeerConnection.DestinationVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationVpcId = string(value["DestinationVpcId"].GetString());
        m_destinationVpcIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PeerConnection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_peerVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peerVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_peeringConnectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeeringConnectionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peeringConnectionId.c_str(), allocator).Move(), allocator);
    }

    if (m_peeringConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeeringConnectionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peeringConnectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_isNgwHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNgw";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNgw, allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_sourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationRegion.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_peerAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_peerAppId, allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceUin, allocator);
    }

    if (m_destinationUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_destinationUin, allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_qosLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QosLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qosLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationVpcId.c_str(), allocator).Move(), allocator);
    }

}


string PeerConnection::GetSourceVpcId() const
{
    return m_sourceVpcId;
}

void PeerConnection::SetSourceVpcId(const string& _sourceVpcId)
{
    m_sourceVpcId = _sourceVpcId;
    m_sourceVpcIdHasBeenSet = true;
}

bool PeerConnection::SourceVpcIdHasBeenSet() const
{
    return m_sourceVpcIdHasBeenSet;
}

string PeerConnection::GetPeerVpcId() const
{
    return m_peerVpcId;
}

void PeerConnection::SetPeerVpcId(const string& _peerVpcId)
{
    m_peerVpcId = _peerVpcId;
    m_peerVpcIdHasBeenSet = true;
}

bool PeerConnection::PeerVpcIdHasBeenSet() const
{
    return m_peerVpcIdHasBeenSet;
}

string PeerConnection::GetPeeringConnectionId() const
{
    return m_peeringConnectionId;
}

void PeerConnection::SetPeeringConnectionId(const string& _peeringConnectionId)
{
    m_peeringConnectionId = _peeringConnectionId;
    m_peeringConnectionIdHasBeenSet = true;
}

bool PeerConnection::PeeringConnectionIdHasBeenSet() const
{
    return m_peeringConnectionIdHasBeenSet;
}

string PeerConnection::GetPeeringConnectionName() const
{
    return m_peeringConnectionName;
}

void PeerConnection::SetPeeringConnectionName(const string& _peeringConnectionName)
{
    m_peeringConnectionName = _peeringConnectionName;
    m_peeringConnectionNameHasBeenSet = true;
}

bool PeerConnection::PeeringConnectionNameHasBeenSet() const
{
    return m_peeringConnectionNameHasBeenSet;
}

string PeerConnection::GetState() const
{
    return m_state;
}

void PeerConnection::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool PeerConnection::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

bool PeerConnection::GetIsNgw() const
{
    return m_isNgw;
}

void PeerConnection::SetIsNgw(const bool& _isNgw)
{
    m_isNgw = _isNgw;
    m_isNgwHasBeenSet = true;
}

bool PeerConnection::IsNgwHasBeenSet() const
{
    return m_isNgwHasBeenSet;
}

int64_t PeerConnection::GetBandwidth() const
{
    return m_bandwidth;
}

void PeerConnection::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool PeerConnection::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string PeerConnection::GetSourceRegion() const
{
    return m_sourceRegion;
}

void PeerConnection::SetSourceRegion(const string& _sourceRegion)
{
    m_sourceRegion = _sourceRegion;
    m_sourceRegionHasBeenSet = true;
}

bool PeerConnection::SourceRegionHasBeenSet() const
{
    return m_sourceRegionHasBeenSet;
}

string PeerConnection::GetDestinationRegion() const
{
    return m_destinationRegion;
}

void PeerConnection::SetDestinationRegion(const string& _destinationRegion)
{
    m_destinationRegion = _destinationRegion;
    m_destinationRegionHasBeenSet = true;
}

bool PeerConnection::DestinationRegionHasBeenSet() const
{
    return m_destinationRegionHasBeenSet;
}

string PeerConnection::GetCreateTime() const
{
    return m_createTime;
}

void PeerConnection::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PeerConnection::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t PeerConnection::GetAppId() const
{
    return m_appId;
}

void PeerConnection::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool PeerConnection::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t PeerConnection::GetPeerAppId() const
{
    return m_peerAppId;
}

void PeerConnection::SetPeerAppId(const int64_t& _peerAppId)
{
    m_peerAppId = _peerAppId;
    m_peerAppIdHasBeenSet = true;
}

bool PeerConnection::PeerAppIdHasBeenSet() const
{
    return m_peerAppIdHasBeenSet;
}

string PeerConnection::GetChargeType() const
{
    return m_chargeType;
}

void PeerConnection::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool PeerConnection::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

int64_t PeerConnection::GetSourceUin() const
{
    return m_sourceUin;
}

void PeerConnection::SetSourceUin(const int64_t& _sourceUin)
{
    m_sourceUin = _sourceUin;
    m_sourceUinHasBeenSet = true;
}

bool PeerConnection::SourceUinHasBeenSet() const
{
    return m_sourceUinHasBeenSet;
}

int64_t PeerConnection::GetDestinationUin() const
{
    return m_destinationUin;
}

void PeerConnection::SetDestinationUin(const int64_t& _destinationUin)
{
    m_destinationUin = _destinationUin;
    m_destinationUinHasBeenSet = true;
}

bool PeerConnection::DestinationUinHasBeenSet() const
{
    return m_destinationUinHasBeenSet;
}

vector<Tag> PeerConnection::GetTagSet() const
{
    return m_tagSet;
}

void PeerConnection::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool PeerConnection::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

string PeerConnection::GetQosLevel() const
{
    return m_qosLevel;
}

void PeerConnection::SetQosLevel(const string& _qosLevel)
{
    m_qosLevel = _qosLevel;
    m_qosLevelHasBeenSet = true;
}

bool PeerConnection::QosLevelHasBeenSet() const
{
    return m_qosLevelHasBeenSet;
}

string PeerConnection::GetType() const
{
    return m_type;
}

void PeerConnection::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PeerConnection::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string PeerConnection::GetDestinationVpcId() const
{
    return m_destinationVpcId;
}

void PeerConnection::SetDestinationVpcId(const string& _destinationVpcId)
{
    m_destinationVpcId = _destinationVpcId;
    m_destinationVpcIdHasBeenSet = true;
}

bool PeerConnection::DestinationVpcIdHasBeenSet() const
{
    return m_destinationVpcIdHasBeenSet;
}

