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

#include <tencentcloud/faceid/v20180301/model/VideoLivenessCompareRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

VideoLivenessCompareRequest::VideoLivenessCompareRequest() :
    m_imageUrlHasBeenSet(false),
    m_imageMd5HasBeenSet(false),
    m_videoUrlHasBeenSet(false),
    m_videoMd5HasBeenSet(false),
    m_livenessTypeHasBeenSet(false),
    m_validateDataHasBeenSet(false)
{
}

string VideoLivenessCompareRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_videoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_videoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_videoMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoMd5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_videoMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_livenessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LivenessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_livenessType.c_str(), allocator).Move(), allocator);
    }

    if (m_validateDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidateData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_validateData.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string VideoLivenessCompareRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void VideoLivenessCompareRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool VideoLivenessCompareRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string VideoLivenessCompareRequest::GetImageMd5() const
{
    return m_imageMd5;
}

void VideoLivenessCompareRequest::SetImageMd5(const string& _imageMd5)
{
    m_imageMd5 = _imageMd5;
    m_imageMd5HasBeenSet = true;
}

bool VideoLivenessCompareRequest::ImageMd5HasBeenSet() const
{
    return m_imageMd5HasBeenSet;
}

string VideoLivenessCompareRequest::GetVideoUrl() const
{
    return m_videoUrl;
}

void VideoLivenessCompareRequest::SetVideoUrl(const string& _videoUrl)
{
    m_videoUrl = _videoUrl;
    m_videoUrlHasBeenSet = true;
}

bool VideoLivenessCompareRequest::VideoUrlHasBeenSet() const
{
    return m_videoUrlHasBeenSet;
}

string VideoLivenessCompareRequest::GetVideoMd5() const
{
    return m_videoMd5;
}

void VideoLivenessCompareRequest::SetVideoMd5(const string& _videoMd5)
{
    m_videoMd5 = _videoMd5;
    m_videoMd5HasBeenSet = true;
}

bool VideoLivenessCompareRequest::VideoMd5HasBeenSet() const
{
    return m_videoMd5HasBeenSet;
}

string VideoLivenessCompareRequest::GetLivenessType() const
{
    return m_livenessType;
}

void VideoLivenessCompareRequest::SetLivenessType(const string& _livenessType)
{
    m_livenessType = _livenessType;
    m_livenessTypeHasBeenSet = true;
}

bool VideoLivenessCompareRequest::LivenessTypeHasBeenSet() const
{
    return m_livenessTypeHasBeenSet;
}

string VideoLivenessCompareRequest::GetValidateData() const
{
    return m_validateData;
}

void VideoLivenessCompareRequest::SetValidateData(const string& _validateData)
{
    m_validateData = _validateData;
    m_validateDataHasBeenSet = true;
}

bool VideoLivenessCompareRequest::ValidateDataHasBeenSet() const
{
    return m_validateDataHasBeenSet;
}


