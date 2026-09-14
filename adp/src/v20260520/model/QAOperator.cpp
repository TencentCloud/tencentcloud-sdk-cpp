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

#include <tencentcloud/adp/v20260520/model/QAOperator.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

QAOperator::QAOperator() :
    m_modifierHasBeenSet(false),
    m_permissionHasBeenSet(false)
{
}

CoreInternalOutcome QAOperator::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Modifier") && !value["Modifier"].IsNull())
    {
        if (!value["Modifier"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QAOperator.Modifier` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modifier.Deserialize(value["Modifier"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modifierHasBeenSet = true;
    }

    if (value.HasMember("Permission") && !value["Permission"].IsNull())
    {
        if (!value["Permission"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QAOperator.Permission` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_permission.Deserialize(value["Permission"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_permissionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QAOperator::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Modifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modifier.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_permission.ToJsonObject(value[key.c_str()], allocator);
    }

}


Operator QAOperator::GetModifier() const
{
    return m_modifier;
}

void QAOperator::SetModifier(const Operator& _modifier)
{
    m_modifier = _modifier;
    m_modifierHasBeenSet = true;
}

bool QAOperator::ModifierHasBeenSet() const
{
    return m_modifierHasBeenSet;
}

QAPermission QAOperator::GetPermission() const
{
    return m_permission;
}

void QAOperator::SetPermission(const QAPermission& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool QAOperator::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

