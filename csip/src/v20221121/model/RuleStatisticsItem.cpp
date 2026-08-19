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

#include <tencentcloud/csip/v20221121/model/RuleStatisticsItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

RuleStatisticsItem::RuleStatisticsItem() :
    m_textHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome RuleStatisticsItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleStatisticsItem.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleStatisticsItem.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleStatisticsItem.Count` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_count = string(value["Count"].GetString());
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleStatisticsItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_count.c_str(), allocator).Move(), allocator);
    }

}


string RuleStatisticsItem::GetText() const
{
    return m_text;
}

void RuleStatisticsItem::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool RuleStatisticsItem::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string RuleStatisticsItem::GetValue() const
{
    return m_value;
}

void RuleStatisticsItem::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool RuleStatisticsItem::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string RuleStatisticsItem::GetCount() const
{
    return m_count;
}

void RuleStatisticsItem::SetCount(const string& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool RuleStatisticsItem::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

