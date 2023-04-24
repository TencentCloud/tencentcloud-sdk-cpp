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

#include <tencentcloud/cfs/v20190719/model/ScaleUpFileSystemRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

ScaleUpFileSystemRequest::ScaleUpFileSystemRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_targetCapacityHasBeenSet(false)
{
}

string ScaleUpFileSystemRequest::ToJsonString() const
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

    if (m_targetCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetCapacity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_targetCapacity, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ScaleUpFileSystemRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void ScaleUpFileSystemRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool ScaleUpFileSystemRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

uint64_t ScaleUpFileSystemRequest::GetTargetCapacity() const
{
    return m_targetCapacity;
}

void ScaleUpFileSystemRequest::SetTargetCapacity(const uint64_t& _targetCapacity)
{
    m_targetCapacity = _targetCapacity;
    m_targetCapacityHasBeenSet = true;
}

bool ScaleUpFileSystemRequest::TargetCapacityHasBeenSet() const
{
    return m_targetCapacityHasBeenSet;
}


