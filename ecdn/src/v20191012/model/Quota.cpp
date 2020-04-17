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

#include <tencentcloud/ecdn/v20191012/model/Quota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecdn::V20191012::Model;
using namespace rapidjson;
using namespace std;

Quota::Quota() :
    m_batchHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_availableHasBeenSet(false)
{
}

CoreInternalOutcome Quota::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Batch") && !value["Batch"].IsNull())
    {
        if (!value["Batch"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Quota.Batch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_batch = value["Batch"].GetInt64();
        m_batchHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Quota.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Available") && !value["Available"].IsNull())
    {
        if (!value["Available"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Quota.Available` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_available = value["Available"].GetInt64();
        m_availableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Quota::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_batchHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Batch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_batch, allocator);
    }

    if (m_totalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_availableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Available";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_available, allocator);
    }

}


int64_t Quota::GetBatch() const
{
    return m_batch;
}

void Quota::SetBatch(const int64_t& _batch)
{
    m_batch = _batch;
    m_batchHasBeenSet = true;
}

bool Quota::BatchHasBeenSet() const
{
    return m_batchHasBeenSet;
}

int64_t Quota::GetTotal() const
{
    return m_total;
}

void Quota::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool Quota::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t Quota::GetAvailable() const
{
    return m_available;
}

void Quota::SetAvailable(const int64_t& _available)
{
    m_available = _available;
    m_availableHasBeenSet = true;
}

bool Quota::AvailableHasBeenSet() const
{
    return m_availableHasBeenSet;
}

