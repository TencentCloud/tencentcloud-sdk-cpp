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

#include <tencentcloud/ocr/v20181119/model/StructuralItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

StructuralItem::StructuralItem() :
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_itemCoordHasBeenSet(false),
    m_rowHasBeenSet(false)
{
}

CoreInternalOutcome StructuralItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StructuralItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StructuralItem.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StructuralItem.Confidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetInt64();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("ItemCoord") && !value["ItemCoord"].IsNull())
    {
        if (!value["ItemCoord"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StructuralItem.ItemCoord` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_itemCoord.Deserialize(value["ItemCoord"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_itemCoordHasBeenSet = true;
    }

    if (value.HasMember("Row") && !value["Row"].IsNull())
    {
        if (!value["Row"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StructuralItem.Row` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_row = value["Row"].GetInt64();
        m_rowHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StructuralItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_itemCoordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCoord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_itemCoord.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Row";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_row, allocator);
    }

}


string StructuralItem::GetName() const
{
    return m_name;
}

void StructuralItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool StructuralItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string StructuralItem::GetValue() const
{
    return m_value;
}

void StructuralItem::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool StructuralItem::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

int64_t StructuralItem::GetConfidence() const
{
    return m_confidence;
}

void StructuralItem::SetConfidence(const int64_t& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool StructuralItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

ItemCoord StructuralItem::GetItemCoord() const
{
    return m_itemCoord;
}

void StructuralItem::SetItemCoord(const ItemCoord& _itemCoord)
{
    m_itemCoord = _itemCoord;
    m_itemCoordHasBeenSet = true;
}

bool StructuralItem::ItemCoordHasBeenSet() const
{
    return m_itemCoordHasBeenSet;
}

int64_t StructuralItem::GetRow() const
{
    return m_row;
}

void StructuralItem::SetRow(const int64_t& _row)
{
    m_row = _row;
    m_rowHasBeenSet = true;
}

bool StructuralItem::RowHasBeenSet() const
{
    return m_rowHasBeenSet;
}

