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
    m_billingStatisticsHasBeenSet(false),
    m_requestStatisticsHasBeenSet(false),
    m_requestSuccessStatisticsHasBeenSet(false)
{
}

CoreInternalOutcome SendStatusStatistics::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("BillingStatistics") && !value["BillingStatistics"].IsNull())
    {
        if (!value["BillingStatistics"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SendStatusStatistics.BillingStatistics` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_billingStatistics = value["BillingStatistics"].GetUint64();
        m_billingStatisticsHasBeenSet = true;
    }

    if (value.HasMember("RequestStatistics") && !value["RequestStatistics"].IsNull())
    {
        if (!value["RequestStatistics"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SendStatusStatistics.RequestStatistics` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_requestStatistics = value["RequestStatistics"].GetUint64();
        m_requestStatisticsHasBeenSet = true;
    }

    if (value.HasMember("RequestSuccessStatistics") && !value["RequestSuccessStatistics"].IsNull())
    {
        if (!value["RequestSuccessStatistics"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SendStatusStatistics.RequestSuccessStatistics` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_requestSuccessStatistics = value["RequestSuccessStatistics"].GetUint64();
        m_requestSuccessStatisticsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SendStatusStatistics::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_billingStatisticsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BillingStatistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingStatistics, allocator);
    }

    if (m_requestStatisticsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RequestStatistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestStatistics, allocator);
    }

    if (m_requestSuccessStatisticsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RequestSuccessStatistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestSuccessStatistics, allocator);
    }

}


uint64_t SendStatusStatistics::GetBillingStatistics() const
{
    return m_billingStatistics;
}

void SendStatusStatistics::SetBillingStatistics(const uint64_t& _billingStatistics)
{
    m_billingStatistics = _billingStatistics;
    m_billingStatisticsHasBeenSet = true;
}

bool SendStatusStatistics::BillingStatisticsHasBeenSet() const
{
    return m_billingStatisticsHasBeenSet;
}

uint64_t SendStatusStatistics::GetRequestStatistics() const
{
    return m_requestStatistics;
}

void SendStatusStatistics::SetRequestStatistics(const uint64_t& _requestStatistics)
{
    m_requestStatistics = _requestStatistics;
    m_requestStatisticsHasBeenSet = true;
}

bool SendStatusStatistics::RequestStatisticsHasBeenSet() const
{
    return m_requestStatisticsHasBeenSet;
}

uint64_t SendStatusStatistics::GetRequestSuccessStatistics() const
{
    return m_requestSuccessStatistics;
}

void SendStatusStatistics::SetRequestSuccessStatistics(const uint64_t& _requestSuccessStatistics)
{
    m_requestSuccessStatistics = _requestSuccessStatistics;
    m_requestSuccessStatisticsHasBeenSet = true;
}

bool SendStatusStatistics::RequestSuccessStatisticsHasBeenSet() const
{
    return m_requestSuccessStatisticsHasBeenSet;
}

