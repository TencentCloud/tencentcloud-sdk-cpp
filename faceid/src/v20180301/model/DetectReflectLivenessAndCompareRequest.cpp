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

#include <tencentcloud/faceid/v20180301/model/DetectReflectLivenessAndCompareRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

DetectReflectLivenessAndCompareRequest::DetectReflectLivenessAndCompareRequest() :
    m_liveDataUrlHasBeenSet(false),
    m_liveDataMd5HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_imageMd5HasBeenSet(false)
{
}

string DetectReflectLivenessAndCompareRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_liveDataUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveDataUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_liveDataUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_liveDataMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveDataMd5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_liveDataMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imageMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageMd5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageMd5.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DetectReflectLivenessAndCompareRequest::GetLiveDataUrl() const
{
    return m_liveDataUrl;
}

void DetectReflectLivenessAndCompareRequest::SetLiveDataUrl(const string& _liveDataUrl)
{
    m_liveDataUrl = _liveDataUrl;
    m_liveDataUrlHasBeenSet = true;
}

bool DetectReflectLivenessAndCompareRequest::LiveDataUrlHasBeenSet() const
{
    return m_liveDataUrlHasBeenSet;
}

string DetectReflectLivenessAndCompareRequest::GetLiveDataMd5() const
{
    return m_liveDataMd5;
}

void DetectReflectLivenessAndCompareRequest::SetLiveDataMd5(const string& _liveDataMd5)
{
    m_liveDataMd5 = _liveDataMd5;
    m_liveDataMd5HasBeenSet = true;
}

bool DetectReflectLivenessAndCompareRequest::LiveDataMd5HasBeenSet() const
{
    return m_liveDataMd5HasBeenSet;
}

string DetectReflectLivenessAndCompareRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void DetectReflectLivenessAndCompareRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool DetectReflectLivenessAndCompareRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string DetectReflectLivenessAndCompareRequest::GetImageMd5() const
{
    return m_imageMd5;
}

void DetectReflectLivenessAndCompareRequest::SetImageMd5(const string& _imageMd5)
{
    m_imageMd5 = _imageMd5;
    m_imageMd5HasBeenSet = true;
}

bool DetectReflectLivenessAndCompareRequest::ImageMd5HasBeenSet() const
{
    return m_imageMd5HasBeenSet;
}


