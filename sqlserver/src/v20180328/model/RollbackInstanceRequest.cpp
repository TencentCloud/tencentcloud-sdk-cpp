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

#include <tencentcloud/sqlserver/v20180328/model/RollbackInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace rapidjson;
using namespace std;

RollbackInstanceRequest::RollbackInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_dBsHasBeenSet(false),
    m_timeHasBeenSet(false)
{
}

string RollbackInstanceRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_dBsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_dBs.begin(); itr != m_dBs.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_time.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RollbackInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void RollbackInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RollbackInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t RollbackInstanceRequest::GetType() const
{
    return m_type;
}

void RollbackInstanceRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RollbackInstanceRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> RollbackInstanceRequest::GetDBs() const
{
    return m_dBs;
}

void RollbackInstanceRequest::SetDBs(const vector<string>& _dBs)
{
    m_dBs = _dBs;
    m_dBsHasBeenSet = true;
}

bool RollbackInstanceRequest::DBsHasBeenSet() const
{
    return m_dBsHasBeenSet;
}

string RollbackInstanceRequest::GetTime() const
{
    return m_time;
}

void RollbackInstanceRequest::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool RollbackInstanceRequest::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}


