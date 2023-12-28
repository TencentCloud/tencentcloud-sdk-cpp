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

#include <tencentcloud/tsf/v20180326/model/ContainerGroupOther.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ContainerGroupOther::ContainerGroupOther() :
    m_instanceNumHasBeenSet(false),
    m_currentNumHasBeenSet(false),
    m_lbDnsHasBeenSet(false),
    m_lbIpHasBeenSet(false),
    m_clusterIpHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_envsHasBeenSet(false),
    m_nodePortHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_healthCheckSettingsHasBeenSet(false),
    m_isNotEqualServiceConfigHasBeenSet(false)
{
}

CoreInternalOutcome ContainerGroupOther::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceNum") && !value["InstanceNum"].IsNull())
    {
        if (!value["InstanceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupOther.InstanceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceNum = value["InstanceNum"].GetInt64();
        m_instanceNumHasBeenSet = true;
    }

    if (value.HasMember("CurrentNum") && !value["CurrentNum"].IsNull())
    {
        if (!value["CurrentNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupOther.CurrentNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentNum = value["CurrentNum"].GetInt64();
        m_currentNumHasBeenSet = true;
    }

    if (value.HasMember("LbDns") && !value["LbDns"].IsNull())
    {
        if (!value["LbDns"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupOther.LbDns` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lbDns = string(value["LbDns"].GetString());
        m_lbDnsHasBeenSet = true;
    }

    if (value.HasMember("LbIp") && !value["LbIp"].IsNull())
    {
        if (!value["LbIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupOther.LbIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lbIp = string(value["LbIp"].GetString());
        m_lbIpHasBeenSet = true;
    }

    if (value.HasMember("ClusterIp") && !value["ClusterIp"].IsNull())
    {
        if (!value["ClusterIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupOther.ClusterIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterIp = string(value["ClusterIp"].GetString());
        m_clusterIpHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupOther.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupOther.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Envs") && !value["Envs"].IsNull())
    {
        if (!value["Envs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerGroupOther.Envs` is not array type"));

        const rapidjson::Value &tmpValue = value["Envs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Env item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_envs.push_back(item);
        }
        m_envsHasBeenSet = true;
    }

    if (value.HasMember("NodePort") && !value["NodePort"].IsNull())
    {
        if (!value["NodePort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupOther.NodePort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodePort = value["NodePort"].GetUint64();
        m_nodePortHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupOther.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckSettings") && !value["HealthCheckSettings"].IsNull())
    {
        if (!value["HealthCheckSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupOther.HealthCheckSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_healthCheckSettings.Deserialize(value["HealthCheckSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_healthCheckSettingsHasBeenSet = true;
    }

    if (value.HasMember("IsNotEqualServiceConfig") && !value["IsNotEqualServiceConfig"].IsNull())
    {
        if (!value["IsNotEqualServiceConfig"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupOther.IsNotEqualServiceConfig` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isNotEqualServiceConfig = value["IsNotEqualServiceConfig"].GetBool();
        m_isNotEqualServiceConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerGroupOther::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceNum, allocator);
    }

    if (m_currentNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentNum, allocator);
    }

    if (m_lbDnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LbDns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lbDns.c_str(), allocator).Move(), allocator);
    }

    if (m_lbIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LbIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lbIp.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterIp.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_envsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Envs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envs.begin(); itr != m_envs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nodePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodePort, allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheckSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isNotEqualServiceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNotEqualServiceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNotEqualServiceConfig, allocator);
    }

}


int64_t ContainerGroupOther::GetInstanceNum() const
{
    return m_instanceNum;
}

void ContainerGroupOther::SetInstanceNum(const int64_t& _instanceNum)
{
    m_instanceNum = _instanceNum;
    m_instanceNumHasBeenSet = true;
}

bool ContainerGroupOther::InstanceNumHasBeenSet() const
{
    return m_instanceNumHasBeenSet;
}

int64_t ContainerGroupOther::GetCurrentNum() const
{
    return m_currentNum;
}

void ContainerGroupOther::SetCurrentNum(const int64_t& _currentNum)
{
    m_currentNum = _currentNum;
    m_currentNumHasBeenSet = true;
}

bool ContainerGroupOther::CurrentNumHasBeenSet() const
{
    return m_currentNumHasBeenSet;
}

string ContainerGroupOther::GetLbDns() const
{
    return m_lbDns;
}

void ContainerGroupOther::SetLbDns(const string& _lbDns)
{
    m_lbDns = _lbDns;
    m_lbDnsHasBeenSet = true;
}

bool ContainerGroupOther::LbDnsHasBeenSet() const
{
    return m_lbDnsHasBeenSet;
}

string ContainerGroupOther::GetLbIp() const
{
    return m_lbIp;
}

void ContainerGroupOther::SetLbIp(const string& _lbIp)
{
    m_lbIp = _lbIp;
    m_lbIpHasBeenSet = true;
}

bool ContainerGroupOther::LbIpHasBeenSet() const
{
    return m_lbIpHasBeenSet;
}

string ContainerGroupOther::GetClusterIp() const
{
    return m_clusterIp;
}

void ContainerGroupOther::SetClusterIp(const string& _clusterIp)
{
    m_clusterIp = _clusterIp;
    m_clusterIpHasBeenSet = true;
}

bool ContainerGroupOther::ClusterIpHasBeenSet() const
{
    return m_clusterIpHasBeenSet;
}

string ContainerGroupOther::GetStatus() const
{
    return m_status;
}

void ContainerGroupOther::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ContainerGroupOther::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ContainerGroupOther::GetMessage() const
{
    return m_message;
}

void ContainerGroupOther::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ContainerGroupOther::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

vector<Env> ContainerGroupOther::GetEnvs() const
{
    return m_envs;
}

void ContainerGroupOther::SetEnvs(const vector<Env>& _envs)
{
    m_envs = _envs;
    m_envsHasBeenSet = true;
}

bool ContainerGroupOther::EnvsHasBeenSet() const
{
    return m_envsHasBeenSet;
}

uint64_t ContainerGroupOther::GetNodePort() const
{
    return m_nodePort;
}

void ContainerGroupOther::SetNodePort(const uint64_t& _nodePort)
{
    m_nodePort = _nodePort;
    m_nodePortHasBeenSet = true;
}

bool ContainerGroupOther::NodePortHasBeenSet() const
{
    return m_nodePortHasBeenSet;
}

string ContainerGroupOther::GetSubnetId() const
{
    return m_subnetId;
}

void ContainerGroupOther::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ContainerGroupOther::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

HealthCheckSettings ContainerGroupOther::GetHealthCheckSettings() const
{
    return m_healthCheckSettings;
}

void ContainerGroupOther::SetHealthCheckSettings(const HealthCheckSettings& _healthCheckSettings)
{
    m_healthCheckSettings = _healthCheckSettings;
    m_healthCheckSettingsHasBeenSet = true;
}

bool ContainerGroupOther::HealthCheckSettingsHasBeenSet() const
{
    return m_healthCheckSettingsHasBeenSet;
}

bool ContainerGroupOther::GetIsNotEqualServiceConfig() const
{
    return m_isNotEqualServiceConfig;
}

void ContainerGroupOther::SetIsNotEqualServiceConfig(const bool& _isNotEqualServiceConfig)
{
    m_isNotEqualServiceConfig = _isNotEqualServiceConfig;
    m_isNotEqualServiceConfigHasBeenSet = true;
}

bool ContainerGroupOther::IsNotEqualServiceConfigHasBeenSet() const
{
    return m_isNotEqualServiceConfigHasBeenSet;
}

