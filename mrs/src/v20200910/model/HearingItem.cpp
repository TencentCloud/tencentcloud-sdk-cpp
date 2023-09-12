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

#include <tencentcloud/mrs/v20200910/model/HearingItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

HearingItem::HearingItem() :
    m_nameHasBeenSet(false),
    m_itemHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resultHasBeenSet(false)
{
}

CoreInternalOutcome HearingItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HearingItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Item") && !value["Item"].IsNull())
    {
        if (!value["Item"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HearingItem.Item` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_item.Deserialize(value["Item"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_itemHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HearingItem.Location` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_location.Deserialize(value["Location"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_locationHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HearingItem.Result` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_result.Deserialize(value["Result"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HearingItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_itemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Item";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_item.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_location.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_result.ToJsonObject(value[key.c_str()], allocator);
    }

}


string HearingItem::GetName() const
{
    return m_name;
}

void HearingItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool HearingItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

PhysicalBaseItem HearingItem::GetItem() const
{
    return m_item;
}

void HearingItem::SetItem(const PhysicalBaseItem& _item)
{
    m_item = _item;
    m_itemHasBeenSet = true;
}

bool HearingItem::ItemHasBeenSet() const
{
    return m_itemHasBeenSet;
}

PhysicalBaseItem HearingItem::GetLocation() const
{
    return m_location;
}

void HearingItem::SetLocation(const PhysicalBaseItem& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool HearingItem::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

PhysicalBaseItem HearingItem::GetResult() const
{
    return m_result;
}

void HearingItem::SetResult(const PhysicalBaseItem& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool HearingItem::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

