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

#include <tencentcloud/tdmq/v20200217/model/Consumer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

Consumer::Consumer() :
    m_connectedSinceHasBeenSet(false),
    m_consumerAddrHasBeenSet(false),
    m_consumerNameHasBeenSet(false),
    m_clientVersionHasBeenSet(false),
    m_partitionHasBeenSet(false)
{
}

CoreInternalOutcome Consumer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConnectedSince") && !value["ConnectedSince"].IsNull())
    {
        if (!value["ConnectedSince"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Consumer.ConnectedSince` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectedSince = string(value["ConnectedSince"].GetString());
        m_connectedSinceHasBeenSet = true;
    }

    if (value.HasMember("ConsumerAddr") && !value["ConsumerAddr"].IsNull())
    {
        if (!value["ConsumerAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Consumer.ConsumerAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerAddr = string(value["ConsumerAddr"].GetString());
        m_consumerAddrHasBeenSet = true;
    }

    if (value.HasMember("ConsumerName") && !value["ConsumerName"].IsNull())
    {
        if (!value["ConsumerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Consumer.ConsumerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerName = string(value["ConsumerName"].GetString());
        m_consumerNameHasBeenSet = true;
    }

    if (value.HasMember("ClientVersion") && !value["ClientVersion"].IsNull())
    {
        if (!value["ClientVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Consumer.ClientVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientVersion = string(value["ClientVersion"].GetString());
        m_clientVersionHasBeenSet = true;
    }

    if (value.HasMember("Partition") && !value["Partition"].IsNull())
    {
        if (!value["Partition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Consumer.Partition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partition = value["Partition"].GetInt64();
        m_partitionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Consumer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_connectedSinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectedSince";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectedSince.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerName.c_str(), allocator).Move(), allocator);
    }

    if (m_clientVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partition, allocator);
    }

}


string Consumer::GetConnectedSince() const
{
    return m_connectedSince;
}

void Consumer::SetConnectedSince(const string& _connectedSince)
{
    m_connectedSince = _connectedSince;
    m_connectedSinceHasBeenSet = true;
}

bool Consumer::ConnectedSinceHasBeenSet() const
{
    return m_connectedSinceHasBeenSet;
}

string Consumer::GetConsumerAddr() const
{
    return m_consumerAddr;
}

void Consumer::SetConsumerAddr(const string& _consumerAddr)
{
    m_consumerAddr = _consumerAddr;
    m_consumerAddrHasBeenSet = true;
}

bool Consumer::ConsumerAddrHasBeenSet() const
{
    return m_consumerAddrHasBeenSet;
}

string Consumer::GetConsumerName() const
{
    return m_consumerName;
}

void Consumer::SetConsumerName(const string& _consumerName)
{
    m_consumerName = _consumerName;
    m_consumerNameHasBeenSet = true;
}

bool Consumer::ConsumerNameHasBeenSet() const
{
    return m_consumerNameHasBeenSet;
}

string Consumer::GetClientVersion() const
{
    return m_clientVersion;
}

void Consumer::SetClientVersion(const string& _clientVersion)
{
    m_clientVersion = _clientVersion;
    m_clientVersionHasBeenSet = true;
}

bool Consumer::ClientVersionHasBeenSet() const
{
    return m_clientVersionHasBeenSet;
}

int64_t Consumer::GetPartition() const
{
    return m_partition;
}

void Consumer::SetPartition(const int64_t& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool Consumer::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

