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

#include <tencentcloud/tdmq/v20200217/model/Connection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

Connection::Connection() :
    m_addressHasBeenSet(false),
    m_partitionsHasBeenSet(false),
    m_clientVersionHasBeenSet(false),
    m_producerNameHasBeenSet(false),
    m_producerIdHasBeenSet(false),
    m_averageMsgSizeHasBeenSet(false),
    m_msgThroughputInHasBeenSet(false)
{
}

CoreInternalOutcome Connection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Connection.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Partitions") && !value["Partitions"].IsNull())
    {
        if (!value["Partitions"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Connection.Partitions` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partitions = value["Partitions"].GetInt64();
        m_partitionsHasBeenSet = true;
    }

    if (value.HasMember("ClientVersion") && !value["ClientVersion"].IsNull())
    {
        if (!value["ClientVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Connection.ClientVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientVersion = string(value["ClientVersion"].GetString());
        m_clientVersionHasBeenSet = true;
    }

    if (value.HasMember("ProducerName") && !value["ProducerName"].IsNull())
    {
        if (!value["ProducerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Connection.ProducerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_producerName = string(value["ProducerName"].GetString());
        m_producerNameHasBeenSet = true;
    }

    if (value.HasMember("ProducerId") && !value["ProducerId"].IsNull())
    {
        if (!value["ProducerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Connection.ProducerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_producerId = string(value["ProducerId"].GetString());
        m_producerIdHasBeenSet = true;
    }

    if (value.HasMember("AverageMsgSize") && !value["AverageMsgSize"].IsNull())
    {
        if (!value["AverageMsgSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Connection.AverageMsgSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_averageMsgSize = string(value["AverageMsgSize"].GetString());
        m_averageMsgSizeHasBeenSet = true;
    }

    if (value.HasMember("MsgThroughputIn") && !value["MsgThroughputIn"].IsNull())
    {
        if (!value["MsgThroughputIn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Connection.MsgThroughputIn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgThroughputIn = string(value["MsgThroughputIn"].GetString());
        m_msgThroughputInHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Connection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitions, allocator);
    }

    if (m_clientVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_producerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProducerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_producerName.c_str(), allocator).Move(), allocator);
    }

    if (m_producerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProducerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_producerId.c_str(), allocator).Move(), allocator);
    }

    if (m_averageMsgSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AverageMsgSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_averageMsgSize.c_str(), allocator).Move(), allocator);
    }

    if (m_msgThroughputInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgThroughputIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgThroughputIn.c_str(), allocator).Move(), allocator);
    }

}


string Connection::GetAddress() const
{
    return m_address;
}

void Connection::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool Connection::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

int64_t Connection::GetPartitions() const
{
    return m_partitions;
}

void Connection::SetPartitions(const int64_t& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool Connection::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

string Connection::GetClientVersion() const
{
    return m_clientVersion;
}

void Connection::SetClientVersion(const string& _clientVersion)
{
    m_clientVersion = _clientVersion;
    m_clientVersionHasBeenSet = true;
}

bool Connection::ClientVersionHasBeenSet() const
{
    return m_clientVersionHasBeenSet;
}

string Connection::GetProducerName() const
{
    return m_producerName;
}

void Connection::SetProducerName(const string& _producerName)
{
    m_producerName = _producerName;
    m_producerNameHasBeenSet = true;
}

bool Connection::ProducerNameHasBeenSet() const
{
    return m_producerNameHasBeenSet;
}

string Connection::GetProducerId() const
{
    return m_producerId;
}

void Connection::SetProducerId(const string& _producerId)
{
    m_producerId = _producerId;
    m_producerIdHasBeenSet = true;
}

bool Connection::ProducerIdHasBeenSet() const
{
    return m_producerIdHasBeenSet;
}

string Connection::GetAverageMsgSize() const
{
    return m_averageMsgSize;
}

void Connection::SetAverageMsgSize(const string& _averageMsgSize)
{
    m_averageMsgSize = _averageMsgSize;
    m_averageMsgSizeHasBeenSet = true;
}

bool Connection::AverageMsgSizeHasBeenSet() const
{
    return m_averageMsgSizeHasBeenSet;
}

string Connection::GetMsgThroughputIn() const
{
    return m_msgThroughputIn;
}

void Connection::SetMsgThroughputIn(const string& _msgThroughputIn)
{
    m_msgThroughputIn = _msgThroughputIn;
    m_msgThroughputInHasBeenSet = true;
}

bool Connection::MsgThroughputInHasBeenSet() const
{
    return m_msgThroughputInHasBeenSet;
}

