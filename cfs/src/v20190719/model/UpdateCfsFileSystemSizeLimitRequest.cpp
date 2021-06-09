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

#include <tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemSizeLimitRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

UpdateCfsFileSystemSizeLimitRequest::UpdateCfsFileSystemSizeLimitRequest() :
    m_fsLimitHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false)
{
}

string UpdateCfsFileSystemSizeLimitRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FsLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fsLimit, allocator);
    }

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t UpdateCfsFileSystemSizeLimitRequest::GetFsLimit() const
{
    return m_fsLimit;
}

void UpdateCfsFileSystemSizeLimitRequest::SetFsLimit(const uint64_t& _fsLimit)
{
    m_fsLimit = _fsLimit;
    m_fsLimitHasBeenSet = true;
}

bool UpdateCfsFileSystemSizeLimitRequest::FsLimitHasBeenSet() const
{
    return m_fsLimitHasBeenSet;
}

string UpdateCfsFileSystemSizeLimitRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void UpdateCfsFileSystemSizeLimitRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool UpdateCfsFileSystemSizeLimitRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}


