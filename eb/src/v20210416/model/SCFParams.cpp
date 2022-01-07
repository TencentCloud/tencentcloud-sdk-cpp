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

#include <tencentcloud/eb/v20210416/model/SCFParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

SCFParams::SCFParams() :
    m_batchTimeoutHasBeenSet(false),
    m_batchEventCountHasBeenSet(false),
    m_enableBatchDeliveryHasBeenSet(false)
{
}

CoreInternalOutcome SCFParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BatchTimeout") && !value["BatchTimeout"].IsNull())
    {
        if (!value["BatchTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SCFParams.BatchTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_batchTimeout = value["BatchTimeout"].GetInt64();
        m_batchTimeoutHasBeenSet = true;
    }

    if (value.HasMember("BatchEventCount") && !value["BatchEventCount"].IsNull())
    {
        if (!value["BatchEventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SCFParams.BatchEventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_batchEventCount = value["BatchEventCount"].GetInt64();
        m_batchEventCountHasBeenSet = true;
    }

    if (value.HasMember("EnableBatchDelivery") && !value["EnableBatchDelivery"].IsNull())
    {
        if (!value["EnableBatchDelivery"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SCFParams.EnableBatchDelivery` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableBatchDelivery = value["EnableBatchDelivery"].GetBool();
        m_enableBatchDeliveryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SCFParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_batchTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_batchTimeout, allocator);
    }

    if (m_batchEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_batchEventCount, allocator);
    }

    if (m_enableBatchDeliveryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableBatchDelivery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableBatchDelivery, allocator);
    }

}


int64_t SCFParams::GetBatchTimeout() const
{
    return m_batchTimeout;
}

void SCFParams::SetBatchTimeout(const int64_t& _batchTimeout)
{
    m_batchTimeout = _batchTimeout;
    m_batchTimeoutHasBeenSet = true;
}

bool SCFParams::BatchTimeoutHasBeenSet() const
{
    return m_batchTimeoutHasBeenSet;
}

int64_t SCFParams::GetBatchEventCount() const
{
    return m_batchEventCount;
}

void SCFParams::SetBatchEventCount(const int64_t& _batchEventCount)
{
    m_batchEventCount = _batchEventCount;
    m_batchEventCountHasBeenSet = true;
}

bool SCFParams::BatchEventCountHasBeenSet() const
{
    return m_batchEventCountHasBeenSet;
}

bool SCFParams::GetEnableBatchDelivery() const
{
    return m_enableBatchDelivery;
}

void SCFParams::SetEnableBatchDelivery(const bool& _enableBatchDelivery)
{
    m_enableBatchDelivery = _enableBatchDelivery;
    m_enableBatchDeliveryHasBeenSet = true;
}

bool SCFParams::EnableBatchDeliveryHasBeenSet() const
{
    return m_enableBatchDeliveryHasBeenSet;
}

