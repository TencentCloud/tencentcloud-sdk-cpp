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

#include <tencentcloud/aiart/v20221229/model/ImageInpaintingRemovalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Aiart::V20221229::Model;
using namespace std;

ImageInpaintingRemovalRequest::ImageInpaintingRemovalRequest() :
    m_inputImageHasBeenSet(false),
    m_inputUrlHasBeenSet(false),
    m_maskHasBeenSet(false),
    m_maskUrlHasBeenSet(false),
    m_rspImgTypeHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_logoParamHasBeenSet(false)
{
}

string ImageInpaintingRemovalRequest::ToJsonString() const
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

    if (m_maskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mask.c_str(), allocator).Move(), allocator);
    }

    if (m_maskUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaskUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_maskUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_rspImgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RspImgType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rspImgType.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImageInpaintingRemovalRequest::GetInputImage() const
{
    return m_inputImage;
}

void ImageInpaintingRemovalRequest::SetInputImage(const string& _inputImage)
{
    m_inputImage = _inputImage;
    m_inputImageHasBeenSet = true;
}

bool ImageInpaintingRemovalRequest::InputImageHasBeenSet() const
{
    return m_inputImageHasBeenSet;
}

string ImageInpaintingRemovalRequest::GetInputUrl() const
{
    return m_inputUrl;
}

void ImageInpaintingRemovalRequest::SetInputUrl(const string& _inputUrl)
{
    m_inputUrl = _inputUrl;
    m_inputUrlHasBeenSet = true;
}

bool ImageInpaintingRemovalRequest::InputUrlHasBeenSet() const
{
    return m_inputUrlHasBeenSet;
}

string ImageInpaintingRemovalRequest::GetMask() const
{
    return m_mask;
}

void ImageInpaintingRemovalRequest::SetMask(const string& _mask)
{
    m_mask = _mask;
    m_maskHasBeenSet = true;
}

bool ImageInpaintingRemovalRequest::MaskHasBeenSet() const
{
    return m_maskHasBeenSet;
}

string ImageInpaintingRemovalRequest::GetMaskUrl() const
{
    return m_maskUrl;
}

void ImageInpaintingRemovalRequest::SetMaskUrl(const string& _maskUrl)
{
    m_maskUrl = _maskUrl;
    m_maskUrlHasBeenSet = true;
}

bool ImageInpaintingRemovalRequest::MaskUrlHasBeenSet() const
{
    return m_maskUrlHasBeenSet;
}

string ImageInpaintingRemovalRequest::GetRspImgType() const
{
    return m_rspImgType;
}

void ImageInpaintingRemovalRequest::SetRspImgType(const string& _rspImgType)
{
    m_rspImgType = _rspImgType;
    m_rspImgTypeHasBeenSet = true;
}

bool ImageInpaintingRemovalRequest::RspImgTypeHasBeenSet() const
{
    return m_rspImgTypeHasBeenSet;
}

int64_t ImageInpaintingRemovalRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void ImageInpaintingRemovalRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool ImageInpaintingRemovalRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

LogoParam ImageInpaintingRemovalRequest::GetLogoParam() const
{
    return m_logoParam;
}

void ImageInpaintingRemovalRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool ImageInpaintingRemovalRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}


