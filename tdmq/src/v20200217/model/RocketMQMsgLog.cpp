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

#include <tencentcloud/tdmq/v20200217/model/RocketMQMsgLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RocketMQMsgLog::RocketMQMsgLog() :
    m_msgIdHasBeenSet(false),
    m_msgTagHasBeenSet(false),
    m_msgKeyHasBeenSet(false),
    m_producerAddrHasBeenSet(false),
    m_produceTimeHasBeenSet(false),
    m_pulsarMsgIdHasBeenSet(false),
    m_deadLetterResendTimesHasBeenSet(false),
    m_resendSuccessCountHasBeenSet(false)
{
}

CoreInternalOutcome RocketMQMsgLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MsgId") && !value["MsgId"].IsNull())
    {
        if (!value["MsgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQMsgLog.MsgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgId = string(value["MsgId"].GetString());
        m_msgIdHasBeenSet = true;
    }

    if (value.HasMember("MsgTag") && !value["MsgTag"].IsNull())
    {
        if (!value["MsgTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQMsgLog.MsgTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgTag = string(value["MsgTag"].GetString());
        m_msgTagHasBeenSet = true;
    }

    if (value.HasMember("MsgKey") && !value["MsgKey"].IsNull())
    {
        if (!value["MsgKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQMsgLog.MsgKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgKey = string(value["MsgKey"].GetString());
        m_msgKeyHasBeenSet = true;
    }

    if (value.HasMember("ProducerAddr") && !value["ProducerAddr"].IsNull())
    {
        if (!value["ProducerAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQMsgLog.ProducerAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_producerAddr = string(value["ProducerAddr"].GetString());
        m_producerAddrHasBeenSet = true;
    }

    if (value.HasMember("ProduceTime") && !value["ProduceTime"].IsNull())
    {
        if (!value["ProduceTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQMsgLog.ProduceTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_produceTime = string(value["ProduceTime"].GetString());
        m_produceTimeHasBeenSet = true;
    }

    if (value.HasMember("PulsarMsgId") && !value["PulsarMsgId"].IsNull())
    {
        if (!value["PulsarMsgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQMsgLog.PulsarMsgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pulsarMsgId = string(value["PulsarMsgId"].GetString());
        m_pulsarMsgIdHasBeenSet = true;
    }

    if (value.HasMember("DeadLetterResendTimes") && !value["DeadLetterResendTimes"].IsNull())
    {
        if (!value["DeadLetterResendTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQMsgLog.DeadLetterResendTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deadLetterResendTimes = value["DeadLetterResendTimes"].GetInt64();
        m_deadLetterResendTimesHasBeenSet = true;
    }

    if (value.HasMember("ResendSuccessCount") && !value["ResendSuccessCount"].IsNull())
    {
        if (!value["ResendSuccessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQMsgLog.ResendSuccessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resendSuccessCount = value["ResendSuccessCount"].GetInt64();
        m_resendSuccessCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RocketMQMsgLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_msgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgId.c_str(), allocator).Move(), allocator);
    }

    if (m_msgTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgTag.c_str(), allocator).Move(), allocator);
    }

    if (m_msgKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgKey.c_str(), allocator).Move(), allocator);
    }

    if (m_producerAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProducerAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_producerAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_produceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProduceTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_produceTime.c_str(), allocator).Move(), allocator);
    }

    if (m_pulsarMsgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PulsarMsgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pulsarMsgId.c_str(), allocator).Move(), allocator);
    }

    if (m_deadLetterResendTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLetterResendTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deadLetterResendTimes, allocator);
    }

    if (m_resendSuccessCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResendSuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resendSuccessCount, allocator);
    }

}


string RocketMQMsgLog::GetMsgId() const
{
    return m_msgId;
}

void RocketMQMsgLog::SetMsgId(const string& _msgId)
{
    m_msgId = _msgId;
    m_msgIdHasBeenSet = true;
}

bool RocketMQMsgLog::MsgIdHasBeenSet() const
{
    return m_msgIdHasBeenSet;
}

string RocketMQMsgLog::GetMsgTag() const
{
    return m_msgTag;
}

void RocketMQMsgLog::SetMsgTag(const string& _msgTag)
{
    m_msgTag = _msgTag;
    m_msgTagHasBeenSet = true;
}

bool RocketMQMsgLog::MsgTagHasBeenSet() const
{
    return m_msgTagHasBeenSet;
}

string RocketMQMsgLog::GetMsgKey() const
{
    return m_msgKey;
}

void RocketMQMsgLog::SetMsgKey(const string& _msgKey)
{
    m_msgKey = _msgKey;
    m_msgKeyHasBeenSet = true;
}

bool RocketMQMsgLog::MsgKeyHasBeenSet() const
{
    return m_msgKeyHasBeenSet;
}

string RocketMQMsgLog::GetProducerAddr() const
{
    return m_producerAddr;
}

void RocketMQMsgLog::SetProducerAddr(const string& _producerAddr)
{
    m_producerAddr = _producerAddr;
    m_producerAddrHasBeenSet = true;
}

bool RocketMQMsgLog::ProducerAddrHasBeenSet() const
{
    return m_producerAddrHasBeenSet;
}

string RocketMQMsgLog::GetProduceTime() const
{
    return m_produceTime;
}

void RocketMQMsgLog::SetProduceTime(const string& _produceTime)
{
    m_produceTime = _produceTime;
    m_produceTimeHasBeenSet = true;
}

bool RocketMQMsgLog::ProduceTimeHasBeenSet() const
{
    return m_produceTimeHasBeenSet;
}

string RocketMQMsgLog::GetPulsarMsgId() const
{
    return m_pulsarMsgId;
}

void RocketMQMsgLog::SetPulsarMsgId(const string& _pulsarMsgId)
{
    m_pulsarMsgId = _pulsarMsgId;
    m_pulsarMsgIdHasBeenSet = true;
}

bool RocketMQMsgLog::PulsarMsgIdHasBeenSet() const
{
    return m_pulsarMsgIdHasBeenSet;
}

int64_t RocketMQMsgLog::GetDeadLetterResendTimes() const
{
    return m_deadLetterResendTimes;
}

void RocketMQMsgLog::SetDeadLetterResendTimes(const int64_t& _deadLetterResendTimes)
{
    m_deadLetterResendTimes = _deadLetterResendTimes;
    m_deadLetterResendTimesHasBeenSet = true;
}

bool RocketMQMsgLog::DeadLetterResendTimesHasBeenSet() const
{
    return m_deadLetterResendTimesHasBeenSet;
}

int64_t RocketMQMsgLog::GetResendSuccessCount() const
{
    return m_resendSuccessCount;
}

void RocketMQMsgLog::SetResendSuccessCount(const int64_t& _resendSuccessCount)
{
    m_resendSuccessCount = _resendSuccessCount;
    m_resendSuccessCountHasBeenSet = true;
}

bool RocketMQMsgLog::ResendSuccessCountHasBeenSet() const
{
    return m_resendSuccessCountHasBeenSet;
}

