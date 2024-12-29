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

#include <tencentcloud/iai/v20200303/model/DetectFaceSimilarityRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

DetectFaceSimilarityRequest::DetectFaceSimilarityRequest() :
    m_imageAHasBeenSet(false),
    m_imageBHasBeenSet(false),
    m_urlAHasBeenSet(false),
    m_urlBHasBeenSet(false),
    m_qualityControlHasBeenSet(false)
{
}

string DetectFaceSimilarityRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageA";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageA.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageB.c_str(), allocator).Move(), allocator);
    }

    if (m_urlAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlA";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_urlA.c_str(), allocator).Move(), allocator);
    }

    if (m_urlBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_urlB.c_str(), allocator).Move(), allocator);
    }

    if (m_qualityControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityControl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_qualityControl, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DetectFaceSimilarityRequest::GetImageA() const
{
    return m_imageA;
}

void DetectFaceSimilarityRequest::SetImageA(const string& _imageA)
{
    m_imageA = _imageA;
    m_imageAHasBeenSet = true;
}

bool DetectFaceSimilarityRequest::ImageAHasBeenSet() const
{
    return m_imageAHasBeenSet;
}

string DetectFaceSimilarityRequest::GetImageB() const
{
    return m_imageB;
}

void DetectFaceSimilarityRequest::SetImageB(const string& _imageB)
{
    m_imageB = _imageB;
    m_imageBHasBeenSet = true;
}

bool DetectFaceSimilarityRequest::ImageBHasBeenSet() const
{
    return m_imageBHasBeenSet;
}

string DetectFaceSimilarityRequest::GetUrlA() const
{
    return m_urlA;
}

void DetectFaceSimilarityRequest::SetUrlA(const string& _urlA)
{
    m_urlA = _urlA;
    m_urlAHasBeenSet = true;
}

bool DetectFaceSimilarityRequest::UrlAHasBeenSet() const
{
    return m_urlAHasBeenSet;
}

string DetectFaceSimilarityRequest::GetUrlB() const
{
    return m_urlB;
}

void DetectFaceSimilarityRequest::SetUrlB(const string& _urlB)
{
    m_urlB = _urlB;
    m_urlBHasBeenSet = true;
}

bool DetectFaceSimilarityRequest::UrlBHasBeenSet() const
{
    return m_urlBHasBeenSet;
}

uint64_t DetectFaceSimilarityRequest::GetQualityControl() const
{
    return m_qualityControl;
}

void DetectFaceSimilarityRequest::SetQualityControl(const uint64_t& _qualityControl)
{
    m_qualityControl = _qualityControl;
    m_qualityControlHasBeenSet = true;
}

bool DetectFaceSimilarityRequest::QualityControlHasBeenSet() const
{
    return m_qualityControlHasBeenSet;
}


