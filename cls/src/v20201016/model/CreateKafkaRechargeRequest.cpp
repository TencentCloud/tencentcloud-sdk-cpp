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

#include <tencentcloud/cls/v20201016/model/CreateKafkaRechargeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateKafkaRechargeRequest::CreateKafkaRechargeRequest() :
    m_topicIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_kafkaTypeHasBeenSet(false),
    m_userKafkaTopicsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_logRechargeRuleHasBeenSet(false),
    m_kafkaInstanceHasBeenSet(false),
    m_serverAddrHasBeenSet(false),
    m_isEncryptionAddrHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_consumerGroupNameHasBeenSet(false)
{
}

string CreateKafkaRechargeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_kafkaType, allocator);
    }

    if (m_userKafkaTopicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserKafkaTopics";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userKafkaTopics.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_logRechargeRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogRechargeRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logRechargeRule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_kafkaInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kafkaInstance.c_str(), allocator).Move(), allocator);
    }

    if (m_serverAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerAddr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_isEncryptionAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEncryptionAddr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEncryptionAddr, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_protocol.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_consumerGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_consumerGroupName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateKafkaRechargeRequest::GetTopicId() const
{
    return m_topicId;
}

void CreateKafkaRechargeRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CreateKafkaRechargeRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string CreateKafkaRechargeRequest::GetName() const
{
    return m_name;
}

void CreateKafkaRechargeRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateKafkaRechargeRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t CreateKafkaRechargeRequest::GetKafkaType() const
{
    return m_kafkaType;
}

void CreateKafkaRechargeRequest::SetKafkaType(const uint64_t& _kafkaType)
{
    m_kafkaType = _kafkaType;
    m_kafkaTypeHasBeenSet = true;
}

bool CreateKafkaRechargeRequest::KafkaTypeHasBeenSet() const
{
    return m_kafkaTypeHasBeenSet;
}

string CreateKafkaRechargeRequest::GetUserKafkaTopics() const
{
    return m_userKafkaTopics;
}

void CreateKafkaRechargeRequest::SetUserKafkaTopics(const string& _userKafkaTopics)
{
    m_userKafkaTopics = _userKafkaTopics;
    m_userKafkaTopicsHasBeenSet = true;
}

bool CreateKafkaRechargeRequest::UserKafkaTopicsHasBeenSet() const
{
    return m_userKafkaTopicsHasBeenSet;
}

int64_t CreateKafkaRechargeRequest::GetOffset() const
{
    return m_offset;
}

void CreateKafkaRechargeRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool CreateKafkaRechargeRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

LogRechargeRuleInfo CreateKafkaRechargeRequest::GetLogRechargeRule() const
{
    return m_logRechargeRule;
}

void CreateKafkaRechargeRequest::SetLogRechargeRule(const LogRechargeRuleInfo& _logRechargeRule)
{
    m_logRechargeRule = _logRechargeRule;
    m_logRechargeRuleHasBeenSet = true;
}

bool CreateKafkaRechargeRequest::LogRechargeRuleHasBeenSet() const
{
    return m_logRechargeRuleHasBeenSet;
}

string CreateKafkaRechargeRequest::GetKafkaInstance() const
{
    return m_kafkaInstance;
}

void CreateKafkaRechargeRequest::SetKafkaInstance(const string& _kafkaInstance)
{
    m_kafkaInstance = _kafkaInstance;
    m_kafkaInstanceHasBeenSet = true;
}

bool CreateKafkaRechargeRequest::KafkaInstanceHasBeenSet() const
{
    return m_kafkaInstanceHasBeenSet;
}

string CreateKafkaRechargeRequest::GetServerAddr() const
{
    return m_serverAddr;
}

void CreateKafkaRechargeRequest::SetServerAddr(const string& _serverAddr)
{
    m_serverAddr = _serverAddr;
    m_serverAddrHasBeenSet = true;
}

bool CreateKafkaRechargeRequest::ServerAddrHasBeenSet() const
{
    return m_serverAddrHasBeenSet;
}

bool CreateKafkaRechargeRequest::GetIsEncryptionAddr() const
{
    return m_isEncryptionAddr;
}

void CreateKafkaRechargeRequest::SetIsEncryptionAddr(const bool& _isEncryptionAddr)
{
    m_isEncryptionAddr = _isEncryptionAddr;
    m_isEncryptionAddrHasBeenSet = true;
}

bool CreateKafkaRechargeRequest::IsEncryptionAddrHasBeenSet() const
{
    return m_isEncryptionAddrHasBeenSet;
}

KafkaProtocolInfo CreateKafkaRechargeRequest::GetProtocol() const
{
    return m_protocol;
}

void CreateKafkaRechargeRequest::SetProtocol(const KafkaProtocolInfo& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateKafkaRechargeRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string CreateKafkaRechargeRequest::GetConsumerGroupName() const
{
    return m_consumerGroupName;
}

void CreateKafkaRechargeRequest::SetConsumerGroupName(const string& _consumerGroupName)
{
    m_consumerGroupName = _consumerGroupName;
    m_consumerGroupNameHasBeenSet = true;
}

bool CreateKafkaRechargeRequest::ConsumerGroupNameHasBeenSet() const
{
    return m_consumerGroupNameHasBeenSet;
}


