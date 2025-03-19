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

#include <tencentcloud/tdmq/v20200217/model/PulsarProClusterSpecInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

PulsarProClusterSpecInfo::PulsarProClusterSpecInfo() :
    m_specNameHasBeenSet(false),
    m_maxTpsHasBeenSet(false),
    m_maxBandWidthHasBeenSet(false),
    m_maxNamespacesHasBeenSet(false),
    m_maxTopicsHasBeenSet(false),
    m_scalableTpsHasBeenSet(false),
    m_maxPartitionsHasBeenSet(false),
    m_maxDelayedMessagesHasBeenSet(false)
{
}

CoreInternalOutcome PulsarProClusterSpecInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpecName") && !value["SpecName"].IsNull())
    {
        if (!value["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProClusterSpecInfo.SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(value["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (value.HasMember("MaxTps") && !value["MaxTps"].IsNull())
    {
        if (!value["MaxTps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProClusterSpecInfo.MaxTps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTps = value["MaxTps"].GetUint64();
        m_maxTpsHasBeenSet = true;
    }

    if (value.HasMember("MaxBandWidth") && !value["MaxBandWidth"].IsNull())
    {
        if (!value["MaxBandWidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProClusterSpecInfo.MaxBandWidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBandWidth = value["MaxBandWidth"].GetUint64();
        m_maxBandWidthHasBeenSet = true;
    }

    if (value.HasMember("MaxNamespaces") && !value["MaxNamespaces"].IsNull())
    {
        if (!value["MaxNamespaces"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProClusterSpecInfo.MaxNamespaces` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNamespaces = value["MaxNamespaces"].GetUint64();
        m_maxNamespacesHasBeenSet = true;
    }

    if (value.HasMember("MaxTopics") && !value["MaxTopics"].IsNull())
    {
        if (!value["MaxTopics"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProClusterSpecInfo.MaxTopics` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTopics = value["MaxTopics"].GetUint64();
        m_maxTopicsHasBeenSet = true;
    }

    if (value.HasMember("ScalableTps") && !value["ScalableTps"].IsNull())
    {
        if (!value["ScalableTps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProClusterSpecInfo.ScalableTps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scalableTps = value["ScalableTps"].GetUint64();
        m_scalableTpsHasBeenSet = true;
    }

    if (value.HasMember("MaxPartitions") && !value["MaxPartitions"].IsNull())
    {
        if (!value["MaxPartitions"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProClusterSpecInfo.MaxPartitions` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxPartitions = value["MaxPartitions"].GetUint64();
        m_maxPartitionsHasBeenSet = true;
    }

    if (value.HasMember("MaxDelayedMessages") && !value["MaxDelayedMessages"].IsNull())
    {
        if (!value["MaxDelayedMessages"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PulsarProClusterSpecInfo.MaxDelayedMessages` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDelayedMessages = value["MaxDelayedMessages"].GetInt64();
        m_maxDelayedMessagesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PulsarProClusterSpecInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
    }

    if (m_maxTpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTps, allocator);
    }

    if (m_maxBandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBandWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBandWidth, allocator);
    }

    if (m_maxNamespacesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNamespaces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxNamespaces, allocator);
    }

    if (m_maxTopicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTopics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTopics, allocator);
    }

    if (m_scalableTpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalableTps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scalableTps, allocator);
    }

    if (m_maxPartitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxPartitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxPartitions, allocator);
    }

    if (m_maxDelayedMessagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDelayedMessages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDelayedMessages, allocator);
    }

}


string PulsarProClusterSpecInfo::GetSpecName() const
{
    return m_specName;
}

void PulsarProClusterSpecInfo::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool PulsarProClusterSpecInfo::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

uint64_t PulsarProClusterSpecInfo::GetMaxTps() const
{
    return m_maxTps;
}

void PulsarProClusterSpecInfo::SetMaxTps(const uint64_t& _maxTps)
{
    m_maxTps = _maxTps;
    m_maxTpsHasBeenSet = true;
}

bool PulsarProClusterSpecInfo::MaxTpsHasBeenSet() const
{
    return m_maxTpsHasBeenSet;
}

uint64_t PulsarProClusterSpecInfo::GetMaxBandWidth() const
{
    return m_maxBandWidth;
}

void PulsarProClusterSpecInfo::SetMaxBandWidth(const uint64_t& _maxBandWidth)
{
    m_maxBandWidth = _maxBandWidth;
    m_maxBandWidthHasBeenSet = true;
}

bool PulsarProClusterSpecInfo::MaxBandWidthHasBeenSet() const
{
    return m_maxBandWidthHasBeenSet;
}

uint64_t PulsarProClusterSpecInfo::GetMaxNamespaces() const
{
    return m_maxNamespaces;
}

void PulsarProClusterSpecInfo::SetMaxNamespaces(const uint64_t& _maxNamespaces)
{
    m_maxNamespaces = _maxNamespaces;
    m_maxNamespacesHasBeenSet = true;
}

bool PulsarProClusterSpecInfo::MaxNamespacesHasBeenSet() const
{
    return m_maxNamespacesHasBeenSet;
}

uint64_t PulsarProClusterSpecInfo::GetMaxTopics() const
{
    return m_maxTopics;
}

void PulsarProClusterSpecInfo::SetMaxTopics(const uint64_t& _maxTopics)
{
    m_maxTopics = _maxTopics;
    m_maxTopicsHasBeenSet = true;
}

bool PulsarProClusterSpecInfo::MaxTopicsHasBeenSet() const
{
    return m_maxTopicsHasBeenSet;
}

uint64_t PulsarProClusterSpecInfo::GetScalableTps() const
{
    return m_scalableTps;
}

void PulsarProClusterSpecInfo::SetScalableTps(const uint64_t& _scalableTps)
{
    m_scalableTps = _scalableTps;
    m_scalableTpsHasBeenSet = true;
}

bool PulsarProClusterSpecInfo::ScalableTpsHasBeenSet() const
{
    return m_scalableTpsHasBeenSet;
}

uint64_t PulsarProClusterSpecInfo::GetMaxPartitions() const
{
    return m_maxPartitions;
}

void PulsarProClusterSpecInfo::SetMaxPartitions(const uint64_t& _maxPartitions)
{
    m_maxPartitions = _maxPartitions;
    m_maxPartitionsHasBeenSet = true;
}

bool PulsarProClusterSpecInfo::MaxPartitionsHasBeenSet() const
{
    return m_maxPartitionsHasBeenSet;
}

int64_t PulsarProClusterSpecInfo::GetMaxDelayedMessages() const
{
    return m_maxDelayedMessages;
}

void PulsarProClusterSpecInfo::SetMaxDelayedMessages(const int64_t& _maxDelayedMessages)
{
    m_maxDelayedMessages = _maxDelayedMessages;
    m_maxDelayedMessagesHasBeenSet = true;
}

bool PulsarProClusterSpecInfo::MaxDelayedMessagesHasBeenSet() const
{
    return m_maxDelayedMessagesHasBeenSet;
}

