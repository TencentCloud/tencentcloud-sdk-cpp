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

#include <tencentcloud/cfs/v20190719/model/DescribeDataFlowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

DescribeDataFlowRequest::DescribeDataFlowRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_dataFlowIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_cfsVersionHasBeenSet(false)
{
}

string DescribeDataFlowRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataFlowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataFlowId.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_cfsVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfsVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cfsVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDataFlowRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void DescribeDataFlowRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool DescribeDataFlowRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string DescribeDataFlowRequest::GetDataFlowId() const
{
    return m_dataFlowId;
}

void DescribeDataFlowRequest::SetDataFlowId(const string& _dataFlowId)
{
    m_dataFlowId = _dataFlowId;
    m_dataFlowIdHasBeenSet = true;
}

bool DescribeDataFlowRequest::DataFlowIdHasBeenSet() const
{
    return m_dataFlowIdHasBeenSet;
}

uint64_t DescribeDataFlowRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDataFlowRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDataFlowRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeDataFlowRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDataFlowRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDataFlowRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeDataFlowRequest::GetCfsVersion() const
{
    return m_cfsVersion;
}

void DescribeDataFlowRequest::SetCfsVersion(const string& _cfsVersion)
{
    m_cfsVersion = _cfsVersion;
    m_cfsVersionHasBeenSet = true;
}

bool DescribeDataFlowRequest::CfsVersionHasBeenSet() const
{
    return m_cfsVersionHasBeenSet;
}


