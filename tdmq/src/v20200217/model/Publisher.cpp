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

#include <tencentcloud/tdmq/v20200217/model/Publisher.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

Publisher::Publisher() :
    m_producerIdHasBeenSet(false),
    m_producerNameHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_clientVersionHasBeenSet(false),
    m_msgRateInHasBeenSet(false),
    m_msgThroughputInHasBeenSet(false),
    m_averageMsgSizeHasBeenSet(false),
    m_connectedSinceHasBeenSet(false),
    m_partitionHasBeenSet(false)
{
}

CoreInternalOutcome Publisher::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProducerId") && !value["ProducerId"].IsNull())
    {
        if (!value["ProducerId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Publisher.ProducerId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_producerId = value["ProducerId"].GetInt64();
        m_producerIdHasBeenSet = true;
    }

    if (value.HasMember("ProducerName") && !value["ProducerName"].IsNull())
    {
        if (!value["ProducerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Publisher.ProducerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_producerName = string(value["ProducerName"].GetString());
        m_producerNameHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Publisher.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("ClientVersion") && !value["ClientVersion"].IsNull())
    {
        if (!value["ClientVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Publisher.ClientVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientVersion = string(value["ClientVersion"].GetString());
        m_clientVersionHasBeenSet = true;
    }

    if (value.HasMember("MsgRateIn") && !value["MsgRateIn"].IsNull())
    {
        if (!value["MsgRateIn"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Publisher.MsgRateIn` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_msgRateIn = value["MsgRateIn"].GetDouble();
        m_msgRateInHasBeenSet = true;
    }

    if (value.HasMember("MsgThroughputIn") && !value["MsgThroughputIn"].IsNull())
    {
        if (!value["MsgThroughputIn"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Publisher.MsgThroughputIn` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_msgThroughputIn = value["MsgThroughputIn"].GetDouble();
        m_msgThroughputInHasBeenSet = true;
    }

    if (value.HasMember("AverageMsgSize") && !value["AverageMsgSize"].IsNull())
    {
        if (!value["AverageMsgSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Publisher.AverageMsgSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_averageMsgSize = value["AverageMsgSize"].GetDouble();
        m_averageMsgSizeHasBeenSet = true;
    }

    if (value.HasMember("ConnectedSince") && !value["ConnectedSince"].IsNull())
    {
        if (!value["ConnectedSince"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Publisher.ConnectedSince` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectedSince = string(value["ConnectedSince"].GetString());
        m_connectedSinceHasBeenSet = true;
    }

    if (value.HasMember("Partition") && !value["Partition"].IsNull())
    {
        if (!value["Partition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Publisher.Partition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partition = value["Partition"].GetInt64();
        m_partitionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Publisher::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_producerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProducerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_producerId, allocator);
    }

    if (m_producerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProducerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_producerName.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_clientVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_msgRateInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgRateIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgRateIn, allocator);
    }

    if (m_msgThroughputInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgThroughputIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgThroughputIn, allocator);
    }

    if (m_averageMsgSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AverageMsgSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_averageMsgSize, allocator);
    }

    if (m_connectedSinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectedSince";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectedSince.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partition, allocator);
    }

}


int64_t Publisher::GetProducerId() const
{
    return m_producerId;
}

void Publisher::SetProducerId(const int64_t& _producerId)
{
    m_producerId = _producerId;
    m_producerIdHasBeenSet = true;
}

bool Publisher::ProducerIdHasBeenSet() const
{
    return m_producerIdHasBeenSet;
}

string Publisher::GetProducerName() const
{
    return m_producerName;
}

void Publisher::SetProducerName(const string& _producerName)
{
    m_producerName = _producerName;
    m_producerNameHasBeenSet = true;
}

bool Publisher::ProducerNameHasBeenSet() const
{
    return m_producerNameHasBeenSet;
}

string Publisher::GetAddress() const
{
    return m_address;
}

void Publisher::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool Publisher::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string Publisher::GetClientVersion() const
{
    return m_clientVersion;
}

void Publisher::SetClientVersion(const string& _clientVersion)
{
    m_clientVersion = _clientVersion;
    m_clientVersionHasBeenSet = true;
}

bool Publisher::ClientVersionHasBeenSet() const
{
    return m_clientVersionHasBeenSet;
}

double Publisher::GetMsgRateIn() const
{
    return m_msgRateIn;
}

void Publisher::SetMsgRateIn(const double& _msgRateIn)
{
    m_msgRateIn = _msgRateIn;
    m_msgRateInHasBeenSet = true;
}

bool Publisher::MsgRateInHasBeenSet() const
{
    return m_msgRateInHasBeenSet;
}

double Publisher::GetMsgThroughputIn() const
{
    return m_msgThroughputIn;
}

void Publisher::SetMsgThroughputIn(const double& _msgThroughputIn)
{
    m_msgThroughputIn = _msgThroughputIn;
    m_msgThroughputInHasBeenSet = true;
}

bool Publisher::MsgThroughputInHasBeenSet() const
{
    return m_msgThroughputInHasBeenSet;
}

double Publisher::GetAverageMsgSize() const
{
    return m_averageMsgSize;
}

void Publisher::SetAverageMsgSize(const double& _averageMsgSize)
{
    m_averageMsgSize = _averageMsgSize;
    m_averageMsgSizeHasBeenSet = true;
}

bool Publisher::AverageMsgSizeHasBeenSet() const
{
    return m_averageMsgSizeHasBeenSet;
}

string Publisher::GetConnectedSince() const
{
    return m_connectedSince;
}

void Publisher::SetConnectedSince(const string& _connectedSince)
{
    m_connectedSince = _connectedSince;
    m_connectedSinceHasBeenSet = true;
}

bool Publisher::ConnectedSinceHasBeenSet() const
{
    return m_connectedSinceHasBeenSet;
}

int64_t Publisher::GetPartition() const
{
    return m_partition;
}

void Publisher::SetPartition(const int64_t& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool Publisher::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

