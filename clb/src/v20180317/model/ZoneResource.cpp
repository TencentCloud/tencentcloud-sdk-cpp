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

#include <tencentcloud/clb/v20180317/model/ZoneResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ZoneResource::ZoneResource() :
    m_masterZoneHasBeenSet(false),
    m_resourceSetHasBeenSet(false),
    m_slaveZoneHasBeenSet(false),
    m_iPVersionHasBeenSet(false),
    m_zoneRegionHasBeenSet(false),
    m_localZoneHasBeenSet(false),
    m_zoneResourceTypeHasBeenSet(false),
    m_edgeZoneHasBeenSet(false),
    m_egressHasBeenSet(false)
{
}

CoreInternalOutcome ZoneResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MasterZone") && !value["MasterZone"].IsNull())
    {
        if (!value["MasterZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResource.MasterZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterZone = string(value["MasterZone"].GetString());
        m_masterZoneHasBeenSet = true;
    }

    if (value.HasMember("ResourceSet") && !value["ResourceSet"].IsNull())
    {
        if (!value["ResourceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneResource.ResourceSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Resource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceSet.push_back(item);
        }
        m_resourceSetHasBeenSet = true;
    }

    if (value.HasMember("SlaveZone") && !value["SlaveZone"].IsNull())
    {
        if (!value["SlaveZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResource.SlaveZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slaveZone = string(value["SlaveZone"].GetString());
        m_slaveZoneHasBeenSet = true;
    }

    if (value.HasMember("IPVersion") && !value["IPVersion"].IsNull())
    {
        if (!value["IPVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResource.IPVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iPVersion = string(value["IPVersion"].GetString());
        m_iPVersionHasBeenSet = true;
    }

    if (value.HasMember("ZoneRegion") && !value["ZoneRegion"].IsNull())
    {
        if (!value["ZoneRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResource.ZoneRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneRegion = string(value["ZoneRegion"].GetString());
        m_zoneRegionHasBeenSet = true;
    }

    if (value.HasMember("LocalZone") && !value["LocalZone"].IsNull())
    {
        if (!value["LocalZone"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResource.LocalZone` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_localZone = value["LocalZone"].GetBool();
        m_localZoneHasBeenSet = true;
    }

    if (value.HasMember("ZoneResourceType") && !value["ZoneResourceType"].IsNull())
    {
        if (!value["ZoneResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResource.ZoneResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneResourceType = string(value["ZoneResourceType"].GetString());
        m_zoneResourceTypeHasBeenSet = true;
    }

    if (value.HasMember("EdgeZone") && !value["EdgeZone"].IsNull())
    {
        if (!value["EdgeZone"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResource.EdgeZone` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_edgeZone = value["EdgeZone"].GetBool();
        m_edgeZoneHasBeenSet = true;
    }

    if (value.HasMember("Egress") && !value["Egress"].IsNull())
    {
        if (!value["Egress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResource.Egress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_egress = string(value["Egress"].GetString());
        m_egressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_masterZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_masterZone.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceSet.begin(); itr != m_resourceSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_slaveZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slaveZone.c_str(), allocator).Move(), allocator);
    }

    if (m_iPVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iPVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_localZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localZone, allocator);
    }

    if (m_zoneResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_edgeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_edgeZone, allocator);
    }

    if (m_egressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Egress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_egress.c_str(), allocator).Move(), allocator);
    }

}


string ZoneResource::GetMasterZone() const
{
    return m_masterZone;
}

void ZoneResource::SetMasterZone(const string& _masterZone)
{
    m_masterZone = _masterZone;
    m_masterZoneHasBeenSet = true;
}

bool ZoneResource::MasterZoneHasBeenSet() const
{
    return m_masterZoneHasBeenSet;
}

vector<Resource> ZoneResource::GetResourceSet() const
{
    return m_resourceSet;
}

void ZoneResource::SetResourceSet(const vector<Resource>& _resourceSet)
{
    m_resourceSet = _resourceSet;
    m_resourceSetHasBeenSet = true;
}

bool ZoneResource::ResourceSetHasBeenSet() const
{
    return m_resourceSetHasBeenSet;
}

string ZoneResource::GetSlaveZone() const
{
    return m_slaveZone;
}

void ZoneResource::SetSlaveZone(const string& _slaveZone)
{
    m_slaveZone = _slaveZone;
    m_slaveZoneHasBeenSet = true;
}

bool ZoneResource::SlaveZoneHasBeenSet() const
{
    return m_slaveZoneHasBeenSet;
}

string ZoneResource::GetIPVersion() const
{
    return m_iPVersion;
}

void ZoneResource::SetIPVersion(const string& _iPVersion)
{
    m_iPVersion = _iPVersion;
    m_iPVersionHasBeenSet = true;
}

bool ZoneResource::IPVersionHasBeenSet() const
{
    return m_iPVersionHasBeenSet;
}

string ZoneResource::GetZoneRegion() const
{
    return m_zoneRegion;
}

void ZoneResource::SetZoneRegion(const string& _zoneRegion)
{
    m_zoneRegion = _zoneRegion;
    m_zoneRegionHasBeenSet = true;
}

bool ZoneResource::ZoneRegionHasBeenSet() const
{
    return m_zoneRegionHasBeenSet;
}

bool ZoneResource::GetLocalZone() const
{
    return m_localZone;
}

void ZoneResource::SetLocalZone(const bool& _localZone)
{
    m_localZone = _localZone;
    m_localZoneHasBeenSet = true;
}

bool ZoneResource::LocalZoneHasBeenSet() const
{
    return m_localZoneHasBeenSet;
}

string ZoneResource::GetZoneResourceType() const
{
    return m_zoneResourceType;
}

void ZoneResource::SetZoneResourceType(const string& _zoneResourceType)
{
    m_zoneResourceType = _zoneResourceType;
    m_zoneResourceTypeHasBeenSet = true;
}

bool ZoneResource::ZoneResourceTypeHasBeenSet() const
{
    return m_zoneResourceTypeHasBeenSet;
}

bool ZoneResource::GetEdgeZone() const
{
    return m_edgeZone;
}

void ZoneResource::SetEdgeZone(const bool& _edgeZone)
{
    m_edgeZone = _edgeZone;
    m_edgeZoneHasBeenSet = true;
}

bool ZoneResource::EdgeZoneHasBeenSet() const
{
    return m_edgeZoneHasBeenSet;
}

string ZoneResource::GetEgress() const
{
    return m_egress;
}

void ZoneResource::SetEgress(const string& _egress)
{
    m_egress = _egress;
    m_egressHasBeenSet = true;
}

bool ZoneResource::EgressHasBeenSet() const
{
    return m_egressHasBeenSet;
}

