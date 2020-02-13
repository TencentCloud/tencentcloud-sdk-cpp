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

#include <tencentcloud/sms/v20190711/model/SendStatusStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sms::V20190711::Model;
using namespace rapidjson;
using namespace std;

SendStatusStatistics::SendStatusStatistics() :
    m_feeCountHasBeenSet(false),
    m_requestCountHasBeenSet(false),
    m_requestSuccessCountHasBeenSet(false)
{
}

CoreInternalOutcome SendStatusStatistics::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("FeeCount") && !value["FeeCount"].IsNull())
    {
        if (!value["FeeCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SendStatusStatistics.FeeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_feeCount = value["FeeCount"].GetUint64();
        m_feeCountHasBeenSet = true;
    }

    if (value.HasMember("RequestCount") && !value["RequestCount"].IsNull())
    {
        if (!value["RequestCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SendStatusStatistics.RequestCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_requestCount = value["RequestCount"].GetUint64();
        m_requestCountHasBeenSet = true;
    }

    if (value.HasMember("RequestSuccessCount") && !value["RequestSuccessCount"].IsNull())
    {
        if (!value["RequestSuccessCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SendStatusStatistics.RequestSuccessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_requestSuccessCount = value["RequestSuccessCount"].GetUint64();
        m_requestSuccessCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SendStatusStatistics::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_feeCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FeeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_feeCount, allocator);
    }

    if (m_requestCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RequestCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestCount, allocator);
    }

    if (m_requestSuccessCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RequestSuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestSuccessCount, allocator);
    }

}


uint64_t SendStatusStatistics::GetFeeCount() const
{
    return m_feeCount;
}

void SendStatusStatistics::SetFeeCount(const uint64_t& _feeCount)
{
    m_feeCount = _feeCount;
    m_feeCountHasBeenSet = true;
}

bool SendStatusStatistics::FeeCountHasBeenSet() const
{
    return m_feeCountHasBeenSet;
}

uint64_t SendStatusStatistics::GetRequestCount() const
{
    return m_requestCount;
}

void SendStatusStatistics::SetRequestCount(const uint64_t& _requestCount)
{
    m_requestCount = _requestCount;
    m_requestCountHasBeenSet = true;
}

bool SendStatusStatistics::RequestCountHasBeenSet() const
{
    return m_requestCountHasBeenSet;
}

uint64_t SendStatusStatistics::GetRequestSuccessCount() const
{
    return m_requestSuccessCount;
}

void SendStatusStatistics::SetRequestSuccessCount(const uint64_t& _requestSuccessCount)
{
    m_requestSuccessCount = _requestSuccessCount;
    m_requestSuccessCountHasBeenSet = true;
}

bool SendStatusStatistics::RequestSuccessCountHasBeenSet() const
{
    return m_requestSuccessCountHasBeenSet;
}

