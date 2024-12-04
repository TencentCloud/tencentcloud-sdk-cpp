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

#include <tencentcloud/ckafka/v20190819/model/Config.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

Config::Config() :
    m_retentionHasBeenSet(false),
    m_minInsyncReplicasHasBeenSet(false),
    m_cleanUpPolicyHasBeenSet(false),
    m_segmentMsHasBeenSet(false),
    m_uncleanLeaderElectionEnableHasBeenSet(false),
    m_segmentBytesHasBeenSet(false),
    m_maxMessageBytesHasBeenSet(false),
    m_retentionBytesHasBeenSet(false),
    m_logMsgTimestampTypeHasBeenSet(false)
{
}

CoreInternalOutcome Config::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Retention") && !value["Retention"].IsNull())
    {
        if (!value["Retention"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Config.Retention` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retention = value["Retention"].GetInt64();
        m_retentionHasBeenSet = true;
    }

    if (value.HasMember("MinInsyncReplicas") && !value["MinInsyncReplicas"].IsNull())
    {
        if (!value["MinInsyncReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Config.MinInsyncReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minInsyncReplicas = value["MinInsyncReplicas"].GetInt64();
        m_minInsyncReplicasHasBeenSet = true;
    }

    if (value.HasMember("CleanUpPolicy") && !value["CleanUpPolicy"].IsNull())
    {
        if (!value["CleanUpPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Config.CleanUpPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cleanUpPolicy = string(value["CleanUpPolicy"].GetString());
        m_cleanUpPolicyHasBeenSet = true;
    }

    if (value.HasMember("SegmentMs") && !value["SegmentMs"].IsNull())
    {
        if (!value["SegmentMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Config.SegmentMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_segmentMs = value["SegmentMs"].GetInt64();
        m_segmentMsHasBeenSet = true;
    }

    if (value.HasMember("UncleanLeaderElectionEnable") && !value["UncleanLeaderElectionEnable"].IsNull())
    {
        if (!value["UncleanLeaderElectionEnable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Config.UncleanLeaderElectionEnable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uncleanLeaderElectionEnable = value["UncleanLeaderElectionEnable"].GetInt64();
        m_uncleanLeaderElectionEnableHasBeenSet = true;
    }

    if (value.HasMember("SegmentBytes") && !value["SegmentBytes"].IsNull())
    {
        if (!value["SegmentBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Config.SegmentBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_segmentBytes = value["SegmentBytes"].GetInt64();
        m_segmentBytesHasBeenSet = true;
    }

    if (value.HasMember("MaxMessageBytes") && !value["MaxMessageBytes"].IsNull())
    {
        if (!value["MaxMessageBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Config.MaxMessageBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMessageBytes = value["MaxMessageBytes"].GetInt64();
        m_maxMessageBytesHasBeenSet = true;
    }

    if (value.HasMember("RetentionBytes") && !value["RetentionBytes"].IsNull())
    {
        if (!value["RetentionBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Config.RetentionBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionBytes = value["RetentionBytes"].GetInt64();
        m_retentionBytesHasBeenSet = true;
    }

    if (value.HasMember("LogMsgTimestampType") && !value["LogMsgTimestampType"].IsNull())
    {
        if (!value["LogMsgTimestampType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Config.LogMsgTimestampType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logMsgTimestampType = string(value["LogMsgTimestampType"].GetString());
        m_logMsgTimestampTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Config::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_retentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Retention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retention, allocator);
    }

    if (m_minInsyncReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinInsyncReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minInsyncReplicas, allocator);
    }

    if (m_cleanUpPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CleanUpPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cleanUpPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_segmentMs, allocator);
    }

    if (m_uncleanLeaderElectionEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UncleanLeaderElectionEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uncleanLeaderElectionEnable, allocator);
    }

    if (m_segmentBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_segmentBytes, allocator);
    }

    if (m_maxMessageBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMessageBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMessageBytes, allocator);
    }

    if (m_retentionBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionBytes, allocator);
    }

    if (m_logMsgTimestampTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogMsgTimestampType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logMsgTimestampType.c_str(), allocator).Move(), allocator);
    }

}


int64_t Config::GetRetention() const
{
    return m_retention;
}

void Config::SetRetention(const int64_t& _retention)
{
    m_retention = _retention;
    m_retentionHasBeenSet = true;
}

bool Config::RetentionHasBeenSet() const
{
    return m_retentionHasBeenSet;
}

int64_t Config::GetMinInsyncReplicas() const
{
    return m_minInsyncReplicas;
}

void Config::SetMinInsyncReplicas(const int64_t& _minInsyncReplicas)
{
    m_minInsyncReplicas = _minInsyncReplicas;
    m_minInsyncReplicasHasBeenSet = true;
}

bool Config::MinInsyncReplicasHasBeenSet() const
{
    return m_minInsyncReplicasHasBeenSet;
}

string Config::GetCleanUpPolicy() const
{
    return m_cleanUpPolicy;
}

void Config::SetCleanUpPolicy(const string& _cleanUpPolicy)
{
    m_cleanUpPolicy = _cleanUpPolicy;
    m_cleanUpPolicyHasBeenSet = true;
}

bool Config::CleanUpPolicyHasBeenSet() const
{
    return m_cleanUpPolicyHasBeenSet;
}

int64_t Config::GetSegmentMs() const
{
    return m_segmentMs;
}

void Config::SetSegmentMs(const int64_t& _segmentMs)
{
    m_segmentMs = _segmentMs;
    m_segmentMsHasBeenSet = true;
}

bool Config::SegmentMsHasBeenSet() const
{
    return m_segmentMsHasBeenSet;
}

int64_t Config::GetUncleanLeaderElectionEnable() const
{
    return m_uncleanLeaderElectionEnable;
}

void Config::SetUncleanLeaderElectionEnable(const int64_t& _uncleanLeaderElectionEnable)
{
    m_uncleanLeaderElectionEnable = _uncleanLeaderElectionEnable;
    m_uncleanLeaderElectionEnableHasBeenSet = true;
}

bool Config::UncleanLeaderElectionEnableHasBeenSet() const
{
    return m_uncleanLeaderElectionEnableHasBeenSet;
}

int64_t Config::GetSegmentBytes() const
{
    return m_segmentBytes;
}

void Config::SetSegmentBytes(const int64_t& _segmentBytes)
{
    m_segmentBytes = _segmentBytes;
    m_segmentBytesHasBeenSet = true;
}

bool Config::SegmentBytesHasBeenSet() const
{
    return m_segmentBytesHasBeenSet;
}

int64_t Config::GetMaxMessageBytes() const
{
    return m_maxMessageBytes;
}

void Config::SetMaxMessageBytes(const int64_t& _maxMessageBytes)
{
    m_maxMessageBytes = _maxMessageBytes;
    m_maxMessageBytesHasBeenSet = true;
}

bool Config::MaxMessageBytesHasBeenSet() const
{
    return m_maxMessageBytesHasBeenSet;
}

int64_t Config::GetRetentionBytes() const
{
    return m_retentionBytes;
}

void Config::SetRetentionBytes(const int64_t& _retentionBytes)
{
    m_retentionBytes = _retentionBytes;
    m_retentionBytesHasBeenSet = true;
}

bool Config::RetentionBytesHasBeenSet() const
{
    return m_retentionBytesHasBeenSet;
}

string Config::GetLogMsgTimestampType() const
{
    return m_logMsgTimestampType;
}

void Config::SetLogMsgTimestampType(const string& _logMsgTimestampType)
{
    m_logMsgTimestampType = _logMsgTimestampType;
    m_logMsgTimestampTypeHasBeenSet = true;
}

bool Config::LogMsgTimestampTypeHasBeenSet() const
{
    return m_logMsgTimestampTypeHasBeenSet;
}

