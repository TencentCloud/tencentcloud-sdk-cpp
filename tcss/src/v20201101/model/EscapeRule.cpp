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

#include <tencentcloud/tcss/v20201101/model/EscapeRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

EscapeRule::EscapeRule() :
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_isEnableHasBeenSet(false),
    m_groupHasBeenSet(false)
{
}

CoreInternalOutcome EscapeRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EscapeRule.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EscapeRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IsEnable") && !value["IsEnable"].IsNull())
    {
        if (!value["IsEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EscapeRule.IsEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEnable = value["IsEnable"].GetBool();
        m_isEnableHasBeenSet = true;
    }

    if (value.HasMember("Group") && !value["Group"].IsNull())
    {
        if (!value["Group"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EscapeRule.Group` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_group = string(value["Group"].GetString());
        m_groupHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EscapeRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_isEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnable, allocator);
    }

    if (m_groupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Group";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_group.c_str(), allocator).Move(), allocator);
    }

}


string EscapeRule::GetType() const
{
    return m_type;
}

void EscapeRule::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool EscapeRule::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string EscapeRule::GetName() const
{
    return m_name;
}

void EscapeRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EscapeRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool EscapeRule::GetIsEnable() const
{
    return m_isEnable;
}

void EscapeRule::SetIsEnable(const bool& _isEnable)
{
    m_isEnable = _isEnable;
    m_isEnableHasBeenSet = true;
}

bool EscapeRule::IsEnableHasBeenSet() const
{
    return m_isEnableHasBeenSet;
}

string EscapeRule::GetGroup() const
{
    return m_group;
}

void EscapeRule::SetGroup(const string& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool EscapeRule::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

