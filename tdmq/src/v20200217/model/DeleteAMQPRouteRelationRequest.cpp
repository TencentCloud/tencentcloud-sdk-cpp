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

#include <tencentcloud/tdmq/v20200217/model/DeleteAMQPRouteRelationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DeleteAMQPRouteRelationRequest::DeleteAMQPRouteRelationRequest() :
    m_clusterIdHasBeenSet(false),
    m_vHostIdHasBeenSet(false),
    m_routeRelationIdHasBeenSet(false)
{
}

string DeleteAMQPRouteRelationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_vHostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VHostId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vHostId.c_str(), allocator).Move(), allocator);
    }

    if (m_routeRelationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteRelationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routeRelationId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteAMQPRouteRelationRequest::GetClusterId() const
{
    return m_clusterId;
}

void DeleteAMQPRouteRelationRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DeleteAMQPRouteRelationRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DeleteAMQPRouteRelationRequest::GetVHostId() const
{
    return m_vHostId;
}

void DeleteAMQPRouteRelationRequest::SetVHostId(const string& _vHostId)
{
    m_vHostId = _vHostId;
    m_vHostIdHasBeenSet = true;
}

bool DeleteAMQPRouteRelationRequest::VHostIdHasBeenSet() const
{
    return m_vHostIdHasBeenSet;
}

string DeleteAMQPRouteRelationRequest::GetRouteRelationId() const
{
    return m_routeRelationId;
}

void DeleteAMQPRouteRelationRequest::SetRouteRelationId(const string& _routeRelationId)
{
    m_routeRelationId = _routeRelationId;
    m_routeRelationIdHasBeenSet = true;
}

bool DeleteAMQPRouteRelationRequest::RouteRelationIdHasBeenSet() const
{
    return m_routeRelationIdHasBeenSet;
}


