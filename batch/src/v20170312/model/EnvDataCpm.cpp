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

#include <tencentcloud/batch/v20170312/model/EnvDataCpm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace rapidjson;
using namespace std;

EnvDataCpm::EnvDataCpm() :
    m_zonesHasBeenSet(false),
    m_computeTypesHasBeenSet(false),
    m_osTypeIdHasBeenSet(false),
    m_virtualPrivateCloudsHasBeenSet(false),
    m_deployTypeHasBeenSet(false),
    m_spotStrategyHasBeenSet(false),
    m_passwdHasBeenSet(false)
{
}

CoreInternalOutcome EnvDataCpm::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Zones") && !value["Zones"].IsNull())
    {
        if (!value["Zones"].IsArray())
            return CoreInternalOutcome(Error("response `EnvDataCpm.Zones` is not array type"));

        const Value &tmpValue = value["Zones"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_zones.push_back((*itr).GetString());
        }
        m_zonesHasBeenSet = true;
    }

    if (value.HasMember("ComputeTypes") && !value["ComputeTypes"].IsNull())
    {
        if (!value["ComputeTypes"].IsArray())
            return CoreInternalOutcome(Error("response `EnvDataCpm.ComputeTypes` is not array type"));

        const Value &tmpValue = value["ComputeTypes"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_computeTypes.push_back((*itr).GetString());
        }
        m_computeTypesHasBeenSet = true;
    }

    if (value.HasMember("OsTypeId") && !value["OsTypeId"].IsNull())
    {
        if (!value["OsTypeId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `EnvDataCpm.OsTypeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_osTypeId = value["OsTypeId"].GetUint64();
        m_osTypeIdHasBeenSet = true;
    }

    if (value.HasMember("VirtualPrivateClouds") && !value["VirtualPrivateClouds"].IsNull())
    {
        if (!value["VirtualPrivateClouds"].IsArray())
            return CoreInternalOutcome(Error("response `EnvDataCpm.VirtualPrivateClouds` is not array type"));

        const Value &tmpValue = value["VirtualPrivateClouds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CpmVirtualPrivateCloud item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_virtualPrivateClouds.push_back(item);
        }
        m_virtualPrivateCloudsHasBeenSet = true;
    }

    if (value.HasMember("DeployType") && !value["DeployType"].IsNull())
    {
        if (!value["DeployType"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvDataCpm.DeployType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployType = string(value["DeployType"].GetString());
        m_deployTypeHasBeenSet = true;
    }

    if (value.HasMember("SpotStrategy") && !value["SpotStrategy"].IsNull())
    {
        if (!value["SpotStrategy"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvDataCpm.SpotStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spotStrategy = string(value["SpotStrategy"].GetString());
        m_spotStrategyHasBeenSet = true;
    }

    if (value.HasMember("Passwd") && !value["Passwd"].IsNull())
    {
        if (!value["Passwd"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvDataCpm.Passwd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passwd = string(value["Passwd"].GetString());
        m_passwdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EnvDataCpm::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_zonesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_computeTypesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ComputeTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_computeTypes.begin(); itr != m_computeTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_osTypeIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OsTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_osTypeId, allocator);
    }

    if (m_virtualPrivateCloudsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VirtualPrivateClouds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_virtualPrivateClouds.begin(); itr != m_virtualPrivateClouds.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deployTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeployType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_deployType.c_str(), allocator).Move(), allocator);
    }

    if (m_spotStrategyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SpotStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_spotStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_passwdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Passwd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_passwd.c_str(), allocator).Move(), allocator);
    }

}


vector<string> EnvDataCpm::GetZones() const
{
    return m_zones;
}

void EnvDataCpm::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool EnvDataCpm::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

vector<string> EnvDataCpm::GetComputeTypes() const
{
    return m_computeTypes;
}

void EnvDataCpm::SetComputeTypes(const vector<string>& _computeTypes)
{
    m_computeTypes = _computeTypes;
    m_computeTypesHasBeenSet = true;
}

bool EnvDataCpm::ComputeTypesHasBeenSet() const
{
    return m_computeTypesHasBeenSet;
}

uint64_t EnvDataCpm::GetOsTypeId() const
{
    return m_osTypeId;
}

void EnvDataCpm::SetOsTypeId(const uint64_t& _osTypeId)
{
    m_osTypeId = _osTypeId;
    m_osTypeIdHasBeenSet = true;
}

bool EnvDataCpm::OsTypeIdHasBeenSet() const
{
    return m_osTypeIdHasBeenSet;
}

vector<CpmVirtualPrivateCloud> EnvDataCpm::GetVirtualPrivateClouds() const
{
    return m_virtualPrivateClouds;
}

void EnvDataCpm::SetVirtualPrivateClouds(const vector<CpmVirtualPrivateCloud>& _virtualPrivateClouds)
{
    m_virtualPrivateClouds = _virtualPrivateClouds;
    m_virtualPrivateCloudsHasBeenSet = true;
}

bool EnvDataCpm::VirtualPrivateCloudsHasBeenSet() const
{
    return m_virtualPrivateCloudsHasBeenSet;
}

string EnvDataCpm::GetDeployType() const
{
    return m_deployType;
}

void EnvDataCpm::SetDeployType(const string& _deployType)
{
    m_deployType = _deployType;
    m_deployTypeHasBeenSet = true;
}

bool EnvDataCpm::DeployTypeHasBeenSet() const
{
    return m_deployTypeHasBeenSet;
}

string EnvDataCpm::GetSpotStrategy() const
{
    return m_spotStrategy;
}

void EnvDataCpm::SetSpotStrategy(const string& _spotStrategy)
{
    m_spotStrategy = _spotStrategy;
    m_spotStrategyHasBeenSet = true;
}

bool EnvDataCpm::SpotStrategyHasBeenSet() const
{
    return m_spotStrategyHasBeenSet;
}

string EnvDataCpm::GetPasswd() const
{
    return m_passwd;
}

void EnvDataCpm::SetPasswd(const string& _passwd)
{
    m_passwd = _passwd;
    m_passwdHasBeenSet = true;
}

bool EnvDataCpm::PasswdHasBeenSet() const
{
    return m_passwdHasBeenSet;
}

