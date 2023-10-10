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

#include <tencentcloud/cwp/v20180228/model/ModifyLogKafkaDeliverTypeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyLogKafkaDeliverTypeRequest::ModifyLogKafkaDeliverTypeRequest() :
    m_securityTypeHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_switchHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_topicNameHasBeenSet(false)
{
}

string ModifyLogKafkaDeliverTypeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_securityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_securityType, allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_logType.begin(); itr != m_logType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_switch, allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyLogKafkaDeliverTypeRequest::GetSecurityType() const
{
    return m_securityType;
}

void ModifyLogKafkaDeliverTypeRequest::SetSecurityType(const uint64_t& _securityType)
{
    m_securityType = _securityType;
    m_securityTypeHasBeenSet = true;
}

bool ModifyLogKafkaDeliverTypeRequest::SecurityTypeHasBeenSet() const
{
    return m_securityTypeHasBeenSet;
}

vector<uint64_t> ModifyLogKafkaDeliverTypeRequest::GetLogType() const
{
    return m_logType;
}

void ModifyLogKafkaDeliverTypeRequest::SetLogType(const vector<uint64_t>& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool ModifyLogKafkaDeliverTypeRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

uint64_t ModifyLogKafkaDeliverTypeRequest::GetSwitch() const
{
    return m_switch;
}

void ModifyLogKafkaDeliverTypeRequest::SetSwitch(const uint64_t& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool ModifyLogKafkaDeliverTypeRequest::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string ModifyLogKafkaDeliverTypeRequest::GetTopicId() const
{
    return m_topicId;
}

void ModifyLogKafkaDeliverTypeRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ModifyLogKafkaDeliverTypeRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string ModifyLogKafkaDeliverTypeRequest::GetTopicName() const
{
    return m_topicName;
}

void ModifyLogKafkaDeliverTypeRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool ModifyLogKafkaDeliverTypeRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}


