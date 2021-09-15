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

#include <tencentcloud/essbasic/v20201222/model/DescribeFileUrlsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

DescribeFileUrlsRequest::DescribeFileUrlsRequest() :
    m_callerHasBeenSet(false),
    m_businessIdsHasBeenSet(false),
    m_businessTypeHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_resourceOffsetHasBeenSet(false),
    m_resourceLimitHasBeenSet(false),
    m_fileTypeHasBeenSet(false)
{
}

string DescribeFileUrlsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_callerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Caller";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_caller.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_businessIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_businessIds.begin(); itr != m_businessIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_businessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceOffset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceOffset, allocator);
    }

    if (m_resourceLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceLimit, allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Caller DescribeFileUrlsRequest::GetCaller() const
{
    return m_caller;
}

void DescribeFileUrlsRequest::SetCaller(const Caller& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool DescribeFileUrlsRequest::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

vector<string> DescribeFileUrlsRequest::GetBusinessIds() const
{
    return m_businessIds;
}

void DescribeFileUrlsRequest::SetBusinessIds(const vector<string>& _businessIds)
{
    m_businessIds = _businessIds;
    m_businessIdsHasBeenSet = true;
}

bool DescribeFileUrlsRequest::BusinessIdsHasBeenSet() const
{
    return m_businessIdsHasBeenSet;
}

string DescribeFileUrlsRequest::GetBusinessType() const
{
    return m_businessType;
}

void DescribeFileUrlsRequest::SetBusinessType(const string& _businessType)
{
    m_businessType = _businessType;
    m_businessTypeHasBeenSet = true;
}

bool DescribeFileUrlsRequest::BusinessTypeHasBeenSet() const
{
    return m_businessTypeHasBeenSet;
}

string DescribeFileUrlsRequest::GetFileName() const
{
    return m_fileName;
}

void DescribeFileUrlsRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool DescribeFileUrlsRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

int64_t DescribeFileUrlsRequest::GetResourceOffset() const
{
    return m_resourceOffset;
}

void DescribeFileUrlsRequest::SetResourceOffset(const int64_t& _resourceOffset)
{
    m_resourceOffset = _resourceOffset;
    m_resourceOffsetHasBeenSet = true;
}

bool DescribeFileUrlsRequest::ResourceOffsetHasBeenSet() const
{
    return m_resourceOffsetHasBeenSet;
}

int64_t DescribeFileUrlsRequest::GetResourceLimit() const
{
    return m_resourceLimit;
}

void DescribeFileUrlsRequest::SetResourceLimit(const int64_t& _resourceLimit)
{
    m_resourceLimit = _resourceLimit;
    m_resourceLimitHasBeenSet = true;
}

bool DescribeFileUrlsRequest::ResourceLimitHasBeenSet() const
{
    return m_resourceLimitHasBeenSet;
}

string DescribeFileUrlsRequest::GetFileType() const
{
    return m_fileType;
}

void DescribeFileUrlsRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool DescribeFileUrlsRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}


