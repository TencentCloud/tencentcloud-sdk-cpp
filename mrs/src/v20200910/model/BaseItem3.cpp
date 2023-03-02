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

#include <tencentcloud/mrs/v20200910/model/BaseItem3.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

BaseItem3::BaseItem3() :
    m_nameHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_coordsHasBeenSet(false),
    m_orderHasBeenSet(false)
{
}

CoreInternalOutcome BaseItem3::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseItem3.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseItem3.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseItem3.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Coords") && !value["Coords"].IsNull())
    {
        if (!value["Coords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaseItem3.Coords` is not array type"));

        const rapidjson::Value &tmpValue = value["Coords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Coord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_coords.push_back(item);
        }
        m_coordsHasBeenSet = true;
    }

    if (value.HasMember("Order") && !value["Order"].IsNull())
    {
        if (!value["Order"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaseItem3.Order` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_order = value["Order"].GetInt64();
        m_orderHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaseItem3::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_coordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Coords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_coords.begin(); itr != m_coords.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_order, allocator);
    }

}


string BaseItem3::GetName() const
{
    return m_name;
}

void BaseItem3::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BaseItem3::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string BaseItem3::GetSrc() const
{
    return m_src;
}

void BaseItem3::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool BaseItem3::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string BaseItem3::GetValue() const
{
    return m_value;
}

void BaseItem3::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool BaseItem3::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

vector<Coord> BaseItem3::GetCoords() const
{
    return m_coords;
}

void BaseItem3::SetCoords(const vector<Coord>& _coords)
{
    m_coords = _coords;
    m_coordsHasBeenSet = true;
}

bool BaseItem3::CoordsHasBeenSet() const
{
    return m_coordsHasBeenSet;
}

int64_t BaseItem3::GetOrder() const
{
    return m_order;
}

void BaseItem3::SetOrder(const int64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool BaseItem3::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

