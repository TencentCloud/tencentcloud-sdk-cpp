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

#include <tencentcloud/tdmq/v20200217/model/RabbitMQQueueListInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RabbitMQQueueListInfo::RabbitMQQueueListInfo() :
    m_queueNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_consumerDetailHasBeenSet(false),
    m_queueTypeHasBeenSet(false),
    m_messageHeapCountHasBeenSet(false),
    m_messageRateInHasBeenSet(false),
    m_messageRateOutHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQQueueListInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QueueName") && !value["QueueName"].IsNull())
    {
        if (!value["QueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(value["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("ConsumerDetail") && !value["ConsumerDetail"].IsNull())
    {
        if (!value["ConsumerDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.ConsumerDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_consumerDetail.Deserialize(value["ConsumerDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_consumerDetailHasBeenSet = true;
    }

    if (value.HasMember("QueueType") && !value["QueueType"].IsNull())
    {
        if (!value["QueueType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.QueueType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueType = string(value["QueueType"].GetString());
        m_queueTypeHasBeenSet = true;
    }

    if (value.HasMember("MessageHeapCount") && !value["MessageHeapCount"].IsNull())
    {
        if (!value["MessageHeapCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.MessageHeapCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_messageHeapCount = value["MessageHeapCount"].GetInt64();
        m_messageHeapCountHasBeenSet = true;
    }

    if (value.HasMember("MessageRateIn") && !value["MessageRateIn"].IsNull())
    {
        if (!value["MessageRateIn"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.MessageRateIn` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_messageRateIn = value["MessageRateIn"].GetDouble();
        m_messageRateInHasBeenSet = true;
    }

    if (value.HasMember("MessageRateOut") && !value["MessageRateOut"].IsNull())
    {
        if (!value["MessageRateOut"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.MessageRateOut` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_messageRateOut = value["MessageRateOut"].GetDouble();
        m_messageRateOutHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQQueueListInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_consumerDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_queueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueType.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHeapCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageHeapCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageHeapCount, allocator);
    }

    if (m_messageRateInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageRateIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageRateIn, allocator);
    }

    if (m_messageRateOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageRateOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageRateOut, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

}


string RabbitMQQueueListInfo::GetQueueName() const
{
    return m_queueName;
}

void RabbitMQQueueListInfo::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool RabbitMQQueueListInfo::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string RabbitMQQueueListInfo::GetRemark() const
{
    return m_remark;
}

void RabbitMQQueueListInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RabbitMQQueueListInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

RabbitMQQueueListConsumerDetailInfo RabbitMQQueueListInfo::GetConsumerDetail() const
{
    return m_consumerDetail;
}

void RabbitMQQueueListInfo::SetConsumerDetail(const RabbitMQQueueListConsumerDetailInfo& _consumerDetail)
{
    m_consumerDetail = _consumerDetail;
    m_consumerDetailHasBeenSet = true;
}

bool RabbitMQQueueListInfo::ConsumerDetailHasBeenSet() const
{
    return m_consumerDetailHasBeenSet;
}

string RabbitMQQueueListInfo::GetQueueType() const
{
    return m_queueType;
}

void RabbitMQQueueListInfo::SetQueueType(const string& _queueType)
{
    m_queueType = _queueType;
    m_queueTypeHasBeenSet = true;
}

bool RabbitMQQueueListInfo::QueueTypeHasBeenSet() const
{
    return m_queueTypeHasBeenSet;
}

int64_t RabbitMQQueueListInfo::GetMessageHeapCount() const
{
    return m_messageHeapCount;
}

void RabbitMQQueueListInfo::SetMessageHeapCount(const int64_t& _messageHeapCount)
{
    m_messageHeapCount = _messageHeapCount;
    m_messageHeapCountHasBeenSet = true;
}

bool RabbitMQQueueListInfo::MessageHeapCountHasBeenSet() const
{
    return m_messageHeapCountHasBeenSet;
}

double RabbitMQQueueListInfo::GetMessageRateIn() const
{
    return m_messageRateIn;
}

void RabbitMQQueueListInfo::SetMessageRateIn(const double& _messageRateIn)
{
    m_messageRateIn = _messageRateIn;
    m_messageRateInHasBeenSet = true;
}

bool RabbitMQQueueListInfo::MessageRateInHasBeenSet() const
{
    return m_messageRateInHasBeenSet;
}

double RabbitMQQueueListInfo::GetMessageRateOut() const
{
    return m_messageRateOut;
}

void RabbitMQQueueListInfo::SetMessageRateOut(const double& _messageRateOut)
{
    m_messageRateOut = _messageRateOut;
    m_messageRateOutHasBeenSet = true;
}

bool RabbitMQQueueListInfo::MessageRateOutHasBeenSet() const
{
    return m_messageRateOutHasBeenSet;
}

string RabbitMQQueueListInfo::GetCreateTime() const
{
    return m_createTime;
}

void RabbitMQQueueListInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RabbitMQQueueListInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RabbitMQQueueListInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void RabbitMQQueueListInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool RabbitMQQueueListInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

