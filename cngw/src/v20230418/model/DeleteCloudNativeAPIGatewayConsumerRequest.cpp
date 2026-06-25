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

#include <tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayConsumerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

DeleteCloudNativeAPIGatewayConsumerRequest::DeleteCloudNativeAPIGatewayConsumerRequest() :
    m_gatewayIdHasBeenSet(false),
    m_consumerIdHasBeenSet(false)
{
}

string DeleteCloudNativeAPIGatewayConsumerRequest::ToJsonString() const
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

    if (m_consumerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_consumerId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteCloudNativeAPIGatewayConsumerRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void DeleteCloudNativeAPIGatewayConsumerRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool DeleteCloudNativeAPIGatewayConsumerRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string DeleteCloudNativeAPIGatewayConsumerRequest::GetConsumerId() const
{
    return m_consumerId;
}

void DeleteCloudNativeAPIGatewayConsumerRequest::SetConsumerId(const string& _consumerId)
{
    m_consumerId = _consumerId;
    m_consumerIdHasBeenSet = true;
}

bool DeleteCloudNativeAPIGatewayConsumerRequest::ConsumerIdHasBeenSet() const
{
    return m_consumerIdHasBeenSet;
}


