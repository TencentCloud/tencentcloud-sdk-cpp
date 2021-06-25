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

#include <tencentcloud/ocr/v20181119/model/EnglishOCRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

EnglishOCRRequest::EnglishOCRRequest() :
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_enableCoordPointHasBeenSet(false),
    m_enableCandWordHasBeenSet(false),
    m_preprocessHasBeenSet(false)
{
}

string EnglishOCRRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_enableCoordPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCoordPoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableCoordPoint, allocator);
    }

    if (m_enableCandWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCandWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableCandWord, allocator);
    }

    if (m_preprocessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Preprocess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_preprocess, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EnglishOCRRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void EnglishOCRRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool EnglishOCRRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string EnglishOCRRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void EnglishOCRRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool EnglishOCRRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

bool EnglishOCRRequest::GetEnableCoordPoint() const
{
    return m_enableCoordPoint;
}

void EnglishOCRRequest::SetEnableCoordPoint(const bool& _enableCoordPoint)
{
    m_enableCoordPoint = _enableCoordPoint;
    m_enableCoordPointHasBeenSet = true;
}

bool EnglishOCRRequest::EnableCoordPointHasBeenSet() const
{
    return m_enableCoordPointHasBeenSet;
}

bool EnglishOCRRequest::GetEnableCandWord() const
{
    return m_enableCandWord;
}

void EnglishOCRRequest::SetEnableCandWord(const bool& _enableCandWord)
{
    m_enableCandWord = _enableCandWord;
    m_enableCandWordHasBeenSet = true;
}

bool EnglishOCRRequest::EnableCandWordHasBeenSet() const
{
    return m_enableCandWordHasBeenSet;
}

bool EnglishOCRRequest::GetPreprocess() const
{
    return m_preprocess;
}

void EnglishOCRRequest::SetPreprocess(const bool& _preprocess)
{
    m_preprocess = _preprocess;
    m_preprocessHasBeenSet = true;
}

bool EnglishOCRRequest::PreprocessHasBeenSet() const
{
    return m_preprocessHasBeenSet;
}


