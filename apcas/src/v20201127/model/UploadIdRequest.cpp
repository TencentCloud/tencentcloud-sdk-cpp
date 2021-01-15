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

#include <tencentcloud/apcas/v20201127/model/UploadIdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apcas::V20201127::Model;
using namespace rapidjson;
using namespace std;

UploadIdRequest::UploadIdRequest() :
    m_typeHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_idListBase64HasBeenSet(false)
{
}

string UploadIdRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_idListBase64HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IdListBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_idListBase64.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t UploadIdRequest::GetType() const
{
    return m_type;
}

void UploadIdRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool UploadIdRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string UploadIdRequest::GetTaskName() const
{
    return m_taskName;
}

void UploadIdRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool UploadIdRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string UploadIdRequest::GetIdListBase64() const
{
    return m_idListBase64;
}

void UploadIdRequest::SetIdListBase64(const string& _idListBase64)
{
    m_idListBase64 = _idListBase64;
    m_idListBase64HasBeenSet = true;
}

bool UploadIdRequest::IdListBase64HasBeenSet() const
{
    return m_idListBase64HasBeenSet;
}


