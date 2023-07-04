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

#include <tencentcloud/cls/v20201016/model/PreviewKafkaRechargeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

PreviewKafkaRechargeRequest::PreviewKafkaRechargeRequest() :
    m_previewTypeHasBeenSet(false),
    m_kafkaTypeHasBeenSet(false),
    m_userKafkaTopicsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_kafkaInstanceHasBeenSet(false),
    m_serverAddrHasBeenSet(false),
    m_isEncryptionAddrHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_consumerGroupNameHasBeenSet(false),
    m_logRechargeRuleHasBeenSet(false)
{
}

string PreviewKafkaRechargeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_previewTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_previewType, allocator);
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

    if (m_logRechargeRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogRechargeRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logRechargeRule.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t PreviewKafkaRechargeRequest::GetPreviewType() const
{
    return m_previewType;
}

void PreviewKafkaRechargeRequest::SetPreviewType(const uint64_t& _previewType)
{
    m_previewType = _previewType;
    m_previewTypeHasBeenSet = true;
}

bool PreviewKafkaRechargeRequest::PreviewTypeHasBeenSet() const
{
    return m_previewTypeHasBeenSet;
}

uint64_t PreviewKafkaRechargeRequest::GetKafkaType() const
{
    return m_kafkaType;
}

void PreviewKafkaRechargeRequest::SetKafkaType(const uint64_t& _kafkaType)
{
    m_kafkaType = _kafkaType;
    m_kafkaTypeHasBeenSet = true;
}

bool PreviewKafkaRechargeRequest::KafkaTypeHasBeenSet() const
{
    return m_kafkaTypeHasBeenSet;
}

string PreviewKafkaRechargeRequest::GetUserKafkaTopics() const
{
    return m_userKafkaTopics;
}

void PreviewKafkaRechargeRequest::SetUserKafkaTopics(const string& _userKafkaTopics)
{
    m_userKafkaTopics = _userKafkaTopics;
    m_userKafkaTopicsHasBeenSet = true;
}

bool PreviewKafkaRechargeRequest::UserKafkaTopicsHasBeenSet() const
{
    return m_userKafkaTopicsHasBeenSet;
}

int64_t PreviewKafkaRechargeRequest::GetOffset() const
{
    return m_offset;
}

void PreviewKafkaRechargeRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool PreviewKafkaRechargeRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string PreviewKafkaRechargeRequest::GetKafkaInstance() const
{
    return m_kafkaInstance;
}

void PreviewKafkaRechargeRequest::SetKafkaInstance(const string& _kafkaInstance)
{
    m_kafkaInstance = _kafkaInstance;
    m_kafkaInstanceHasBeenSet = true;
}

bool PreviewKafkaRechargeRequest::KafkaInstanceHasBeenSet() const
{
    return m_kafkaInstanceHasBeenSet;
}

string PreviewKafkaRechargeRequest::GetServerAddr() const
{
    return m_serverAddr;
}

void PreviewKafkaRechargeRequest::SetServerAddr(const string& _serverAddr)
{
    m_serverAddr = _serverAddr;
    m_serverAddrHasBeenSet = true;
}

bool PreviewKafkaRechargeRequest::ServerAddrHasBeenSet() const
{
    return m_serverAddrHasBeenSet;
}

bool PreviewKafkaRechargeRequest::GetIsEncryptionAddr() const
{
    return m_isEncryptionAddr;
}

void PreviewKafkaRechargeRequest::SetIsEncryptionAddr(const bool& _isEncryptionAddr)
{
    m_isEncryptionAddr = _isEncryptionAddr;
    m_isEncryptionAddrHasBeenSet = true;
}

bool PreviewKafkaRechargeRequest::IsEncryptionAddrHasBeenSet() const
{
    return m_isEncryptionAddrHasBeenSet;
}

KafkaProtocolInfo PreviewKafkaRechargeRequest::GetProtocol() const
{
    return m_protocol;
}

void PreviewKafkaRechargeRequest::SetProtocol(const KafkaProtocolInfo& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool PreviewKafkaRechargeRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string PreviewKafkaRechargeRequest::GetConsumerGroupName() const
{
    return m_consumerGroupName;
}

void PreviewKafkaRechargeRequest::SetConsumerGroupName(const string& _consumerGroupName)
{
    m_consumerGroupName = _consumerGroupName;
    m_consumerGroupNameHasBeenSet = true;
}

bool PreviewKafkaRechargeRequest::ConsumerGroupNameHasBeenSet() const
{
    return m_consumerGroupNameHasBeenSet;
}

LogRechargeRuleInfo PreviewKafkaRechargeRequest::GetLogRechargeRule() const
{
    return m_logRechargeRule;
}

void PreviewKafkaRechargeRequest::SetLogRechargeRule(const LogRechargeRuleInfo& _logRechargeRule)
{
    m_logRechargeRule = _logRechargeRule;
    m_logRechargeRuleHasBeenSet = true;
}

bool PreviewKafkaRechargeRequest::LogRechargeRuleHasBeenSet() const
{
    return m_logRechargeRuleHasBeenSet;
}


