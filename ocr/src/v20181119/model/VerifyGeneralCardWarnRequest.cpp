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

#include <tencentcloud/ocr/v20181119/model/VerifyGeneralCardWarnRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VerifyGeneralCardWarnRequest::VerifyGeneralCardWarnRequest() :
    m_cardTypeHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_reasoningPromptHasBeenSet(false),
    m_reasoningConfigHasBeenSet(false),
    m_ignoreWatermarkCategoriesHasBeenSet(false)
{
}

string VerifyGeneralCardWarnRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cardType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_reasoningPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasoningPrompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reasoningPrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_reasoningConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasoningConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reasoningConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ignoreWatermarkCategoriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreWatermarkCategories";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ignoreWatermarkCategories.begin(); itr != m_ignoreWatermarkCategories.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string VerifyGeneralCardWarnRequest::GetCardType() const
{
    return m_cardType;
}

void VerifyGeneralCardWarnRequest::SetCardType(const string& _cardType)
{
    m_cardType = _cardType;
    m_cardTypeHasBeenSet = true;
}

bool VerifyGeneralCardWarnRequest::CardTypeHasBeenSet() const
{
    return m_cardTypeHasBeenSet;
}

string VerifyGeneralCardWarnRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void VerifyGeneralCardWarnRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool VerifyGeneralCardWarnRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string VerifyGeneralCardWarnRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void VerifyGeneralCardWarnRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool VerifyGeneralCardWarnRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string VerifyGeneralCardWarnRequest::GetReasoningPrompt() const
{
    return m_reasoningPrompt;
}

void VerifyGeneralCardWarnRequest::SetReasoningPrompt(const string& _reasoningPrompt)
{
    m_reasoningPrompt = _reasoningPrompt;
    m_reasoningPromptHasBeenSet = true;
}

bool VerifyGeneralCardWarnRequest::ReasoningPromptHasBeenSet() const
{
    return m_reasoningPromptHasBeenSet;
}

ReasoningConfig VerifyGeneralCardWarnRequest::GetReasoningConfig() const
{
    return m_reasoningConfig;
}

void VerifyGeneralCardWarnRequest::SetReasoningConfig(const ReasoningConfig& _reasoningConfig)
{
    m_reasoningConfig = _reasoningConfig;
    m_reasoningConfigHasBeenSet = true;
}

bool VerifyGeneralCardWarnRequest::ReasoningConfigHasBeenSet() const
{
    return m_reasoningConfigHasBeenSet;
}

vector<string> VerifyGeneralCardWarnRequest::GetIgnoreWatermarkCategories() const
{
    return m_ignoreWatermarkCategories;
}

void VerifyGeneralCardWarnRequest::SetIgnoreWatermarkCategories(const vector<string>& _ignoreWatermarkCategories)
{
    m_ignoreWatermarkCategories = _ignoreWatermarkCategories;
    m_ignoreWatermarkCategoriesHasBeenSet = true;
}

bool VerifyGeneralCardWarnRequest::IgnoreWatermarkCategoriesHasBeenSet() const
{
    return m_ignoreWatermarkCategoriesHasBeenSet;
}


