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

#include <tencentcloud/cmq/v20190304/model/TransactionPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cmq::V20190304::Model;
using namespace std;

TransactionPolicy::TransactionPolicy() :
    m_maxQueryCountHasBeenSet(false),
    m_firstQueryIntervalHasBeenSet(false)
{
}

CoreInternalOutcome TransactionPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxQueryCount") && !value["MaxQueryCount"].IsNull())
    {
        if (!value["MaxQueryCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionPolicy.MaxQueryCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxQueryCount = value["MaxQueryCount"].GetUint64();
        m_maxQueryCountHasBeenSet = true;
    }

    if (value.HasMember("FirstQueryInterval") && !value["FirstQueryInterval"].IsNull())
    {
        if (!value["FirstQueryInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionPolicy.FirstQueryInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_firstQueryInterval = value["FirstQueryInterval"].GetUint64();
        m_firstQueryIntervalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TransactionPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxQueryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxQueryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxQueryCount, allocator);
    }

    if (m_firstQueryIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstQueryInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstQueryInterval, allocator);
    }

}


uint64_t TransactionPolicy::GetMaxQueryCount() const
{
    return m_maxQueryCount;
}

void TransactionPolicy::SetMaxQueryCount(const uint64_t& _maxQueryCount)
{
    m_maxQueryCount = _maxQueryCount;
    m_maxQueryCountHasBeenSet = true;
}

bool TransactionPolicy::MaxQueryCountHasBeenSet() const
{
    return m_maxQueryCountHasBeenSet;
}

uint64_t TransactionPolicy::GetFirstQueryInterval() const
{
    return m_firstQueryInterval;
}

void TransactionPolicy::SetFirstQueryInterval(const uint64_t& _firstQueryInterval)
{
    m_firstQueryInterval = _firstQueryInterval;
    m_firstQueryIntervalHasBeenSet = true;
}

bool TransactionPolicy::FirstQueryIntervalHasBeenSet() const
{
    return m_firstQueryIntervalHasBeenSet;
}

