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

#include <tencentcloud/tdmq/v20200217/model/FilterSubscription.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace rapidjson;
using namespace std;

FilterSubscription::FilterSubscription() :
    m_consumerHasCountHasBeenSet(false),
    m_consumerHasBacklogHasBeenSet(false),
    m_consumerHasExpiredHasBeenSet(false)
{
}

CoreInternalOutcome FilterSubscription::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ConsumerHasCount") && !value["ConsumerHasCount"].IsNull())
    {
        if (!value["ConsumerHasCount"].IsBool())
        {
            return CoreInternalOutcome(Error("response `FilterSubscription.ConsumerHasCount` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_consumerHasCount = value["ConsumerHasCount"].GetBool();
        m_consumerHasCountHasBeenSet = true;
    }

    if (value.HasMember("ConsumerHasBacklog") && !value["ConsumerHasBacklog"].IsNull())
    {
        if (!value["ConsumerHasBacklog"].IsBool())
        {
            return CoreInternalOutcome(Error("response `FilterSubscription.ConsumerHasBacklog` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_consumerHasBacklog = value["ConsumerHasBacklog"].GetBool();
        m_consumerHasBacklogHasBeenSet = true;
    }

    if (value.HasMember("ConsumerHasExpired") && !value["ConsumerHasExpired"].IsNull())
    {
        if (!value["ConsumerHasExpired"].IsBool())
        {
            return CoreInternalOutcome(Error("response `FilterSubscription.ConsumerHasExpired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_consumerHasExpired = value["ConsumerHasExpired"].GetBool();
        m_consumerHasExpiredHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FilterSubscription::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_consumerHasCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConsumerHasCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumerHasCount, allocator);
    }

    if (m_consumerHasBacklogHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConsumerHasBacklog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumerHasBacklog, allocator);
    }

    if (m_consumerHasExpiredHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConsumerHasExpired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumerHasExpired, allocator);
    }

}


bool FilterSubscription::GetConsumerHasCount() const
{
    return m_consumerHasCount;
}

void FilterSubscription::SetConsumerHasCount(const bool& _consumerHasCount)
{
    m_consumerHasCount = _consumerHasCount;
    m_consumerHasCountHasBeenSet = true;
}

bool FilterSubscription::ConsumerHasCountHasBeenSet() const
{
    return m_consumerHasCountHasBeenSet;
}

bool FilterSubscription::GetConsumerHasBacklog() const
{
    return m_consumerHasBacklog;
}

void FilterSubscription::SetConsumerHasBacklog(const bool& _consumerHasBacklog)
{
    m_consumerHasBacklog = _consumerHasBacklog;
    m_consumerHasBacklogHasBeenSet = true;
}

bool FilterSubscription::ConsumerHasBacklogHasBeenSet() const
{
    return m_consumerHasBacklogHasBeenSet;
}

bool FilterSubscription::GetConsumerHasExpired() const
{
    return m_consumerHasExpired;
}

void FilterSubscription::SetConsumerHasExpired(const bool& _consumerHasExpired)
{
    m_consumerHasExpired = _consumerHasExpired;
    m_consumerHasExpiredHasBeenSet = true;
}

bool FilterSubscription::ConsumerHasExpiredHasBeenSet() const
{
    return m_consumerHasExpiredHasBeenSet;
}

