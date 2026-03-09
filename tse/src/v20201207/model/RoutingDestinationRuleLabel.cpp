/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tse/v20201207/model/RoutingDestinationRuleLabel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

RoutingDestinationRuleLabel::RoutingDestinationRuleLabel() :
    m_labelKeyHasBeenSet(false),
    m_labelValueHasBeenSet(false),
    m_labelTypeHasBeenSet(false),
    m_labelValueTypeHasBeenSet(false)
{
}

CoreInternalOutcome RoutingDestinationRuleLabel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LabelKey") && !value["LabelKey"].IsNull())
    {
        if (!value["LabelKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutingDestinationRuleLabel.LabelKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelKey = string(value["LabelKey"].GetString());
        m_labelKeyHasBeenSet = true;
    }

    if (value.HasMember("LabelValue") && !value["LabelValue"].IsNull())
    {
        if (!value["LabelValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutingDestinationRuleLabel.LabelValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelValue = string(value["LabelValue"].GetString());
        m_labelValueHasBeenSet = true;
    }

    if (value.HasMember("LabelType") && !value["LabelType"].IsNull())
    {
        if (!value["LabelType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutingDestinationRuleLabel.LabelType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelType = string(value["LabelType"].GetString());
        m_labelTypeHasBeenSet = true;
    }

    if (value.HasMember("LabelValueType") && !value["LabelValueType"].IsNull())
    {
        if (!value["LabelValueType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutingDestinationRuleLabel.LabelValueType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelValueType = string(value["LabelValueType"].GetString());
        m_labelValueTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoutingDestinationRuleLabel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelKey.c_str(), allocator).Move(), allocator);
    }

    if (m_labelValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelValue.c_str(), allocator).Move(), allocator);
    }

    if (m_labelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelType.c_str(), allocator).Move(), allocator);
    }

    if (m_labelValueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelValueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelValueType.c_str(), allocator).Move(), allocator);
    }

}


string RoutingDestinationRuleLabel::GetLabelKey() const
{
    return m_labelKey;
}

void RoutingDestinationRuleLabel::SetLabelKey(const string& _labelKey)
{
    m_labelKey = _labelKey;
    m_labelKeyHasBeenSet = true;
}

bool RoutingDestinationRuleLabel::LabelKeyHasBeenSet() const
{
    return m_labelKeyHasBeenSet;
}

string RoutingDestinationRuleLabel::GetLabelValue() const
{
    return m_labelValue;
}

void RoutingDestinationRuleLabel::SetLabelValue(const string& _labelValue)
{
    m_labelValue = _labelValue;
    m_labelValueHasBeenSet = true;
}

bool RoutingDestinationRuleLabel::LabelValueHasBeenSet() const
{
    return m_labelValueHasBeenSet;
}

string RoutingDestinationRuleLabel::GetLabelType() const
{
    return m_labelType;
}

void RoutingDestinationRuleLabel::SetLabelType(const string& _labelType)
{
    m_labelType = _labelType;
    m_labelTypeHasBeenSet = true;
}

bool RoutingDestinationRuleLabel::LabelTypeHasBeenSet() const
{
    return m_labelTypeHasBeenSet;
}

string RoutingDestinationRuleLabel::GetLabelValueType() const
{
    return m_labelValueType;
}

void RoutingDestinationRuleLabel::SetLabelValueType(const string& _labelValueType)
{
    m_labelValueType = _labelValueType;
    m_labelValueTypeHasBeenSet = true;
}

bool RoutingDestinationRuleLabel::LabelValueTypeHasBeenSet() const
{
    return m_labelValueTypeHasBeenSet;
}

