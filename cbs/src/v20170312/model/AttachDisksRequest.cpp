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

#include <tencentcloud/cbs/v20170312/model/AttachDisksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cbs::V20170312::Model;
using namespace rapidjson;
using namespace std;

AttachDisksRequest::AttachDisksRequest() :
    m_diskIdsHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_deleteWithInstanceHasBeenSet(false)
{
}

string AttachDisksRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_diskIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_diskIds.begin(); itr != m_diskIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteWithInstanceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeleteWithInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteWithInstance, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> AttachDisksRequest::GetDiskIds() const
{
    return m_diskIds;
}

void AttachDisksRequest::SetDiskIds(const vector<string>& _diskIds)
{
    m_diskIds = _diskIds;
    m_diskIdsHasBeenSet = true;
}

bool AttachDisksRequest::DiskIdsHasBeenSet() const
{
    return m_diskIdsHasBeenSet;
}

string AttachDisksRequest::GetInstanceId() const
{
    return m_instanceId;
}

void AttachDisksRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AttachDisksRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

bool AttachDisksRequest::GetDeleteWithInstance() const
{
    return m_deleteWithInstance;
}

void AttachDisksRequest::SetDeleteWithInstance(const bool& _deleteWithInstance)
{
    m_deleteWithInstance = _deleteWithInstance;
    m_deleteWithInstanceHasBeenSet = true;
}

bool AttachDisksRequest::DeleteWithInstanceHasBeenSet() const
{
    return m_deleteWithInstanceHasBeenSet;
}


