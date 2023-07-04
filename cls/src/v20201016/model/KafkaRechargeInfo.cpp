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

#include <tencentcloud/cls/v20201016/model/KafkaRechargeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

KafkaRechargeInfo::KafkaRechargeInfo() :
    m_idHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_kafkaTypeHasBeenSet(false),
    m_kafkaInstanceHasBeenSet(false),
    m_serverAddrHasBeenSet(false),
    m_isEncryptionAddrHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_userKafkaTopicsHasBeenSet(false),
    m_consumerGroupNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_logRechargeRuleHasBeenSet(false)
{
}

CoreInternalOutcome KafkaRechargeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaRechargeInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaRechargeInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaRechargeInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("KafkaType") && !value["KafkaType"].IsNull())
    {
        if (!value["KafkaType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaRechargeInfo.KafkaType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaType = value["KafkaType"].GetUint64();
        m_kafkaTypeHasBeenSet = true;
    }

    if (value.HasMember("KafkaInstance") && !value["KafkaInstance"].IsNull())
    {
        if (!value["KafkaInstance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaRechargeInfo.KafkaInstance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaInstance = string(value["KafkaInstance"].GetString());
        m_kafkaInstanceHasBeenSet = true;
    }

    if (value.HasMember("ServerAddr") && !value["ServerAddr"].IsNull())
    {
        if (!value["ServerAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaRechargeInfo.ServerAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverAddr = string(value["ServerAddr"].GetString());
        m_serverAddrHasBeenSet = true;
    }

    if (value.HasMember("IsEncryptionAddr") && !value["IsEncryptionAddr"].IsNull())
    {
        if (!value["IsEncryptionAddr"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaRechargeInfo.IsEncryptionAddr` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEncryptionAddr = value["IsEncryptionAddr"].GetBool();
        m_isEncryptionAddrHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaRechargeInfo.Protocol` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_protocol.Deserialize(value["Protocol"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("UserKafkaTopics") && !value["UserKafkaTopics"].IsNull())
    {
        if (!value["UserKafkaTopics"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaRechargeInfo.UserKafkaTopics` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userKafkaTopics = string(value["UserKafkaTopics"].GetString());
        m_userKafkaTopicsHasBeenSet = true;
    }

    if (value.HasMember("ConsumerGroupName") && !value["ConsumerGroupName"].IsNull())
    {
        if (!value["ConsumerGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaRechargeInfo.ConsumerGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerGroupName = string(value["ConsumerGroupName"].GetString());
        m_consumerGroupNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaRechargeInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaRechargeInfo.Offset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetInt64();
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaRechargeInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaRechargeInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("LogRechargeRule") && !value["LogRechargeRule"].IsNull())
    {
        if (!value["LogRechargeRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaRechargeInfo.LogRechargeRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_logRechargeRule.Deserialize(value["LogRechargeRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_logRechargeRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KafkaRechargeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kafkaType, allocator);
    }

    if (m_kafkaInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaInstance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaInstance.c_str(), allocator).Move(), allocator);
    }

    if (m_serverAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_isEncryptionAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEncryptionAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEncryptionAddr, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_protocol.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_userKafkaTopicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserKafkaTopics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userKafkaTopics.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_logRechargeRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogRechargeRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logRechargeRule.ToJsonObject(value[key.c_str()], allocator);
    }

}


string KafkaRechargeInfo::GetId() const
{
    return m_id;
}

void KafkaRechargeInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool KafkaRechargeInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string KafkaRechargeInfo::GetTopicId() const
{
    return m_topicId;
}

void KafkaRechargeInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool KafkaRechargeInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string KafkaRechargeInfo::GetName() const
{
    return m_name;
}

void KafkaRechargeInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool KafkaRechargeInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t KafkaRechargeInfo::GetKafkaType() const
{
    return m_kafkaType;
}

void KafkaRechargeInfo::SetKafkaType(const uint64_t& _kafkaType)
{
    m_kafkaType = _kafkaType;
    m_kafkaTypeHasBeenSet = true;
}

bool KafkaRechargeInfo::KafkaTypeHasBeenSet() const
{
    return m_kafkaTypeHasBeenSet;
}

string KafkaRechargeInfo::GetKafkaInstance() const
{
    return m_kafkaInstance;
}

void KafkaRechargeInfo::SetKafkaInstance(const string& _kafkaInstance)
{
    m_kafkaInstance = _kafkaInstance;
    m_kafkaInstanceHasBeenSet = true;
}

bool KafkaRechargeInfo::KafkaInstanceHasBeenSet() const
{
    return m_kafkaInstanceHasBeenSet;
}

string KafkaRechargeInfo::GetServerAddr() const
{
    return m_serverAddr;
}

void KafkaRechargeInfo::SetServerAddr(const string& _serverAddr)
{
    m_serverAddr = _serverAddr;
    m_serverAddrHasBeenSet = true;
}

bool KafkaRechargeInfo::ServerAddrHasBeenSet() const
{
    return m_serverAddrHasBeenSet;
}

bool KafkaRechargeInfo::GetIsEncryptionAddr() const
{
    return m_isEncryptionAddr;
}

void KafkaRechargeInfo::SetIsEncryptionAddr(const bool& _isEncryptionAddr)
{
    m_isEncryptionAddr = _isEncryptionAddr;
    m_isEncryptionAddrHasBeenSet = true;
}

bool KafkaRechargeInfo::IsEncryptionAddrHasBeenSet() const
{
    return m_isEncryptionAddrHasBeenSet;
}

KafkaProtocolInfo KafkaRechargeInfo::GetProtocol() const
{
    return m_protocol;
}

void KafkaRechargeInfo::SetProtocol(const KafkaProtocolInfo& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool KafkaRechargeInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string KafkaRechargeInfo::GetUserKafkaTopics() const
{
    return m_userKafkaTopics;
}

void KafkaRechargeInfo::SetUserKafkaTopics(const string& _userKafkaTopics)
{
    m_userKafkaTopics = _userKafkaTopics;
    m_userKafkaTopicsHasBeenSet = true;
}

bool KafkaRechargeInfo::UserKafkaTopicsHasBeenSet() const
{
    return m_userKafkaTopicsHasBeenSet;
}

string KafkaRechargeInfo::GetConsumerGroupName() const
{
    return m_consumerGroupName;
}

void KafkaRechargeInfo::SetConsumerGroupName(const string& _consumerGroupName)
{
    m_consumerGroupName = _consumerGroupName;
    m_consumerGroupNameHasBeenSet = true;
}

bool KafkaRechargeInfo::ConsumerGroupNameHasBeenSet() const
{
    return m_consumerGroupNameHasBeenSet;
}

int64_t KafkaRechargeInfo::GetStatus() const
{
    return m_status;
}

void KafkaRechargeInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool KafkaRechargeInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t KafkaRechargeInfo::GetOffset() const
{
    return m_offset;
}

void KafkaRechargeInfo::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool KafkaRechargeInfo::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string KafkaRechargeInfo::GetCreateTime() const
{
    return m_createTime;
}

void KafkaRechargeInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool KafkaRechargeInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string KafkaRechargeInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void KafkaRechargeInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool KafkaRechargeInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

LogRechargeRuleInfo KafkaRechargeInfo::GetLogRechargeRule() const
{
    return m_logRechargeRule;
}

void KafkaRechargeInfo::SetLogRechargeRule(const LogRechargeRuleInfo& _logRechargeRule)
{
    m_logRechargeRule = _logRechargeRule;
    m_logRechargeRuleHasBeenSet = true;
}

bool KafkaRechargeInfo::LogRechargeRuleHasBeenSet() const
{
    return m_logRechargeRuleHasBeenSet;
}

