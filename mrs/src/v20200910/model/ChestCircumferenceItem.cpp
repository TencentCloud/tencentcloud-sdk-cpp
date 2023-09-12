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

#include <tencentcloud/mrs/v20200910/model/ChestCircumferenceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

ChestCircumferenceItem::ChestCircumferenceItem() :
    m_nameHasBeenSet(false),
    m_itemHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

CoreInternalOutcome ChestCircumferenceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChestCircumferenceItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Item") && !value["Item"].IsNull())
    {
        if (!value["Item"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChestCircumferenceItem.Item` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ChestCircumferenceItem.Result` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ChestCircumferenceItem.Unit` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_unit.Deserialize(value["Unit"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_unitHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChestCircumferenceItem.State` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_state.Deserialize(value["State"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_stateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChestCircumferenceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_state.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ChestCircumferenceItem::GetName() const
{
    return m_name;
}

void ChestCircumferenceItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ChestCircumferenceItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

PhysicalBaseItem ChestCircumferenceItem::GetItem() const
{
    return m_item;
}

void ChestCircumferenceItem::SetItem(const PhysicalBaseItem& _item)
{
    m_item = _item;
    m_itemHasBeenSet = true;
}

bool ChestCircumferenceItem::ItemHasBeenSet() const
{
    return m_itemHasBeenSet;
}

PhysicalBaseItem ChestCircumferenceItem::GetResult() const
{
    return m_result;
}

void ChestCircumferenceItem::SetResult(const PhysicalBaseItem& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool ChestCircumferenceItem::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

PhysicalBaseItem ChestCircumferenceItem::GetUnit() const
{
    return m_unit;
}

void ChestCircumferenceItem::SetUnit(const PhysicalBaseItem& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool ChestCircumferenceItem::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

PhysicalBaseItem ChestCircumferenceItem::GetState() const
{
    return m_state;
}

void ChestCircumferenceItem::SetState(const PhysicalBaseItem& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool ChestCircumferenceItem::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

