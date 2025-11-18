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

#include <tencentcloud/apm/v20210622/model/ModifyApmSampleConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

ModifyApmSampleConfigRequest::ModifyApmSampleConfigRequest() :
    m_instanceIdHasBeenSet(false),
    m_sampleNameHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_operationNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_idHasBeenSet(false),
    m_operationTypeHasBeenSet(false)
{
}

string ModifyApmSampleConfigRequest::ToJsonString() const
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

    if (m_sampleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sampleName.c_str(), allocator).Move(), allocator);
    }

    if (m_sampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sampleRate, allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_operationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operationName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_operationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_operationType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyApmSampleConfigRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyApmSampleConfigRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyApmSampleConfigRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyApmSampleConfigRequest::GetSampleName() const
{
    return m_sampleName;
}

void ModifyApmSampleConfigRequest::SetSampleName(const string& _sampleName)
{
    m_sampleName = _sampleName;
    m_sampleNameHasBeenSet = true;
}

bool ModifyApmSampleConfigRequest::SampleNameHasBeenSet() const
{
    return m_sampleNameHasBeenSet;
}

int64_t ModifyApmSampleConfigRequest::GetSampleRate() const
{
    return m_sampleRate;
}

void ModifyApmSampleConfigRequest::SetSampleRate(const int64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool ModifyApmSampleConfigRequest::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

string ModifyApmSampleConfigRequest::GetServiceName() const
{
    return m_serviceName;
}

void ModifyApmSampleConfigRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ModifyApmSampleConfigRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string ModifyApmSampleConfigRequest::GetOperationName() const
{
    return m_operationName;
}

void ModifyApmSampleConfigRequest::SetOperationName(const string& _operationName)
{
    m_operationName = _operationName;
    m_operationNameHasBeenSet = true;
}

bool ModifyApmSampleConfigRequest::OperationNameHasBeenSet() const
{
    return m_operationNameHasBeenSet;
}

vector<APMKVItem> ModifyApmSampleConfigRequest::GetTags() const
{
    return m_tags;
}

void ModifyApmSampleConfigRequest::SetTags(const vector<APMKVItem>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ModifyApmSampleConfigRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t ModifyApmSampleConfigRequest::GetStatus() const
{
    return m_status;
}

void ModifyApmSampleConfigRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyApmSampleConfigRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ModifyApmSampleConfigRequest::GetId() const
{
    return m_id;
}

void ModifyApmSampleConfigRequest::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyApmSampleConfigRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t ModifyApmSampleConfigRequest::GetOperationType() const
{
    return m_operationType;
}

void ModifyApmSampleConfigRequest::SetOperationType(const int64_t& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool ModifyApmSampleConfigRequest::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}


