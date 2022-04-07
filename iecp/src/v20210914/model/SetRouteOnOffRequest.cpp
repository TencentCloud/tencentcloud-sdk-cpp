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

#include <tencentcloud/iecp/v20210914/model/SetRouteOnOffRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

SetRouteOnOffRequest::SetRouteOnOffRequest() :
    m_routeIDHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string SetRouteOnOffRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_routeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_routeID, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t SetRouteOnOffRequest::GetRouteID() const
{
    return m_routeID;
}

void SetRouteOnOffRequest::SetRouteID(const int64_t& _routeID)
{
    m_routeID = _routeID;
    m_routeIDHasBeenSet = true;
}

bool SetRouteOnOffRequest::RouteIDHasBeenSet() const
{
    return m_routeIDHasBeenSet;
}

string SetRouteOnOffRequest::GetStatus() const
{
    return m_status;
}

void SetRouteOnOffRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SetRouteOnOffRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


