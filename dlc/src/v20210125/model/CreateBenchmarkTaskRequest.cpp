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

#include <tencentcloud/dlc/v20210125/model/CreateBenchmarkTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateBenchmarkTaskRequest::CreateBenchmarkTaskRequest() :
    m_serviceIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_inputTokensHasBeenSet(false),
    m_outputTokensHasBeenSet(false),
    m_requestsPerSecondHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_totalPromptsHasBeenSet(false),
    m_useGatewayHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_apiKeyIdHasBeenSet(false),
    m_resourcePartitionIdHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_billingItemHasBeenSet(false),
    m_specHasBeenSet(false)
{
}

string CreateBenchmarkTaskRequest::ToJsonString() const
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

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_inputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputTokens";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_inputTokens, allocator);
    }

    if (m_outputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputTokens";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_outputTokens, allocator);
    }

    if (m_requestsPerSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestsPerSecond";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_requestsPerSecond, allocator);
    }

    if (m_maxConcurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxConcurrency, allocator);
    }

    if (m_totalPromptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPrompts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_totalPrompts, allocator);
    }

    if (m_useGatewayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseGateway";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_useGateway, allocator);
    }

    if (m_deploymentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploymentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deploymentId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcePartitionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePartitionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourcePartitionId.c_str(), allocator).Move(), allocator);
    }

    if (m_queueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queue.c_str(), allocator).Move(), allocator);
    }

    if (m_billingItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingItem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_billingItem.c_str(), allocator).Move(), allocator);
    }

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_spec, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBenchmarkTaskRequest::GetServiceId() const
{
    return m_serviceId;
}

void CreateBenchmarkTaskRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool CreateBenchmarkTaskRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string CreateBenchmarkTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void CreateBenchmarkTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateBenchmarkTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

uint64_t CreateBenchmarkTaskRequest::GetInputTokens() const
{
    return m_inputTokens;
}

void CreateBenchmarkTaskRequest::SetInputTokens(const uint64_t& _inputTokens)
{
    m_inputTokens = _inputTokens;
    m_inputTokensHasBeenSet = true;
}

bool CreateBenchmarkTaskRequest::InputTokensHasBeenSet() const
{
    return m_inputTokensHasBeenSet;
}

uint64_t CreateBenchmarkTaskRequest::GetOutputTokens() const
{
    return m_outputTokens;
}

void CreateBenchmarkTaskRequest::SetOutputTokens(const uint64_t& _outputTokens)
{
    m_outputTokens = _outputTokens;
    m_outputTokensHasBeenSet = true;
}

bool CreateBenchmarkTaskRequest::OutputTokensHasBeenSet() const
{
    return m_outputTokensHasBeenSet;
}

double CreateBenchmarkTaskRequest::GetRequestsPerSecond() const
{
    return m_requestsPerSecond;
}

void CreateBenchmarkTaskRequest::SetRequestsPerSecond(const double& _requestsPerSecond)
{
    m_requestsPerSecond = _requestsPerSecond;
    m_requestsPerSecondHasBeenSet = true;
}

bool CreateBenchmarkTaskRequest::RequestsPerSecondHasBeenSet() const
{
    return m_requestsPerSecondHasBeenSet;
}

uint64_t CreateBenchmarkTaskRequest::GetMaxConcurrency() const
{
    return m_maxConcurrency;
}

void CreateBenchmarkTaskRequest::SetMaxConcurrency(const uint64_t& _maxConcurrency)
{
    m_maxConcurrency = _maxConcurrency;
    m_maxConcurrencyHasBeenSet = true;
}

bool CreateBenchmarkTaskRequest::MaxConcurrencyHasBeenSet() const
{
    return m_maxConcurrencyHasBeenSet;
}

uint64_t CreateBenchmarkTaskRequest::GetTotalPrompts() const
{
    return m_totalPrompts;
}

void CreateBenchmarkTaskRequest::SetTotalPrompts(const uint64_t& _totalPrompts)
{
    m_totalPrompts = _totalPrompts;
    m_totalPromptsHasBeenSet = true;
}

bool CreateBenchmarkTaskRequest::TotalPromptsHasBeenSet() const
{
    return m_totalPromptsHasBeenSet;
}

bool CreateBenchmarkTaskRequest::GetUseGateway() const
{
    return m_useGateway;
}

void CreateBenchmarkTaskRequest::SetUseGateway(const bool& _useGateway)
{
    m_useGateway = _useGateway;
    m_useGatewayHasBeenSet = true;
}

bool CreateBenchmarkTaskRequest::UseGatewayHasBeenSet() const
{
    return m_useGatewayHasBeenSet;
}

string CreateBenchmarkTaskRequest::GetDeploymentId() const
{
    return m_deploymentId;
}

void CreateBenchmarkTaskRequest::SetDeploymentId(const string& _deploymentId)
{
    m_deploymentId = _deploymentId;
    m_deploymentIdHasBeenSet = true;
}

bool CreateBenchmarkTaskRequest::DeploymentIdHasBeenSet() const
{
    return m_deploymentIdHasBeenSet;
}

string CreateBenchmarkTaskRequest::GetApiKeyId() const
{
    return m_apiKeyId;
}

void CreateBenchmarkTaskRequest::SetApiKeyId(const string& _apiKeyId)
{
    m_apiKeyId = _apiKeyId;
    m_apiKeyIdHasBeenSet = true;
}

bool CreateBenchmarkTaskRequest::ApiKeyIdHasBeenSet() const
{
    return m_apiKeyIdHasBeenSet;
}

string CreateBenchmarkTaskRequest::GetResourcePartitionId() const
{
    return m_resourcePartitionId;
}

void CreateBenchmarkTaskRequest::SetResourcePartitionId(const string& _resourcePartitionId)
{
    m_resourcePartitionId = _resourcePartitionId;
    m_resourcePartitionIdHasBeenSet = true;
}

bool CreateBenchmarkTaskRequest::ResourcePartitionIdHasBeenSet() const
{
    return m_resourcePartitionIdHasBeenSet;
}

string CreateBenchmarkTaskRequest::GetQueue() const
{
    return m_queue;
}

void CreateBenchmarkTaskRequest::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool CreateBenchmarkTaskRequest::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string CreateBenchmarkTaskRequest::GetBillingItem() const
{
    return m_billingItem;
}

void CreateBenchmarkTaskRequest::SetBillingItem(const string& _billingItem)
{
    m_billingItem = _billingItem;
    m_billingItemHasBeenSet = true;
}

bool CreateBenchmarkTaskRequest::BillingItemHasBeenSet() const
{
    return m_billingItemHasBeenSet;
}

int64_t CreateBenchmarkTaskRequest::GetSpec() const
{
    return m_spec;
}

void CreateBenchmarkTaskRequest::SetSpec(const int64_t& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool CreateBenchmarkTaskRequest::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}


