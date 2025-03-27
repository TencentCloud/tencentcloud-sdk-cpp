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

#include <tencentcloud/vod/v20180717/model/ProcessImageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ProcessImageRequest::ProcessImageRequest() :
    m_fileIdHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_contentReviewInputHasBeenSet(false)
{
}

string ProcessImageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_contentReviewInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentReviewInput";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_contentReviewInput.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ProcessImageRequest::GetFileId() const
{
    return m_fileId;
}

void ProcessImageRequest::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool ProcessImageRequest::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string ProcessImageRequest::GetOperation() const
{
    return m_operation;
}

void ProcessImageRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool ProcessImageRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

uint64_t ProcessImageRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ProcessImageRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ProcessImageRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

ImageContentReviewInput ProcessImageRequest::GetContentReviewInput() const
{
    return m_contentReviewInput;
}

void ProcessImageRequest::SetContentReviewInput(const ImageContentReviewInput& _contentReviewInput)
{
    m_contentReviewInput = _contentReviewInput;
    m_contentReviewInputHasBeenSet = true;
}

bool ProcessImageRequest::ContentReviewInputHasBeenSet() const
{
    return m_contentReviewInputHasBeenSet;
}


