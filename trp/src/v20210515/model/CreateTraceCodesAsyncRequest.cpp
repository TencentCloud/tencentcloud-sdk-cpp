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

#include <tencentcloud/trp/v20210515/model/CreateTraceCodesAsyncRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

CreateTraceCodesAsyncRequest::CreateTraceCodesAsyncRequest() :
    m_corpIdHasBeenSet(false),
    m_batchIdHasBeenSet(false),
    m_fileKeyHasBeenSet(false)
{
}

string CreateTraceCodesAsyncRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_corpId, allocator);
    }

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateTraceCodesAsyncRequest::GetCorpId() const
{
    return m_corpId;
}

void CreateTraceCodesAsyncRequest::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool CreateTraceCodesAsyncRequest::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string CreateTraceCodesAsyncRequest::GetBatchId() const
{
    return m_batchId;
}

void CreateTraceCodesAsyncRequest::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool CreateTraceCodesAsyncRequest::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

string CreateTraceCodesAsyncRequest::GetFileKey() const
{
    return m_fileKey;
}

void CreateTraceCodesAsyncRequest::SetFileKey(const string& _fileKey)
{
    m_fileKey = _fileKey;
    m_fileKeyHasBeenSet = true;
}

bool CreateTraceCodesAsyncRequest::FileKeyHasBeenSet() const
{
    return m_fileKeyHasBeenSet;
}


