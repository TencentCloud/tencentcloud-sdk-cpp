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

#include <tencentcloud/iai/v20200303/model/DetectLiveFaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

DetectLiveFaceRequest::DetectLiveFaceRequest() :
    m_imageHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_faceModelVersionHasBeenSet(false)
{
}

string DetectLiveFaceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_faceModelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceModelVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_faceModelVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DetectLiveFaceRequest::GetImage() const
{
    return m_image;
}

void DetectLiveFaceRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool DetectLiveFaceRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string DetectLiveFaceRequest::GetUrl() const
{
    return m_url;
}

void DetectLiveFaceRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool DetectLiveFaceRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string DetectLiveFaceRequest::GetFaceModelVersion() const
{
    return m_faceModelVersion;
}

void DetectLiveFaceRequest::SetFaceModelVersion(const string& _faceModelVersion)
{
    m_faceModelVersion = _faceModelVersion;
    m_faceModelVersionHasBeenSet = true;
}

bool DetectLiveFaceRequest::FaceModelVersionHasBeenSet() const
{
    return m_faceModelVersionHasBeenSet;
}


