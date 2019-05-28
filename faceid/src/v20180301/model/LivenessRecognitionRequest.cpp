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

#include <tencentcloud/faceid/v20180301/model/LivenessRecognitionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace rapidjson;
using namespace std;

LivenessRecognitionRequest::LivenessRecognitionRequest() :
    m_idCardHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_videoBase64HasBeenSet(false),
    m_livenessTypeHasBeenSet(false),
    m_validateDataHasBeenSet(false),
    m_optionalHasBeenSet(false)
{
}

string LivenessRecognitionRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idCardHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IdCard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_idCard.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
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


string LivenessRecognitionRequest::GetIdCard() const
{
    return m_idCard;
}

void LivenessRecognitionRequest::SetIdCard(const string& _idCard)
{
    m_idCard = _idCard;
    m_idCardHasBeenSet = true;
}

bool LivenessRecognitionRequest::IdCardHasBeenSet() const
{
    return m_idCardHasBeenSet;
}

string LivenessRecognitionRequest::GetName() const
{
    return m_name;
}

void LivenessRecognitionRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LivenessRecognitionRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string LivenessRecognitionRequest::GetVideoBase64() const
{
    return m_videoBase64;
}

void LivenessRecognitionRequest::SetVideoBase64(const string& _videoBase64)
{
    m_videoBase64 = _videoBase64;
    m_videoBase64HasBeenSet = true;
}

bool LivenessRecognitionRequest::VideoBase64HasBeenSet() const
{
    return m_videoBase64HasBeenSet;
}

string LivenessRecognitionRequest::GetLivenessType() const
{
    return m_livenessType;
}

void LivenessRecognitionRequest::SetLivenessType(const string& _livenessType)
{
    m_livenessType = _livenessType;
    m_livenessTypeHasBeenSet = true;
}

bool LivenessRecognitionRequest::LivenessTypeHasBeenSet() const
{
    return m_livenessTypeHasBeenSet;
}

string LivenessRecognitionRequest::GetValidateData() const
{
    return m_validateData;
}

void LivenessRecognitionRequest::SetValidateData(const string& _validateData)
{
    m_validateData = _validateData;
    m_validateDataHasBeenSet = true;
}

bool LivenessRecognitionRequest::ValidateDataHasBeenSet() const
{
    return m_validateDataHasBeenSet;
}

string LivenessRecognitionRequest::GetOptional() const
{
    return m_optional;
}

void LivenessRecognitionRequest::SetOptional(const string& _optional)
{
    m_optional = _optional;
    m_optionalHasBeenSet = true;
}

bool LivenessRecognitionRequest::OptionalHasBeenSet() const
{
    return m_optionalHasBeenSet;
}


