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

#include <tencentcloud/wedata/v20210820/model/ScriptTypeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ScriptTypeInfo::ScriptTypeInfo() :
    m_typeHasBeenSet(false),
    m_displayDescHasBeenSet(false)
{
}

CoreInternalOutcome ScriptTypeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptTypeInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("DisplayDesc") && !value["DisplayDesc"].IsNull())
    {
        if (!value["DisplayDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptTypeInfo.DisplayDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayDesc = string(value["DisplayDesc"].GetString());
        m_displayDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScriptTypeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_displayDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayDesc.c_str(), allocator).Move(), allocator);
    }

}


string ScriptTypeInfo::GetType() const
{
    return m_type;
}

void ScriptTypeInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ScriptTypeInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ScriptTypeInfo::GetDisplayDesc() const
{
    return m_displayDesc;
}

void ScriptTypeInfo::SetDisplayDesc(const string& _displayDesc)
{
    m_displayDesc = _displayDesc;
    m_displayDescHasBeenSet = true;
}

bool ScriptTypeInfo::DisplayDescHasBeenSet() const
{
    return m_displayDescHasBeenSet;
}

