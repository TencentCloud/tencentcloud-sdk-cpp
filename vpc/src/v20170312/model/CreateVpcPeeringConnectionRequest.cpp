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

#include <tencentcloud/vpc/v20170312/model/CreateVpcPeeringConnectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateVpcPeeringConnectionRequest::CreateVpcPeeringConnectionRequest() :
    m_sourceVpcIdHasBeenSet(false),
    m_peeringConnectionNameHasBeenSet(false),
    m_destinationVpcIdHasBeenSet(false),
    m_destinationUinHasBeenSet(false),
    m_destinationRegionHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_qosLevelHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateVpcPeeringConnectionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sourceVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_peeringConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeeringConnectionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_peeringConnectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destinationVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destinationUin.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destinationRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_qosLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QosLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_qosLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVpcPeeringConnectionRequest::GetSourceVpcId() const
{
    return m_sourceVpcId;
}

void CreateVpcPeeringConnectionRequest::SetSourceVpcId(const string& _sourceVpcId)
{
    m_sourceVpcId = _sourceVpcId;
    m_sourceVpcIdHasBeenSet = true;
}

bool CreateVpcPeeringConnectionRequest::SourceVpcIdHasBeenSet() const
{
    return m_sourceVpcIdHasBeenSet;
}

string CreateVpcPeeringConnectionRequest::GetPeeringConnectionName() const
{
    return m_peeringConnectionName;
}

void CreateVpcPeeringConnectionRequest::SetPeeringConnectionName(const string& _peeringConnectionName)
{
    m_peeringConnectionName = _peeringConnectionName;
    m_peeringConnectionNameHasBeenSet = true;
}

bool CreateVpcPeeringConnectionRequest::PeeringConnectionNameHasBeenSet() const
{
    return m_peeringConnectionNameHasBeenSet;
}

string CreateVpcPeeringConnectionRequest::GetDestinationVpcId() const
{
    return m_destinationVpcId;
}

void CreateVpcPeeringConnectionRequest::SetDestinationVpcId(const string& _destinationVpcId)
{
    m_destinationVpcId = _destinationVpcId;
    m_destinationVpcIdHasBeenSet = true;
}

bool CreateVpcPeeringConnectionRequest::DestinationVpcIdHasBeenSet() const
{
    return m_destinationVpcIdHasBeenSet;
}

string CreateVpcPeeringConnectionRequest::GetDestinationUin() const
{
    return m_destinationUin;
}

void CreateVpcPeeringConnectionRequest::SetDestinationUin(const string& _destinationUin)
{
    m_destinationUin = _destinationUin;
    m_destinationUinHasBeenSet = true;
}

bool CreateVpcPeeringConnectionRequest::DestinationUinHasBeenSet() const
{
    return m_destinationUinHasBeenSet;
}

string CreateVpcPeeringConnectionRequest::GetDestinationRegion() const
{
    return m_destinationRegion;
}

void CreateVpcPeeringConnectionRequest::SetDestinationRegion(const string& _destinationRegion)
{
    m_destinationRegion = _destinationRegion;
    m_destinationRegionHasBeenSet = true;
}

bool CreateVpcPeeringConnectionRequest::DestinationRegionHasBeenSet() const
{
    return m_destinationRegionHasBeenSet;
}

int64_t CreateVpcPeeringConnectionRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void CreateVpcPeeringConnectionRequest::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool CreateVpcPeeringConnectionRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string CreateVpcPeeringConnectionRequest::GetType() const
{
    return m_type;
}

void CreateVpcPeeringConnectionRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateVpcPeeringConnectionRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateVpcPeeringConnectionRequest::GetChargeType() const
{
    return m_chargeType;
}

void CreateVpcPeeringConnectionRequest::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool CreateVpcPeeringConnectionRequest::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string CreateVpcPeeringConnectionRequest::GetQosLevel() const
{
    return m_qosLevel;
}

void CreateVpcPeeringConnectionRequest::SetQosLevel(const string& _qosLevel)
{
    m_qosLevel = _qosLevel;
    m_qosLevelHasBeenSet = true;
}

bool CreateVpcPeeringConnectionRequest::QosLevelHasBeenSet() const
{
    return m_qosLevelHasBeenSet;
}

vector<Tags> CreateVpcPeeringConnectionRequest::GetTags() const
{
    return m_tags;
}

void CreateVpcPeeringConnectionRequest::SetTags(const vector<Tags>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateVpcPeeringConnectionRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


