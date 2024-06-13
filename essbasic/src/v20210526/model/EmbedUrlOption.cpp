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

#include <tencentcloud/essbasic/v20210526/model/EmbedUrlOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

EmbedUrlOption::EmbedUrlOption() :
    m_showFlowDetailComponentHasBeenSet(false),
    m_showTemplateComponentHasBeenSet(false)
{
}

CoreInternalOutcome EmbedUrlOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ShowFlowDetailComponent") && !value["ShowFlowDetailComponent"].IsNull())
    {
        if (!value["ShowFlowDetailComponent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EmbedUrlOption.ShowFlowDetailComponent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_showFlowDetailComponent = value["ShowFlowDetailComponent"].GetBool();
        m_showFlowDetailComponentHasBeenSet = true;
    }

    if (value.HasMember("ShowTemplateComponent") && !value["ShowTemplateComponent"].IsNull())
    {
        if (!value["ShowTemplateComponent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EmbedUrlOption.ShowTemplateComponent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_showTemplateComponent = value["ShowTemplateComponent"].GetBool();
        m_showTemplateComponentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmbedUrlOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_showFlowDetailComponentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowFlowDetailComponent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_showFlowDetailComponent, allocator);
    }

    if (m_showTemplateComponentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowTemplateComponent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_showTemplateComponent, allocator);
    }

}


bool EmbedUrlOption::GetShowFlowDetailComponent() const
{
    return m_showFlowDetailComponent;
}

void EmbedUrlOption::SetShowFlowDetailComponent(const bool& _showFlowDetailComponent)
{
    m_showFlowDetailComponent = _showFlowDetailComponent;
    m_showFlowDetailComponentHasBeenSet = true;
}

bool EmbedUrlOption::ShowFlowDetailComponentHasBeenSet() const
{
    return m_showFlowDetailComponentHasBeenSet;
}

bool EmbedUrlOption::GetShowTemplateComponent() const
{
    return m_showTemplateComponent;
}

void EmbedUrlOption::SetShowTemplateComponent(const bool& _showTemplateComponent)
{
    m_showTemplateComponent = _showTemplateComponent;
    m_showTemplateComponentHasBeenSet = true;
}

bool EmbedUrlOption::ShowTemplateComponentHasBeenSet() const
{
    return m_showTemplateComponentHasBeenSet;
}

