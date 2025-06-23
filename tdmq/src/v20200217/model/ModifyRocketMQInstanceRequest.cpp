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

#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ModifyRocketMQInstanceRequest::ModifyRocketMQInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_messageRetentionHasBeenSet(false),
    m_enableDeletionProtectionHasBeenSet(false)
{
}

string ModifyRocketMQInstanceRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_messageRetentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageRetention";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_messageRetention, allocator);
    }

    if (m_enableDeletionProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDeletionProtection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDeletionProtection, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRocketMQInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyRocketMQInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyRocketMQInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyRocketMQInstanceRequest::GetName() const
{
    return m_name;
}

void ModifyRocketMQInstanceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyRocketMQInstanceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyRocketMQInstanceRequest::GetRemark() const
{
    return m_remark;
}

void ModifyRocketMQInstanceRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyRocketMQInstanceRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t ModifyRocketMQInstanceRequest::GetMessageRetention() const
{
    return m_messageRetention;
}

void ModifyRocketMQInstanceRequest::SetMessageRetention(const int64_t& _messageRetention)
{
    m_messageRetention = _messageRetention;
    m_messageRetentionHasBeenSet = true;
}

bool ModifyRocketMQInstanceRequest::MessageRetentionHasBeenSet() const
{
    return m_messageRetentionHasBeenSet;
}

bool ModifyRocketMQInstanceRequest::GetEnableDeletionProtection() const
{
    return m_enableDeletionProtection;
}

void ModifyRocketMQInstanceRequest::SetEnableDeletionProtection(const bool& _enableDeletionProtection)
{
    m_enableDeletionProtection = _enableDeletionProtection;
    m_enableDeletionProtectionHasBeenSet = true;
}

bool ModifyRocketMQInstanceRequest::EnableDeletionProtectionHasBeenSet() const
{
    return m_enableDeletionProtectionHasBeenSet;
}


