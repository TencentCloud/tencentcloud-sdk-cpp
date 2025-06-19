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

#include <tencentcloud/tdmq/v20200217/model/RabbitMQBindingListInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RabbitMQBindingListInfo::RabbitMQBindingListInfo() :
    m_bindingIdHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_destinationTypeHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_routingKeyHasBeenSet(false),
    m_sourceExchangeTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_createTsHasBeenSet(false),
    m_modifyTsHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQBindingListInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BindingId") && !value["BindingId"].IsNull())
    {
        if (!value["BindingId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQBindingListInfo.BindingId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindingId = value["BindingId"].GetInt64();
        m_bindingIdHasBeenSet = true;
    }

    if (value.HasMember("VirtualHost") && !value["VirtualHost"].IsNull())
    {
        if (!value["VirtualHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQBindingListInfo.VirtualHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualHost = string(value["VirtualHost"].GetString());
        m_virtualHostHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQBindingListInfo.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("DestinationType") && !value["DestinationType"].IsNull())
    {
        if (!value["DestinationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQBindingListInfo.DestinationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationType = string(value["DestinationType"].GetString());
        m_destinationTypeHasBeenSet = true;
    }

    if (value.HasMember("Destination") && !value["Destination"].IsNull())
    {
        if (!value["Destination"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQBindingListInfo.Destination` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destination = string(value["Destination"].GetString());
        m_destinationHasBeenSet = true;
    }

    if (value.HasMember("RoutingKey") && !value["RoutingKey"].IsNull())
    {
        if (!value["RoutingKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQBindingListInfo.RoutingKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routingKey = string(value["RoutingKey"].GetString());
        m_routingKeyHasBeenSet = true;
    }

    if (value.HasMember("SourceExchangeType") && !value["SourceExchangeType"].IsNull())
    {
        if (!value["SourceExchangeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQBindingListInfo.SourceExchangeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceExchangeType = string(value["SourceExchangeType"].GetString());
        m_sourceExchangeTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQBindingListInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQBindingListInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTs") && !value["CreateTs"].IsNull())
    {
        if (!value["CreateTs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQBindingListInfo.CreateTs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTs = value["CreateTs"].GetUint64();
        m_createTsHasBeenSet = true;
    }

    if (value.HasMember("ModifyTs") && !value["ModifyTs"].IsNull())
    {
        if (!value["ModifyTs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQBindingListInfo.ModifyTs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTs = value["ModifyTs"].GetUint64();
        m_modifyTsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQBindingListInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bindingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindingId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindingId, allocator);
    }

    if (m_virtualHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virtualHost.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationType.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Destination";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destination.c_str(), allocator).Move(), allocator);
    }

    if (m_routingKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutingKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routingKey.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceExchangeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceExchangeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceExchangeType.c_str(), allocator).Move(), allocator);
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


int64_t RabbitMQBindingListInfo::GetBindingId() const
{
    return m_bindingId;
}

void RabbitMQBindingListInfo::SetBindingId(const int64_t& _bindingId)
{
    m_bindingId = _bindingId;
    m_bindingIdHasBeenSet = true;
}

bool RabbitMQBindingListInfo::BindingIdHasBeenSet() const
{
    return m_bindingIdHasBeenSet;
}

string RabbitMQBindingListInfo::GetVirtualHost() const
{
    return m_virtualHost;
}

void RabbitMQBindingListInfo::SetVirtualHost(const string& _virtualHost)
{
    m_virtualHost = _virtualHost;
    m_virtualHostHasBeenSet = true;
}

bool RabbitMQBindingListInfo::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

string RabbitMQBindingListInfo::GetSource() const
{
    return m_source;
}

void RabbitMQBindingListInfo::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool RabbitMQBindingListInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string RabbitMQBindingListInfo::GetDestinationType() const
{
    return m_destinationType;
}

void RabbitMQBindingListInfo::SetDestinationType(const string& _destinationType)
{
    m_destinationType = _destinationType;
    m_destinationTypeHasBeenSet = true;
}

bool RabbitMQBindingListInfo::DestinationTypeHasBeenSet() const
{
    return m_destinationTypeHasBeenSet;
}

string RabbitMQBindingListInfo::GetDestination() const
{
    return m_destination;
}

void RabbitMQBindingListInfo::SetDestination(const string& _destination)
{
    m_destination = _destination;
    m_destinationHasBeenSet = true;
}

bool RabbitMQBindingListInfo::DestinationHasBeenSet() const
{
    return m_destinationHasBeenSet;
}

string RabbitMQBindingListInfo::GetRoutingKey() const
{
    return m_routingKey;
}

void RabbitMQBindingListInfo::SetRoutingKey(const string& _routingKey)
{
    m_routingKey = _routingKey;
    m_routingKeyHasBeenSet = true;
}

bool RabbitMQBindingListInfo::RoutingKeyHasBeenSet() const
{
    return m_routingKeyHasBeenSet;
}

string RabbitMQBindingListInfo::GetSourceExchangeType() const
{
    return m_sourceExchangeType;
}

void RabbitMQBindingListInfo::SetSourceExchangeType(const string& _sourceExchangeType)
{
    m_sourceExchangeType = _sourceExchangeType;
    m_sourceExchangeTypeHasBeenSet = true;
}

bool RabbitMQBindingListInfo::SourceExchangeTypeHasBeenSet() const
{
    return m_sourceExchangeTypeHasBeenSet;
}

string RabbitMQBindingListInfo::GetCreateTime() const
{
    return m_createTime;
}

void RabbitMQBindingListInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RabbitMQBindingListInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RabbitMQBindingListInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void RabbitMQBindingListInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool RabbitMQBindingListInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

uint64_t RabbitMQBindingListInfo::GetCreateTs() const
{
    return m_createTs;
}

void RabbitMQBindingListInfo::SetCreateTs(const uint64_t& _createTs)
{
    m_createTs = _createTs;
    m_createTsHasBeenSet = true;
}

bool RabbitMQBindingListInfo::CreateTsHasBeenSet() const
{
    return m_createTsHasBeenSet;
}

uint64_t RabbitMQBindingListInfo::GetModifyTs() const
{
    return m_modifyTs;
}

void RabbitMQBindingListInfo::SetModifyTs(const uint64_t& _modifyTs)
{
    m_modifyTs = _modifyTs;
    m_modifyTsHasBeenSet = true;
}

bool RabbitMQBindingListInfo::ModifyTsHasBeenSet() const
{
    return m_modifyTsHasBeenSet;
}

