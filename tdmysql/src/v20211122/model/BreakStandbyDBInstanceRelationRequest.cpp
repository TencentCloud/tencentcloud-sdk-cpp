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

#include <tencentcloud/tdmysql/v20211122/model/BreakStandbyDBInstanceRelationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

BreakStandbyDBInstanceRelationRequest::BreakStandbyDBInstanceRelationRequest() :
    m_instanceIdHasBeenSet(false),
    m_isForceHasBeenSet(false),
    m_syncDelayHasBeenSet(false)
{
}

string BreakStandbyDBInstanceRelationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_isForceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsForce";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isForce, allocator);
    }

    if (m_syncDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncDelay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_syncDelay, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BreakStandbyDBInstanceRelationRequest::GetInstanceId() const
{
    return m_instanceId;
}

void BreakStandbyDBInstanceRelationRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BreakStandbyDBInstanceRelationRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

bool BreakStandbyDBInstanceRelationRequest::GetIsForce() const
{
    return m_isForce;
}

void BreakStandbyDBInstanceRelationRequest::SetIsForce(const bool& _isForce)
{
    m_isForce = _isForce;
    m_isForceHasBeenSet = true;
}

bool BreakStandbyDBInstanceRelationRequest::IsForceHasBeenSet() const
{
    return m_isForceHasBeenSet;
}

int64_t BreakStandbyDBInstanceRelationRequest::GetSyncDelay() const
{
    return m_syncDelay;
}

void BreakStandbyDBInstanceRelationRequest::SetSyncDelay(const int64_t& _syncDelay)
{
    m_syncDelay = _syncDelay;
    m_syncDelayHasBeenSet = true;
}

bool BreakStandbyDBInstanceRelationRequest::SyncDelayHasBeenSet() const
{
    return m_syncDelayHasBeenSet;
}


