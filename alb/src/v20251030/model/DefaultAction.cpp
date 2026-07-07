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

#include <tencentcloud/alb/v20251030/model/DefaultAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

DefaultAction::DefaultAction() :
    m_targetGroupConfigHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome DefaultAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetGroupConfig") && !value["TargetGroupConfig"].IsNull())
    {
        if (!value["TargetGroupConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultAction.TargetGroupConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetGroupConfig.Deserialize(value["TargetGroupConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetGroupConfigHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultAction.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DefaultAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetGroupConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetGroupConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


TargetGroupConfig DefaultAction::GetTargetGroupConfig() const
{
    return m_targetGroupConfig;
}

void DefaultAction::SetTargetGroupConfig(const TargetGroupConfig& _targetGroupConfig)
{
    m_targetGroupConfig = _targetGroupConfig;
    m_targetGroupConfigHasBeenSet = true;
}

bool DefaultAction::TargetGroupConfigHasBeenSet() const
{
    return m_targetGroupConfigHasBeenSet;
}

string DefaultAction::GetType() const
{
    return m_type;
}

void DefaultAction::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DefaultAction::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

