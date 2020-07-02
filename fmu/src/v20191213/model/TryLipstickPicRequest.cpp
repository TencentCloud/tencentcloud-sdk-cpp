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

#include <tencentcloud/fmu/v20191213/model/TryLipstickPicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Fmu::V20191213::Model;
using namespace rapidjson;
using namespace std;

TryLipstickPicRequest::TryLipstickPicRequest() :
    m_lipColorInfosHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_rspImgTypeHasBeenSet(false)
{
}

string TryLipstickPicRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_lipColorInfosHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LipColorInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lipColorInfos.begin(); itr != m_lipColorInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_imageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_rspImgTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RspImgType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_rspImgType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<LipColorInfo> TryLipstickPicRequest::GetLipColorInfos() const
{
    return m_lipColorInfos;
}

void TryLipstickPicRequest::SetLipColorInfos(const vector<LipColorInfo>& _lipColorInfos)
{
    m_lipColorInfos = _lipColorInfos;
    m_lipColorInfosHasBeenSet = true;
}

bool TryLipstickPicRequest::LipColorInfosHasBeenSet() const
{
    return m_lipColorInfosHasBeenSet;
}

string TryLipstickPicRequest::GetImage() const
{
    return m_image;
}

void TryLipstickPicRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool TryLipstickPicRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string TryLipstickPicRequest::GetUrl() const
{
    return m_url;
}

void TryLipstickPicRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool TryLipstickPicRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string TryLipstickPicRequest::GetRspImgType() const
{
    return m_rspImgType;
}

void TryLipstickPicRequest::SetRspImgType(const string& _rspImgType)
{
    m_rspImgType = _rspImgType;
    m_rspImgTypeHasBeenSet = true;
}

bool TryLipstickPicRequest::RspImgTypeHasBeenSet() const
{
    return m_rspImgTypeHasBeenSet;
}


