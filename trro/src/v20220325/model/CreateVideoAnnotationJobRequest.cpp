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

#include <tencentcloud/trro/v20220325/model/CreateVideoAnnotationJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

CreateVideoAnnotationJobRequest::CreateVideoAnnotationJobRequest() :
    m_inputTypeHasBeenSet(false),
    m_annotationTypeHasBeenSet(false),
    m_s3SourceInfoHasBeenSet(false),
    m_httpUrlHasBeenSet(false),
    m_annotationContextHasBeenSet(false),
    m_processParamsHasBeenSet(false),
    m_outputInfoHasBeenSet(false),
    m_callbackInfoHasBeenSet(false)
{
}

string CreateVideoAnnotationJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_inputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_inputType, allocator);
    }

    if (m_annotationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnnotationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_annotationType, allocator);
    }

    if (m_s3SourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "S3SourceInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_s3SourceInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_httpUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_httpUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_annotationContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnnotationContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_annotationContext.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_processParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_processParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_outputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_callbackInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_callbackInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateVideoAnnotationJobRequest::GetInputType() const
{
    return m_inputType;
}

void CreateVideoAnnotationJobRequest::SetInputType(const int64_t& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool CreateVideoAnnotationJobRequest::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

int64_t CreateVideoAnnotationJobRequest::GetAnnotationType() const
{
    return m_annotationType;
}

void CreateVideoAnnotationJobRequest::SetAnnotationType(const int64_t& _annotationType)
{
    m_annotationType = _annotationType;
    m_annotationTypeHasBeenSet = true;
}

bool CreateVideoAnnotationJobRequest::AnnotationTypeHasBeenSet() const
{
    return m_annotationTypeHasBeenSet;
}

S3SourceInfo CreateVideoAnnotationJobRequest::GetS3SourceInfo() const
{
    return m_s3SourceInfo;
}

void CreateVideoAnnotationJobRequest::SetS3SourceInfo(const S3SourceInfo& _s3SourceInfo)
{
    m_s3SourceInfo = _s3SourceInfo;
    m_s3SourceInfoHasBeenSet = true;
}

bool CreateVideoAnnotationJobRequest::S3SourceInfoHasBeenSet() const
{
    return m_s3SourceInfoHasBeenSet;
}

string CreateVideoAnnotationJobRequest::GetHttpUrl() const
{
    return m_httpUrl;
}

void CreateVideoAnnotationJobRequest::SetHttpUrl(const string& _httpUrl)
{
    m_httpUrl = _httpUrl;
    m_httpUrlHasBeenSet = true;
}

bool CreateVideoAnnotationJobRequest::HttpUrlHasBeenSet() const
{
    return m_httpUrlHasBeenSet;
}

AnnotationContext CreateVideoAnnotationJobRequest::GetAnnotationContext() const
{
    return m_annotationContext;
}

void CreateVideoAnnotationJobRequest::SetAnnotationContext(const AnnotationContext& _annotationContext)
{
    m_annotationContext = _annotationContext;
    m_annotationContextHasBeenSet = true;
}

bool CreateVideoAnnotationJobRequest::AnnotationContextHasBeenSet() const
{
    return m_annotationContextHasBeenSet;
}

ProcessParams CreateVideoAnnotationJobRequest::GetProcessParams() const
{
    return m_processParams;
}

void CreateVideoAnnotationJobRequest::SetProcessParams(const ProcessParams& _processParams)
{
    m_processParams = _processParams;
    m_processParamsHasBeenSet = true;
}

bool CreateVideoAnnotationJobRequest::ProcessParamsHasBeenSet() const
{
    return m_processParamsHasBeenSet;
}

OutputInfo CreateVideoAnnotationJobRequest::GetOutputInfo() const
{
    return m_outputInfo;
}

void CreateVideoAnnotationJobRequest::SetOutputInfo(const OutputInfo& _outputInfo)
{
    m_outputInfo = _outputInfo;
    m_outputInfoHasBeenSet = true;
}

bool CreateVideoAnnotationJobRequest::OutputInfoHasBeenSet() const
{
    return m_outputInfoHasBeenSet;
}

CallbackInfo CreateVideoAnnotationJobRequest::GetCallbackInfo() const
{
    return m_callbackInfo;
}

void CreateVideoAnnotationJobRequest::SetCallbackInfo(const CallbackInfo& _callbackInfo)
{
    m_callbackInfo = _callbackInfo;
    m_callbackInfoHasBeenSet = true;
}

bool CreateVideoAnnotationJobRequest::CallbackInfoHasBeenSet() const
{
    return m_callbackInfoHasBeenSet;
}


