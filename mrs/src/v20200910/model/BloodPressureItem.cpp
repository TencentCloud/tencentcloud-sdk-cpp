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

#include <tencentcloud/mrs/v20200910/model/BloodPressureItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

BloodPressureItem::BloodPressureItem() :
    m_nameHasBeenSet(false),
    m_itemHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_timesHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_pageHasBeenSet(false)
{
}

CoreInternalOutcome BloodPressureItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BloodPressureItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Item") && !value["Item"].IsNull())
    {
        if (!value["Item"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BloodPressureItem.Item` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_item.Deserialize(value["Item"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_itemHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BloodPressureItem.Result` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_result.Deserialize(value["Result"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BloodPressureItem.Unit` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_unit.Deserialize(value["Unit"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Times") && !value["Times"].IsNull())
    {
        if (!value["Times"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BloodPressureItem.Times` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_times.Deserialize(value["Times"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_timesHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BloodPressureItem.Location` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_location.Deserialize(value["Location"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_locationHasBeenSet = true;
    }

    if (value.HasMember("Page") && !value["Page"].IsNull())
    {
        if (!value["Page"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BloodPressureItem.Page` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_page = value["Page"].GetInt64();
        m_pageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BloodPressureItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_result.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_unit.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_timesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Times";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_times.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_location.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_page, allocator);
    }

}


string BloodPressureItem::GetName() const
{
    return m_name;
}

void BloodPressureItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BloodPressureItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

PhysicalBaseItem BloodPressureItem::GetItem() const
{
    return m_item;
}

void BloodPressureItem::SetItem(const PhysicalBaseItem& _item)
{
    m_item = _item;
    m_itemHasBeenSet = true;
}

bool BloodPressureItem::ItemHasBeenSet() const
{
    return m_itemHasBeenSet;
}

PhysicalBaseItem BloodPressureItem::GetResult() const
{
    return m_result;
}

void BloodPressureItem::SetResult(const PhysicalBaseItem& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool BloodPressureItem::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

PhysicalBaseItem BloodPressureItem::GetUnit() const
{
    return m_unit;
}

void BloodPressureItem::SetUnit(const PhysicalBaseItem& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool BloodPressureItem::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

PhysicalBaseItem BloodPressureItem::GetTimes() const
{
    return m_times;
}

void BloodPressureItem::SetTimes(const PhysicalBaseItem& _times)
{
    m_times = _times;
    m_timesHasBeenSet = true;
}

bool BloodPressureItem::TimesHasBeenSet() const
{
    return m_timesHasBeenSet;
}

PhysicalBaseItem BloodPressureItem::GetLocation() const
{
    return m_location;
}

void BloodPressureItem::SetLocation(const PhysicalBaseItem& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool BloodPressureItem::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

int64_t BloodPressureItem::GetPage() const
{
    return m_page;
}

void BloodPressureItem::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool BloodPressureItem::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

