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

#include <tencentcloud/goosefs/v20220519/model/ExpandCapacityRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

ExpandCapacityRequest::ExpandCapacityRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_expandedCapacityHasBeenSet(false),
    m_modifyTypeHasBeenSet(false)
{
}

string ExpandCapacityRequest::ToJsonString() const
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

    if (m_expandedCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpandedCapacity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expandedCapacity, allocator);
    }

    if (m_modifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modifyType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExpandCapacityRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void ExpandCapacityRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool ExpandCapacityRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

uint64_t ExpandCapacityRequest::GetExpandedCapacity() const
{
    return m_expandedCapacity;
}

void ExpandCapacityRequest::SetExpandedCapacity(const uint64_t& _expandedCapacity)
{
    m_expandedCapacity = _expandedCapacity;
    m_expandedCapacityHasBeenSet = true;
}

bool ExpandCapacityRequest::ExpandedCapacityHasBeenSet() const
{
    return m_expandedCapacityHasBeenSet;
}

string ExpandCapacityRequest::GetModifyType() const
{
    return m_modifyType;
}

void ExpandCapacityRequest::SetModifyType(const string& _modifyType)
{
    m_modifyType = _modifyType;
    m_modifyTypeHasBeenSet = true;
}

bool ExpandCapacityRequest::ModifyTypeHasBeenSet() const
{
    return m_modifyTypeHasBeenSet;
}


