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

#include <tencentcloud/redis/v20180412/model/ModifyInstanceLogDeliveryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

ModifyInstanceLogDeliveryRequest::ModifyInstanceLogDeliveryRequest() :
    m_instanceIdHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_logsetNameHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_logRegionHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_createIndexHasBeenSet(false)
{
}

string ModifyInstanceLogDeliveryRequest::ToJsonString() const
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

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enabled, allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logsetName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_logRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_createIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_createIndex, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyInstanceLogDeliveryRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyInstanceLogDeliveryRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyInstanceLogDeliveryRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyInstanceLogDeliveryRequest::GetLogType() const
{
    return m_logType;
}

void ModifyInstanceLogDeliveryRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool ModifyInstanceLogDeliveryRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

bool ModifyInstanceLogDeliveryRequest::GetEnabled() const
{
    return m_enabled;
}

void ModifyInstanceLogDeliveryRequest::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ModifyInstanceLogDeliveryRequest::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string ModifyInstanceLogDeliveryRequest::GetLogsetId() const
{
    return m_logsetId;
}

void ModifyInstanceLogDeliveryRequest::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool ModifyInstanceLogDeliveryRequest::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string ModifyInstanceLogDeliveryRequest::GetTopicId() const
{
    return m_topicId;
}

void ModifyInstanceLogDeliveryRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ModifyInstanceLogDeliveryRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string ModifyInstanceLogDeliveryRequest::GetLogsetName() const
{
    return m_logsetName;
}

void ModifyInstanceLogDeliveryRequest::SetLogsetName(const string& _logsetName)
{
    m_logsetName = _logsetName;
    m_logsetNameHasBeenSet = true;
}

bool ModifyInstanceLogDeliveryRequest::LogsetNameHasBeenSet() const
{
    return m_logsetNameHasBeenSet;
}

string ModifyInstanceLogDeliveryRequest::GetTopicName() const
{
    return m_topicName;
}

void ModifyInstanceLogDeliveryRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool ModifyInstanceLogDeliveryRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string ModifyInstanceLogDeliveryRequest::GetLogRegion() const
{
    return m_logRegion;
}

void ModifyInstanceLogDeliveryRequest::SetLogRegion(const string& _logRegion)
{
    m_logRegion = _logRegion;
    m_logRegionHasBeenSet = true;
}

bool ModifyInstanceLogDeliveryRequest::LogRegionHasBeenSet() const
{
    return m_logRegionHasBeenSet;
}

int64_t ModifyInstanceLogDeliveryRequest::GetPeriod() const
{
    return m_period;
}

void ModifyInstanceLogDeliveryRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool ModifyInstanceLogDeliveryRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

bool ModifyInstanceLogDeliveryRequest::GetCreateIndex() const
{
    return m_createIndex;
}

void ModifyInstanceLogDeliveryRequest::SetCreateIndex(const bool& _createIndex)
{
    m_createIndex = _createIndex;
    m_createIndexHasBeenSet = true;
}

bool ModifyInstanceLogDeliveryRequest::CreateIndexHasBeenSet() const
{
    return m_createIndexHasBeenSet;
}


