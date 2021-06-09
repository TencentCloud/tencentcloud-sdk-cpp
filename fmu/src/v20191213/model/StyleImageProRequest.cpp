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

#include <tencentcloud/fmu/v20191213/model/StyleImageProRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Fmu::V20191213::Model;
using namespace std;

StyleImageProRequest::StyleImageProRequest() :
    m_filterTypeHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_filterDegreeHasBeenSet(false),
    m_rspImgTypeHasBeenSet(false)
{
}

string StyleImageProRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_filterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterType, allocator);
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

    if (m_filterDegreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterDegree";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterDegree, allocator);
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


int64_t StyleImageProRequest::GetFilterType() const
{
    return m_filterType;
}

void StyleImageProRequest::SetFilterType(const int64_t& _filterType)
{
    m_filterType = _filterType;
    m_filterTypeHasBeenSet = true;
}

bool StyleImageProRequest::FilterTypeHasBeenSet() const
{
    return m_filterTypeHasBeenSet;
}

string StyleImageProRequest::GetImage() const
{
    return m_image;
}

void StyleImageProRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool StyleImageProRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string StyleImageProRequest::GetUrl() const
{
    return m_url;
}

void StyleImageProRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool StyleImageProRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

int64_t StyleImageProRequest::GetFilterDegree() const
{
    return m_filterDegree;
}

void StyleImageProRequest::SetFilterDegree(const int64_t& _filterDegree)
{
    m_filterDegree = _filterDegree;
    m_filterDegreeHasBeenSet = true;
}

bool StyleImageProRequest::FilterDegreeHasBeenSet() const
{
    return m_filterDegreeHasBeenSet;
}

string StyleImageProRequest::GetRspImgType() const
{
    return m_rspImgType;
}

void StyleImageProRequest::SetRspImgType(const string& _rspImgType)
{
    m_rspImgType = _rspImgType;
    m_rspImgTypeHasBeenSet = true;
}

bool StyleImageProRequest::RspImgTypeHasBeenSet() const
{
    return m_rspImgTypeHasBeenSet;
}


