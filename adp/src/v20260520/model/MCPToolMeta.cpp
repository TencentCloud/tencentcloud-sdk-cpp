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

#include <tencentcloud/adp/v20260520/model/MCPToolMeta.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

MCPToolMeta::MCPToolMeta() :
    m_uiHasBeenSet(false)
{
}

CoreInternalOutcome MCPToolMeta::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ui") && !value["Ui"].IsNull())
    {
        if (!value["Ui"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MCPToolMeta.Ui` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ui.Deserialize(value["Ui"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_uiHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MCPToolMeta::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ui";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ui.ToJsonObject(value[key.c_str()], allocator);
    }

}


MCPToolUIMeta MCPToolMeta::GetUi() const
{
    return m_ui;
}

void MCPToolMeta::SetUi(const MCPToolUIMeta& _ui)
{
    m_ui = _ui;
    m_uiHasBeenSet = true;
}

bool MCPToolMeta::UiHasBeenSet() const
{
    return m_uiHasBeenSet;
}

