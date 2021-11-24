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

#include <tencentcloud/tdmq/v20200217/model/AMQPRouteRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

AMQPRouteRelation::AMQPRouteRelation() :
    m_routeRelationIdHasBeenSet(false),
    m_sourceExchangeHasBeenSet(false),
    m_destTypeHasBeenSet(false),
    m_destValueHasBeenSet(false),
    m_routingKeyHasBeenSet(false),
    m_sourceExchangeTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome AMQPRouteRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RouteRelationId") && !value["RouteRelationId"].IsNull())
    {
        if (!value["RouteRelationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPRouteRelation.RouteRelationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeRelationId = string(value["RouteRelationId"].GetString());
        m_routeRelationIdHasBeenSet = true;
    }

    if (value.HasMember("SourceExchange") && !value["SourceExchange"].IsNull())
    {
        if (!value["SourceExchange"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPRouteRelation.SourceExchange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceExchange = string(value["SourceExchange"].GetString());
        m_sourceExchangeHasBeenSet = true;
    }

    if (value.HasMember("DestType") && !value["DestType"].IsNull())
    {
        if (!value["DestType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPRouteRelation.DestType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destType = string(value["DestType"].GetString());
        m_destTypeHasBeenSet = true;
    }

    if (value.HasMember("DestValue") && !value["DestValue"].IsNull())
    {
        if (!value["DestValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPRouteRelation.DestValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destValue = string(value["DestValue"].GetString());
        m_destValueHasBeenSet = true;
    }

    if (value.HasMember("RoutingKey") && !value["RoutingKey"].IsNull())
    {
        if (!value["RoutingKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPRouteRelation.RoutingKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routingKey = string(value["RoutingKey"].GetString());
        m_routingKeyHasBeenSet = true;
    }

    if (value.HasMember("SourceExchangeType") && !value["SourceExchangeType"].IsNull())
    {
        if (!value["SourceExchangeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPRouteRelation.SourceExchangeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceExchangeType = string(value["SourceExchangeType"].GetString());
        m_sourceExchangeTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPRouteRelation.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPRouteRelation.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPRouteRelation.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AMQPRouteRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_routeRelationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteRelationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeRelationId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceExchangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceExchange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceExchange.c_str(), allocator).Move(), allocator);
    }

    if (m_destTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destType.c_str(), allocator).Move(), allocator);
    }

    if (m_destValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destValue.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string AMQPRouteRelation::GetRouteRelationId() const
{
    return m_routeRelationId;
}

void AMQPRouteRelation::SetRouteRelationId(const string& _routeRelationId)
{
    m_routeRelationId = _routeRelationId;
    m_routeRelationIdHasBeenSet = true;
}

bool AMQPRouteRelation::RouteRelationIdHasBeenSet() const
{
    return m_routeRelationIdHasBeenSet;
}

string AMQPRouteRelation::GetSourceExchange() const
{
    return m_sourceExchange;
}

void AMQPRouteRelation::SetSourceExchange(const string& _sourceExchange)
{
    m_sourceExchange = _sourceExchange;
    m_sourceExchangeHasBeenSet = true;
}

bool AMQPRouteRelation::SourceExchangeHasBeenSet() const
{
    return m_sourceExchangeHasBeenSet;
}

string AMQPRouteRelation::GetDestType() const
{
    return m_destType;
}

void AMQPRouteRelation::SetDestType(const string& _destType)
{
    m_destType = _destType;
    m_destTypeHasBeenSet = true;
}

bool AMQPRouteRelation::DestTypeHasBeenSet() const
{
    return m_destTypeHasBeenSet;
}

string AMQPRouteRelation::GetDestValue() const
{
    return m_destValue;
}

void AMQPRouteRelation::SetDestValue(const string& _destValue)
{
    m_destValue = _destValue;
    m_destValueHasBeenSet = true;
}

bool AMQPRouteRelation::DestValueHasBeenSet() const
{
    return m_destValueHasBeenSet;
}

string AMQPRouteRelation::GetRoutingKey() const
{
    return m_routingKey;
}

void AMQPRouteRelation::SetRoutingKey(const string& _routingKey)
{
    m_routingKey = _routingKey;
    m_routingKeyHasBeenSet = true;
}

bool AMQPRouteRelation::RoutingKeyHasBeenSet() const
{
    return m_routingKeyHasBeenSet;
}

string AMQPRouteRelation::GetSourceExchangeType() const
{
    return m_sourceExchangeType;
}

void AMQPRouteRelation::SetSourceExchangeType(const string& _sourceExchangeType)
{
    m_sourceExchangeType = _sourceExchangeType;
    m_sourceExchangeTypeHasBeenSet = true;
}

bool AMQPRouteRelation::SourceExchangeTypeHasBeenSet() const
{
    return m_sourceExchangeTypeHasBeenSet;
}

uint64_t AMQPRouteRelation::GetCreateTime() const
{
    return m_createTime;
}

void AMQPRouteRelation::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AMQPRouteRelation::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t AMQPRouteRelation::GetUpdateTime() const
{
    return m_updateTime;
}

void AMQPRouteRelation::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AMQPRouteRelation::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AMQPRouteRelation::GetRemark() const
{
    return m_remark;
}

void AMQPRouteRelation::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AMQPRouteRelation::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

