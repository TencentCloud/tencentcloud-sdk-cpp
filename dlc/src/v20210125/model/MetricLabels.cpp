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

#include <tencentcloud/dlc/v20210125/model/MetricLabels.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

MetricLabels::MetricLabels() :
    m_gpuTypeHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_queueAliasHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
}

CoreInternalOutcome MetricLabels::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GpuType") && !value["GpuType"].IsNull())
    {
        if (!value["GpuType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricLabels.GpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuType = string(value["GpuType"].GetString());
        m_gpuTypeHasBeenSet = true;
    }

    if (value.HasMember("QueueName") && !value["QueueName"].IsNull())
    {
        if (!value["QueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricLabels.QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(value["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }

    if (value.HasMember("QueueAlias") && !value["QueueAlias"].IsNull())
    {
        if (!value["QueueAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricLabels.QueueAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueAlias = string(value["QueueAlias"].GetString());
        m_queueAliasHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricLabels.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricLabels::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_queueAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

}


string MetricLabels::GetGpuType() const
{
    return m_gpuType;
}

void MetricLabels::SetGpuType(const string& _gpuType)
{
    m_gpuType = _gpuType;
    m_gpuTypeHasBeenSet = true;
}

bool MetricLabels::GpuTypeHasBeenSet() const
{
    return m_gpuTypeHasBeenSet;
}

string MetricLabels::GetQueueName() const
{
    return m_queueName;
}

void MetricLabels::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool MetricLabels::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string MetricLabels::GetQueueAlias() const
{
    return m_queueAlias;
}

void MetricLabels::SetQueueAlias(const string& _queueAlias)
{
    m_queueAlias = _queueAlias;
    m_queueAliasHasBeenSet = true;
}

bool MetricLabels::QueueAliasHasBeenSet() const
{
    return m_queueAliasHasBeenSet;
}

string MetricLabels::GetResourceType() const
{
    return m_resourceType;
}

void MetricLabels::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool MetricLabels::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

