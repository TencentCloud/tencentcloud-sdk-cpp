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

#include <tencentcloud/aiart/v20221229/model/RefineImageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Aiart::V20221229::Model;
using namespace std;

RefineImageRequest::RefineImageRequest() :
    m_inputUrlHasBeenSet(false),
    m_inputImageHasBeenSet(false),
    m_rspImgTypeHasBeenSet(false)
{
}

string RefineImageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_inputUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_inputImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputImage.c_str(), allocator).Move(), allocator);
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


string RefineImageRequest::GetInputUrl() const
{
    return m_inputUrl;
}

void RefineImageRequest::SetInputUrl(const string& _inputUrl)
{
    m_inputUrl = _inputUrl;
    m_inputUrlHasBeenSet = true;
}

bool RefineImageRequest::InputUrlHasBeenSet() const
{
    return m_inputUrlHasBeenSet;
}

string RefineImageRequest::GetInputImage() const
{
    return m_inputImage;
}

void RefineImageRequest::SetInputImage(const string& _inputImage)
{
    m_inputImage = _inputImage;
    m_inputImageHasBeenSet = true;
}

bool RefineImageRequest::InputImageHasBeenSet() const
{
    return m_inputImageHasBeenSet;
}

string RefineImageRequest::GetRspImgType() const
{
    return m_rspImgType;
}

void RefineImageRequest::SetRspImgType(const string& _rspImgType)
{
    m_rspImgType = _rspImgType;
    m_rspImgTypeHasBeenSet = true;
}

bool RefineImageRequest::RspImgTypeHasBeenSet() const
{
    return m_rspImgTypeHasBeenSet;
}


