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

#include <tencentcloud/ocr/v20181119/model/Value.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

Value::Value() :
    m_autoContentHasBeenSet(false),
    m_coordHasBeenSet(false)
{
}

CoreInternalOutcome Value::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoContent") && !value["AutoContent"].IsNull())
    {
        if (!value["AutoContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Value.AutoContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoContent = string(value["AutoContent"].GetString());
        m_autoContentHasBeenSet = true;
    }

    if (value.HasMember("Coord") && !value["Coord"].IsNull())
    {
        if (!value["Coord"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Value.Coord` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coord.Deserialize(value["Coord"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Value::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoContent.c_str(), allocator).Move(), allocator);
    }

    if (m_coordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Coord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coord.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Value::GetAutoContent() const
{
    return m_autoContent;
}

void Value::SetAutoContent(const string& _autoContent)
{
    m_autoContent = _autoContent;
    m_autoContentHasBeenSet = true;
}

bool Value::AutoContentHasBeenSet() const
{
    return m_autoContentHasBeenSet;
}

Polygon Value::GetCoord() const
{
    return m_coord;
}

void Value::SetCoord(const Polygon& _coord)
{
    m_coord = _coord;
    m_coordHasBeenSet = true;
}

bool Value::CoordHasBeenSet() const
{
    return m_coordHasBeenSet;
}

