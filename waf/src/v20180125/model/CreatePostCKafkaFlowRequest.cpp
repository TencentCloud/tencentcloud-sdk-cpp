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

#include <tencentcloud/waf/v20180125/model/CreatePostCKafkaFlowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

CreatePostCKafkaFlowRequest::CreatePostCKafkaFlowRequest() :
    m_cKafkaRegionHasBeenSet(false),
    m_cKafkaIDHasBeenSet(false),
    m_brokersHasBeenSet(false),
    m_compressionHasBeenSet(false),
    m_vipTypeHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_kafkaVersionHasBeenSet(false),
    m_sASLEnableHasBeenSet(false),
    m_sASLUserHasBeenSet(false),
    m_sASLPasswordHasBeenSet(false),
    m_writeConfigHasBeenSet(false)
{
}

string CreatePostCKafkaFlowRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cKafkaRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CKafkaRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cKafkaRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_cKafkaIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CKafkaID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cKafkaID.c_str(), allocator).Move(), allocator);
    }

    if (m_brokersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brokers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_brokers.c_str(), allocator).Move(), allocator);
    }

    if (m_compressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compression";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_compression.c_str(), allocator).Move(), allocator);
    }

    if (m_vipTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vipType, allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logType, allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kafkaVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_sASLEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SASLEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sASLEnable, allocator);
    }

    if (m_sASLUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SASLUser";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sASLUser.c_str(), allocator).Move(), allocator);
    }

    if (m_sASLPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SASLPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sASLPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_writeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_writeConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePostCKafkaFlowRequest::GetCKafkaRegion() const
{
    return m_cKafkaRegion;
}

void CreatePostCKafkaFlowRequest::SetCKafkaRegion(const string& _cKafkaRegion)
{
    m_cKafkaRegion = _cKafkaRegion;
    m_cKafkaRegionHasBeenSet = true;
}

bool CreatePostCKafkaFlowRequest::CKafkaRegionHasBeenSet() const
{
    return m_cKafkaRegionHasBeenSet;
}

string CreatePostCKafkaFlowRequest::GetCKafkaID() const
{
    return m_cKafkaID;
}

void CreatePostCKafkaFlowRequest::SetCKafkaID(const string& _cKafkaID)
{
    m_cKafkaID = _cKafkaID;
    m_cKafkaIDHasBeenSet = true;
}

bool CreatePostCKafkaFlowRequest::CKafkaIDHasBeenSet() const
{
    return m_cKafkaIDHasBeenSet;
}

string CreatePostCKafkaFlowRequest::GetBrokers() const
{
    return m_brokers;
}

void CreatePostCKafkaFlowRequest::SetBrokers(const string& _brokers)
{
    m_brokers = _brokers;
    m_brokersHasBeenSet = true;
}

bool CreatePostCKafkaFlowRequest::BrokersHasBeenSet() const
{
    return m_brokersHasBeenSet;
}

string CreatePostCKafkaFlowRequest::GetCompression() const
{
    return m_compression;
}

void CreatePostCKafkaFlowRequest::SetCompression(const string& _compression)
{
    m_compression = _compression;
    m_compressionHasBeenSet = true;
}

bool CreatePostCKafkaFlowRequest::CompressionHasBeenSet() const
{
    return m_compressionHasBeenSet;
}

int64_t CreatePostCKafkaFlowRequest::GetVipType() const
{
    return m_vipType;
}

void CreatePostCKafkaFlowRequest::SetVipType(const int64_t& _vipType)
{
    m_vipType = _vipType;
    m_vipTypeHasBeenSet = true;
}

bool CreatePostCKafkaFlowRequest::VipTypeHasBeenSet() const
{
    return m_vipTypeHasBeenSet;
}

int64_t CreatePostCKafkaFlowRequest::GetLogType() const
{
    return m_logType;
}

void CreatePostCKafkaFlowRequest::SetLogType(const int64_t& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool CreatePostCKafkaFlowRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string CreatePostCKafkaFlowRequest::GetTopic() const
{
    return m_topic;
}

void CreatePostCKafkaFlowRequest::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool CreatePostCKafkaFlowRequest::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string CreatePostCKafkaFlowRequest::GetKafkaVersion() const
{
    return m_kafkaVersion;
}

void CreatePostCKafkaFlowRequest::SetKafkaVersion(const string& _kafkaVersion)
{
    m_kafkaVersion = _kafkaVersion;
    m_kafkaVersionHasBeenSet = true;
}

bool CreatePostCKafkaFlowRequest::KafkaVersionHasBeenSet() const
{
    return m_kafkaVersionHasBeenSet;
}

int64_t CreatePostCKafkaFlowRequest::GetSASLEnable() const
{
    return m_sASLEnable;
}

void CreatePostCKafkaFlowRequest::SetSASLEnable(const int64_t& _sASLEnable)
{
    m_sASLEnable = _sASLEnable;
    m_sASLEnableHasBeenSet = true;
}

bool CreatePostCKafkaFlowRequest::SASLEnableHasBeenSet() const
{
    return m_sASLEnableHasBeenSet;
}

string CreatePostCKafkaFlowRequest::GetSASLUser() const
{
    return m_sASLUser;
}

void CreatePostCKafkaFlowRequest::SetSASLUser(const string& _sASLUser)
{
    m_sASLUser = _sASLUser;
    m_sASLUserHasBeenSet = true;
}

bool CreatePostCKafkaFlowRequest::SASLUserHasBeenSet() const
{
    return m_sASLUserHasBeenSet;
}

string CreatePostCKafkaFlowRequest::GetSASLPassword() const
{
    return m_sASLPassword;
}

void CreatePostCKafkaFlowRequest::SetSASLPassword(const string& _sASLPassword)
{
    m_sASLPassword = _sASLPassword;
    m_sASLPasswordHasBeenSet = true;
}

bool CreatePostCKafkaFlowRequest::SASLPasswordHasBeenSet() const
{
    return m_sASLPasswordHasBeenSet;
}

FieldWriteConfig CreatePostCKafkaFlowRequest::GetWriteConfig() const
{
    return m_writeConfig;
}

void CreatePostCKafkaFlowRequest::SetWriteConfig(const FieldWriteConfig& _writeConfig)
{
    m_writeConfig = _writeConfig;
    m_writeConfigHasBeenSet = true;
}

bool CreatePostCKafkaFlowRequest::WriteConfigHasBeenSet() const
{
    return m_writeConfigHasBeenSet;
}


