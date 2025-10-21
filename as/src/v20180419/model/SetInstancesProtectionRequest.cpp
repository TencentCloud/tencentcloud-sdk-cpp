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

#include <tencentcloud/as/v20180419/model/SetInstancesProtectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace std;

SetInstancesProtectionRequest::SetInstancesProtectionRequest() :
    m_autoScalingGroupIdHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_protectedFromScaleInHasBeenSet(false)
{
}

string SetInstancesProtectionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_autoScalingGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoScalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_protectedFromScaleInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectedFromScaleIn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_protectedFromScaleIn, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetInstancesProtectionRequest::GetAutoScalingGroupId() const
{
    return m_autoScalingGroupId;
}

void SetInstancesProtectionRequest::SetAutoScalingGroupId(const string& _autoScalingGroupId)
{
    m_autoScalingGroupId = _autoScalingGroupId;
    m_autoScalingGroupIdHasBeenSet = true;
}

bool SetInstancesProtectionRequest::AutoScalingGroupIdHasBeenSet() const
{
    return m_autoScalingGroupIdHasBeenSet;
}

vector<string> SetInstancesProtectionRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void SetInstancesProtectionRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool SetInstancesProtectionRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

bool SetInstancesProtectionRequest::GetProtectedFromScaleIn() const
{
    return m_protectedFromScaleIn;
}

void SetInstancesProtectionRequest::SetProtectedFromScaleIn(const bool& _protectedFromScaleIn)
{
    m_protectedFromScaleIn = _protectedFromScaleIn;
    m_protectedFromScaleInHasBeenSet = true;
}

bool SetInstancesProtectionRequest::ProtectedFromScaleInHasBeenSet() const
{
    return m_protectedFromScaleInHasBeenSet;
}


