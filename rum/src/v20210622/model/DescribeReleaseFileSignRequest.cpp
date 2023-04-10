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

#include <tencentcloud/rum/v20210622/model/DescribeReleaseFileSignRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeReleaseFileSignRequest::DescribeReleaseFileSignRequest() :
    m_timeoutHasBeenSet(false),
    m_fileTypeHasBeenSet(false)
{
}

string DescribeReleaseFileSignRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeReleaseFileSignRequest::GetTimeout() const
{
    return m_timeout;
}

void DescribeReleaseFileSignRequest::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool DescribeReleaseFileSignRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

int64_t DescribeReleaseFileSignRequest::GetFileType() const
{
    return m_fileType;
}

void DescribeReleaseFileSignRequest::SetFileType(const int64_t& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool DescribeReleaseFileSignRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}


