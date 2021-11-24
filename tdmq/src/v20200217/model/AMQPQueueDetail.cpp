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

#include <tencentcloud/tdmq/v20200217/model/AMQPQueueDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

AMQPQueueDetail::AMQPQueueDetail() :
    m_nameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_destBindedNumHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_onlineConsumerNumHasBeenSet(false),
    m_tpsHasBeenSet(false),
    m_accumulativeMsgNumHasBeenSet(false),
    m_autoDeleteHasBeenSet(false),
    m_deadLetterExchangeHasBeenSet(false),
    m_deadLetterRoutingKeyHasBeenSet(false)
{
}

CoreInternalOutcome AMQPQueueDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPQueueDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPQueueDetail.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("DestBindedNum") && !value["DestBindedNum"].IsNull())
    {
        if (!value["DestBindedNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPQueueDetail.DestBindedNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_destBindedNum = value["DestBindedNum"].GetUint64();
        m_destBindedNumHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPQueueDetail.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPQueueDetail.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("OnlineConsumerNum") && !value["OnlineConsumerNum"].IsNull())
    {
        if (!value["OnlineConsumerNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPQueueDetail.OnlineConsumerNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_onlineConsumerNum = value["OnlineConsumerNum"].GetUint64();
        m_onlineConsumerNumHasBeenSet = true;
    }

    if (value.HasMember("Tps") && !value["Tps"].IsNull())
    {
        if (!value["Tps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPQueueDetail.Tps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tps = value["Tps"].GetUint64();
        m_tpsHasBeenSet = true;
    }

    if (value.HasMember("AccumulativeMsgNum") && !value["AccumulativeMsgNum"].IsNull())
    {
        if (!value["AccumulativeMsgNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPQueueDetail.AccumulativeMsgNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accumulativeMsgNum = value["AccumulativeMsgNum"].GetUint64();
        m_accumulativeMsgNumHasBeenSet = true;
    }

    if (value.HasMember("AutoDelete") && !value["AutoDelete"].IsNull())
    {
        if (!value["AutoDelete"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPQueueDetail.AutoDelete` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoDelete = value["AutoDelete"].GetBool();
        m_autoDeleteHasBeenSet = true;
    }

    if (value.HasMember("DeadLetterExchange") && !value["DeadLetterExchange"].IsNull())
    {
        if (!value["DeadLetterExchange"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPQueueDetail.DeadLetterExchange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadLetterExchange = string(value["DeadLetterExchange"].GetString());
        m_deadLetterExchangeHasBeenSet = true;
    }

    if (value.HasMember("DeadLetterRoutingKey") && !value["DeadLetterRoutingKey"].IsNull())
    {
        if (!value["DeadLetterRoutingKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPQueueDetail.DeadLetterRoutingKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadLetterRoutingKey = string(value["DeadLetterRoutingKey"].GetString());
        m_deadLetterRoutingKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AMQPQueueDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_destBindedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestBindedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_destBindedNum, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_onlineConsumerNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineConsumerNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlineConsumerNum, allocator);
    }

    if (m_tpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tps, allocator);
    }

    if (m_accumulativeMsgNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccumulativeMsgNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accumulativeMsgNum, allocator);
    }

    if (m_autoDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoDelete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoDelete, allocator);
    }

    if (m_deadLetterExchangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLetterExchange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadLetterExchange.c_str(), allocator).Move(), allocator);
    }

    if (m_deadLetterRoutingKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLetterRoutingKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadLetterRoutingKey.c_str(), allocator).Move(), allocator);
    }

}


string AMQPQueueDetail::GetName() const
{
    return m_name;
}

void AMQPQueueDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AMQPQueueDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AMQPQueueDetail::GetRemark() const
{
    return m_remark;
}

void AMQPQueueDetail::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AMQPQueueDetail::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t AMQPQueueDetail::GetDestBindedNum() const
{
    return m_destBindedNum;
}

void AMQPQueueDetail::SetDestBindedNum(const uint64_t& _destBindedNum)
{
    m_destBindedNum = _destBindedNum;
    m_destBindedNumHasBeenSet = true;
}

bool AMQPQueueDetail::DestBindedNumHasBeenSet() const
{
    return m_destBindedNumHasBeenSet;
}

uint64_t AMQPQueueDetail::GetCreateTime() const
{
    return m_createTime;
}

void AMQPQueueDetail::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AMQPQueueDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t AMQPQueueDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void AMQPQueueDetail::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AMQPQueueDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t AMQPQueueDetail::GetOnlineConsumerNum() const
{
    return m_onlineConsumerNum;
}

void AMQPQueueDetail::SetOnlineConsumerNum(const uint64_t& _onlineConsumerNum)
{
    m_onlineConsumerNum = _onlineConsumerNum;
    m_onlineConsumerNumHasBeenSet = true;
}

bool AMQPQueueDetail::OnlineConsumerNumHasBeenSet() const
{
    return m_onlineConsumerNumHasBeenSet;
}

uint64_t AMQPQueueDetail::GetTps() const
{
    return m_tps;
}

void AMQPQueueDetail::SetTps(const uint64_t& _tps)
{
    m_tps = _tps;
    m_tpsHasBeenSet = true;
}

bool AMQPQueueDetail::TpsHasBeenSet() const
{
    return m_tpsHasBeenSet;
}

uint64_t AMQPQueueDetail::GetAccumulativeMsgNum() const
{
    return m_accumulativeMsgNum;
}

void AMQPQueueDetail::SetAccumulativeMsgNum(const uint64_t& _accumulativeMsgNum)
{
    m_accumulativeMsgNum = _accumulativeMsgNum;
    m_accumulativeMsgNumHasBeenSet = true;
}

bool AMQPQueueDetail::AccumulativeMsgNumHasBeenSet() const
{
    return m_accumulativeMsgNumHasBeenSet;
}

bool AMQPQueueDetail::GetAutoDelete() const
{
    return m_autoDelete;
}

void AMQPQueueDetail::SetAutoDelete(const bool& _autoDelete)
{
    m_autoDelete = _autoDelete;
    m_autoDeleteHasBeenSet = true;
}

bool AMQPQueueDetail::AutoDeleteHasBeenSet() const
{
    return m_autoDeleteHasBeenSet;
}

string AMQPQueueDetail::GetDeadLetterExchange() const
{
    return m_deadLetterExchange;
}

void AMQPQueueDetail::SetDeadLetterExchange(const string& _deadLetterExchange)
{
    m_deadLetterExchange = _deadLetterExchange;
    m_deadLetterExchangeHasBeenSet = true;
}

bool AMQPQueueDetail::DeadLetterExchangeHasBeenSet() const
{
    return m_deadLetterExchangeHasBeenSet;
}

string AMQPQueueDetail::GetDeadLetterRoutingKey() const
{
    return m_deadLetterRoutingKey;
}

void AMQPQueueDetail::SetDeadLetterRoutingKey(const string& _deadLetterRoutingKey)
{
    m_deadLetterRoutingKey = _deadLetterRoutingKey;
    m_deadLetterRoutingKeyHasBeenSet = true;
}

bool AMQPQueueDetail::DeadLetterRoutingKeyHasBeenSet() const
{
    return m_deadLetterRoutingKeyHasBeenSet;
}

