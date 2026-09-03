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

#include <tencentcloud/dlc/v20210125/model/BenchmarkResourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

BenchmarkResourceInfo::BenchmarkResourceInfo() :
    m_resourcePartitionIdHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_billingItemHasBeenSet(false),
    m_specHasBeenSet(false)
{
}

CoreInternalOutcome BenchmarkResourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourcePartitionId") && !value["ResourcePartitionId"].IsNull())
    {
        if (!value["ResourcePartitionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkResourceInfo.ResourcePartitionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePartitionId = string(value["ResourcePartitionId"].GetString());
        m_resourcePartitionIdHasBeenSet = true;
    }

    if (value.HasMember("Queue") && !value["Queue"].IsNull())
    {
        if (!value["Queue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkResourceInfo.Queue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queue = string(value["Queue"].GetString());
        m_queueHasBeenSet = true;
    }

    if (value.HasMember("BillingItem") && !value["BillingItem"].IsNull())
    {
        if (!value["BillingItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkResourceInfo.BillingItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingItem = string(value["BillingItem"].GetString());
        m_billingItemHasBeenSet = true;
    }

    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkResourceInfo.Spec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_spec = value["Spec"].GetInt64();
        m_specHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BenchmarkResourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourcePartitionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePartitionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourcePartitionId.c_str(), allocator).Move(), allocator);
    }

    if (m_queueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queue.c_str(), allocator).Move(), allocator);
    }

    if (m_billingItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingItem.c_str(), allocator).Move(), allocator);
    }

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_spec, allocator);
    }

}


string BenchmarkResourceInfo::GetResourcePartitionId() const
{
    return m_resourcePartitionId;
}

void BenchmarkResourceInfo::SetResourcePartitionId(const string& _resourcePartitionId)
{
    m_resourcePartitionId = _resourcePartitionId;
    m_resourcePartitionIdHasBeenSet = true;
}

bool BenchmarkResourceInfo::ResourcePartitionIdHasBeenSet() const
{
    return m_resourcePartitionIdHasBeenSet;
}

string BenchmarkResourceInfo::GetQueue() const
{
    return m_queue;
}

void BenchmarkResourceInfo::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool BenchmarkResourceInfo::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string BenchmarkResourceInfo::GetBillingItem() const
{
    return m_billingItem;
}

void BenchmarkResourceInfo::SetBillingItem(const string& _billingItem)
{
    m_billingItem = _billingItem;
    m_billingItemHasBeenSet = true;
}

bool BenchmarkResourceInfo::BillingItemHasBeenSet() const
{
    return m_billingItemHasBeenSet;
}

int64_t BenchmarkResourceInfo::GetSpec() const
{
    return m_spec;
}

void BenchmarkResourceInfo::SetSpec(const int64_t& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool BenchmarkResourceInfo::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

