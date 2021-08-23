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

#include <tencentcloud/iot/v20180123/model/RuleQuery.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iot::V20180123::Model;
using namespace std;

RuleQuery::RuleQuery() :
    m_fieldHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_productIdHasBeenSet(false)
{
}

CoreInternalOutcome RuleQuery::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Field") && !value["Field"].IsNull())
    {
        if (!value["Field"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleQuery.Field` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_field = string(value["Field"].GetString());
        m_fieldHasBeenSet = true;
    }

    if (value.HasMember("Condition") && !value["Condition"].IsNull())
    {
        if (!value["Condition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleQuery.Condition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_condition = string(value["Condition"].GetString());
        m_conditionHasBeenSet = true;
    }

    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleQuery.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleQuery.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleQuery::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Field";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_field.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_condition.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

}


string RuleQuery::GetField() const
{
    return m_field;
}

void RuleQuery::SetField(const string& _field)
{
    m_field = _field;
    m_fieldHasBeenSet = true;
}

bool RuleQuery::FieldHasBeenSet() const
{
    return m_fieldHasBeenSet;
}

string RuleQuery::GetCondition() const
{
    return m_condition;
}

void RuleQuery::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool RuleQuery::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

string RuleQuery::GetTopic() const
{
    return m_topic;
}

void RuleQuery::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool RuleQuery::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string RuleQuery::GetProductId() const
{
    return m_productId;
}

void RuleQuery::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool RuleQuery::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

