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

#include <tencentcloud/tdmq/v20200217/model/RabbitMQExchangeListInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RabbitMQExchangeListInfo::RabbitMQExchangeListInfo() :
    m_exchangeNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_exchangeTypeHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_exchangeCreatorHasBeenSet(false),
    m_createTimeStampHasBeenSet(false),
    m_modTimeStampHasBeenSet(false),
    m_messageRateInHasBeenSet(false),
    m_messageRateOutHasBeenSet(false),
    m_durableHasBeenSet(false),
    m_autoDeleteHasBeenSet(false),
    m_internalHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_argumentsHasBeenSet(false),
    m_messagesDelayedHasBeenSet(false),
    m_createTsHasBeenSet(false),
    m_modifyTsHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQExchangeListInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExchangeName") && !value["ExchangeName"].IsNull())
    {
        if (!value["ExchangeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQExchangeListInfo.ExchangeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exchangeName = string(value["ExchangeName"].GetString());
        m_exchangeNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQExchangeListInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("ExchangeType") && !value["ExchangeType"].IsNull())
    {
        if (!value["ExchangeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQExchangeListInfo.ExchangeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exchangeType = string(value["ExchangeType"].GetString());
        m_exchangeTypeHasBeenSet = true;
    }

    if (value.HasMember("VirtualHost") && !value["VirtualHost"].IsNull())
    {
        if (!value["VirtualHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQExchangeListInfo.VirtualHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualHost = string(value["VirtualHost"].GetString());
        m_virtualHostHasBeenSet = true;
    }

    if (value.HasMember("ExchangeCreator") && !value["ExchangeCreator"].IsNull())
    {
        if (!value["ExchangeCreator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQExchangeListInfo.ExchangeCreator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exchangeCreator = string(value["ExchangeCreator"].GetString());
        m_exchangeCreatorHasBeenSet = true;
    }

    if (value.HasMember("CreateTimeStamp") && !value["CreateTimeStamp"].IsNull())
    {
        if (!value["CreateTimeStamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQExchangeListInfo.CreateTimeStamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTimeStamp = string(value["CreateTimeStamp"].GetString());
        m_createTimeStampHasBeenSet = true;
    }

    if (value.HasMember("ModTimeStamp") && !value["ModTimeStamp"].IsNull())
    {
        if (!value["ModTimeStamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQExchangeListInfo.ModTimeStamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modTimeStamp = string(value["ModTimeStamp"].GetString());
        m_modTimeStampHasBeenSet = true;
    }

    if (value.HasMember("MessageRateIn") && !value["MessageRateIn"].IsNull())
    {
        if (!value["MessageRateIn"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQExchangeListInfo.MessageRateIn` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_messageRateIn = value["MessageRateIn"].GetDouble();
        m_messageRateInHasBeenSet = true;
    }

    if (value.HasMember("MessageRateOut") && !value["MessageRateOut"].IsNull())
    {
        if (!value["MessageRateOut"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQExchangeListInfo.MessageRateOut` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_messageRateOut = value["MessageRateOut"].GetDouble();
        m_messageRateOutHasBeenSet = true;
    }

    if (value.HasMember("Durable") && !value["Durable"].IsNull())
    {
        if (!value["Durable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQExchangeListInfo.Durable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_durable = value["Durable"].GetBool();
        m_durableHasBeenSet = true;
    }

    if (value.HasMember("AutoDelete") && !value["AutoDelete"].IsNull())
    {
        if (!value["AutoDelete"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQExchangeListInfo.AutoDelete` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoDelete = value["AutoDelete"].GetBool();
        m_autoDeleteHasBeenSet = true;
    }

    if (value.HasMember("Internal") && !value["Internal"].IsNull())
    {
        if (!value["Internal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQExchangeListInfo.Internal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_internal = value["Internal"].GetBool();
        m_internalHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQExchangeListInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Policy") && !value["Policy"].IsNull())
    {
        if (!value["Policy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQExchangeListInfo.Policy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policy = string(value["Policy"].GetString());
        m_policyHasBeenSet = true;
    }

    if (value.HasMember("Arguments") && !value["Arguments"].IsNull())
    {
        if (!value["Arguments"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQExchangeListInfo.Arguments` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_arguments = string(value["Arguments"].GetString());
        m_argumentsHasBeenSet = true;
    }

    if (value.HasMember("MessagesDelayed") && !value["MessagesDelayed"].IsNull())
    {
        if (!value["MessagesDelayed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQExchangeListInfo.MessagesDelayed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_messagesDelayed = value["MessagesDelayed"].GetUint64();
        m_messagesDelayedHasBeenSet = true;
    }

    if (value.HasMember("CreateTs") && !value["CreateTs"].IsNull())
    {
        if (!value["CreateTs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQExchangeListInfo.CreateTs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTs = value["CreateTs"].GetUint64();
        m_createTsHasBeenSet = true;
    }

    if (value.HasMember("ModifyTs") && !value["ModifyTs"].IsNull())
    {
        if (!value["ModifyTs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQExchangeListInfo.ModifyTs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTs = value["ModifyTs"].GetUint64();
        m_modifyTsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQExchangeListInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_exchangeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExchangeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exchangeName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_exchangeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExchangeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exchangeType.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virtualHost.c_str(), allocator).Move(), allocator);
    }

    if (m_exchangeCreatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExchangeCreator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exchangeCreator.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTimeStamp.c_str(), allocator).Move(), allocator);
    }

    if (m_modTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modTimeStamp.c_str(), allocator).Move(), allocator);
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

    if (m_durableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Durable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durable, allocator);
    }

    if (m_autoDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoDelete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoDelete, allocator);
    }

    if (m_internalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Internal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internal, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policy.c_str(), allocator).Move(), allocator);
    }

    if (m_argumentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Arguments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_arguments.c_str(), allocator).Move(), allocator);
    }

    if (m_messagesDelayedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessagesDelayed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messagesDelayed, allocator);
    }

    if (m_createTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTs, allocator);
    }

    if (m_modifyTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modifyTs, allocator);
    }

}


string RabbitMQExchangeListInfo::GetExchangeName() const
{
    return m_exchangeName;
}

void RabbitMQExchangeListInfo::SetExchangeName(const string& _exchangeName)
{
    m_exchangeName = _exchangeName;
    m_exchangeNameHasBeenSet = true;
}

bool RabbitMQExchangeListInfo::ExchangeNameHasBeenSet() const
{
    return m_exchangeNameHasBeenSet;
}

string RabbitMQExchangeListInfo::GetRemark() const
{
    return m_remark;
}

void RabbitMQExchangeListInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RabbitMQExchangeListInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string RabbitMQExchangeListInfo::GetExchangeType() const
{
    return m_exchangeType;
}

void RabbitMQExchangeListInfo::SetExchangeType(const string& _exchangeType)
{
    m_exchangeType = _exchangeType;
    m_exchangeTypeHasBeenSet = true;
}

bool RabbitMQExchangeListInfo::ExchangeTypeHasBeenSet() const
{
    return m_exchangeTypeHasBeenSet;
}

string RabbitMQExchangeListInfo::GetVirtualHost() const
{
    return m_virtualHost;
}

void RabbitMQExchangeListInfo::SetVirtualHost(const string& _virtualHost)
{
    m_virtualHost = _virtualHost;
    m_virtualHostHasBeenSet = true;
}

bool RabbitMQExchangeListInfo::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

string RabbitMQExchangeListInfo::GetExchangeCreator() const
{
    return m_exchangeCreator;
}

void RabbitMQExchangeListInfo::SetExchangeCreator(const string& _exchangeCreator)
{
    m_exchangeCreator = _exchangeCreator;
    m_exchangeCreatorHasBeenSet = true;
}

bool RabbitMQExchangeListInfo::ExchangeCreatorHasBeenSet() const
{
    return m_exchangeCreatorHasBeenSet;
}

string RabbitMQExchangeListInfo::GetCreateTimeStamp() const
{
    return m_createTimeStamp;
}

void RabbitMQExchangeListInfo::SetCreateTimeStamp(const string& _createTimeStamp)
{
    m_createTimeStamp = _createTimeStamp;
    m_createTimeStampHasBeenSet = true;
}

bool RabbitMQExchangeListInfo::CreateTimeStampHasBeenSet() const
{
    return m_createTimeStampHasBeenSet;
}

string RabbitMQExchangeListInfo::GetModTimeStamp() const
{
    return m_modTimeStamp;
}

void RabbitMQExchangeListInfo::SetModTimeStamp(const string& _modTimeStamp)
{
    m_modTimeStamp = _modTimeStamp;
    m_modTimeStampHasBeenSet = true;
}

bool RabbitMQExchangeListInfo::ModTimeStampHasBeenSet() const
{
    return m_modTimeStampHasBeenSet;
}

double RabbitMQExchangeListInfo::GetMessageRateIn() const
{
    return m_messageRateIn;
}

void RabbitMQExchangeListInfo::SetMessageRateIn(const double& _messageRateIn)
{
    m_messageRateIn = _messageRateIn;
    m_messageRateInHasBeenSet = true;
}

bool RabbitMQExchangeListInfo::MessageRateInHasBeenSet() const
{
    return m_messageRateInHasBeenSet;
}

double RabbitMQExchangeListInfo::GetMessageRateOut() const
{
    return m_messageRateOut;
}

void RabbitMQExchangeListInfo::SetMessageRateOut(const double& _messageRateOut)
{
    m_messageRateOut = _messageRateOut;
    m_messageRateOutHasBeenSet = true;
}

bool RabbitMQExchangeListInfo::MessageRateOutHasBeenSet() const
{
    return m_messageRateOutHasBeenSet;
}

bool RabbitMQExchangeListInfo::GetDurable() const
{
    return m_durable;
}

void RabbitMQExchangeListInfo::SetDurable(const bool& _durable)
{
    m_durable = _durable;
    m_durableHasBeenSet = true;
}

bool RabbitMQExchangeListInfo::DurableHasBeenSet() const
{
    return m_durableHasBeenSet;
}

bool RabbitMQExchangeListInfo::GetAutoDelete() const
{
    return m_autoDelete;
}

void RabbitMQExchangeListInfo::SetAutoDelete(const bool& _autoDelete)
{
    m_autoDelete = _autoDelete;
    m_autoDeleteHasBeenSet = true;
}

bool RabbitMQExchangeListInfo::AutoDeleteHasBeenSet() const
{
    return m_autoDeleteHasBeenSet;
}

bool RabbitMQExchangeListInfo::GetInternal() const
{
    return m_internal;
}

void RabbitMQExchangeListInfo::SetInternal(const bool& _internal)
{
    m_internal = _internal;
    m_internalHasBeenSet = true;
}

bool RabbitMQExchangeListInfo::InternalHasBeenSet() const
{
    return m_internalHasBeenSet;
}

string RabbitMQExchangeListInfo::GetInstanceId() const
{
    return m_instanceId;
}

void RabbitMQExchangeListInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RabbitMQExchangeListInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RabbitMQExchangeListInfo::GetPolicy() const
{
    return m_policy;
}

void RabbitMQExchangeListInfo::SetPolicy(const string& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool RabbitMQExchangeListInfo::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

string RabbitMQExchangeListInfo::GetArguments() const
{
    return m_arguments;
}

void RabbitMQExchangeListInfo::SetArguments(const string& _arguments)
{
    m_arguments = _arguments;
    m_argumentsHasBeenSet = true;
}

bool RabbitMQExchangeListInfo::ArgumentsHasBeenSet() const
{
    return m_argumentsHasBeenSet;
}

uint64_t RabbitMQExchangeListInfo::GetMessagesDelayed() const
{
    return m_messagesDelayed;
}

void RabbitMQExchangeListInfo::SetMessagesDelayed(const uint64_t& _messagesDelayed)
{
    m_messagesDelayed = _messagesDelayed;
    m_messagesDelayedHasBeenSet = true;
}

bool RabbitMQExchangeListInfo::MessagesDelayedHasBeenSet() const
{
    return m_messagesDelayedHasBeenSet;
}

uint64_t RabbitMQExchangeListInfo::GetCreateTs() const
{
    return m_createTs;
}

void RabbitMQExchangeListInfo::SetCreateTs(const uint64_t& _createTs)
{
    m_createTs = _createTs;
    m_createTsHasBeenSet = true;
}

bool RabbitMQExchangeListInfo::CreateTsHasBeenSet() const
{
    return m_createTsHasBeenSet;
}

uint64_t RabbitMQExchangeListInfo::GetModifyTs() const
{
    return m_modifyTs;
}

void RabbitMQExchangeListInfo::SetModifyTs(const uint64_t& _modifyTs)
{
    m_modifyTs = _modifyTs;
    m_modifyTsHasBeenSet = true;
}

bool RabbitMQExchangeListInfo::ModifyTsHasBeenSet() const
{
    return m_modifyTsHasBeenSet;
}

