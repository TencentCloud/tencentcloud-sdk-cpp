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

#include <tencentcloud/trro/v20220325/model/CreateBatchVideoAnnotationJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

CreateBatchVideoAnnotationJobRequest::CreateBatchVideoAnnotationJobRequest() :
    m_inputStorageHasBeenSet(false),
    m_annotationTypeHasBeenSet(false),
    m_annotationContextHasBeenSet(false),
    m_processParamsHasBeenSet(false),
    m_outputStorageHasBeenSet(false),
    m_callbackInfoHasBeenSet(false)
{
}

string CreateBatchVideoAnnotationJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_inputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputStorage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputStorage.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_annotationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnnotationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_annotationType, allocator);
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

    if (m_outputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(d[key.c_str()], allocator);
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


BatchS3SourceInfo CreateBatchVideoAnnotationJobRequest::GetInputStorage() const
{
    return m_inputStorage;
}

void CreateBatchVideoAnnotationJobRequest::SetInputStorage(const BatchS3SourceInfo& _inputStorage)
{
    m_inputStorage = _inputStorage;
    m_inputStorageHasBeenSet = true;
}

bool CreateBatchVideoAnnotationJobRequest::InputStorageHasBeenSet() const
{
    return m_inputStorageHasBeenSet;
}

int64_t CreateBatchVideoAnnotationJobRequest::GetAnnotationType() const
{
    return m_annotationType;
}

void CreateBatchVideoAnnotationJobRequest::SetAnnotationType(const int64_t& _annotationType)
{
    m_annotationType = _annotationType;
    m_annotationTypeHasBeenSet = true;
}

bool CreateBatchVideoAnnotationJobRequest::AnnotationTypeHasBeenSet() const
{
    return m_annotationTypeHasBeenSet;
}

AnnotationContext CreateBatchVideoAnnotationJobRequest::GetAnnotationContext() const
{
    return m_annotationContext;
}

void CreateBatchVideoAnnotationJobRequest::SetAnnotationContext(const AnnotationContext& _annotationContext)
{
    m_annotationContext = _annotationContext;
    m_annotationContextHasBeenSet = true;
}

bool CreateBatchVideoAnnotationJobRequest::AnnotationContextHasBeenSet() const
{
    return m_annotationContextHasBeenSet;
}

ProcessParams CreateBatchVideoAnnotationJobRequest::GetProcessParams() const
{
    return m_processParams;
}

void CreateBatchVideoAnnotationJobRequest::SetProcessParams(const ProcessParams& _processParams)
{
    m_processParams = _processParams;
    m_processParamsHasBeenSet = true;
}

bool CreateBatchVideoAnnotationJobRequest::ProcessParamsHasBeenSet() const
{
    return m_processParamsHasBeenSet;
}

OutputStorage CreateBatchVideoAnnotationJobRequest::GetOutputStorage() const
{
    return m_outputStorage;
}

void CreateBatchVideoAnnotationJobRequest::SetOutputStorage(const OutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool CreateBatchVideoAnnotationJobRequest::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

CallbackInfo CreateBatchVideoAnnotationJobRequest::GetCallbackInfo() const
{
    return m_callbackInfo;
}

void CreateBatchVideoAnnotationJobRequest::SetCallbackInfo(const CallbackInfo& _callbackInfo)
{
    m_callbackInfo = _callbackInfo;
    m_callbackInfoHasBeenSet = true;
}

bool CreateBatchVideoAnnotationJobRequest::CallbackInfoHasBeenSet() const
{
    return m_callbackInfoHasBeenSet;
}


