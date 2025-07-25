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

#include <tencentcloud/essbasic/v20210526/model/EmbedUrlOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

EmbedUrlOption::EmbedUrlOption() :
    m_showFlowDetailComponentHasBeenSet(false),
    m_showTemplateComponentHasBeenSet(false),
    m_skipUploadFileHasBeenSet(false),
    m_forbidEditWatermarkHasBeenSet(false)
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

    if (value.HasMember("SkipUploadFile") && !value["SkipUploadFile"].IsNull())
    {
        if (!value["SkipUploadFile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmbedUrlOption.SkipUploadFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skipUploadFile = string(value["SkipUploadFile"].GetString());
        m_skipUploadFileHasBeenSet = true;
    }

    if (value.HasMember("ForbidEditWatermark") && !value["ForbidEditWatermark"].IsNull())
    {
        if (!value["ForbidEditWatermark"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EmbedUrlOption.ForbidEditWatermark` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_forbidEditWatermark = value["ForbidEditWatermark"].GetBool();
        m_forbidEditWatermarkHasBeenSet = true;
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

    if (m_skipUploadFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipUploadFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skipUploadFile.c_str(), allocator).Move(), allocator);
    }

    if (m_forbidEditWatermarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForbidEditWatermark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forbidEditWatermark, allocator);
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

string EmbedUrlOption::GetSkipUploadFile() const
{
    return m_skipUploadFile;
}

void EmbedUrlOption::SetSkipUploadFile(const string& _skipUploadFile)
{
    m_skipUploadFile = _skipUploadFile;
    m_skipUploadFileHasBeenSet = true;
}

bool EmbedUrlOption::SkipUploadFileHasBeenSet() const
{
    return m_skipUploadFileHasBeenSet;
}

bool EmbedUrlOption::GetForbidEditWatermark() const
{
    return m_forbidEditWatermark;
}

void EmbedUrlOption::SetForbidEditWatermark(const bool& _forbidEditWatermark)
{
    m_forbidEditWatermark = _forbidEditWatermark;
    m_forbidEditWatermarkHasBeenSet = true;
}

bool EmbedUrlOption::ForbidEditWatermarkHasBeenSet() const
{
    return m_forbidEditWatermarkHasBeenSet;
}

