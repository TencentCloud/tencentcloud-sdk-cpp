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

#include <tencentcloud/tdmq/v20200217/model/ConsumerLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ConsumerLog::ConsumerLog() :
    m_msgIdHasBeenSet(false),
    m_consumerGroupHasBeenSet(false),
    m_consumerNameHasBeenSet(false),
    m_consumeTimeHasBeenSet(false),
    m_consumerAddrHasBeenSet(false),
    m_consumeUseTimeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome ConsumerLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MsgId") && !value["MsgId"].IsNull())
    {
        if (!value["MsgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerLog.MsgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgId = string(value["MsgId"].GetString());
        m_msgIdHasBeenSet = true;
    }

    if (value.HasMember("ConsumerGroup") && !value["ConsumerGroup"].IsNull())
    {
        if (!value["ConsumerGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerLog.ConsumerGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerGroup = string(value["ConsumerGroup"].GetString());
        m_consumerGroupHasBeenSet = true;
    }

    if (value.HasMember("ConsumerName") && !value["ConsumerName"].IsNull())
    {
        if (!value["ConsumerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerLog.ConsumerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerName = string(value["ConsumerName"].GetString());
        m_consumerNameHasBeenSet = true;
    }

    if (value.HasMember("ConsumeTime") && !value["ConsumeTime"].IsNull())
    {
        if (!value["ConsumeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerLog.ConsumeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumeTime = string(value["ConsumeTime"].GetString());
        m_consumeTimeHasBeenSet = true;
    }

    if (value.HasMember("ConsumerAddr") && !value["ConsumerAddr"].IsNull())
    {
        if (!value["ConsumerAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerLog.ConsumerAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerAddr = string(value["ConsumerAddr"].GetString());
        m_consumerAddrHasBeenSet = true;
    }

    if (value.HasMember("ConsumeUseTime") && !value["ConsumeUseTime"].IsNull())
    {
        if (!value["ConsumeUseTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerLog.ConsumeUseTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_consumeUseTime = value["ConsumeUseTime"].GetUint64();
        m_consumeUseTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerLog.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsumerLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_msgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgId.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerName.c_str(), allocator).Move(), allocator);
    }

    if (m_consumeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_consumeUseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumeUseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumeUseTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string ConsumerLog::GetMsgId() const
{
    return m_msgId;
}

void ConsumerLog::SetMsgId(const string& _msgId)
{
    m_msgId = _msgId;
    m_msgIdHasBeenSet = true;
}

bool ConsumerLog::MsgIdHasBeenSet() const
{
    return m_msgIdHasBeenSet;
}

string ConsumerLog::GetConsumerGroup() const
{
    return m_consumerGroup;
}

void ConsumerLog::SetConsumerGroup(const string& _consumerGroup)
{
    m_consumerGroup = _consumerGroup;
    m_consumerGroupHasBeenSet = true;
}

bool ConsumerLog::ConsumerGroupHasBeenSet() const
{
    return m_consumerGroupHasBeenSet;
}

string ConsumerLog::GetConsumerName() const
{
    return m_consumerName;
}

void ConsumerLog::SetConsumerName(const string& _consumerName)
{
    m_consumerName = _consumerName;
    m_consumerNameHasBeenSet = true;
}

bool ConsumerLog::ConsumerNameHasBeenSet() const
{
    return m_consumerNameHasBeenSet;
}

string ConsumerLog::GetConsumeTime() const
{
    return m_consumeTime;
}

void ConsumerLog::SetConsumeTime(const string& _consumeTime)
{
    m_consumeTime = _consumeTime;
    m_consumeTimeHasBeenSet = true;
}

bool ConsumerLog::ConsumeTimeHasBeenSet() const
{
    return m_consumeTimeHasBeenSet;
}

string ConsumerLog::GetConsumerAddr() const
{
    return m_consumerAddr;
}

void ConsumerLog::SetConsumerAddr(const string& _consumerAddr)
{
    m_consumerAddr = _consumerAddr;
    m_consumerAddrHasBeenSet = true;
}

bool ConsumerLog::ConsumerAddrHasBeenSet() const
{
    return m_consumerAddrHasBeenSet;
}

uint64_t ConsumerLog::GetConsumeUseTime() const
{
    return m_consumeUseTime;
}

void ConsumerLog::SetConsumeUseTime(const uint64_t& _consumeUseTime)
{
    m_consumeUseTime = _consumeUseTime;
    m_consumeUseTimeHasBeenSet = true;
}

bool ConsumerLog::ConsumeUseTimeHasBeenSet() const
{
    return m_consumeUseTimeHasBeenSet;
}

string ConsumerLog::GetStatus() const
{
    return m_status;
}

void ConsumerLog::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ConsumerLog::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

