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

#include <tencentcloud/tdmq/v20200217/model/MsgLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

MsgLog::MsgLog() :
    m_msgIdHasBeenSet(false),
    m_producerNameHasBeenSet(false),
    m_produceTimeHasBeenSet(false),
    m_producerAddrHasBeenSet(false)
{
}

CoreInternalOutcome MsgLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MsgId") && !value["MsgId"].IsNull())
    {
        if (!value["MsgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgLog.MsgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgId = string(value["MsgId"].GetString());
        m_msgIdHasBeenSet = true;
    }

    if (value.HasMember("ProducerName") && !value["ProducerName"].IsNull())
    {
        if (!value["ProducerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgLog.ProducerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_producerName = string(value["ProducerName"].GetString());
        m_producerNameHasBeenSet = true;
    }

    if (value.HasMember("ProduceTime") && !value["ProduceTime"].IsNull())
    {
        if (!value["ProduceTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgLog.ProduceTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_produceTime = string(value["ProduceTime"].GetString());
        m_produceTimeHasBeenSet = true;
    }

    if (value.HasMember("ProducerAddr") && !value["ProducerAddr"].IsNull())
    {
        if (!value["ProducerAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgLog.ProducerAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_producerAddr = string(value["ProducerAddr"].GetString());
        m_producerAddrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MsgLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_msgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgId.c_str(), allocator).Move(), allocator);
    }

    if (m_producerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProducerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_producerName.c_str(), allocator).Move(), allocator);
    }

    if (m_produceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProduceTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_produceTime.c_str(), allocator).Move(), allocator);
    }

    if (m_producerAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProducerAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_producerAddr.c_str(), allocator).Move(), allocator);
    }

}


string MsgLog::GetMsgId() const
{
    return m_msgId;
}

void MsgLog::SetMsgId(const string& _msgId)
{
    m_msgId = _msgId;
    m_msgIdHasBeenSet = true;
}

bool MsgLog::MsgIdHasBeenSet() const
{
    return m_msgIdHasBeenSet;
}

string MsgLog::GetProducerName() const
{
    return m_producerName;
}

void MsgLog::SetProducerName(const string& _producerName)
{
    m_producerName = _producerName;
    m_producerNameHasBeenSet = true;
}

bool MsgLog::ProducerNameHasBeenSet() const
{
    return m_producerNameHasBeenSet;
}

string MsgLog::GetProduceTime() const
{
    return m_produceTime;
}

void MsgLog::SetProduceTime(const string& _produceTime)
{
    m_produceTime = _produceTime;
    m_produceTimeHasBeenSet = true;
}

bool MsgLog::ProduceTimeHasBeenSet() const
{
    return m_produceTimeHasBeenSet;
}

string MsgLog::GetProducerAddr() const
{
    return m_producerAddr;
}

void MsgLog::SetProducerAddr(const string& _producerAddr)
{
    m_producerAddr = _producerAddr;
    m_producerAddrHasBeenSet = true;
}

bool MsgLog::ProducerAddrHasBeenSet() const
{
    return m_producerAddrHasBeenSet;
}

