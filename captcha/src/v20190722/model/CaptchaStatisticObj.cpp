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

#include <tencentcloud/captcha/v20190722/model/CaptchaStatisticObj.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

CaptchaStatisticObj::CaptchaStatisticObj() :
    m_actionTotalHasBeenSet(false),
    m_verifyTotalHasBeenSet(false),
    m_verifyThroughTotalHasBeenSet(false),
    m_verifyInterceptTotalHasBeenSet(false),
    m_ticketTotalHasBeenSet(false),
    m_ticketThroughTotalHasBeenSet(false),
    m_ticketInterceptTotalHasBeenSet(false),
    m_requestTrendHasBeenSet(false),
    m_interceptPerTrendHasBeenSet(false),
    m_ticketCheckTrendHasBeenSet(false)
{
}

CoreInternalOutcome CaptchaStatisticObj::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActionTotal") && !value["ActionTotal"].IsNull())
    {
        if (!value["ActionTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaStatisticObj.ActionTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_actionTotal = value["ActionTotal"].GetInt64();
        m_actionTotalHasBeenSet = true;
    }

    if (value.HasMember("VerifyTotal") && !value["VerifyTotal"].IsNull())
    {
        if (!value["VerifyTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaStatisticObj.VerifyTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_verifyTotal = value["VerifyTotal"].GetInt64();
        m_verifyTotalHasBeenSet = true;
    }

    if (value.HasMember("VerifyThroughTotal") && !value["VerifyThroughTotal"].IsNull())
    {
        if (!value["VerifyThroughTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaStatisticObj.VerifyThroughTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_verifyThroughTotal = value["VerifyThroughTotal"].GetInt64();
        m_verifyThroughTotalHasBeenSet = true;
    }

    if (value.HasMember("VerifyInterceptTotal") && !value["VerifyInterceptTotal"].IsNull())
    {
        if (!value["VerifyInterceptTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaStatisticObj.VerifyInterceptTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_verifyInterceptTotal = value["VerifyInterceptTotal"].GetInt64();
        m_verifyInterceptTotalHasBeenSet = true;
    }

    if (value.HasMember("TicketTotal") && !value["TicketTotal"].IsNull())
    {
        if (!value["TicketTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaStatisticObj.TicketTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ticketTotal = value["TicketTotal"].GetInt64();
        m_ticketTotalHasBeenSet = true;
    }

    if (value.HasMember("TicketThroughTotal") && !value["TicketThroughTotal"].IsNull())
    {
        if (!value["TicketThroughTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaStatisticObj.TicketThroughTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ticketThroughTotal = value["TicketThroughTotal"].GetInt64();
        m_ticketThroughTotalHasBeenSet = true;
    }

    if (value.HasMember("TicketInterceptTotal") && !value["TicketInterceptTotal"].IsNull())
    {
        if (!value["TicketInterceptTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaStatisticObj.TicketInterceptTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ticketInterceptTotal = value["TicketInterceptTotal"].GetInt64();
        m_ticketInterceptTotalHasBeenSet = true;
    }

    if (value.HasMember("RequestTrend") && !value["RequestTrend"].IsNull())
    {
        if (!value["RequestTrend"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CaptchaStatisticObj.RequestTrend` is not array type"));

        const rapidjson::Value &tmpValue = value["RequestTrend"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RequestTrendObj item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_requestTrend.push_back(item);
        }
        m_requestTrendHasBeenSet = true;
    }

    if (value.HasMember("InterceptPerTrend") && !value["InterceptPerTrend"].IsNull())
    {
        if (!value["InterceptPerTrend"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CaptchaStatisticObj.InterceptPerTrend` is not array type"));

        const rapidjson::Value &tmpValue = value["InterceptPerTrend"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InterceptPerTrendObj item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_interceptPerTrend.push_back(item);
        }
        m_interceptPerTrendHasBeenSet = true;
    }

    if (value.HasMember("TicketCheckTrend") && !value["TicketCheckTrend"].IsNull())
    {
        if (!value["TicketCheckTrend"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CaptchaStatisticObj.TicketCheckTrend` is not array type"));

        const rapidjson::Value &tmpValue = value["TicketCheckTrend"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TicketCheckTrendObj item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ticketCheckTrend.push_back(item);
        }
        m_ticketCheckTrendHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CaptchaStatisticObj::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionTotal, allocator);
    }

    if (m_verifyTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verifyTotal, allocator);
    }

    if (m_verifyThroughTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyThroughTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verifyThroughTotal, allocator);
    }

    if (m_verifyInterceptTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyInterceptTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verifyInterceptTotal, allocator);
    }

    if (m_ticketTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ticketTotal, allocator);
    }

    if (m_ticketThroughTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketThroughTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ticketThroughTotal, allocator);
    }

    if (m_ticketInterceptTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketInterceptTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ticketInterceptTotal, allocator);
    }

    if (m_requestTrendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestTrend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_requestTrend.begin(); itr != m_requestTrend.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_interceptPerTrendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterceptPerTrend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_interceptPerTrend.begin(); itr != m_interceptPerTrend.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ticketCheckTrendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketCheckTrend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ticketCheckTrend.begin(); itr != m_ticketCheckTrend.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t CaptchaStatisticObj::GetActionTotal() const
{
    return m_actionTotal;
}

void CaptchaStatisticObj::SetActionTotal(const int64_t& _actionTotal)
{
    m_actionTotal = _actionTotal;
    m_actionTotalHasBeenSet = true;
}

bool CaptchaStatisticObj::ActionTotalHasBeenSet() const
{
    return m_actionTotalHasBeenSet;
}

int64_t CaptchaStatisticObj::GetVerifyTotal() const
{
    return m_verifyTotal;
}

void CaptchaStatisticObj::SetVerifyTotal(const int64_t& _verifyTotal)
{
    m_verifyTotal = _verifyTotal;
    m_verifyTotalHasBeenSet = true;
}

bool CaptchaStatisticObj::VerifyTotalHasBeenSet() const
{
    return m_verifyTotalHasBeenSet;
}

int64_t CaptchaStatisticObj::GetVerifyThroughTotal() const
{
    return m_verifyThroughTotal;
}

void CaptchaStatisticObj::SetVerifyThroughTotal(const int64_t& _verifyThroughTotal)
{
    m_verifyThroughTotal = _verifyThroughTotal;
    m_verifyThroughTotalHasBeenSet = true;
}

bool CaptchaStatisticObj::VerifyThroughTotalHasBeenSet() const
{
    return m_verifyThroughTotalHasBeenSet;
}

int64_t CaptchaStatisticObj::GetVerifyInterceptTotal() const
{
    return m_verifyInterceptTotal;
}

void CaptchaStatisticObj::SetVerifyInterceptTotal(const int64_t& _verifyInterceptTotal)
{
    m_verifyInterceptTotal = _verifyInterceptTotal;
    m_verifyInterceptTotalHasBeenSet = true;
}

bool CaptchaStatisticObj::VerifyInterceptTotalHasBeenSet() const
{
    return m_verifyInterceptTotalHasBeenSet;
}

int64_t CaptchaStatisticObj::GetTicketTotal() const
{
    return m_ticketTotal;
}

void CaptchaStatisticObj::SetTicketTotal(const int64_t& _ticketTotal)
{
    m_ticketTotal = _ticketTotal;
    m_ticketTotalHasBeenSet = true;
}

bool CaptchaStatisticObj::TicketTotalHasBeenSet() const
{
    return m_ticketTotalHasBeenSet;
}

int64_t CaptchaStatisticObj::GetTicketThroughTotal() const
{
    return m_ticketThroughTotal;
}

void CaptchaStatisticObj::SetTicketThroughTotal(const int64_t& _ticketThroughTotal)
{
    m_ticketThroughTotal = _ticketThroughTotal;
    m_ticketThroughTotalHasBeenSet = true;
}

bool CaptchaStatisticObj::TicketThroughTotalHasBeenSet() const
{
    return m_ticketThroughTotalHasBeenSet;
}

int64_t CaptchaStatisticObj::GetTicketInterceptTotal() const
{
    return m_ticketInterceptTotal;
}

void CaptchaStatisticObj::SetTicketInterceptTotal(const int64_t& _ticketInterceptTotal)
{
    m_ticketInterceptTotal = _ticketInterceptTotal;
    m_ticketInterceptTotalHasBeenSet = true;
}

bool CaptchaStatisticObj::TicketInterceptTotalHasBeenSet() const
{
    return m_ticketInterceptTotalHasBeenSet;
}

vector<RequestTrendObj> CaptchaStatisticObj::GetRequestTrend() const
{
    return m_requestTrend;
}

void CaptchaStatisticObj::SetRequestTrend(const vector<RequestTrendObj>& _requestTrend)
{
    m_requestTrend = _requestTrend;
    m_requestTrendHasBeenSet = true;
}

bool CaptchaStatisticObj::RequestTrendHasBeenSet() const
{
    return m_requestTrendHasBeenSet;
}

vector<InterceptPerTrendObj> CaptchaStatisticObj::GetInterceptPerTrend() const
{
    return m_interceptPerTrend;
}

void CaptchaStatisticObj::SetInterceptPerTrend(const vector<InterceptPerTrendObj>& _interceptPerTrend)
{
    m_interceptPerTrend = _interceptPerTrend;
    m_interceptPerTrendHasBeenSet = true;
}

bool CaptchaStatisticObj::InterceptPerTrendHasBeenSet() const
{
    return m_interceptPerTrendHasBeenSet;
}

vector<TicketCheckTrendObj> CaptchaStatisticObj::GetTicketCheckTrend() const
{
    return m_ticketCheckTrend;
}

void CaptchaStatisticObj::SetTicketCheckTrend(const vector<TicketCheckTrendObj>& _ticketCheckTrend)
{
    m_ticketCheckTrend = _ticketCheckTrend;
    m_ticketCheckTrendHasBeenSet = true;
}

bool CaptchaStatisticObj::TicketCheckTrendHasBeenSet() const
{
    return m_ticketCheckTrendHasBeenSet;
}

