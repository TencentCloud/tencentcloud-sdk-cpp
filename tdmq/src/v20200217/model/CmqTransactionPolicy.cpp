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

#include <tencentcloud/tdmq/v20200217/model/CmqTransactionPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CmqTransactionPolicy::CmqTransactionPolicy() :
    m_firstQueryIntervalHasBeenSet(false),
    m_maxQueryCountHasBeenSet(false)
{
}

CoreInternalOutcome CmqTransactionPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FirstQueryInterval") && !value["FirstQueryInterval"].IsNull())
    {
        if (!value["FirstQueryInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqTransactionPolicy.FirstQueryInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_firstQueryInterval = value["FirstQueryInterval"].GetUint64();
        m_firstQueryIntervalHasBeenSet = true;
    }

    if (value.HasMember("MaxQueryCount") && !value["MaxQueryCount"].IsNull())
    {
        if (!value["MaxQueryCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqTransactionPolicy.MaxQueryCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxQueryCount = value["MaxQueryCount"].GetUint64();
        m_maxQueryCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CmqTransactionPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_firstQueryIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstQueryInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstQueryInterval, allocator);
    }

    if (m_maxQueryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxQueryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxQueryCount, allocator);
    }

}


uint64_t CmqTransactionPolicy::GetFirstQueryInterval() const
{
    return m_firstQueryInterval;
}

void CmqTransactionPolicy::SetFirstQueryInterval(const uint64_t& _firstQueryInterval)
{
    m_firstQueryInterval = _firstQueryInterval;
    m_firstQueryIntervalHasBeenSet = true;
}

bool CmqTransactionPolicy::FirstQueryIntervalHasBeenSet() const
{
    return m_firstQueryIntervalHasBeenSet;
}

uint64_t CmqTransactionPolicy::GetMaxQueryCount() const
{
    return m_maxQueryCount;
}

void CmqTransactionPolicy::SetMaxQueryCount(const uint64_t& _maxQueryCount)
{
    m_maxQueryCount = _maxQueryCount;
    m_maxQueryCountHasBeenSet = true;
}

bool CmqTransactionPolicy::MaxQueryCountHasBeenSet() const
{
    return m_maxQueryCountHasBeenSet;
}

