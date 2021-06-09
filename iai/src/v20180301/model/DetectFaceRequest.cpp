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

#include <tencentcloud/iai/v20180301/model/DetectFaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iai::V20180301::Model;
using namespace std;

DetectFaceRequest::DetectFaceRequest() :
    m_maxFaceNumHasBeenSet(false),
    m_minFaceSizeHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_needFaceAttributesHasBeenSet(false),
    m_needQualityDetectionHasBeenSet(false),
    m_faceModelVersionHasBeenSet(false),
    m_needRotateDetectionHasBeenSet(false)
{
}

string DetectFaceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_maxFaceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxFaceNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxFaceNum, allocator);
    }

    if (m_minFaceSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinFaceSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minFaceSize, allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_needFaceAttributesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedFaceAttributes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needFaceAttributes, allocator);
    }

    if (m_needQualityDetectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedQualityDetection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needQualityDetection, allocator);
    }

    if (m_faceModelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceModelVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_faceModelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_needRotateDetectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedRotateDetection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needRotateDetection, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DetectFaceRequest::GetMaxFaceNum() const
{
    return m_maxFaceNum;
}

void DetectFaceRequest::SetMaxFaceNum(const uint64_t& _maxFaceNum)
{
    m_maxFaceNum = _maxFaceNum;
    m_maxFaceNumHasBeenSet = true;
}

bool DetectFaceRequest::MaxFaceNumHasBeenSet() const
{
    return m_maxFaceNumHasBeenSet;
}

uint64_t DetectFaceRequest::GetMinFaceSize() const
{
    return m_minFaceSize;
}

void DetectFaceRequest::SetMinFaceSize(const uint64_t& _minFaceSize)
{
    m_minFaceSize = _minFaceSize;
    m_minFaceSizeHasBeenSet = true;
}

bool DetectFaceRequest::MinFaceSizeHasBeenSet() const
{
    return m_minFaceSizeHasBeenSet;
}

string DetectFaceRequest::GetImage() const
{
    return m_image;
}

void DetectFaceRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool DetectFaceRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string DetectFaceRequest::GetUrl() const
{
    return m_url;
}

void DetectFaceRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool DetectFaceRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t DetectFaceRequest::GetNeedFaceAttributes() const
{
    return m_needFaceAttributes;
}

void DetectFaceRequest::SetNeedFaceAttributes(const uint64_t& _needFaceAttributes)
{
    m_needFaceAttributes = _needFaceAttributes;
    m_needFaceAttributesHasBeenSet = true;
}

bool DetectFaceRequest::NeedFaceAttributesHasBeenSet() const
{
    return m_needFaceAttributesHasBeenSet;
}

uint64_t DetectFaceRequest::GetNeedQualityDetection() const
{
    return m_needQualityDetection;
}

void DetectFaceRequest::SetNeedQualityDetection(const uint64_t& _needQualityDetection)
{
    m_needQualityDetection = _needQualityDetection;
    m_needQualityDetectionHasBeenSet = true;
}

bool DetectFaceRequest::NeedQualityDetectionHasBeenSet() const
{
    return m_needQualityDetectionHasBeenSet;
}

string DetectFaceRequest::GetFaceModelVersion() const
{
    return m_faceModelVersion;
}

void DetectFaceRequest::SetFaceModelVersion(const string& _faceModelVersion)
{
    m_faceModelVersion = _faceModelVersion;
    m_faceModelVersionHasBeenSet = true;
}

bool DetectFaceRequest::FaceModelVersionHasBeenSet() const
{
    return m_faceModelVersionHasBeenSet;
}

uint64_t DetectFaceRequest::GetNeedRotateDetection() const
{
    return m_needRotateDetection;
}

void DetectFaceRequest::SetNeedRotateDetection(const uint64_t& _needRotateDetection)
{
    m_needRotateDetection = _needRotateDetection;
    m_needRotateDetectionHasBeenSet = true;
}

bool DetectFaceRequest::NeedRotateDetectionHasBeenSet() const
{
    return m_needRotateDetectionHasBeenSet;
}


