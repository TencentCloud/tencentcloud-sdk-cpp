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

#include <tencentcloud/bmlb/v20180625/model/L4Backend.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

L4Backend::L4Backend() :
    m_bindTypeHasBeenSet(false),
    m_portHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_lanIpHasBeenSet(false),
    m_operatesHasBeenSet(false),
    m_probePortHasBeenSet(false)
{
}

CoreInternalOutcome L4Backend::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BindType") && !value["BindType"].IsNull())
    {
        if (!value["BindType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L4Backend.BindType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindType = value["BindType"].GetInt64();
        m_bindTypeHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L4Backend.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L4Backend.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4Backend.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4Backend.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4Backend.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("LanIp") && !value["LanIp"].IsNull())
    {
        if (!value["LanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4Backend.LanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lanIp = string(value["LanIp"].GetString());
        m_lanIpHasBeenSet = true;
    }

    if (value.HasMember("Operates") && !value["Operates"].IsNull())
    {
        if (!value["Operates"].IsArray())
            return CoreInternalOutcome(Core::Error("response `L4Backend.Operates` is not array type"));

        const rapidjson::Value &tmpValue = value["Operates"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_operates.push_back((*itr).GetString());
        }
        m_operatesHasBeenSet = true;
    }

    if (value.HasMember("ProbePort") && !value["ProbePort"].IsNull())
    {
        if (!value["ProbePort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L4Backend.ProbePort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_probePort = value["ProbePort"].GetInt64();
        m_probePortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L4Backend::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bindTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindType, allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_lanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_operatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_operates.begin(); itr != m_operates.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_probePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProbePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_probePort, allocator);
    }

}


int64_t L4Backend::GetBindType() const
{
    return m_bindType;
}

void L4Backend::SetBindType(const int64_t& _bindType)
{
    m_bindType = _bindType;
    m_bindTypeHasBeenSet = true;
}

bool L4Backend::BindTypeHasBeenSet() const
{
    return m_bindTypeHasBeenSet;
}

int64_t L4Backend::GetPort() const
{
    return m_port;
}

void L4Backend::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool L4Backend::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t L4Backend::GetWeight() const
{
    return m_weight;
}

void L4Backend::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool L4Backend::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string L4Backend::GetStatus() const
{
    return m_status;
}

void L4Backend::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool L4Backend::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string L4Backend::GetInstanceId() const
{
    return m_instanceId;
}

void L4Backend::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool L4Backend::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string L4Backend::GetAlias() const
{
    return m_alias;
}

void L4Backend::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool L4Backend::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string L4Backend::GetLanIp() const
{
    return m_lanIp;
}

void L4Backend::SetLanIp(const string& _lanIp)
{
    m_lanIp = _lanIp;
    m_lanIpHasBeenSet = true;
}

bool L4Backend::LanIpHasBeenSet() const
{
    return m_lanIpHasBeenSet;
}

vector<string> L4Backend::GetOperates() const
{
    return m_operates;
}

void L4Backend::SetOperates(const vector<string>& _operates)
{
    m_operates = _operates;
    m_operatesHasBeenSet = true;
}

bool L4Backend::OperatesHasBeenSet() const
{
    return m_operatesHasBeenSet;
}

int64_t L4Backend::GetProbePort() const
{
    return m_probePort;
}

void L4Backend::SetProbePort(const int64_t& _probePort)
{
    m_probePort = _probePort;
    m_probePortHasBeenSet = true;
}

bool L4Backend::ProbePortHasBeenSet() const
{
    return m_probePortHasBeenSet;
}

