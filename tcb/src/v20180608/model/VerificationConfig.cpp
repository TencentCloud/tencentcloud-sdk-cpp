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

#include <tencentcloud/tcb/v20180608/model/VerificationConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

VerificationConfig::VerificationConfig() :
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_smsDayLimitHasBeenSet(false)
{
}

CoreInternalOutcome VerificationConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerificationConfig.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerificationConfig.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerificationConfig.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("SmsDayLimit") && !value["SmsDayLimit"].IsNull())
    {
        if (!value["SmsDayLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VerificationConfig.SmsDayLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_smsDayLimit = value["SmsDayLimit"].GetInt64();
        m_smsDayLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VerificationConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_smsDayLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmsDayLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_smsDayLimit, allocator);
    }

}


string VerificationConfig::GetType() const
{
    return m_type;
}

void VerificationConfig::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool VerificationConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string VerificationConfig::GetName() const
{
    return m_name;
}

void VerificationConfig::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VerificationConfig::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VerificationConfig::GetMethod() const
{
    return m_method;
}

void VerificationConfig::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool VerificationConfig::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

int64_t VerificationConfig::GetSmsDayLimit() const
{
    return m_smsDayLimit;
}

void VerificationConfig::SetSmsDayLimit(const int64_t& _smsDayLimit)
{
    m_smsDayLimit = _smsDayLimit;
    m_smsDayLimitHasBeenSet = true;
}

bool VerificationConfig::SmsDayLimitHasBeenSet() const
{
    return m_smsDayLimitHasBeenSet;
}

