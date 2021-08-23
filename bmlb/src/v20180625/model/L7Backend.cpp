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

#include <tencentcloud/bmlb/v20180625/model/L7Backend.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

L7Backend::L7Backend() :
    m_bindTypeHasBeenSet(false),
    m_portHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_lanIpHasBeenSet(false),
    m_mgtIpHasBeenSet(false),
    m_operatesHasBeenSet(false)
{
}

CoreInternalOutcome L7Backend::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BindType") && !value["BindType"].IsNull())
    {
        if (!value["BindType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L7Backend.BindType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindType = value["BindType"].GetInt64();
        m_bindTypeHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L7Backend.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L7Backend.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7Backend.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7Backend.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7Backend.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("LanIp") && !value["LanIp"].IsNull())
    {
        if (!value["LanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7Backend.LanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lanIp = string(value["LanIp"].GetString());
        m_lanIpHasBeenSet = true;
    }

    if (value.HasMember("MgtIp") && !value["MgtIp"].IsNull())
    {
        if (!value["MgtIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7Backend.MgtIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mgtIp = string(value["MgtIp"].GetString());
        m_mgtIpHasBeenSet = true;
    }

    if (value.HasMember("Operates") && !value["Operates"].IsNull())
    {
        if (!value["Operates"].IsArray())
            return CoreInternalOutcome(Core::Error("response `L7Backend.Operates` is not array type"));

        const rapidjson::Value &tmpValue = value["Operates"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_operates.push_back((*itr).GetString());
        }
        m_operatesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L7Backend::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_mgtIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MgtIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mgtIp.c_str(), allocator).Move(), allocator);
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

}


int64_t L7Backend::GetBindType() const
{
    return m_bindType;
}

void L7Backend::SetBindType(const int64_t& _bindType)
{
    m_bindType = _bindType;
    m_bindTypeHasBeenSet = true;
}

bool L7Backend::BindTypeHasBeenSet() const
{
    return m_bindTypeHasBeenSet;
}

int64_t L7Backend::GetPort() const
{
    return m_port;
}

void L7Backend::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool L7Backend::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t L7Backend::GetWeight() const
{
    return m_weight;
}

void L7Backend::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool L7Backend::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string L7Backend::GetStatus() const
{
    return m_status;
}

void L7Backend::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool L7Backend::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string L7Backend::GetInstanceId() const
{
    return m_instanceId;
}

void L7Backend::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool L7Backend::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string L7Backend::GetAlias() const
{
    return m_alias;
}

void L7Backend::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool L7Backend::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string L7Backend::GetLanIp() const
{
    return m_lanIp;
}

void L7Backend::SetLanIp(const string& _lanIp)
{
    m_lanIp = _lanIp;
    m_lanIpHasBeenSet = true;
}

bool L7Backend::LanIpHasBeenSet() const
{
    return m_lanIpHasBeenSet;
}

string L7Backend::GetMgtIp() const
{
    return m_mgtIp;
}

void L7Backend::SetMgtIp(const string& _mgtIp)
{
    m_mgtIp = _mgtIp;
    m_mgtIpHasBeenSet = true;
}

bool L7Backend::MgtIpHasBeenSet() const
{
    return m_mgtIpHasBeenSet;
}

vector<string> L7Backend::GetOperates() const
{
    return m_operates;
}

void L7Backend::SetOperates(const vector<string>& _operates)
{
    m_operates = _operates;
    m_operatesHasBeenSet = true;
}

bool L7Backend::OperatesHasBeenSet() const
{
    return m_operatesHasBeenSet;
}

