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

#include <tencentcloud/apm/v20210622/model/CreateApmSampleConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

CreateApmSampleConfigRequest::CreateApmSampleConfigRequest() :
    m_instanceIdHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_sampleNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_operationNameHasBeenSet(false),
    m_operationTypeHasBeenSet(false)
{
}

string CreateApmSampleConfigRequest::ToJsonString() const
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

    if (m_sampleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sampleName.c_str(), allocator).Move(), allocator);
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

    if (m_operationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operationName.c_str(), allocator).Move(), allocator);
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


string CreateApmSampleConfigRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateApmSampleConfigRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateApmSampleConfigRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t CreateApmSampleConfigRequest::GetSampleRate() const
{
    return m_sampleRate;
}

void CreateApmSampleConfigRequest::SetSampleRate(const int64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool CreateApmSampleConfigRequest::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

string CreateApmSampleConfigRequest::GetServiceName() const
{
    return m_serviceName;
}

void CreateApmSampleConfigRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool CreateApmSampleConfigRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string CreateApmSampleConfigRequest::GetSampleName() const
{
    return m_sampleName;
}

void CreateApmSampleConfigRequest::SetSampleName(const string& _sampleName)
{
    m_sampleName = _sampleName;
    m_sampleNameHasBeenSet = true;
}

bool CreateApmSampleConfigRequest::SampleNameHasBeenSet() const
{
    return m_sampleNameHasBeenSet;
}

vector<APMKVItem> CreateApmSampleConfigRequest::GetTags() const
{
    return m_tags;
}

void CreateApmSampleConfigRequest::SetTags(const vector<APMKVItem>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateApmSampleConfigRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateApmSampleConfigRequest::GetOperationName() const
{
    return m_operationName;
}

void CreateApmSampleConfigRequest::SetOperationName(const string& _operationName)
{
    m_operationName = _operationName;
    m_operationNameHasBeenSet = true;
}

bool CreateApmSampleConfigRequest::OperationNameHasBeenSet() const
{
    return m_operationNameHasBeenSet;
}

int64_t CreateApmSampleConfigRequest::GetOperationType() const
{
    return m_operationType;
}

void CreateApmSampleConfigRequest::SetOperationType(const int64_t& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool CreateApmSampleConfigRequest::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}


