/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/bmvpc/v20180625/model/DeleteRoutePolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

DeleteRoutePolicyRequest::DeleteRoutePolicyRequest() :
    m_routeTableIdHasBeenSet(false),
    m_routePolicyIdHasBeenSet(false)
{
}

string DeleteRoutePolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_routeTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routeTableId.c_str(), allocator).Move(), allocator);
    }

    if (m_routePolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutePolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routePolicyId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteRoutePolicyRequest::GetRouteTableId() const
{
    return m_routeTableId;
}

void DeleteRoutePolicyRequest::SetRouteTableId(const string& _routeTableId)
{
    m_routeTableId = _routeTableId;
    m_routeTableIdHasBeenSet = true;
}

bool DeleteRoutePolicyRequest::RouteTableIdHasBeenSet() const
{
    return m_routeTableIdHasBeenSet;
}

string DeleteRoutePolicyRequest::GetRoutePolicyId() const
{
    return m_routePolicyId;
}

void DeleteRoutePolicyRequest::SetRoutePolicyId(const string& _routePolicyId)
{
    m_routePolicyId = _routePolicyId;
    m_routePolicyIdHasBeenSet = true;
}

bool DeleteRoutePolicyRequest::RoutePolicyIdHasBeenSet() const
{
    return m_routePolicyIdHasBeenSet;
}


