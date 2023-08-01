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

#include <tencentcloud/oceanus/v20190422/model/ClazzLevel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

ClazzLevel::ClazzLevel() :
    m_clazzHasBeenSet(false),
    m_levelHasBeenSet(false)
{
}

CoreInternalOutcome ClazzLevel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Clazz") && !value["Clazz"].IsNull())
    {
        if (!value["Clazz"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClazzLevel.Clazz` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clazz = string(value["Clazz"].GetString());
        m_clazzHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClazzLevel.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClazzLevel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clazzHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Clazz";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clazz.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

}


string ClazzLevel::GetClazz() const
{
    return m_clazz;
}

void ClazzLevel::SetClazz(const string& _clazz)
{
    m_clazz = _clazz;
    m_clazzHasBeenSet = true;
}

bool ClazzLevel::ClazzHasBeenSet() const
{
    return m_clazzHasBeenSet;
}

string ClazzLevel::GetLevel() const
{
    return m_level;
}

void ClazzLevel::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool ClazzLevel::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

