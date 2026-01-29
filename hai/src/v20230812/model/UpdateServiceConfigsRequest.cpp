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

#include <tencentcloud/hai/v20230812/model/UpdateServiceConfigsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

UpdateServiceConfigsRequest::UpdateServiceConfigsRequest() :
    m_serviceIdHasBeenSet(false),
    m_targetReplicasHasBeenSet(false)
{
}

string UpdateServiceConfigsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetReplicas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_targetReplicas, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateServiceConfigsRequest::GetServiceId() const
{
    return m_serviceId;
}

void UpdateServiceConfigsRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool UpdateServiceConfigsRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

int64_t UpdateServiceConfigsRequest::GetTargetReplicas() const
{
    return m_targetReplicas;
}

void UpdateServiceConfigsRequest::SetTargetReplicas(const int64_t& _targetReplicas)
{
    m_targetReplicas = _targetReplicas;
    m_targetReplicasHasBeenSet = true;
}

bool UpdateServiceConfigsRequest::TargetReplicasHasBeenSet() const
{
    return m_targetReplicasHasBeenSet;
}


