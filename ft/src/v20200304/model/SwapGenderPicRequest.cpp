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

#include <tencentcloud/ft/v20200304/model/SwapGenderPicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ft::V20200304::Model;
using namespace std;

SwapGenderPicRequest::SwapGenderPicRequest() :
    m_genderInfosHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_rspImgTypeHasBeenSet(false)
{
}

string SwapGenderPicRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_genderInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenderInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_genderInfos.begin(); itr != m_genderInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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


vector<GenderInfo> SwapGenderPicRequest::GetGenderInfos() const
{
    return m_genderInfos;
}

void SwapGenderPicRequest::SetGenderInfos(const vector<GenderInfo>& _genderInfos)
{
    m_genderInfos = _genderInfos;
    m_genderInfosHasBeenSet = true;
}

bool SwapGenderPicRequest::GenderInfosHasBeenSet() const
{
    return m_genderInfosHasBeenSet;
}

string SwapGenderPicRequest::GetImage() const
{
    return m_image;
}

void SwapGenderPicRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool SwapGenderPicRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string SwapGenderPicRequest::GetUrl() const
{
    return m_url;
}

void SwapGenderPicRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool SwapGenderPicRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string SwapGenderPicRequest::GetRspImgType() const
{
    return m_rspImgType;
}

void SwapGenderPicRequest::SetRspImgType(const string& _rspImgType)
{
    m_rspImgType = _rspImgType;
    m_rspImgTypeHasBeenSet = true;
}

bool SwapGenderPicRequest::RspImgTypeHasBeenSet() const
{
    return m_rspImgTypeHasBeenSet;
}


