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

#include <tencentcloud/fmu/v20191213/model/BeautifyPicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Fmu::V20191213::Model;
using namespace std;

BeautifyPicRequest::BeautifyPicRequest() :
    m_imageHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_whiteningHasBeenSet(false),
    m_smoothingHasBeenSet(false),
    m_faceLiftingHasBeenSet(false),
    m_eyeEnlargingHasBeenSet(false),
    m_rspImgTypeHasBeenSet(false)
{
}

string BeautifyPicRequest::ToJsonString() const
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

    if (m_whiteningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Whitening";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_whitening, allocator);
    }

    if (m_smoothingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Smoothing";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_smoothing, allocator);
    }

    if (m_faceLiftingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceLifting";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_faceLifting, allocator);
    }

    if (m_eyeEnlargingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EyeEnlarging";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_eyeEnlarging, allocator);
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


string BeautifyPicRequest::GetImage() const
{
    return m_image;
}

void BeautifyPicRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool BeautifyPicRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string BeautifyPicRequest::GetUrl() const
{
    return m_url;
}

void BeautifyPicRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool BeautifyPicRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t BeautifyPicRequest::GetWhitening() const
{
    return m_whitening;
}

void BeautifyPicRequest::SetWhitening(const uint64_t& _whitening)
{
    m_whitening = _whitening;
    m_whiteningHasBeenSet = true;
}

bool BeautifyPicRequest::WhiteningHasBeenSet() const
{
    return m_whiteningHasBeenSet;
}

uint64_t BeautifyPicRequest::GetSmoothing() const
{
    return m_smoothing;
}

void BeautifyPicRequest::SetSmoothing(const uint64_t& _smoothing)
{
    m_smoothing = _smoothing;
    m_smoothingHasBeenSet = true;
}

bool BeautifyPicRequest::SmoothingHasBeenSet() const
{
    return m_smoothingHasBeenSet;
}

uint64_t BeautifyPicRequest::GetFaceLifting() const
{
    return m_faceLifting;
}

void BeautifyPicRequest::SetFaceLifting(const uint64_t& _faceLifting)
{
    m_faceLifting = _faceLifting;
    m_faceLiftingHasBeenSet = true;
}

bool BeautifyPicRequest::FaceLiftingHasBeenSet() const
{
    return m_faceLiftingHasBeenSet;
}

uint64_t BeautifyPicRequest::GetEyeEnlarging() const
{
    return m_eyeEnlarging;
}

void BeautifyPicRequest::SetEyeEnlarging(const uint64_t& _eyeEnlarging)
{
    m_eyeEnlarging = _eyeEnlarging;
    m_eyeEnlargingHasBeenSet = true;
}

bool BeautifyPicRequest::EyeEnlargingHasBeenSet() const
{
    return m_eyeEnlargingHasBeenSet;
}

string BeautifyPicRequest::GetRspImgType() const
{
    return m_rspImgType;
}

void BeautifyPicRequest::SetRspImgType(const string& _rspImgType)
{
    m_rspImgType = _rspImgType;
    m_rspImgTypeHasBeenSet = true;
}

bool BeautifyPicRequest::RspImgTypeHasBeenSet() const
{
    return m_rspImgTypeHasBeenSet;
}


