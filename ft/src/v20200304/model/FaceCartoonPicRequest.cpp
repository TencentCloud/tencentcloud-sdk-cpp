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

#include <tencentcloud/ft/v20200304/model/FaceCartoonPicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ft::V20200304::Model;
using namespace std;

FaceCartoonPicRequest::FaceCartoonPicRequest() :
    m_imageHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_rspImgTypeHasBeenSet(false),
    m_disableGlobalEffectHasBeenSet(false)
{
}

string FaceCartoonPicRequest::ToJsonString() const
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

    if (m_rspImgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RspImgType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rspImgType.c_str(), allocator).Move(), allocator);
    }

    if (m_disableGlobalEffectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableGlobalEffect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_disableGlobalEffect.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string FaceCartoonPicRequest::GetImage() const
{
    return m_image;
}

void FaceCartoonPicRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool FaceCartoonPicRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string FaceCartoonPicRequest::GetUrl() const
{
    return m_url;
}

void FaceCartoonPicRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool FaceCartoonPicRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string FaceCartoonPicRequest::GetRspImgType() const
{
    return m_rspImgType;
}

void FaceCartoonPicRequest::SetRspImgType(const string& _rspImgType)
{
    m_rspImgType = _rspImgType;
    m_rspImgTypeHasBeenSet = true;
}

bool FaceCartoonPicRequest::RspImgTypeHasBeenSet() const
{
    return m_rspImgTypeHasBeenSet;
}

string FaceCartoonPicRequest::GetDisableGlobalEffect() const
{
    return m_disableGlobalEffect;
}

void FaceCartoonPicRequest::SetDisableGlobalEffect(const string& _disableGlobalEffect)
{
    m_disableGlobalEffect = _disableGlobalEffect;
    m_disableGlobalEffectHasBeenSet = true;
}

bool FaceCartoonPicRequest::DisableGlobalEffectHasBeenSet() const
{
    return m_disableGlobalEffectHasBeenSet;
}


