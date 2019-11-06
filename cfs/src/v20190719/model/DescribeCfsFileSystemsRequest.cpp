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

#include <tencentcloud/cfs/v20190719/model/DescribeCfsFileSystemsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace rapidjson;
using namespace std;

DescribeCfsFileSystemsRequest::DescribeCfsFileSystemsRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

string DescribeCfsFileSystemsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileSystemIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCfsFileSystemsRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void DescribeCfsFileSystemsRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool DescribeCfsFileSystemsRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string DescribeCfsFileSystemsRequest::GetVpcId() const
{
    return m_vpcId;
}

void DescribeCfsFileSystemsRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DescribeCfsFileSystemsRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DescribeCfsFileSystemsRequest::GetSubnetId() const
{
    return m_subnetId;
}

void DescribeCfsFileSystemsRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DescribeCfsFileSystemsRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}


