/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/es/v20180416/model/CollectorOutputInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

CollectorOutputInstance::CollectorOutputInstance() :
    m_typeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_eSUserNameHasBeenSet(false),
    m_eSUserPasswdHasBeenSet(false),
    m_enableMonitoringHasBeenSet(false),
    m_enableDashboardHasBeenSet(false),
    m_kafkaEndpointHasBeenSet(false),
    m_kafkaTopicHasBeenSet(false),
    m_kafkaVersionHasBeenSet(false),
    m_sesTopicIdHasBeenSet(false),
    m_sesTopicNameHasBeenSet(false),
    m_sesTopicAddressHasBeenSet(false),
    m_sesTopicUserNameHasBeenSet(false),
    m_sesTopicPasswdHasBeenSet(false),
    m_logstashListenPortHasBeenSet(false)
{
}

CoreInternalOutcome CollectorOutputInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorOutputInstance.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorOutputInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ESUserName") && !value["ESUserName"].IsNull())
    {
        if (!value["ESUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorOutputInstance.ESUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eSUserName = string(value["ESUserName"].GetString());
        m_eSUserNameHasBeenSet = true;
    }

    if (value.HasMember("ESUserPasswd") && !value["ESUserPasswd"].IsNull())
    {
        if (!value["ESUserPasswd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorOutputInstance.ESUserPasswd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eSUserPasswd = string(value["ESUserPasswd"].GetString());
        m_eSUserPasswdHasBeenSet = true;
    }

    if (value.HasMember("EnableMonitoring") && !value["EnableMonitoring"].IsNull())
    {
        if (!value["EnableMonitoring"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorOutputInstance.EnableMonitoring` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableMonitoring = value["EnableMonitoring"].GetInt64();
        m_enableMonitoringHasBeenSet = true;
    }

    if (value.HasMember("EnableDashboard") && !value["EnableDashboard"].IsNull())
    {
        if (!value["EnableDashboard"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorOutputInstance.EnableDashboard` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableDashboard = value["EnableDashboard"].GetInt64();
        m_enableDashboardHasBeenSet = true;
    }

    if (value.HasMember("KafkaEndpoint") && !value["KafkaEndpoint"].IsNull())
    {
        if (!value["KafkaEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorOutputInstance.KafkaEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaEndpoint = string(value["KafkaEndpoint"].GetString());
        m_kafkaEndpointHasBeenSet = true;
    }

    if (value.HasMember("KafkaTopic") && !value["KafkaTopic"].IsNull())
    {
        if (!value["KafkaTopic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorOutputInstance.KafkaTopic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaTopic = string(value["KafkaTopic"].GetString());
        m_kafkaTopicHasBeenSet = true;
    }

    if (value.HasMember("KafkaVersion") && !value["KafkaVersion"].IsNull())
    {
        if (!value["KafkaVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorOutputInstance.KafkaVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaVersion = string(value["KafkaVersion"].GetString());
        m_kafkaVersionHasBeenSet = true;
    }

    if (value.HasMember("SesTopicId") && !value["SesTopicId"].IsNull())
    {
        if (!value["SesTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorOutputInstance.SesTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sesTopicId = string(value["SesTopicId"].GetString());
        m_sesTopicIdHasBeenSet = true;
    }

    if (value.HasMember("SesTopicName") && !value["SesTopicName"].IsNull())
    {
        if (!value["SesTopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorOutputInstance.SesTopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sesTopicName = string(value["SesTopicName"].GetString());
        m_sesTopicNameHasBeenSet = true;
    }

    if (value.HasMember("SesTopicAddress") && !value["SesTopicAddress"].IsNull())
    {
        if (!value["SesTopicAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorOutputInstance.SesTopicAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sesTopicAddress = string(value["SesTopicAddress"].GetString());
        m_sesTopicAddressHasBeenSet = true;
    }

    if (value.HasMember("SesTopicUserName") && !value["SesTopicUserName"].IsNull())
    {
        if (!value["SesTopicUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorOutputInstance.SesTopicUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sesTopicUserName = string(value["SesTopicUserName"].GetString());
        m_sesTopicUserNameHasBeenSet = true;
    }

    if (value.HasMember("SesTopicPasswd") && !value["SesTopicPasswd"].IsNull())
    {
        if (!value["SesTopicPasswd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorOutputInstance.SesTopicPasswd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sesTopicPasswd = string(value["SesTopicPasswd"].GetString());
        m_sesTopicPasswdHasBeenSet = true;
    }

    if (value.HasMember("LogstashListenPort") && !value["LogstashListenPort"].IsNull())
    {
        if (!value["LogstashListenPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorOutputInstance.LogstashListenPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logstashListenPort = value["LogstashListenPort"].GetUint64();
        m_logstashListenPortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CollectorOutputInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_eSUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ESUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eSUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_eSUserPasswdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ESUserPasswd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eSUserPasswd.c_str(), allocator).Move(), allocator);
    }

    if (m_enableMonitoringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMonitoring";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableMonitoring, allocator);
    }

    if (m_enableDashboardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDashboard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableDashboard, allocator);
    }

    if (m_kafkaEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaTopic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaTopic.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_sesTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SesTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sesTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_sesTopicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SesTopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sesTopicName.c_str(), allocator).Move(), allocator);
    }

    if (m_sesTopicAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SesTopicAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sesTopicAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_sesTopicUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SesTopicUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sesTopicUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_sesTopicPasswdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SesTopicPasswd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sesTopicPasswd.c_str(), allocator).Move(), allocator);
    }

    if (m_logstashListenPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogstashListenPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logstashListenPort, allocator);
    }

}


string CollectorOutputInstance::GetType() const
{
    return m_type;
}

void CollectorOutputInstance::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CollectorOutputInstance::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CollectorOutputInstance::GetInstanceId() const
{
    return m_instanceId;
}

void CollectorOutputInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CollectorOutputInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CollectorOutputInstance::GetESUserName() const
{
    return m_eSUserName;
}

void CollectorOutputInstance::SetESUserName(const string& _eSUserName)
{
    m_eSUserName = _eSUserName;
    m_eSUserNameHasBeenSet = true;
}

bool CollectorOutputInstance::ESUserNameHasBeenSet() const
{
    return m_eSUserNameHasBeenSet;
}

string CollectorOutputInstance::GetESUserPasswd() const
{
    return m_eSUserPasswd;
}

void CollectorOutputInstance::SetESUserPasswd(const string& _eSUserPasswd)
{
    m_eSUserPasswd = _eSUserPasswd;
    m_eSUserPasswdHasBeenSet = true;
}

bool CollectorOutputInstance::ESUserPasswdHasBeenSet() const
{
    return m_eSUserPasswdHasBeenSet;
}

int64_t CollectorOutputInstance::GetEnableMonitoring() const
{
    return m_enableMonitoring;
}

void CollectorOutputInstance::SetEnableMonitoring(const int64_t& _enableMonitoring)
{
    m_enableMonitoring = _enableMonitoring;
    m_enableMonitoringHasBeenSet = true;
}

bool CollectorOutputInstance::EnableMonitoringHasBeenSet() const
{
    return m_enableMonitoringHasBeenSet;
}

int64_t CollectorOutputInstance::GetEnableDashboard() const
{
    return m_enableDashboard;
}

void CollectorOutputInstance::SetEnableDashboard(const int64_t& _enableDashboard)
{
    m_enableDashboard = _enableDashboard;
    m_enableDashboardHasBeenSet = true;
}

bool CollectorOutputInstance::EnableDashboardHasBeenSet() const
{
    return m_enableDashboardHasBeenSet;
}

string CollectorOutputInstance::GetKafkaEndpoint() const
{
    return m_kafkaEndpoint;
}

void CollectorOutputInstance::SetKafkaEndpoint(const string& _kafkaEndpoint)
{
    m_kafkaEndpoint = _kafkaEndpoint;
    m_kafkaEndpointHasBeenSet = true;
}

bool CollectorOutputInstance::KafkaEndpointHasBeenSet() const
{
    return m_kafkaEndpointHasBeenSet;
}

string CollectorOutputInstance::GetKafkaTopic() const
{
    return m_kafkaTopic;
}

void CollectorOutputInstance::SetKafkaTopic(const string& _kafkaTopic)
{
    m_kafkaTopic = _kafkaTopic;
    m_kafkaTopicHasBeenSet = true;
}

bool CollectorOutputInstance::KafkaTopicHasBeenSet() const
{
    return m_kafkaTopicHasBeenSet;
}

string CollectorOutputInstance::GetKafkaVersion() const
{
    return m_kafkaVersion;
}

void CollectorOutputInstance::SetKafkaVersion(const string& _kafkaVersion)
{
    m_kafkaVersion = _kafkaVersion;
    m_kafkaVersionHasBeenSet = true;
}

bool CollectorOutputInstance::KafkaVersionHasBeenSet() const
{
    return m_kafkaVersionHasBeenSet;
}

string CollectorOutputInstance::GetSesTopicId() const
{
    return m_sesTopicId;
}

void CollectorOutputInstance::SetSesTopicId(const string& _sesTopicId)
{
    m_sesTopicId = _sesTopicId;
    m_sesTopicIdHasBeenSet = true;
}

bool CollectorOutputInstance::SesTopicIdHasBeenSet() const
{
    return m_sesTopicIdHasBeenSet;
}

string CollectorOutputInstance::GetSesTopicName() const
{
    return m_sesTopicName;
}

void CollectorOutputInstance::SetSesTopicName(const string& _sesTopicName)
{
    m_sesTopicName = _sesTopicName;
    m_sesTopicNameHasBeenSet = true;
}

bool CollectorOutputInstance::SesTopicNameHasBeenSet() const
{
    return m_sesTopicNameHasBeenSet;
}

string CollectorOutputInstance::GetSesTopicAddress() const
{
    return m_sesTopicAddress;
}

void CollectorOutputInstance::SetSesTopicAddress(const string& _sesTopicAddress)
{
    m_sesTopicAddress = _sesTopicAddress;
    m_sesTopicAddressHasBeenSet = true;
}

bool CollectorOutputInstance::SesTopicAddressHasBeenSet() const
{
    return m_sesTopicAddressHasBeenSet;
}

string CollectorOutputInstance::GetSesTopicUserName() const
{
    return m_sesTopicUserName;
}

void CollectorOutputInstance::SetSesTopicUserName(const string& _sesTopicUserName)
{
    m_sesTopicUserName = _sesTopicUserName;
    m_sesTopicUserNameHasBeenSet = true;
}

bool CollectorOutputInstance::SesTopicUserNameHasBeenSet() const
{
    return m_sesTopicUserNameHasBeenSet;
}

string CollectorOutputInstance::GetSesTopicPasswd() const
{
    return m_sesTopicPasswd;
}

void CollectorOutputInstance::SetSesTopicPasswd(const string& _sesTopicPasswd)
{
    m_sesTopicPasswd = _sesTopicPasswd;
    m_sesTopicPasswdHasBeenSet = true;
}

bool CollectorOutputInstance::SesTopicPasswdHasBeenSet() const
{
    return m_sesTopicPasswdHasBeenSet;
}

uint64_t CollectorOutputInstance::GetLogstashListenPort() const
{
    return m_logstashListenPort;
}

void CollectorOutputInstance::SetLogstashListenPort(const uint64_t& _logstashListenPort)
{
    m_logstashListenPort = _logstashListenPort;
    m_logstashListenPortHasBeenSet = true;
}

bool CollectorOutputInstance::LogstashListenPortHasBeenSet() const
{
    return m_logstashListenPortHasBeenSet;
}

