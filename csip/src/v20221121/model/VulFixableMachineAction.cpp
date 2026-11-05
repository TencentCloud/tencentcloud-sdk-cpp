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

#include <tencentcloud/csip/v20221121/model/VulFixableMachineAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VulFixableMachineAction::VulFixableMachineAction() :
    m_actionTypeHasBeenSet(false),
    m_actionTextHasBeenSet(false)
{
}

CoreInternalOutcome VulFixableMachineAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixableMachineAction.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("ActionText") && !value["ActionText"].IsNull())
    {
        if (!value["ActionText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixableMachineAction.ActionText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionText = string(value["ActionText"].GetString());
        m_actionTextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulFixableMachineAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionText.c_str(), allocator).Move(), allocator);
    }

}


string VulFixableMachineAction::GetActionType() const
{
    return m_actionType;
}

void VulFixableMachineAction::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool VulFixableMachineAction::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string VulFixableMachineAction::GetActionText() const
{
    return m_actionText;
}

void VulFixableMachineAction::SetActionText(const string& _actionText)
{
    m_actionText = _actionText;
    m_actionTextHasBeenSet = true;
}

bool VulFixableMachineAction::ActionTextHasBeenSet() const
{
    return m_actionTextHasBeenSet;
}

