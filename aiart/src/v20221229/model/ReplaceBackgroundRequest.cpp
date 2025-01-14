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

#include <tencentcloud/aiart/v20221229/model/ReplaceBackgroundRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Aiart::V20221229::Model;
using namespace std;

ReplaceBackgroundRequest::ReplaceBackgroundRequest() :
    m_productUrlHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_negativePromptHasBeenSet(false),
    m_productHasBeenSet(false),
    m_backgroundTemplateHasBeenSet(false),
    m_maskUrlHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_logoParamHasBeenSet(false),
    m_rspImgTypeHasBeenSet(false)
{
}

string ReplaceBackgroundRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productUrl.c_str(), allocator).Move(), allocator);
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

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_backgroundTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backgroundTemplate.c_str(), allocator).Move(), allocator);
    }

    if (m_maskUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaskUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_maskUrl.c_str(), allocator).Move(), allocator);
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


string ReplaceBackgroundRequest::GetProductUrl() const
{
    return m_productUrl;
}

void ReplaceBackgroundRequest::SetProductUrl(const string& _productUrl)
{
    m_productUrl = _productUrl;
    m_productUrlHasBeenSet = true;
}

bool ReplaceBackgroundRequest::ProductUrlHasBeenSet() const
{
    return m_productUrlHasBeenSet;
}

string ReplaceBackgroundRequest::GetPrompt() const
{
    return m_prompt;
}

void ReplaceBackgroundRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool ReplaceBackgroundRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string ReplaceBackgroundRequest::GetNegativePrompt() const
{
    return m_negativePrompt;
}

void ReplaceBackgroundRequest::SetNegativePrompt(const string& _negativePrompt)
{
    m_negativePrompt = _negativePrompt;
    m_negativePromptHasBeenSet = true;
}

bool ReplaceBackgroundRequest::NegativePromptHasBeenSet() const
{
    return m_negativePromptHasBeenSet;
}

string ReplaceBackgroundRequest::GetProduct() const
{
    return m_product;
}

void ReplaceBackgroundRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool ReplaceBackgroundRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string ReplaceBackgroundRequest::GetBackgroundTemplate() const
{
    return m_backgroundTemplate;
}

void ReplaceBackgroundRequest::SetBackgroundTemplate(const string& _backgroundTemplate)
{
    m_backgroundTemplate = _backgroundTemplate;
    m_backgroundTemplateHasBeenSet = true;
}

bool ReplaceBackgroundRequest::BackgroundTemplateHasBeenSet() const
{
    return m_backgroundTemplateHasBeenSet;
}

string ReplaceBackgroundRequest::GetMaskUrl() const
{
    return m_maskUrl;
}

void ReplaceBackgroundRequest::SetMaskUrl(const string& _maskUrl)
{
    m_maskUrl = _maskUrl;
    m_maskUrlHasBeenSet = true;
}

bool ReplaceBackgroundRequest::MaskUrlHasBeenSet() const
{
    return m_maskUrlHasBeenSet;
}

string ReplaceBackgroundRequest::GetResolution() const
{
    return m_resolution;
}

void ReplaceBackgroundRequest::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool ReplaceBackgroundRequest::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

int64_t ReplaceBackgroundRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void ReplaceBackgroundRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool ReplaceBackgroundRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

LogoParam ReplaceBackgroundRequest::GetLogoParam() const
{
    return m_logoParam;
}

void ReplaceBackgroundRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool ReplaceBackgroundRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}

string ReplaceBackgroundRequest::GetRspImgType() const
{
    return m_rspImgType;
}

void ReplaceBackgroundRequest::SetRspImgType(const string& _rspImgType)
{
    m_rspImgType = _rspImgType;
    m_rspImgTypeHasBeenSet = true;
}

bool ReplaceBackgroundRequest::RspImgTypeHasBeenSet() const
{
    return m_rspImgTypeHasBeenSet;
}


