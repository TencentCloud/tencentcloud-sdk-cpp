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

#include <tencentcloud/tke/v20180525/model/EdgeArgsFlag.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

EdgeArgsFlag::EdgeArgsFlag() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_usageHasBeenSet(false),
    m_defaultHasBeenSet(false),
    m_constraintHasBeenSet(false)
{
}

CoreInternalOutcome EdgeArgsFlag::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeArgsFlag.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeArgsFlag.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Usage") && !value["Usage"].IsNull())
    {
        if (!value["Usage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeArgsFlag.Usage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usage = string(value["Usage"].GetString());
        m_usageHasBeenSet = true;
    }

    if (value.HasMember("Default") && !value["Default"].IsNull())
    {
        if (!value["Default"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeArgsFlag.Default` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_default = string(value["Default"].GetString());
        m_defaultHasBeenSet = true;
    }

    if (value.HasMember("Constraint") && !value["Constraint"].IsNull())
    {
        if (!value["Constraint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeArgsFlag.Constraint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_constraint = string(value["Constraint"].GetString());
        m_constraintHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdgeArgsFlag::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usage.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Default";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_default.c_str(), allocator).Move(), allocator);
    }

    if (m_constraintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Constraint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_constraint.c_str(), allocator).Move(), allocator);
    }

}


string EdgeArgsFlag::GetName() const
{
    return m_name;
}

void EdgeArgsFlag::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EdgeArgsFlag::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string EdgeArgsFlag::GetType() const
{
    return m_type;
}

void EdgeArgsFlag::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool EdgeArgsFlag::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string EdgeArgsFlag::GetUsage() const
{
    return m_usage;
}

void EdgeArgsFlag::SetUsage(const string& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool EdgeArgsFlag::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

string EdgeArgsFlag::GetDefault() const
{
    return m_default;
}

void EdgeArgsFlag::SetDefault(const string& _default)
{
    m_default = _default;
    m_defaultHasBeenSet = true;
}

bool EdgeArgsFlag::DefaultHasBeenSet() const
{
    return m_defaultHasBeenSet;
}

string EdgeArgsFlag::GetConstraint() const
{
    return m_constraint;
}

void EdgeArgsFlag::SetConstraint(const string& _constraint)
{
    m_constraint = _constraint;
    m_constraintHasBeenSet = true;
}

bool EdgeArgsFlag::ConstraintHasBeenSet() const
{
    return m_constraintHasBeenSet;
}

