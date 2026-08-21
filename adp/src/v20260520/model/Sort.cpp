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

#include <tencentcloud/adp/v20260520/model/Sort.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

Sort::Sort() :
    m_nameHasBeenSet(false),
    m_directionHasBeenSet(false)
{
}

CoreInternalOutcome Sort::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Sort.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Sort.Direction` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_direction = value["Direction"].GetInt64();
        m_directionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Sort::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_direction, allocator);
    }

}


string Sort::GetName() const
{
    return m_name;
}

void Sort::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Sort::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t Sort::GetDirection() const
{
    return m_direction;
}

void Sort::SetDirection(const int64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool Sort::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

