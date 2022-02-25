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

#include <tencentcloud/cpdp/v20190820/model/QueryExceedingInfoData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryExceedingInfoData::QueryExceedingInfoData() :
    m_agentIdHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_anchorIdHasBeenSet(false),
    m_anchorNameHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_exceedingTypeHasBeenSet(false)
{
}

CoreInternalOutcome QueryExceedingInfoData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryExceedingInfoData.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("AgentName") && !value["AgentName"].IsNull())
    {
        if (!value["AgentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryExceedingInfoData.AgentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentName = string(value["AgentName"].GetString());
        m_agentNameHasBeenSet = true;
    }

    if (value.HasMember("AnchorId") && !value["AnchorId"].IsNull())
    {
        if (!value["AnchorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryExceedingInfoData.AnchorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_anchorId = string(value["AnchorId"].GetString());
        m_anchorIdHasBeenSet = true;
    }

    if (value.HasMember("AnchorName") && !value["AnchorName"].IsNull())
    {
        if (!value["AnchorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryExceedingInfoData.AnchorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_anchorName = string(value["AnchorName"].GetString());
        m_anchorNameHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryExceedingInfoData.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("ExceedingType") && !value["ExceedingType"].IsNull())
    {
        if (!value["ExceedingType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryExceedingInfoData.ExceedingType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exceedingType = string(value["ExceedingType"].GetString());
        m_exceedingTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryExceedingInfoData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentName.c_str(), allocator).Move(), allocator);
    }

    if (m_anchorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_anchorId.c_str(), allocator).Move(), allocator);
    }

    if (m_anchorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_anchorName.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_exceedingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceedingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exceedingType.c_str(), allocator).Move(), allocator);
    }

}


string QueryExceedingInfoData::GetAgentId() const
{
    return m_agentId;
}

void QueryExceedingInfoData::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool QueryExceedingInfoData::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string QueryExceedingInfoData::GetAgentName() const
{
    return m_agentName;
}

void QueryExceedingInfoData::SetAgentName(const string& _agentName)
{
    m_agentName = _agentName;
    m_agentNameHasBeenSet = true;
}

bool QueryExceedingInfoData::AgentNameHasBeenSet() const
{
    return m_agentNameHasBeenSet;
}

string QueryExceedingInfoData::GetAnchorId() const
{
    return m_anchorId;
}

void QueryExceedingInfoData::SetAnchorId(const string& _anchorId)
{
    m_anchorId = _anchorId;
    m_anchorIdHasBeenSet = true;
}

bool QueryExceedingInfoData::AnchorIdHasBeenSet() const
{
    return m_anchorIdHasBeenSet;
}

string QueryExceedingInfoData::GetAnchorName() const
{
    return m_anchorName;
}

void QueryExceedingInfoData::SetAnchorName(const string& _anchorName)
{
    m_anchorName = _anchorName;
    m_anchorNameHasBeenSet = true;
}

bool QueryExceedingInfoData::AnchorNameHasBeenSet() const
{
    return m_anchorNameHasBeenSet;
}

string QueryExceedingInfoData::GetOrderId() const
{
    return m_orderId;
}

void QueryExceedingInfoData::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool QueryExceedingInfoData::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string QueryExceedingInfoData::GetExceedingType() const
{
    return m_exceedingType;
}

void QueryExceedingInfoData::SetExceedingType(const string& _exceedingType)
{
    m_exceedingType = _exceedingType;
    m_exceedingTypeHasBeenSet = true;
}

bool QueryExceedingInfoData::ExceedingTypeHasBeenSet() const
{
    return m_exceedingTypeHasBeenSet;
}

