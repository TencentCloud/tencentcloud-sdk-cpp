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

#include <tencentcloud/cls/v20201016/model/CheckRechargeKafkaServerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CheckRechargeKafkaServerRequest::CheckRechargeKafkaServerRequest() :
    m_kafkaTypeHasBeenSet(false),
    m_kafkaInstanceHasBeenSet(false),
    m_serverAddrHasBeenSet(false),
    m_isEncryptionAddrHasBeenSet(false),
    m_protocolHasBeenSet(false)
{
}

string CheckRechargeKafkaServerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_kafkaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_kafkaType, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CheckRechargeKafkaServerRequest::GetKafkaType() const
{
    return m_kafkaType;
}

void CheckRechargeKafkaServerRequest::SetKafkaType(const uint64_t& _kafkaType)
{
    m_kafkaType = _kafkaType;
    m_kafkaTypeHasBeenSet = true;
}

bool CheckRechargeKafkaServerRequest::KafkaTypeHasBeenSet() const
{
    return m_kafkaTypeHasBeenSet;
}

string CheckRechargeKafkaServerRequest::GetKafkaInstance() const
{
    return m_kafkaInstance;
}

void CheckRechargeKafkaServerRequest::SetKafkaInstance(const string& _kafkaInstance)
{
    m_kafkaInstance = _kafkaInstance;
    m_kafkaInstanceHasBeenSet = true;
}

bool CheckRechargeKafkaServerRequest::KafkaInstanceHasBeenSet() const
{
    return m_kafkaInstanceHasBeenSet;
}

string CheckRechargeKafkaServerRequest::GetServerAddr() const
{
    return m_serverAddr;
}

void CheckRechargeKafkaServerRequest::SetServerAddr(const string& _serverAddr)
{
    m_serverAddr = _serverAddr;
    m_serverAddrHasBeenSet = true;
}

bool CheckRechargeKafkaServerRequest::ServerAddrHasBeenSet() const
{
    return m_serverAddrHasBeenSet;
}

bool CheckRechargeKafkaServerRequest::GetIsEncryptionAddr() const
{
    return m_isEncryptionAddr;
}

void CheckRechargeKafkaServerRequest::SetIsEncryptionAddr(const bool& _isEncryptionAddr)
{
    m_isEncryptionAddr = _isEncryptionAddr;
    m_isEncryptionAddrHasBeenSet = true;
}

bool CheckRechargeKafkaServerRequest::IsEncryptionAddrHasBeenSet() const
{
    return m_isEncryptionAddrHasBeenSet;
}

KafkaProtocolInfo CheckRechargeKafkaServerRequest::GetProtocol() const
{
    return m_protocol;
}

void CheckRechargeKafkaServerRequest::SetProtocol(const KafkaProtocolInfo& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CheckRechargeKafkaServerRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}


