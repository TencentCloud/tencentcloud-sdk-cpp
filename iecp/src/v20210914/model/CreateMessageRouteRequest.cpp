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

#include <tencentcloud/iecp/v20210914/model/CreateMessageRouteRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

CreateMessageRouteRequest::CreateMessageRouteRequest() :
    m_routeNameHasBeenSet(false),
    m_descriptHasBeenSet(false)
{
}

string CreateMessageRouteRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_routeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routeName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Descript";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_descript.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMessageRouteRequest::GetRouteName() const
{
    return m_routeName;
}

void CreateMessageRouteRequest::SetRouteName(const string& _routeName)
{
    m_routeName = _routeName;
    m_routeNameHasBeenSet = true;
}

bool CreateMessageRouteRequest::RouteNameHasBeenSet() const
{
    return m_routeNameHasBeenSet;
}

string CreateMessageRouteRequest::GetDescript() const
{
    return m_descript;
}

void CreateMessageRouteRequest::SetDescript(const string& _descript)
{
    m_descript = _descript;
    m_descriptHasBeenSet = true;
}

bool CreateMessageRouteRequest::DescriptHasBeenSet() const
{
    return m_descriptHasBeenSet;
}


