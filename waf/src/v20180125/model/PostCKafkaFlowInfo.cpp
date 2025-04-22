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

#include <tencentcloud/waf/v20180125/model/PostCKafkaFlowInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

PostCKafkaFlowInfo::PostCKafkaFlowInfo() :
    m_flowIdHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cKafkaRegionHasBeenSet(false),
    m_cKafkaIDHasBeenSet(false),
    m_brokersHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_compressionHasBeenSet(false),
    m_sASLEnableHasBeenSet(false),
    m_sASLUserHasBeenSet(false),
    m_sASLPasswordHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_vipTypeHasBeenSet(false),
    m_writeConfigHasBeenSet(false)
{
}

CoreInternalOutcome PostCKafkaFlowInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PostCKafkaFlowInfo.FlowId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = value["FlowId"].GetInt64();
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PostCKafkaFlowInfo.LogType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logType = value["LogType"].GetInt64();
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PostCKafkaFlowInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CKafkaRegion") && !value["CKafkaRegion"].IsNull())
    {
        if (!value["CKafkaRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostCKafkaFlowInfo.CKafkaRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cKafkaRegion = string(value["CKafkaRegion"].GetString());
        m_cKafkaRegionHasBeenSet = true;
    }

    if (value.HasMember("CKafkaID") && !value["CKafkaID"].IsNull())
    {
        if (!value["CKafkaID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostCKafkaFlowInfo.CKafkaID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cKafkaID = string(value["CKafkaID"].GetString());
        m_cKafkaIDHasBeenSet = true;
    }

    if (value.HasMember("Brokers") && !value["Brokers"].IsNull())
    {
        if (!value["Brokers"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostCKafkaFlowInfo.Brokers` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brokers = string(value["Brokers"].GetString());
        m_brokersHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostCKafkaFlowInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostCKafkaFlowInfo.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("Compression") && !value["Compression"].IsNull())
    {
        if (!value["Compression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostCKafkaFlowInfo.Compression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compression = string(value["Compression"].GetString());
        m_compressionHasBeenSet = true;
    }

    if (value.HasMember("SASLEnable") && !value["SASLEnable"].IsNull())
    {
        if (!value["SASLEnable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PostCKafkaFlowInfo.SASLEnable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sASLEnable = value["SASLEnable"].GetInt64();
        m_sASLEnableHasBeenSet = true;
    }

    if (value.HasMember("SASLUser") && !value["SASLUser"].IsNull())
    {
        if (!value["SASLUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostCKafkaFlowInfo.SASLUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sASLUser = string(value["SASLUser"].GetString());
        m_sASLUserHasBeenSet = true;
    }

    if (value.HasMember("SASLPassword") && !value["SASLPassword"].IsNull())
    {
        if (!value["SASLPassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostCKafkaFlowInfo.SASLPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sASLPassword = string(value["SASLPassword"].GetString());
        m_sASLPasswordHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostCKafkaFlowInfo.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("VipType") && !value["VipType"].IsNull())
    {
        if (!value["VipType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PostCKafkaFlowInfo.VipType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vipType = value["VipType"].GetInt64();
        m_vipTypeHasBeenSet = true;
    }

    if (value.HasMember("WriteConfig") && !value["WriteConfig"].IsNull())
    {
        if (!value["WriteConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PostCKafkaFlowInfo.WriteConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_writeConfig.Deserialize(value["WriteConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_writeConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PostCKafkaFlowInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowId, allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logType, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_cKafkaRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CKafkaRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cKafkaRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_cKafkaIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CKafkaID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cKafkaID.c_str(), allocator).Move(), allocator);
    }

    if (m_brokersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brokers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brokers.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_compressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compression.c_str(), allocator).Move(), allocator);
    }

    if (m_sASLEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SASLEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sASLEnable, allocator);
    }

    if (m_sASLUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SASLUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sASLUser.c_str(), allocator).Move(), allocator);
    }

    if (m_sASLPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SASLPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sASLPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_vipTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vipType, allocator);
    }

    if (m_writeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_writeConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t PostCKafkaFlowInfo::GetFlowId() const
{
    return m_flowId;
}

void PostCKafkaFlowInfo::SetFlowId(const int64_t& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool PostCKafkaFlowInfo::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

int64_t PostCKafkaFlowInfo::GetLogType() const
{
    return m_logType;
}

void PostCKafkaFlowInfo::SetLogType(const int64_t& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool PostCKafkaFlowInfo::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

int64_t PostCKafkaFlowInfo::GetStatus() const
{
    return m_status;
}

void PostCKafkaFlowInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PostCKafkaFlowInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PostCKafkaFlowInfo::GetCKafkaRegion() const
{
    return m_cKafkaRegion;
}

void PostCKafkaFlowInfo::SetCKafkaRegion(const string& _cKafkaRegion)
{
    m_cKafkaRegion = _cKafkaRegion;
    m_cKafkaRegionHasBeenSet = true;
}

bool PostCKafkaFlowInfo::CKafkaRegionHasBeenSet() const
{
    return m_cKafkaRegionHasBeenSet;
}

string PostCKafkaFlowInfo::GetCKafkaID() const
{
    return m_cKafkaID;
}

void PostCKafkaFlowInfo::SetCKafkaID(const string& _cKafkaID)
{
    m_cKafkaID = _cKafkaID;
    m_cKafkaIDHasBeenSet = true;
}

bool PostCKafkaFlowInfo::CKafkaIDHasBeenSet() const
{
    return m_cKafkaIDHasBeenSet;
}

string PostCKafkaFlowInfo::GetBrokers() const
{
    return m_brokers;
}

void PostCKafkaFlowInfo::SetBrokers(const string& _brokers)
{
    m_brokers = _brokers;
    m_brokersHasBeenSet = true;
}

bool PostCKafkaFlowInfo::BrokersHasBeenSet() const
{
    return m_brokersHasBeenSet;
}

string PostCKafkaFlowInfo::GetVersion() const
{
    return m_version;
}

void PostCKafkaFlowInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool PostCKafkaFlowInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string PostCKafkaFlowInfo::GetTopic() const
{
    return m_topic;
}

void PostCKafkaFlowInfo::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool PostCKafkaFlowInfo::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string PostCKafkaFlowInfo::GetCompression() const
{
    return m_compression;
}

void PostCKafkaFlowInfo::SetCompression(const string& _compression)
{
    m_compression = _compression;
    m_compressionHasBeenSet = true;
}

bool PostCKafkaFlowInfo::CompressionHasBeenSet() const
{
    return m_compressionHasBeenSet;
}

int64_t PostCKafkaFlowInfo::GetSASLEnable() const
{
    return m_sASLEnable;
}

void PostCKafkaFlowInfo::SetSASLEnable(const int64_t& _sASLEnable)
{
    m_sASLEnable = _sASLEnable;
    m_sASLEnableHasBeenSet = true;
}

bool PostCKafkaFlowInfo::SASLEnableHasBeenSet() const
{
    return m_sASLEnableHasBeenSet;
}

string PostCKafkaFlowInfo::GetSASLUser() const
{
    return m_sASLUser;
}

void PostCKafkaFlowInfo::SetSASLUser(const string& _sASLUser)
{
    m_sASLUser = _sASLUser;
    m_sASLUserHasBeenSet = true;
}

bool PostCKafkaFlowInfo::SASLUserHasBeenSet() const
{
    return m_sASLUserHasBeenSet;
}

string PostCKafkaFlowInfo::GetSASLPassword() const
{
    return m_sASLPassword;
}

void PostCKafkaFlowInfo::SetSASLPassword(const string& _sASLPassword)
{
    m_sASLPassword = _sASLPassword;
    m_sASLPasswordHasBeenSet = true;
}

bool PostCKafkaFlowInfo::SASLPasswordHasBeenSet() const
{
    return m_sASLPasswordHasBeenSet;
}

string PostCKafkaFlowInfo::GetContent() const
{
    return m_content;
}

void PostCKafkaFlowInfo::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool PostCKafkaFlowInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

int64_t PostCKafkaFlowInfo::GetVipType() const
{
    return m_vipType;
}

void PostCKafkaFlowInfo::SetVipType(const int64_t& _vipType)
{
    m_vipType = _vipType;
    m_vipTypeHasBeenSet = true;
}

bool PostCKafkaFlowInfo::VipTypeHasBeenSet() const
{
    return m_vipTypeHasBeenSet;
}

FieldWriteConfig PostCKafkaFlowInfo::GetWriteConfig() const
{
    return m_writeConfig;
}

void PostCKafkaFlowInfo::SetWriteConfig(const FieldWriteConfig& _writeConfig)
{
    m_writeConfig = _writeConfig;
    m_writeConfigHasBeenSet = true;
}

bool PostCKafkaFlowInfo::WriteConfigHasBeenSet() const
{
    return m_writeConfigHasBeenSet;
}

