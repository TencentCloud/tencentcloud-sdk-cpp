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
    m_topicHasBeenSet(false)
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

