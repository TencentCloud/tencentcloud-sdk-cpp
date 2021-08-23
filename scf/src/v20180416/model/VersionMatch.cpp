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

#include <tencentcloud/scf/v20180416/model/VersionMatch.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

VersionMatch::VersionMatch() :
    m_versionHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
}

CoreInternalOutcome VersionMatch::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionMatch.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionMatch.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionMatch.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("Expression") && !value["Expression"].IsNull())
    {
        if (!value["Expression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionMatch.Expression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expression = string(value["Expression"].GetString());
        m_expressionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VersionMatch::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_expressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expression.c_str(), allocator).Move(), allocator);
    }

}


string VersionMatch::GetVersion() const
{
    return m_version;
}

void VersionMatch::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool VersionMatch::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string VersionMatch::GetKey() const
{
    return m_key;
}

void VersionMatch::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool VersionMatch::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string VersionMatch::GetMethod() const
{
    return m_method;
}

void VersionMatch::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool VersionMatch::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string VersionMatch::GetExpression() const
{
    return m_expression;
}

void VersionMatch::SetExpression(const string& _expression)
{
    m_expression = _expression;
    m_expressionHasBeenSet = true;
}

bool VersionMatch::ExpressionHasBeenSet() const
{
    return m_expressionHasBeenSet;
}

