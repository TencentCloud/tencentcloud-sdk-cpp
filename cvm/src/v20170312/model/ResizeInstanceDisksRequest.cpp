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

#include <tencentcloud/cvm/v20170312/model/ResizeInstanceDisksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace rapidjson;
using namespace std;

ResizeInstanceDisksRequest::ResizeInstanceDisksRequest() :
    m_instanceIdHasBeenSet(false),
    m_dataDisksHasBeenSet(false),
    m_forceStopHasBeenSet(false)
{
}

string ResizeInstanceDisksRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataDisksHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DataDisks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataDisks.begin(); itr != m_dataDisks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_forceStopHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ForceStop";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceStop, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ResizeInstanceDisksRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ResizeInstanceDisksRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ResizeInstanceDisksRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<DataDisk> ResizeInstanceDisksRequest::GetDataDisks() const
{
    return m_dataDisks;
}

void ResizeInstanceDisksRequest::SetDataDisks(const vector<DataDisk>& _dataDisks)
{
    m_dataDisks = _dataDisks;
    m_dataDisksHasBeenSet = true;
}

bool ResizeInstanceDisksRequest::DataDisksHasBeenSet() const
{
    return m_dataDisksHasBeenSet;
}

bool ResizeInstanceDisksRequest::GetForceStop() const
{
    return m_forceStop;
}

void ResizeInstanceDisksRequest::SetForceStop(const bool& _forceStop)
{
    m_forceStop = _forceStop;
    m_forceStopHasBeenSet = true;
}

bool ResizeInstanceDisksRequest::ForceStopHasBeenSet() const
{
    return m_forceStopHasBeenSet;
}


