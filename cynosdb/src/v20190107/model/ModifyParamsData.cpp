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

#include <tencentcloud/cynosdb/v20190107/model/ModifyParamsData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyParamsData::ModifyParamsData() :
    m_nameHasBeenSet(false),
    m_oldValueHasBeenSet(false),
    m_curValueHasBeenSet(false)
{
}

CoreInternalOutcome ModifyParamsData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyParamsData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("OldValue") && !value["OldValue"].IsNull())
    {
        if (!value["OldValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyParamsData.OldValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldValue = string(value["OldValue"].GetString());
        m_oldValueHasBeenSet = true;
    }

    if (value.HasMember("CurValue") && !value["CurValue"].IsNull())
    {
        if (!value["CurValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyParamsData.CurValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curValue = string(value["CurValue"].GetString());
        m_curValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyParamsData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_oldValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldValue.c_str(), allocator).Move(), allocator);
    }

    if (m_curValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curValue.c_str(), allocator).Move(), allocator);
    }

}


string ModifyParamsData::GetName() const
{
    return m_name;
}

void ModifyParamsData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyParamsData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyParamsData::GetOldValue() const
{
    return m_oldValue;
}

void ModifyParamsData::SetOldValue(const string& _oldValue)
{
    m_oldValue = _oldValue;
    m_oldValueHasBeenSet = true;
}

bool ModifyParamsData::OldValueHasBeenSet() const
{
    return m_oldValueHasBeenSet;
}

string ModifyParamsData::GetCurValue() const
{
    return m_curValue;
}

void ModifyParamsData::SetCurValue(const string& _curValue)
{
    m_curValue = _curValue;
    m_curValueHasBeenSet = true;
}

bool ModifyParamsData::CurValueHasBeenSet() const
{
    return m_curValueHasBeenSet;
}

