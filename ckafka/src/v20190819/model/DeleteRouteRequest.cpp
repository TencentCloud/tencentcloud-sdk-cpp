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

#include <tencentcloud/ckafka/v20190819/model/DeleteRouteRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

DeleteRouteRequest::DeleteRouteRequest() :
    m_instanceIdHasBeenSet(false),
    m_routeIdHasBeenSet(false),
    m_callerAppidHasBeenSet(false),
    m_deleteRouteTimeHasBeenSet(false)
{
}

string DeleteRouteRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_routeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_routeId, allocator);
    }

    if (m_callerAppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallerAppid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_callerAppid, allocator);
    }

    if (m_deleteRouteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteRouteTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deleteRouteTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteRouteRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DeleteRouteRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DeleteRouteRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DeleteRouteRequest::GetRouteId() const
{
    return m_routeId;
}

void DeleteRouteRequest::SetRouteId(const int64_t& _routeId)
{
    m_routeId = _routeId;
    m_routeIdHasBeenSet = true;
}

bool DeleteRouteRequest::RouteIdHasBeenSet() const
{
    return m_routeIdHasBeenSet;
}

int64_t DeleteRouteRequest::GetCallerAppid() const
{
    return m_callerAppid;
}

void DeleteRouteRequest::SetCallerAppid(const int64_t& _callerAppid)
{
    m_callerAppid = _callerAppid;
    m_callerAppidHasBeenSet = true;
}

bool DeleteRouteRequest::CallerAppidHasBeenSet() const
{
    return m_callerAppidHasBeenSet;
}

string DeleteRouteRequest::GetDeleteRouteTime() const
{
    return m_deleteRouteTime;
}

void DeleteRouteRequest::SetDeleteRouteTime(const string& _deleteRouteTime)
{
    m_deleteRouteTime = _deleteRouteTime;
    m_deleteRouteTimeHasBeenSet = true;
}

bool DeleteRouteRequest::DeleteRouteTimeHasBeenSet() const
{
    return m_deleteRouteTimeHasBeenSet;
}


