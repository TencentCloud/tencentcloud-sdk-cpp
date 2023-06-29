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

#include <tencentcloud/apigateway/v20180808/model/InstanceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

InstanceDetail::InstanceDetail() :
    m_instanceIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceDescriptionHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_instanceChargePrepaidHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_networkConfigHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_isolationStartedTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_zonesHasBeenSet(false)
{
}

CoreInternalOutcome InstanceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceDescription") && !value["InstanceDescription"].IsNull())
    {
        if (!value["InstanceDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.InstanceDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceDescription = string(value["InstanceDescription"].GetString());
        m_instanceDescriptionHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargePrepaid") && !value["InstanceChargePrepaid"].IsNull())
    {
        if (!value["InstanceChargePrepaid"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.InstanceChargePrepaid` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceChargePrepaid.Deserialize(value["InstanceChargePrepaid"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceChargePrepaidHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("NetworkConfig") && !value["NetworkConfig"].IsNull())
    {
        if (!value["NetworkConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.NetworkConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_networkConfig.Deserialize(value["NetworkConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_networkConfigHasBeenSet = true;
    }

    if (value.HasMember("VpcConfig") && !value["VpcConfig"].IsNull())
    {
        if (!value["VpcConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.VpcConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vpcConfig.Deserialize(value["VpcConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vpcConfigHasBeenSet = true;
    }

    if (value.HasMember("Parameters") && !value["Parameters"].IsNull())
    {
        if (!value["Parameters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.Parameters` is not array type"));

        const rapidjson::Value &tmpValue = value["Parameters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParameterInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_parameters.push_back(item);
        }
        m_parametersHasBeenSet = true;
    }

    if (value.HasMember("IsolationStartedTime") && !value["IsolationStartedTime"].IsNull())
    {
        if (!value["IsolationStartedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.IsolationStartedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolationStartedTime = string(value["IsolationStartedTime"].GetString());
        m_isolationStartedTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("Zones") && !value["Zones"].IsNull())
    {
        if (!value["Zones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.Zones` is not array type"));

        const rapidjson::Value &tmpValue = value["Zones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_zones.push_back((*itr).GetString());
        }
        m_zonesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceChargePrepaid.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_networkConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_networkConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vpcConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vpcConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_parametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_parameters.begin(); itr != m_parameters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isolationStartedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolationStartedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolationStartedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_zonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string InstanceDetail::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceDetail::GetZone() const
{
    return m_zone;
}

void InstanceDetail::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InstanceDetail::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string InstanceDetail::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceDetail::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceDetail::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string InstanceDetail::GetInstanceDescription() const
{
    return m_instanceDescription;
}

void InstanceDetail::SetInstanceDescription(const string& _instanceDescription)
{
    m_instanceDescription = _instanceDescription;
    m_instanceDescriptionHasBeenSet = true;
}

bool InstanceDetail::InstanceDescriptionHasBeenSet() const
{
    return m_instanceDescriptionHasBeenSet;
}

string InstanceDetail::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void InstanceDetail::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool InstanceDetail::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

string InstanceDetail::GetInstanceState() const
{
    return m_instanceState;
}

void InstanceDetail::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool InstanceDetail::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

InstanceChargePrepaid InstanceDetail::GetInstanceChargePrepaid() const
{
    return m_instanceChargePrepaid;
}

void InstanceDetail::SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid)
{
    m_instanceChargePrepaid = _instanceChargePrepaid;
    m_instanceChargePrepaidHasBeenSet = true;
}

bool InstanceDetail::InstanceChargePrepaidHasBeenSet() const
{
    return m_instanceChargePrepaidHasBeenSet;
}

string InstanceDetail::GetInstanceType() const
{
    return m_instanceType;
}

void InstanceDetail::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InstanceDetail::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

NetworkConfig InstanceDetail::GetNetworkConfig() const
{
    return m_networkConfig;
}

void InstanceDetail::SetNetworkConfig(const NetworkConfig& _networkConfig)
{
    m_networkConfig = _networkConfig;
    m_networkConfigHasBeenSet = true;
}

bool InstanceDetail::NetworkConfigHasBeenSet() const
{
    return m_networkConfigHasBeenSet;
}

VpcConfig InstanceDetail::GetVpcConfig() const
{
    return m_vpcConfig;
}

void InstanceDetail::SetVpcConfig(const VpcConfig& _vpcConfig)
{
    m_vpcConfig = _vpcConfig;
    m_vpcConfigHasBeenSet = true;
}

bool InstanceDetail::VpcConfigHasBeenSet() const
{
    return m_vpcConfigHasBeenSet;
}

vector<ParameterInfo> InstanceDetail::GetParameters() const
{
    return m_parameters;
}

void InstanceDetail::SetParameters(const vector<ParameterInfo>& _parameters)
{
    m_parameters = _parameters;
    m_parametersHasBeenSet = true;
}

bool InstanceDetail::ParametersHasBeenSet() const
{
    return m_parametersHasBeenSet;
}

string InstanceDetail::GetIsolationStartedTime() const
{
    return m_isolationStartedTime;
}

void InstanceDetail::SetIsolationStartedTime(const string& _isolationStartedTime)
{
    m_isolationStartedTime = _isolationStartedTime;
    m_isolationStartedTimeHasBeenSet = true;
}

bool InstanceDetail::IsolationStartedTimeHasBeenSet() const
{
    return m_isolationStartedTimeHasBeenSet;
}

string InstanceDetail::GetCreatedTime() const
{
    return m_createdTime;
}

void InstanceDetail::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool InstanceDetail::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

vector<string> InstanceDetail::GetZones() const
{
    return m_zones;
}

void InstanceDetail::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool InstanceDetail::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

