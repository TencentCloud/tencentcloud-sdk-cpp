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

#include <tencentcloud/aiart/v20221229/model/SubmitTextToImageProJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Aiart::V20221229::Model;
using namespace std;

SubmitTextToImageProJobRequest::SubmitTextToImageProJobRequest() :
    m_promptHasBeenSet(false),
    m_styleHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_reviseHasBeenSet(false)
{
}

string SubmitTextToImageProJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_styleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Style";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_style.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_logoAddHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogoAdd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logoAdd, allocator);
    }

    if (m_engineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engine.c_str(), allocator).Move(), allocator);
    }

    if (m_reviseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Revise";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_revise, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitTextToImageProJobRequest::GetPrompt() const
{
    return m_prompt;
}

void SubmitTextToImageProJobRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool SubmitTextToImageProJobRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string SubmitTextToImageProJobRequest::GetStyle() const
{
    return m_style;
}

void SubmitTextToImageProJobRequest::SetStyle(const string& _style)
{
    m_style = _style;
    m_styleHasBeenSet = true;
}

bool SubmitTextToImageProJobRequest::StyleHasBeenSet() const
{
    return m_styleHasBeenSet;
}

string SubmitTextToImageProJobRequest::GetResolution() const
{
    return m_resolution;
}

void SubmitTextToImageProJobRequest::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool SubmitTextToImageProJobRequest::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

int64_t SubmitTextToImageProJobRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void SubmitTextToImageProJobRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool SubmitTextToImageProJobRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

string SubmitTextToImageProJobRequest::GetEngine() const
{
    return m_engine;
}

void SubmitTextToImageProJobRequest::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool SubmitTextToImageProJobRequest::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

int64_t SubmitTextToImageProJobRequest::GetRevise() const
{
    return m_revise;
}

void SubmitTextToImageProJobRequest::SetRevise(const int64_t& _revise)
{
    m_revise = _revise;
    m_reviseHasBeenSet = true;
}

bool SubmitTextToImageProJobRequest::ReviseHasBeenSet() const
{
    return m_reviseHasBeenSet;
}


