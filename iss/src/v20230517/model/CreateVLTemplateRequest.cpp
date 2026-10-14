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

#include <tencentcloud/iss/v20230517/model/CreateVLTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

CreateVLTemplateRequest::CreateVLTemplateRequest() :
    m_aIModelHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_analysisModeHasBeenSet(false),
    m_timesHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_imageConfigHasBeenSet(false)
{
}

string CreateVLTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_aIModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AIModel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aIModel.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_analysisModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_analysisMode.c_str(), allocator).Move(), allocator);
    }

    if (m_timesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Times";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_times.begin(); itr != m_times.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
    }

    if (m_imageConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVLTemplateRequest::GetAIModel() const
{
    return m_aIModel;
}

void CreateVLTemplateRequest::SetAIModel(const string& _aIModel)
{
    m_aIModel = _aIModel;
    m_aIModelHasBeenSet = true;
}

bool CreateVLTemplateRequest::AIModelHasBeenSet() const
{
    return m_aIModelHasBeenSet;
}

string CreateVLTemplateRequest::GetName() const
{
    return m_name;
}

void CreateVLTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateVLTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateVLTemplateRequest::GetPrompt() const
{
    return m_prompt;
}

void CreateVLTemplateRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool CreateVLTemplateRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string CreateVLTemplateRequest::GetAnalysisMode() const
{
    return m_analysisMode;
}

void CreateVLTemplateRequest::SetAnalysisMode(const string& _analysisMode)
{
    m_analysisMode = _analysisMode;
    m_analysisModeHasBeenSet = true;
}

bool CreateVLTemplateRequest::AnalysisModeHasBeenSet() const
{
    return m_analysisModeHasBeenSet;
}

vector<EffectiveTime> CreateVLTemplateRequest::GetTimes() const
{
    return m_times;
}

void CreateVLTemplateRequest::SetTimes(const vector<EffectiveTime>& _times)
{
    m_times = _times;
    m_timesHasBeenSet = true;
}

bool CreateVLTemplateRequest::TimesHasBeenSet() const
{
    return m_timesHasBeenSet;
}

string CreateVLTemplateRequest::GetDescribe() const
{
    return m_describe;
}

void CreateVLTemplateRequest::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool CreateVLTemplateRequest::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

ImageSceneInfo CreateVLTemplateRequest::GetImageConfig() const
{
    return m_imageConfig;
}

void CreateVLTemplateRequest::SetImageConfig(const ImageSceneInfo& _imageConfig)
{
    m_imageConfig = _imageConfig;
    m_imageConfigHasBeenSet = true;
}

bool CreateVLTemplateRequest::ImageConfigHasBeenSet() const
{
    return m_imageConfigHasBeenSet;
}


