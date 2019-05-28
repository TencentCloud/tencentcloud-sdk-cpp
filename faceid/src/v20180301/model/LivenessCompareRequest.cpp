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

#include <tencentcloud/faceid/v20180301/model/LivenessCompareRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace rapidjson;
using namespace std;

LivenessCompareRequest::LivenessCompareRequest() :
    m_imageBase64HasBeenSet(false),
    m_videoBase64HasBeenSet(false),
    m_livenessTypeHasBeenSet(false),
    m_validateDataHasBeenSet(false),
    m_optionalHasBeenSet(false)
{
}

string LivenessCompareRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageBase64HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_videoBase64HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_videoBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_livenessTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LivenessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_livenessType.c_str(), allocator).Move(), allocator);
    }

    if (m_validateDataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ValidateData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_validateData.c_str(), allocator).Move(), allocator);
    }

    if (m_optionalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Optional";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_optional.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string LivenessCompareRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void LivenessCompareRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool LivenessCompareRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string LivenessCompareRequest::GetVideoBase64() const
{
    return m_videoBase64;
}

void LivenessCompareRequest::SetVideoBase64(const string& _videoBase64)
{
    m_videoBase64 = _videoBase64;
    m_videoBase64HasBeenSet = true;
}

bool LivenessCompareRequest::VideoBase64HasBeenSet() const
{
    return m_videoBase64HasBeenSet;
}

string LivenessCompareRequest::GetLivenessType() const
{
    return m_livenessType;
}

void LivenessCompareRequest::SetLivenessType(const string& _livenessType)
{
    m_livenessType = _livenessType;
    m_livenessTypeHasBeenSet = true;
}

bool LivenessCompareRequest::LivenessTypeHasBeenSet() const
{
    return m_livenessTypeHasBeenSet;
}

string LivenessCompareRequest::GetValidateData() const
{
    return m_validateData;
}

void LivenessCompareRequest::SetValidateData(const string& _validateData)
{
    m_validateData = _validateData;
    m_validateDataHasBeenSet = true;
}

bool LivenessCompareRequest::ValidateDataHasBeenSet() const
{
    return m_validateDataHasBeenSet;
}

string LivenessCompareRequest::GetOptional() const
{
    return m_optional;
}

void LivenessCompareRequest::SetOptional(const string& _optional)
{
    m_optional = _optional;
    m_optionalHasBeenSet = true;
}

bool LivenessCompareRequest::OptionalHasBeenSet() const
{
    return m_optionalHasBeenSet;
}


