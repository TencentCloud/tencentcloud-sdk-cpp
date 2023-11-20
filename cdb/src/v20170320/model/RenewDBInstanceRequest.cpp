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

#include <tencentcloud/cdb/v20170320/model/RenewDBInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

RenewDBInstanceRequest::RenewDBInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_modifyPayTypeHasBeenSet(false),
    m_autoRenewHasBeenSet(false)
{
}

string RenewDBInstanceRequest::ToJsonString() const
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

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_modifyPayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyPayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modifyPayType.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenew, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RenewDBInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void RenewDBInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RenewDBInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t RenewDBInstanceRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void RenewDBInstanceRequest::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool RenewDBInstanceRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string RenewDBInstanceRequest::GetModifyPayType() const
{
    return m_modifyPayType;
}

void RenewDBInstanceRequest::SetModifyPayType(const string& _modifyPayType)
{
    m_modifyPayType = _modifyPayType;
    m_modifyPayTypeHasBeenSet = true;
}

bool RenewDBInstanceRequest::ModifyPayTypeHasBeenSet() const
{
    return m_modifyPayTypeHasBeenSet;
}

int64_t RenewDBInstanceRequest::GetAutoRenew() const
{
    return m_autoRenew;
}

void RenewDBInstanceRequest::SetAutoRenew(const int64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool RenewDBInstanceRequest::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}


