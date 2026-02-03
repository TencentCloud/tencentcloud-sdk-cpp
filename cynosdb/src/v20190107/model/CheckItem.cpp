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

#include <tencentcloud/cynosdb/v20190107/model/CheckItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CheckItem::CheckItem() :
    m_itemHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_currentValueHasBeenSet(false),
    m_expectedValueHasBeenSet(false)
{
}

CoreInternalOutcome CheckItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Item") && !value["Item"].IsNull())
    {
        if (!value["Item"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckItem.Item` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_item = string(value["Item"].GetString());
        m_itemHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckItem.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("CurrentValue") && !value["CurrentValue"].IsNull())
    {
        if (!value["CurrentValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckItem.CurrentValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentValue = string(value["CurrentValue"].GetString());
        m_currentValueHasBeenSet = true;
    }

    if (value.HasMember("ExpectedValue") && !value["ExpectedValue"].IsNull())
    {
        if (!value["ExpectedValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckItem.ExpectedValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expectedValue = string(value["ExpectedValue"].GetString());
        m_expectedValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CheckItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Item";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_item.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_currentValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentValue.c_str(), allocator).Move(), allocator);
    }

    if (m_expectedValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectedValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expectedValue.c_str(), allocator).Move(), allocator);
    }

}


string CheckItem::GetItem() const
{
    return m_item;
}

void CheckItem::SetItem(const string& _item)
{
    m_item = _item;
    m_itemHasBeenSet = true;
}

bool CheckItem::ItemHasBeenSet() const
{
    return m_itemHasBeenSet;
}

string CheckItem::GetResult() const
{
    return m_result;
}

void CheckItem::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool CheckItem::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string CheckItem::GetCurrentValue() const
{
    return m_currentValue;
}

void CheckItem::SetCurrentValue(const string& _currentValue)
{
    m_currentValue = _currentValue;
    m_currentValueHasBeenSet = true;
}

bool CheckItem::CurrentValueHasBeenSet() const
{
    return m_currentValueHasBeenSet;
}

string CheckItem::GetExpectedValue() const
{
    return m_expectedValue;
}

void CheckItem::SetExpectedValue(const string& _expectedValue)
{
    m_expectedValue = _expectedValue;
    m_expectedValueHasBeenSet = true;
}

bool CheckItem::ExpectedValueHasBeenSet() const
{
    return m_expectedValueHasBeenSet;
}

