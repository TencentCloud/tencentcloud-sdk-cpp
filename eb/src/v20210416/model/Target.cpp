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

#include <tencentcloud/eb/v20210416/model/Target.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

Target::Target() :
    m_typeHasBeenSet(false),
    m_eventBusIdHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_targetDescriptionHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_enableBatchDeliveryHasBeenSet(false),
    m_batchTimeoutHasBeenSet(false),
    m_batchEventCountHasBeenSet(false)
{
}

CoreInternalOutcome Target::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Target.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("EventBusId") && !value["EventBusId"].IsNull())
    {
        if (!value["EventBusId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Target.EventBusId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventBusId = string(value["EventBusId"].GetString());
        m_eventBusIdHasBeenSet = true;
    }

    if (value.HasMember("TargetId") && !value["TargetId"].IsNull())
    {
        if (!value["TargetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Target.TargetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetId = string(value["TargetId"].GetString());
        m_targetIdHasBeenSet = true;
    }

    if (value.HasMember("TargetDescription") && !value["TargetDescription"].IsNull())
    {
        if (!value["TargetDescription"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Target.TargetDescription` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetDescription.Deserialize(value["TargetDescription"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetDescriptionHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Target.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("EnableBatchDelivery") && !value["EnableBatchDelivery"].IsNull())
    {
        if (!value["EnableBatchDelivery"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Target.EnableBatchDelivery` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableBatchDelivery = value["EnableBatchDelivery"].GetBool();
        m_enableBatchDeliveryHasBeenSet = true;
    }

    if (value.HasMember("BatchTimeout") && !value["BatchTimeout"].IsNull())
    {
        if (!value["BatchTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Target.BatchTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_batchTimeout = value["BatchTimeout"].GetInt64();
        m_batchTimeoutHasBeenSet = true;
    }

    if (value.HasMember("BatchEventCount") && !value["BatchEventCount"].IsNull())
    {
        if (!value["BatchEventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Target.BatchEventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_batchEventCount = value["BatchEventCount"].GetInt64();
        m_batchEventCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Target::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_eventBusIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBusId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventBusId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetDescription.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableBatchDeliveryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableBatchDelivery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableBatchDelivery, allocator);
    }

    if (m_batchTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_batchTimeout, allocator);
    }

    if (m_batchEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_batchEventCount, allocator);
    }

}


string Target::GetType() const
{
    return m_type;
}

void Target::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Target::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Target::GetEventBusId() const
{
    return m_eventBusId;
}

void Target::SetEventBusId(const string& _eventBusId)
{
    m_eventBusId = _eventBusId;
    m_eventBusIdHasBeenSet = true;
}

bool Target::EventBusIdHasBeenSet() const
{
    return m_eventBusIdHasBeenSet;
}

string Target::GetTargetId() const
{
    return m_targetId;
}

void Target::SetTargetId(const string& _targetId)
{
    m_targetId = _targetId;
    m_targetIdHasBeenSet = true;
}

bool Target::TargetIdHasBeenSet() const
{
    return m_targetIdHasBeenSet;
}

TargetDescription Target::GetTargetDescription() const
{
    return m_targetDescription;
}

void Target::SetTargetDescription(const TargetDescription& _targetDescription)
{
    m_targetDescription = _targetDescription;
    m_targetDescriptionHasBeenSet = true;
}

bool Target::TargetDescriptionHasBeenSet() const
{
    return m_targetDescriptionHasBeenSet;
}

string Target::GetRuleId() const
{
    return m_ruleId;
}

void Target::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool Target::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

bool Target::GetEnableBatchDelivery() const
{
    return m_enableBatchDelivery;
}

void Target::SetEnableBatchDelivery(const bool& _enableBatchDelivery)
{
    m_enableBatchDelivery = _enableBatchDelivery;
    m_enableBatchDeliveryHasBeenSet = true;
}

bool Target::EnableBatchDeliveryHasBeenSet() const
{
    return m_enableBatchDeliveryHasBeenSet;
}

int64_t Target::GetBatchTimeout() const
{
    return m_batchTimeout;
}

void Target::SetBatchTimeout(const int64_t& _batchTimeout)
{
    m_batchTimeout = _batchTimeout;
    m_batchTimeoutHasBeenSet = true;
}

bool Target::BatchTimeoutHasBeenSet() const
{
    return m_batchTimeoutHasBeenSet;
}

int64_t Target::GetBatchEventCount() const
{
    return m_batchEventCount;
}

void Target::SetBatchEventCount(const int64_t& _batchEventCount)
{
    m_batchEventCount = _batchEventCount;
    m_batchEventCountHasBeenSet = true;
}

bool Target::BatchEventCountHasBeenSet() const
{
    return m_batchEventCountHasBeenSet;
}

