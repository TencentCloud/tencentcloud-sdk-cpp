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

#include <tencentcloud/ckafka/v20190819/model/MqttParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

MqttParam::MqttParam() :
    m_topicsHasBeenSet(false),
    m_cleanSessionHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_qosHasBeenSet(false),
    m_maxTasksHasBeenSet(false),
    m_serviceVipHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_selfBuiltHasBeenSet(false)
{
}

CoreInternalOutcome MqttParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Topics") && !value["Topics"].IsNull())
    {
        if (!value["Topics"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MqttParam.Topics` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topics = string(value["Topics"].GetString());
        m_topicsHasBeenSet = true;
    }

    if (value.HasMember("CleanSession") && !value["CleanSession"].IsNull())
    {
        if (!value["CleanSession"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MqttParam.CleanSession` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_cleanSession = value["CleanSession"].GetBool();
        m_cleanSessionHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MqttParam.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MqttParam.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MqttParam.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MqttParam.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MqttParam.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("Qos") && !value["Qos"].IsNull())
    {
        if (!value["Qos"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MqttParam.Qos` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qos = value["Qos"].GetInt64();
        m_qosHasBeenSet = true;
    }

    if (value.HasMember("MaxTasks") && !value["MaxTasks"].IsNull())
    {
        if (!value["MaxTasks"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MqttParam.MaxTasks` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTasks = value["MaxTasks"].GetInt64();
        m_maxTasksHasBeenSet = true;
    }

    if (value.HasMember("ServiceVip") && !value["ServiceVip"].IsNull())
    {
        if (!value["ServiceVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MqttParam.ServiceVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceVip = string(value["ServiceVip"].GetString());
        m_serviceVipHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MqttParam.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("SelfBuilt") && !value["SelfBuilt"].IsNull())
    {
        if (!value["SelfBuilt"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MqttParam.SelfBuilt` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_selfBuilt = value["SelfBuilt"].GetBool();
        m_selfBuiltHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MqttParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topics.c_str(), allocator).Move(), allocator);
    }

    if (m_cleanSessionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CleanSession";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cleanSession, allocator);
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_qosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qos, allocator);
    }

    if (m_maxTasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTasks, allocator);
    }

    if (m_serviceVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceVip.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_selfBuiltHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfBuilt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_selfBuilt, allocator);
    }

}


string MqttParam::GetTopics() const
{
    return m_topics;
}

void MqttParam::SetTopics(const string& _topics)
{
    m_topics = _topics;
    m_topicsHasBeenSet = true;
}

bool MqttParam::TopicsHasBeenSet() const
{
    return m_topicsHasBeenSet;
}

bool MqttParam::GetCleanSession() const
{
    return m_cleanSession;
}

void MqttParam::SetCleanSession(const bool& _cleanSession)
{
    m_cleanSession = _cleanSession;
    m_cleanSessionHasBeenSet = true;
}

bool MqttParam::CleanSessionHasBeenSet() const
{
    return m_cleanSessionHasBeenSet;
}

string MqttParam::GetResource() const
{
    return m_resource;
}

void MqttParam::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool MqttParam::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string MqttParam::GetIp() const
{
    return m_ip;
}

void MqttParam::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool MqttParam::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t MqttParam::GetPort() const
{
    return m_port;
}

void MqttParam::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool MqttParam::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string MqttParam::GetUserName() const
{
    return m_userName;
}

void MqttParam::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool MqttParam::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string MqttParam::GetPassword() const
{
    return m_password;
}

void MqttParam::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool MqttParam::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

int64_t MqttParam::GetQos() const
{
    return m_qos;
}

void MqttParam::SetQos(const int64_t& _qos)
{
    m_qos = _qos;
    m_qosHasBeenSet = true;
}

bool MqttParam::QosHasBeenSet() const
{
    return m_qosHasBeenSet;
}

int64_t MqttParam::GetMaxTasks() const
{
    return m_maxTasks;
}

void MqttParam::SetMaxTasks(const int64_t& _maxTasks)
{
    m_maxTasks = _maxTasks;
    m_maxTasksHasBeenSet = true;
}

bool MqttParam::MaxTasksHasBeenSet() const
{
    return m_maxTasksHasBeenSet;
}

string MqttParam::GetServiceVip() const
{
    return m_serviceVip;
}

void MqttParam::SetServiceVip(const string& _serviceVip)
{
    m_serviceVip = _serviceVip;
    m_serviceVipHasBeenSet = true;
}

bool MqttParam::ServiceVipHasBeenSet() const
{
    return m_serviceVipHasBeenSet;
}

string MqttParam::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void MqttParam::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool MqttParam::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

bool MqttParam::GetSelfBuilt() const
{
    return m_selfBuilt;
}

void MqttParam::SetSelfBuilt(const bool& _selfBuilt)
{
    m_selfBuilt = _selfBuilt;
    m_selfBuiltHasBeenSet = true;
}

bool MqttParam::SelfBuiltHasBeenSet() const
{
    return m_selfBuiltHasBeenSet;
}

