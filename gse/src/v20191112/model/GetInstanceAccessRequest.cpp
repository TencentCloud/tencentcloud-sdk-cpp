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

#include <tencentcloud/gse/v20191112/model/GetInstanceAccessRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace rapidjson;
using namespace std;

GetInstanceAccessRequest::GetInstanceAccessRequest() :
    m_fleetIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

string GetInstanceAccessRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fleetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FleetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fleetId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetInstanceAccessRequest::GetFleetId() const
{
    return m_fleetId;
}

void GetInstanceAccessRequest::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool GetInstanceAccessRequest::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

string GetInstanceAccessRequest::GetInstanceId() const
{
    return m_instanceId;
}

void GetInstanceAccessRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool GetInstanceAccessRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}


