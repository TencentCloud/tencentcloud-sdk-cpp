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

#include <tencentcloud/ioa/v20220601/model/DeliverServerItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DeliverServerItem::DeliverServerItem() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_targetSyslogAddressHasBeenSet(false),
    m_targetSyslogProtocolHasBeenSet(false),
    m_targetSyslogPortHasBeenSet(false),
    m_syslogFacilityHasBeenSet(false),
    m_targetKafkaAddressHasBeenSet(false),
    m_targetKafkaTopicHasBeenSet(false),
    m_kafkaVersionHasBeenSet(false),
    m_kafkaSaslUserNameHasBeenSet(false),
    m_kafkaSaslPasswordHasBeenSet(false),
    m_targetHttpUrlHasBeenSet(false),
    m_targetHttpTimeoutHasBeenSet(false),
    m_connectorGroupIdHasBeenSet(false),
    m_connectorGroupNameHasBeenSet(false),
    m_kafkaSSLEnableHasBeenSet(false),
    m_sSLSkipVerifyHasBeenSet(false)
{
}

CoreInternalOutcome DeliverServerItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverServerItem.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverServerItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverServerItem.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverServerItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("TargetSyslogAddress") && !value["TargetSyslogAddress"].IsNull())
    {
        if (!value["TargetSyslogAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverServerItem.TargetSyslogAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetSyslogAddress = string(value["TargetSyslogAddress"].GetString());
        m_targetSyslogAddressHasBeenSet = true;
    }

    if (value.HasMember("TargetSyslogProtocol") && !value["TargetSyslogProtocol"].IsNull())
    {
        if (!value["TargetSyslogProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverServerItem.TargetSyslogProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetSyslogProtocol = string(value["TargetSyslogProtocol"].GetString());
        m_targetSyslogProtocolHasBeenSet = true;
    }

    if (value.HasMember("TargetSyslogPort") && !value["TargetSyslogPort"].IsNull())
    {
        if (!value["TargetSyslogPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverServerItem.TargetSyslogPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_targetSyslogPort = value["TargetSyslogPort"].GetUint64();
        m_targetSyslogPortHasBeenSet = true;
    }

    if (value.HasMember("SyslogFacility") && !value["SyslogFacility"].IsNull())
    {
        if (!value["SyslogFacility"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverServerItem.SyslogFacility` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syslogFacility = string(value["SyslogFacility"].GetString());
        m_syslogFacilityHasBeenSet = true;
    }

    if (value.HasMember("TargetKafkaAddress") && !value["TargetKafkaAddress"].IsNull())
    {
        if (!value["TargetKafkaAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverServerItem.TargetKafkaAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetKafkaAddress = string(value["TargetKafkaAddress"].GetString());
        m_targetKafkaAddressHasBeenSet = true;
    }

    if (value.HasMember("TargetKafkaTopic") && !value["TargetKafkaTopic"].IsNull())
    {
        if (!value["TargetKafkaTopic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverServerItem.TargetKafkaTopic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetKafkaTopic = string(value["TargetKafkaTopic"].GetString());
        m_targetKafkaTopicHasBeenSet = true;
    }

    if (value.HasMember("KafkaVersion") && !value["KafkaVersion"].IsNull())
    {
        if (!value["KafkaVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverServerItem.KafkaVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaVersion = string(value["KafkaVersion"].GetString());
        m_kafkaVersionHasBeenSet = true;
    }

    if (value.HasMember("KafkaSaslUserName") && !value["KafkaSaslUserName"].IsNull())
    {
        if (!value["KafkaSaslUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverServerItem.KafkaSaslUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaSaslUserName = string(value["KafkaSaslUserName"].GetString());
        m_kafkaSaslUserNameHasBeenSet = true;
    }

    if (value.HasMember("KafkaSaslPassword") && !value["KafkaSaslPassword"].IsNull())
    {
        if (!value["KafkaSaslPassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverServerItem.KafkaSaslPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaSaslPassword = string(value["KafkaSaslPassword"].GetString());
        m_kafkaSaslPasswordHasBeenSet = true;
    }

    if (value.HasMember("TargetHttpUrl") && !value["TargetHttpUrl"].IsNull())
    {
        if (!value["TargetHttpUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverServerItem.TargetHttpUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetHttpUrl = string(value["TargetHttpUrl"].GetString());
        m_targetHttpUrlHasBeenSet = true;
    }

    if (value.HasMember("TargetHttpTimeout") && !value["TargetHttpTimeout"].IsNull())
    {
        if (!value["TargetHttpTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverServerItem.TargetHttpTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_targetHttpTimeout = value["TargetHttpTimeout"].GetUint64();
        m_targetHttpTimeoutHasBeenSet = true;
    }

    if (value.HasMember("ConnectorGroupId") && !value["ConnectorGroupId"].IsNull())
    {
        if (!value["ConnectorGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverServerItem.ConnectorGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectorGroupId = string(value["ConnectorGroupId"].GetString());
        m_connectorGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ConnectorGroupName") && !value["ConnectorGroupName"].IsNull())
    {
        if (!value["ConnectorGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverServerItem.ConnectorGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectorGroupName = string(value["ConnectorGroupName"].GetString());
        m_connectorGroupNameHasBeenSet = true;
    }

    if (value.HasMember("KafkaSSLEnable") && !value["KafkaSSLEnable"].IsNull())
    {
        if (!value["KafkaSSLEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverServerItem.KafkaSSLEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaSSLEnable = value["KafkaSSLEnable"].GetBool();
        m_kafkaSSLEnableHasBeenSet = true;
    }

    if (value.HasMember("SSLSkipVerify") && !value["SSLSkipVerify"].IsNull())
    {
        if (!value["SSLSkipVerify"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverServerItem.SSLSkipVerify` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sSLSkipVerify = value["SSLSkipVerify"].GetBool();
        m_sSLSkipVerifyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeliverServerItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_targetSyslogAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetSyslogAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetSyslogAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_targetSyslogProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetSyslogProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetSyslogProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_targetSyslogPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetSyslogPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetSyslogPort, allocator);
    }

    if (m_syslogFacilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyslogFacility";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_syslogFacility.c_str(), allocator).Move(), allocator);
    }

    if (m_targetKafkaAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetKafkaAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetKafkaAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_targetKafkaTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetKafkaTopic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetKafkaTopic.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaSaslUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaSaslUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaSaslUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaSaslPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaSaslPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaSaslPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHttpUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetHttpUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetHttpUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHttpTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetHttpTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetHttpTimeout, allocator);
    }

    if (m_connectorGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectorGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectorGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_connectorGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectorGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectorGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaSSLEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaSSLEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kafkaSSLEnable, allocator);
    }

    if (m_sSLSkipVerifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLSkipVerify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sSLSkipVerify, allocator);
    }

}


uint64_t DeliverServerItem::GetID() const
{
    return m_iD;
}

void DeliverServerItem::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DeliverServerItem::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string DeliverServerItem::GetName() const
{
    return m_name;
}

void DeliverServerItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DeliverServerItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DeliverServerItem::GetType() const
{
    return m_type;
}

void DeliverServerItem::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DeliverServerItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DeliverServerItem::GetDescription() const
{
    return m_description;
}

void DeliverServerItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DeliverServerItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DeliverServerItem::GetTargetSyslogAddress() const
{
    return m_targetSyslogAddress;
}

void DeliverServerItem::SetTargetSyslogAddress(const string& _targetSyslogAddress)
{
    m_targetSyslogAddress = _targetSyslogAddress;
    m_targetSyslogAddressHasBeenSet = true;
}

bool DeliverServerItem::TargetSyslogAddressHasBeenSet() const
{
    return m_targetSyslogAddressHasBeenSet;
}

string DeliverServerItem::GetTargetSyslogProtocol() const
{
    return m_targetSyslogProtocol;
}

void DeliverServerItem::SetTargetSyslogProtocol(const string& _targetSyslogProtocol)
{
    m_targetSyslogProtocol = _targetSyslogProtocol;
    m_targetSyslogProtocolHasBeenSet = true;
}

bool DeliverServerItem::TargetSyslogProtocolHasBeenSet() const
{
    return m_targetSyslogProtocolHasBeenSet;
}

uint64_t DeliverServerItem::GetTargetSyslogPort() const
{
    return m_targetSyslogPort;
}

void DeliverServerItem::SetTargetSyslogPort(const uint64_t& _targetSyslogPort)
{
    m_targetSyslogPort = _targetSyslogPort;
    m_targetSyslogPortHasBeenSet = true;
}

bool DeliverServerItem::TargetSyslogPortHasBeenSet() const
{
    return m_targetSyslogPortHasBeenSet;
}

string DeliverServerItem::GetSyslogFacility() const
{
    return m_syslogFacility;
}

void DeliverServerItem::SetSyslogFacility(const string& _syslogFacility)
{
    m_syslogFacility = _syslogFacility;
    m_syslogFacilityHasBeenSet = true;
}

bool DeliverServerItem::SyslogFacilityHasBeenSet() const
{
    return m_syslogFacilityHasBeenSet;
}

string DeliverServerItem::GetTargetKafkaAddress() const
{
    return m_targetKafkaAddress;
}

void DeliverServerItem::SetTargetKafkaAddress(const string& _targetKafkaAddress)
{
    m_targetKafkaAddress = _targetKafkaAddress;
    m_targetKafkaAddressHasBeenSet = true;
}

bool DeliverServerItem::TargetKafkaAddressHasBeenSet() const
{
    return m_targetKafkaAddressHasBeenSet;
}

string DeliverServerItem::GetTargetKafkaTopic() const
{
    return m_targetKafkaTopic;
}

void DeliverServerItem::SetTargetKafkaTopic(const string& _targetKafkaTopic)
{
    m_targetKafkaTopic = _targetKafkaTopic;
    m_targetKafkaTopicHasBeenSet = true;
}

bool DeliverServerItem::TargetKafkaTopicHasBeenSet() const
{
    return m_targetKafkaTopicHasBeenSet;
}

string DeliverServerItem::GetKafkaVersion() const
{
    return m_kafkaVersion;
}

void DeliverServerItem::SetKafkaVersion(const string& _kafkaVersion)
{
    m_kafkaVersion = _kafkaVersion;
    m_kafkaVersionHasBeenSet = true;
}

bool DeliverServerItem::KafkaVersionHasBeenSet() const
{
    return m_kafkaVersionHasBeenSet;
}

string DeliverServerItem::GetKafkaSaslUserName() const
{
    return m_kafkaSaslUserName;
}

void DeliverServerItem::SetKafkaSaslUserName(const string& _kafkaSaslUserName)
{
    m_kafkaSaslUserName = _kafkaSaslUserName;
    m_kafkaSaslUserNameHasBeenSet = true;
}

bool DeliverServerItem::KafkaSaslUserNameHasBeenSet() const
{
    return m_kafkaSaslUserNameHasBeenSet;
}

string DeliverServerItem::GetKafkaSaslPassword() const
{
    return m_kafkaSaslPassword;
}

void DeliverServerItem::SetKafkaSaslPassword(const string& _kafkaSaslPassword)
{
    m_kafkaSaslPassword = _kafkaSaslPassword;
    m_kafkaSaslPasswordHasBeenSet = true;
}

bool DeliverServerItem::KafkaSaslPasswordHasBeenSet() const
{
    return m_kafkaSaslPasswordHasBeenSet;
}

string DeliverServerItem::GetTargetHttpUrl() const
{
    return m_targetHttpUrl;
}

void DeliverServerItem::SetTargetHttpUrl(const string& _targetHttpUrl)
{
    m_targetHttpUrl = _targetHttpUrl;
    m_targetHttpUrlHasBeenSet = true;
}

bool DeliverServerItem::TargetHttpUrlHasBeenSet() const
{
    return m_targetHttpUrlHasBeenSet;
}

uint64_t DeliverServerItem::GetTargetHttpTimeout() const
{
    return m_targetHttpTimeout;
}

void DeliverServerItem::SetTargetHttpTimeout(const uint64_t& _targetHttpTimeout)
{
    m_targetHttpTimeout = _targetHttpTimeout;
    m_targetHttpTimeoutHasBeenSet = true;
}

bool DeliverServerItem::TargetHttpTimeoutHasBeenSet() const
{
    return m_targetHttpTimeoutHasBeenSet;
}

string DeliverServerItem::GetConnectorGroupId() const
{
    return m_connectorGroupId;
}

void DeliverServerItem::SetConnectorGroupId(const string& _connectorGroupId)
{
    m_connectorGroupId = _connectorGroupId;
    m_connectorGroupIdHasBeenSet = true;
}

bool DeliverServerItem::ConnectorGroupIdHasBeenSet() const
{
    return m_connectorGroupIdHasBeenSet;
}

string DeliverServerItem::GetConnectorGroupName() const
{
    return m_connectorGroupName;
}

void DeliverServerItem::SetConnectorGroupName(const string& _connectorGroupName)
{
    m_connectorGroupName = _connectorGroupName;
    m_connectorGroupNameHasBeenSet = true;
}

bool DeliverServerItem::ConnectorGroupNameHasBeenSet() const
{
    return m_connectorGroupNameHasBeenSet;
}

bool DeliverServerItem::GetKafkaSSLEnable() const
{
    return m_kafkaSSLEnable;
}

void DeliverServerItem::SetKafkaSSLEnable(const bool& _kafkaSSLEnable)
{
    m_kafkaSSLEnable = _kafkaSSLEnable;
    m_kafkaSSLEnableHasBeenSet = true;
}

bool DeliverServerItem::KafkaSSLEnableHasBeenSet() const
{
    return m_kafkaSSLEnableHasBeenSet;
}

bool DeliverServerItem::GetSSLSkipVerify() const
{
    return m_sSLSkipVerify;
}

void DeliverServerItem::SetSSLSkipVerify(const bool& _sSLSkipVerify)
{
    m_sSLSkipVerify = _sSLSkipVerify;
    m_sSLSkipVerifyHasBeenSet = true;
}

bool DeliverServerItem::SSLSkipVerifyHasBeenSet() const
{
    return m_sSLSkipVerifyHasBeenSet;
}

