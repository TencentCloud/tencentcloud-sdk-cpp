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

#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayRouteRateLimitRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ModifyCloudNativeAPIGatewayRouteRateLimitRequest::ModifyCloudNativeAPIGatewayRouteRateLimitRequest() :
    m_gatewayIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_limitDetailHasBeenSet(false)
{
}

string ModifyCloudNativeAPIGatewayRouteRateLimitRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_limitDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitDetail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_limitDetail.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCloudNativeAPIGatewayRouteRateLimitRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void ModifyCloudNativeAPIGatewayRouteRateLimitRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRouteRateLimitRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayRouteRateLimitRequest::GetId() const
{
    return m_id;
}

void ModifyCloudNativeAPIGatewayRouteRateLimitRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRouteRateLimitRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

CloudNativeAPIGatewayRateLimitDetail ModifyCloudNativeAPIGatewayRouteRateLimitRequest::GetLimitDetail() const
{
    return m_limitDetail;
}

void ModifyCloudNativeAPIGatewayRouteRateLimitRequest::SetLimitDetail(const CloudNativeAPIGatewayRateLimitDetail& _limitDetail)
{
    m_limitDetail = _limitDetail;
    m_limitDetailHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRouteRateLimitRequest::LimitDetailHasBeenSet() const
{
    return m_limitDetailHasBeenSet;
}


