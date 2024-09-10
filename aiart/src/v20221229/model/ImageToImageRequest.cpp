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

#include <tencentcloud/aiart/v20221229/model/ImageToImageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Aiart::V20221229::Model;
using namespace std;

ImageToImageRequest::ImageToImageRequest() :
    m_inputImageHasBeenSet(false),
    m_inputUrlHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_negativePromptHasBeenSet(false),
    m_stylesHasBeenSet(false),
    m_resultConfigHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_logoParamHasBeenSet(false),
    m_strengthHasBeenSet(false),
    m_rspImgTypeHasBeenSet(false),
    m_enhanceImageHasBeenSet(false),
    m_restoreFaceHasBeenSet(false)
{
}

string ImageToImageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_inputImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputImage.c_str(), allocator).Move(), allocator);
    }

    if (m_inputUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputUrl.c_str(), allocator).Move(), allocator);
    }

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

    if (m_strengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strength";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_strength, allocator);
    }

    if (m_rspImgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RspImgType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rspImgType.c_str(), allocator).Move(), allocator);
    }

    if (m_enhanceImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhanceImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enhanceImage, allocator);
    }

    if (m_restoreFaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreFace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_restoreFace, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImageToImageRequest::GetInputImage() const
{
    return m_inputImage;
}

void ImageToImageRequest::SetInputImage(const string& _inputImage)
{
    m_inputImage = _inputImage;
    m_inputImageHasBeenSet = true;
}

bool ImageToImageRequest::InputImageHasBeenSet() const
{
    return m_inputImageHasBeenSet;
}

string ImageToImageRequest::GetInputUrl() const
{
    return m_inputUrl;
}

void ImageToImageRequest::SetInputUrl(const string& _inputUrl)
{
    m_inputUrl = _inputUrl;
    m_inputUrlHasBeenSet = true;
}

bool ImageToImageRequest::InputUrlHasBeenSet() const
{
    return m_inputUrlHasBeenSet;
}

string ImageToImageRequest::GetPrompt() const
{
    return m_prompt;
}

void ImageToImageRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool ImageToImageRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string ImageToImageRequest::GetNegativePrompt() const
{
    return m_negativePrompt;
}

void ImageToImageRequest::SetNegativePrompt(const string& _negativePrompt)
{
    m_negativePrompt = _negativePrompt;
    m_negativePromptHasBeenSet = true;
}

bool ImageToImageRequest::NegativePromptHasBeenSet() const
{
    return m_negativePromptHasBeenSet;
}

vector<string> ImageToImageRequest::GetStyles() const
{
    return m_styles;
}

void ImageToImageRequest::SetStyles(const vector<string>& _styles)
{
    m_styles = _styles;
    m_stylesHasBeenSet = true;
}

bool ImageToImageRequest::StylesHasBeenSet() const
{
    return m_stylesHasBeenSet;
}

ResultConfig ImageToImageRequest::GetResultConfig() const
{
    return m_resultConfig;
}

void ImageToImageRequest::SetResultConfig(const ResultConfig& _resultConfig)
{
    m_resultConfig = _resultConfig;
    m_resultConfigHasBeenSet = true;
}

bool ImageToImageRequest::ResultConfigHasBeenSet() const
{
    return m_resultConfigHasBeenSet;
}

int64_t ImageToImageRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void ImageToImageRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool ImageToImageRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

LogoParam ImageToImageRequest::GetLogoParam() const
{
    return m_logoParam;
}

void ImageToImageRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool ImageToImageRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}

double ImageToImageRequest::GetStrength() const
{
    return m_strength;
}

void ImageToImageRequest::SetStrength(const double& _strength)
{
    m_strength = _strength;
    m_strengthHasBeenSet = true;
}

bool ImageToImageRequest::StrengthHasBeenSet() const
{
    return m_strengthHasBeenSet;
}

string ImageToImageRequest::GetRspImgType() const
{
    return m_rspImgType;
}

void ImageToImageRequest::SetRspImgType(const string& _rspImgType)
{
    m_rspImgType = _rspImgType;
    m_rspImgTypeHasBeenSet = true;
}

bool ImageToImageRequest::RspImgTypeHasBeenSet() const
{
    return m_rspImgTypeHasBeenSet;
}

int64_t ImageToImageRequest::GetEnhanceImage() const
{
    return m_enhanceImage;
}

void ImageToImageRequest::SetEnhanceImage(const int64_t& _enhanceImage)
{
    m_enhanceImage = _enhanceImage;
    m_enhanceImageHasBeenSet = true;
}

bool ImageToImageRequest::EnhanceImageHasBeenSet() const
{
    return m_enhanceImageHasBeenSet;
}

int64_t ImageToImageRequest::GetRestoreFace() const
{
    return m_restoreFace;
}

void ImageToImageRequest::SetRestoreFace(const int64_t& _restoreFace)
{
    m_restoreFace = _restoreFace;
    m_restoreFaceHasBeenSet = true;
}

bool ImageToImageRequest::RestoreFaceHasBeenSet() const
{
    return m_restoreFaceHasBeenSet;
}


