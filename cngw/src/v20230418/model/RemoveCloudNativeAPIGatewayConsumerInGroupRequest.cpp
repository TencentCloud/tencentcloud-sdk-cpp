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

#include <tencentcloud/cngw/v20230418/model/RemoveCloudNativeAPIGatewayConsumerInGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

RemoveCloudNativeAPIGatewayConsumerInGroupRequest::RemoveCloudNativeAPIGatewayConsumerInGroupRequest() :
    m_gatewayIdHasBeenSet(false),
    m_consumerGroupIdHasBeenSet(false),
    m_consumerIdsHasBeenSet(false)
{
}

string RemoveCloudNativeAPIGatewayConsumerInGroupRequest::ToJsonString() const
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

    if (m_consumerGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_consumerGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_consumerIds.begin(); itr != m_consumerIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RemoveCloudNativeAPIGatewayConsumerInGroupRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void RemoveCloudNativeAPIGatewayConsumerInGroupRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool RemoveCloudNativeAPIGatewayConsumerInGroupRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string RemoveCloudNativeAPIGatewayConsumerInGroupRequest::GetConsumerGroupId() const
{
    return m_consumerGroupId;
}

void RemoveCloudNativeAPIGatewayConsumerInGroupRequest::SetConsumerGroupId(const string& _consumerGroupId)
{
    m_consumerGroupId = _consumerGroupId;
    m_consumerGroupIdHasBeenSet = true;
}

bool RemoveCloudNativeAPIGatewayConsumerInGroupRequest::ConsumerGroupIdHasBeenSet() const
{
    return m_consumerGroupIdHasBeenSet;
}

vector<string> RemoveCloudNativeAPIGatewayConsumerInGroupRequest::GetConsumerIds() const
{
    return m_consumerIds;
}

void RemoveCloudNativeAPIGatewayConsumerInGroupRequest::SetConsumerIds(const vector<string>& _consumerIds)
{
    m_consumerIds = _consumerIds;
    m_consumerIdsHasBeenSet = true;
}

bool RemoveCloudNativeAPIGatewayConsumerInGroupRequest::ConsumerIdsHasBeenSet() const
{
    return m_consumerIdsHasBeenSet;
}


