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

#include <tencentcloud/mrs/v20200910/model/ItemCoordinate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

ItemCoordinate::ItemCoordinate() :
    m_nameHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_rangeHasBeenSet(false)
{
}

CoreInternalOutcome ItemCoordinate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ItemCoordinate.Name` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_name.Deserialize(value["Name"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ItemCoordinate.Result` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_result.Deserialize(value["Result"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Range") && !value["Range"].IsNull())
    {
        if (!value["Range"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ItemCoordinate.Range` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_range.Deserialize(value["Range"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rangeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ItemCoordinate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_name.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_result.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Range";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_range.ToJsonObject(value[key.c_str()], allocator);
    }

}


Coordinate ItemCoordinate::GetName() const
{
    return m_name;
}

void ItemCoordinate::SetName(const Coordinate& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ItemCoordinate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

Coordinate ItemCoordinate::GetResult() const
{
    return m_result;
}

void ItemCoordinate::SetResult(const Coordinate& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool ItemCoordinate::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

Coordinate ItemCoordinate::GetRange() const
{
    return m_range;
}

void ItemCoordinate::SetRange(const Coordinate& _range)
{
    m_range = _range;
    m_rangeHasBeenSet = true;
}

bool ItemCoordinate::RangeHasBeenSet() const
{
    return m_rangeHasBeenSet;
}

