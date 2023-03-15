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

#include <tencentcloud/tdmq/v20200217/model/RabbitMQClusterSpecInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RabbitMQClusterSpecInfo::RabbitMQClusterSpecInfo() :
    m_specNameHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_maxTpsHasBeenSet(false),
    m_maxBandWidthHasBeenSet(false),
    m_maxStorageHasBeenSet(false),
    m_publicNetworkTpsHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQClusterSpecInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpecName") && !value["SpecName"].IsNull())
    {
        if (!value["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterSpecInfo.SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(value["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterSpecInfo.NodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetUint64();
        m_nodeCountHasBeenSet = true;
    }

    if (value.HasMember("MaxTps") && !value["MaxTps"].IsNull())
    {
        if (!value["MaxTps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterSpecInfo.MaxTps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTps = value["MaxTps"].GetUint64();
        m_maxTpsHasBeenSet = true;
    }

    if (value.HasMember("MaxBandWidth") && !value["MaxBandWidth"].IsNull())
    {
        if (!value["MaxBandWidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterSpecInfo.MaxBandWidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBandWidth = value["MaxBandWidth"].GetUint64();
        m_maxBandWidthHasBeenSet = true;
    }

    if (value.HasMember("MaxStorage") && !value["MaxStorage"].IsNull())
    {
        if (!value["MaxStorage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterSpecInfo.MaxStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStorage = value["MaxStorage"].GetUint64();
        m_maxStorageHasBeenSet = true;
    }

    if (value.HasMember("PublicNetworkTps") && !value["PublicNetworkTps"].IsNull())
    {
        if (!value["PublicNetworkTps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterSpecInfo.PublicNetworkTps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_publicNetworkTps = value["PublicNetworkTps"].GetUint64();
        m_publicNetworkTpsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQClusterSpecInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
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

    if (m_maxStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStorage, allocator);
    }

    if (m_publicNetworkTpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicNetworkTps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicNetworkTps, allocator);
    }

}


string RabbitMQClusterSpecInfo::GetSpecName() const
{
    return m_specName;
}

void RabbitMQClusterSpecInfo::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool RabbitMQClusterSpecInfo::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

uint64_t RabbitMQClusterSpecInfo::GetNodeCount() const
{
    return m_nodeCount;
}

void RabbitMQClusterSpecInfo::SetNodeCount(const uint64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool RabbitMQClusterSpecInfo::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

uint64_t RabbitMQClusterSpecInfo::GetMaxTps() const
{
    return m_maxTps;
}

void RabbitMQClusterSpecInfo::SetMaxTps(const uint64_t& _maxTps)
{
    m_maxTps = _maxTps;
    m_maxTpsHasBeenSet = true;
}

bool RabbitMQClusterSpecInfo::MaxTpsHasBeenSet() const
{
    return m_maxTpsHasBeenSet;
}

uint64_t RabbitMQClusterSpecInfo::GetMaxBandWidth() const
{
    return m_maxBandWidth;
}

void RabbitMQClusterSpecInfo::SetMaxBandWidth(const uint64_t& _maxBandWidth)
{
    m_maxBandWidth = _maxBandWidth;
    m_maxBandWidthHasBeenSet = true;
}

bool RabbitMQClusterSpecInfo::MaxBandWidthHasBeenSet() const
{
    return m_maxBandWidthHasBeenSet;
}

uint64_t RabbitMQClusterSpecInfo::GetMaxStorage() const
{
    return m_maxStorage;
}

void RabbitMQClusterSpecInfo::SetMaxStorage(const uint64_t& _maxStorage)
{
    m_maxStorage = _maxStorage;
    m_maxStorageHasBeenSet = true;
}

bool RabbitMQClusterSpecInfo::MaxStorageHasBeenSet() const
{
    return m_maxStorageHasBeenSet;
}

uint64_t RabbitMQClusterSpecInfo::GetPublicNetworkTps() const
{
    return m_publicNetworkTps;
}

void RabbitMQClusterSpecInfo::SetPublicNetworkTps(const uint64_t& _publicNetworkTps)
{
    m_publicNetworkTps = _publicNetworkTps;
    m_publicNetworkTpsHasBeenSet = true;
}

bool RabbitMQClusterSpecInfo::PublicNetworkTpsHasBeenSet() const
{
    return m_publicNetworkTpsHasBeenSet;
}

