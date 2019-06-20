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

#include <tencentcloud/faceid/v20180301/model/LivenessRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace rapidjson;
using namespace std;

LivenessRequest::LivenessRequest() :
    m_videoBase64HasBeenSet(false),
    m_livenessTypeHasBeenSet(false),
    m_validateDataHasBeenSet(false),
    m_optionalHasBeenSet(false)
{
}

string LivenessRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


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


string LivenessRequest::GetVideoBase64() const
{
    return m_videoBase64;
}

void LivenessRequest::SetVideoBase64(const string& _videoBase64)
{
    m_videoBase64 = _videoBase64;
    m_videoBase64HasBeenSet = true;
}

bool LivenessRequest::VideoBase64HasBeenSet() const
{
    return m_videoBase64HasBeenSet;
}

string LivenessRequest::GetLivenessType() const
{
    return m_livenessType;
}

void LivenessRequest::SetLivenessType(const string& _livenessType)
{
    m_livenessType = _livenessType;
    m_livenessTypeHasBeenSet = true;
}

bool LivenessRequest::LivenessTypeHasBeenSet() const
{
    return m_livenessTypeHasBeenSet;
}

string LivenessRequest::GetValidateData() const
{
    return m_validateData;
}

void LivenessRequest::SetValidateData(const string& _validateData)
{
    m_validateData = _validateData;
    m_validateDataHasBeenSet = true;
}

bool LivenessRequest::ValidateDataHasBeenSet() const
{
    return m_validateDataHasBeenSet;
}

string LivenessRequest::GetOptional() const
{
    return m_optional;
}

void LivenessRequest::SetOptional(const string& _optional)
{
    m_optional = _optional;
    m_optionalHasBeenSet = true;
}

bool LivenessRequest::OptionalHasBeenSet() const
{
    return m_optionalHasBeenSet;
}


