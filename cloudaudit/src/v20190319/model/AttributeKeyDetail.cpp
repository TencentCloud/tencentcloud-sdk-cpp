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

#include <tencentcloud/cloudaudit/v20190319/model/AttributeKeyDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudaudit::V20190319::Model;
using namespace std;

AttributeKeyDetail::AttributeKeyDetail() :
    m_labelTypeHasBeenSet(false),
    m_starterHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_labelHasBeenSet(false)
{
}

CoreInternalOutcome AttributeKeyDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LabelType") && !value["LabelType"].IsNull())
    {
        if (!value["LabelType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttributeKeyDetail.LabelType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelType = string(value["LabelType"].GetString());
        m_labelTypeHasBeenSet = true;
    }

    if (value.HasMember("Starter") && !value["Starter"].IsNull())
    {
        if (!value["Starter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttributeKeyDetail.Starter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_starter = string(value["Starter"].GetString());
        m_starterHasBeenSet = true;
    }

    if (value.HasMember("Order") && !value["Order"].IsNull())
    {
        if (!value["Order"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AttributeKeyDetail.Order` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_order = value["Order"].GetInt64();
        m_orderHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttributeKeyDetail.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttributeKeyDetail.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttributeKeyDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelType.c_str(), allocator).Move(), allocator);
    }

    if (m_starterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Starter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_starter.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_order, allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

}


string AttributeKeyDetail::GetLabelType() const
{
    return m_labelType;
}

void AttributeKeyDetail::SetLabelType(const string& _labelType)
{
    m_labelType = _labelType;
    m_labelTypeHasBeenSet = true;
}

bool AttributeKeyDetail::LabelTypeHasBeenSet() const
{
    return m_labelTypeHasBeenSet;
}

string AttributeKeyDetail::GetStarter() const
{
    return m_starter;
}

void AttributeKeyDetail::SetStarter(const string& _starter)
{
    m_starter = _starter;
    m_starterHasBeenSet = true;
}

bool AttributeKeyDetail::StarterHasBeenSet() const
{
    return m_starterHasBeenSet;
}

int64_t AttributeKeyDetail::GetOrder() const
{
    return m_order;
}

void AttributeKeyDetail::SetOrder(const int64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool AttributeKeyDetail::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string AttributeKeyDetail::GetValue() const
{
    return m_value;
}

void AttributeKeyDetail::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool AttributeKeyDetail::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string AttributeKeyDetail::GetLabel() const
{
    return m_label;
}

void AttributeKeyDetail::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool AttributeKeyDetail::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

