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

#include <tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemPGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

UpdateCfsFileSystemPGroupRequest::UpdateCfsFileSystemPGroupRequest() :
    m_pGroupIdHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false)
{
}

string UpdateCfsFileSystemPGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pGroupId.c_str(), allocator).Move(), allocator);
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


string UpdateCfsFileSystemPGroupRequest::GetPGroupId() const
{
    return m_pGroupId;
}

void UpdateCfsFileSystemPGroupRequest::SetPGroupId(const string& _pGroupId)
{
    m_pGroupId = _pGroupId;
    m_pGroupIdHasBeenSet = true;
}

bool UpdateCfsFileSystemPGroupRequest::PGroupIdHasBeenSet() const
{
    return m_pGroupIdHasBeenSet;
}

string UpdateCfsFileSystemPGroupRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void UpdateCfsFileSystemPGroupRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool UpdateCfsFileSystemPGroupRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}


