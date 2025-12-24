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

#include <tencentcloud/chdfs/v20201112/model/DescribeFileSystemsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chdfs::V20201112::Model;
using namespace std;

DescribeFileSystemsRequest::DescribeFileSystemsRequest() :
    m_fileSystemIdMarkerHasBeenSet(false)
{
}

string DescribeFileSystemsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileSystemIdMarkerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemIdMarker";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystemIdMarker.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeFileSystemsRequest::GetFileSystemIdMarker() const
{
    return m_fileSystemIdMarker;
}

void DescribeFileSystemsRequest::SetFileSystemIdMarker(const string& _fileSystemIdMarker)
{
    m_fileSystemIdMarker = _fileSystemIdMarker;
    m_fileSystemIdMarkerHasBeenSet = true;
}

bool DescribeFileSystemsRequest::FileSystemIdMarkerHasBeenSet() const
{
    return m_fileSystemIdMarkerHasBeenSet;
}


