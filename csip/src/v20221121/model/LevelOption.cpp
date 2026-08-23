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

#include <tencentcloud/csip/v20221121/model/LevelOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

LevelOption::LevelOption() :
    m_typeHasBeenSet(false),
    m_levelHasBeenSet(false)
{
}

CoreInternalOutcome LevelOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LevelOption.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LevelOption.Level` is not array type"));

        const rapidjson::Value &tmpValue = value["Level"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_level.push_back((*itr).GetInt64());
        }
        m_levelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LevelOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_level.begin(); itr != m_level.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string LevelOption::GetType() const
{
    return m_type;
}

void LevelOption::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool LevelOption::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<int64_t> LevelOption::GetLevel() const
{
    return m_level;
}

void LevelOption::SetLevel(const vector<int64_t>& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool LevelOption::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

