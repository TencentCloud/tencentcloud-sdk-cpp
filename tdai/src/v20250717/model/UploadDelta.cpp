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

#include <tencentcloud/tdai/v20250717/model/UploadDelta.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

UploadDelta::UploadDelta() :
    m_stepBriefHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

CoreInternalOutcome UploadDelta::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StepBrief") && !value["StepBrief"].IsNull())
    {
        if (!value["StepBrief"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadDelta.StepBrief` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stepBrief = string(value["StepBrief"].GetString());
        m_stepBriefHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadDelta.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UploadDelta::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stepBriefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepBrief";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stepBrief.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

}


string UploadDelta::GetStepBrief() const
{
    return m_stepBrief;
}

void UploadDelta::SetStepBrief(const string& _stepBrief)
{
    m_stepBrief = _stepBrief;
    m_stepBriefHasBeenSet = true;
}

bool UploadDelta::StepBriefHasBeenSet() const
{
    return m_stepBriefHasBeenSet;
}

string UploadDelta::GetContent() const
{
    return m_content;
}

void UploadDelta::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool UploadDelta::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

