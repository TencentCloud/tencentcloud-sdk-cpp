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

#include <tencentcloud/aiart/v20221229/model/TextToImageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Aiart::V20221229::Model;
using namespace std;

TextToImageRequest::TextToImageRequest() :
    m_promptHasBeenSet(false),
    m_negativePromptHasBeenSet(false),
    m_stylesHasBeenSet(false),
    m_resultConfigHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_logoParamHasBeenSet(false),
    m_rspImgTypeHasBeenSet(false)
{
}

string TextToImageRequest::ToJsonString() const
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

    if (m_negativePromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NegativePrompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_negativePrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_stylesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Styles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_styles.begin(); itr != m_styles.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resultConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resultConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_logoAddHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogoAdd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logoAdd, allocator);
    }

    if (m_logoParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogoParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logoParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_rspImgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RspImgType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rspImgType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TextToImageRequest::GetPrompt() const
{
    return m_prompt;
}

void TextToImageRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool TextToImageRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string TextToImageRequest::GetNegativePrompt() const
{
    return m_negativePrompt;
}

void TextToImageRequest::SetNegativePrompt(const string& _negativePrompt)
{
    m_negativePrompt = _negativePrompt;
    m_negativePromptHasBeenSet = true;
}

bool TextToImageRequest::NegativePromptHasBeenSet() const
{
    return m_negativePromptHasBeenSet;
}

vector<string> TextToImageRequest::GetStyles() const
{
    return m_styles;
}

void TextToImageRequest::SetStyles(const vector<string>& _styles)
{
    m_styles = _styles;
    m_stylesHasBeenSet = true;
}

bool TextToImageRequest::StylesHasBeenSet() const
{
    return m_stylesHasBeenSet;
}

ResultConfig TextToImageRequest::GetResultConfig() const
{
    return m_resultConfig;
}

void TextToImageRequest::SetResultConfig(const ResultConfig& _resultConfig)
{
    m_resultConfig = _resultConfig;
    m_resultConfigHasBeenSet = true;
}

bool TextToImageRequest::ResultConfigHasBeenSet() const
{
    return m_resultConfigHasBeenSet;
}

int64_t TextToImageRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void TextToImageRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool TextToImageRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

LogoParam TextToImageRequest::GetLogoParam() const
{
    return m_logoParam;
}

void TextToImageRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool TextToImageRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}

string TextToImageRequest::GetRspImgType() const
{
    return m_rspImgType;
}

void TextToImageRequest::SetRspImgType(const string& _rspImgType)
{
    m_rspImgType = _rspImgType;
    m_rspImgTypeHasBeenSet = true;
}

bool TextToImageRequest::RspImgTypeHasBeenSet() const
{
    return m_rspImgTypeHasBeenSet;
}


