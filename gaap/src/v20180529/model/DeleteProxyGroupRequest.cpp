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

#include <tencentcloud/gaap/v20180529/model/DeleteProxyGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

DeleteProxyGroupRequest::DeleteProxyGroupRequest() :
    m_groupIdHasBeenSet(false),
    m_forceHasBeenSet(false)
{
}

string DeleteProxyGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_forceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Force";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_force, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteProxyGroupRequest::GetGroupId() const
{
    return m_groupId;
}

void DeleteProxyGroupRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DeleteProxyGroupRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

uint64_t DeleteProxyGroupRequest::GetForce() const
{
    return m_force;
}

void DeleteProxyGroupRequest::SetForce(const uint64_t& _force)
{
    m_force = _force;
    m_forceHasBeenSet = true;
}

bool DeleteProxyGroupRequest::ForceHasBeenSet() const
{
    return m_forceHasBeenSet;
}


