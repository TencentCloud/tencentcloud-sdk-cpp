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

#include <tencentcloud/captcha/v20190722/model/CaptchaTicketDataRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

CaptchaTicketDataRes::CaptchaTicketDataRes() :
    m_ticketAmountArrayHasBeenSet(false),
    m_ticketThroughArrayHasBeenSet(false),
    m_ticketInterceptArrayHasBeenSet(false)
{
}

CoreInternalOutcome CaptchaTicketDataRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TicketAmountArray") && !value["TicketAmountArray"].IsNull())
    {
        if (!value["TicketAmountArray"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CaptchaTicketDataRes.TicketAmountArray` is not array type"));

        const rapidjson::Value &tmpValue = value["TicketAmountArray"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TicketAmountUnit item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ticketAmountArray.push_back(item);
        }
        m_ticketAmountArrayHasBeenSet = true;
    }

    if (value.HasMember("TicketThroughArray") && !value["TicketThroughArray"].IsNull())
    {
        if (!value["TicketThroughArray"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CaptchaTicketDataRes.TicketThroughArray` is not array type"));

        const rapidjson::Value &tmpValue = value["TicketThroughArray"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TicketThroughUnit item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ticketThroughArray.push_back(item);
        }
        m_ticketThroughArrayHasBeenSet = true;
    }

    if (value.HasMember("TicketInterceptArray") && !value["TicketInterceptArray"].IsNull())
    {
        if (!value["TicketInterceptArray"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CaptchaTicketDataRes.TicketInterceptArray` is not array type"));

        const rapidjson::Value &tmpValue = value["TicketInterceptArray"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TicketInterceptUnit item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ticketInterceptArray.push_back(item);
        }
        m_ticketInterceptArrayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CaptchaTicketDataRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ticketAmountArrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketAmountArray";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ticketAmountArray.begin(); itr != m_ticketAmountArray.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ticketThroughArrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketThroughArray";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ticketThroughArray.begin(); itr != m_ticketThroughArray.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ticketInterceptArrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketInterceptArray";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ticketInterceptArray.begin(); itr != m_ticketInterceptArray.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<TicketAmountUnit> CaptchaTicketDataRes::GetTicketAmountArray() const
{
    return m_ticketAmountArray;
}

void CaptchaTicketDataRes::SetTicketAmountArray(const vector<TicketAmountUnit>& _ticketAmountArray)
{
    m_ticketAmountArray = _ticketAmountArray;
    m_ticketAmountArrayHasBeenSet = true;
}

bool CaptchaTicketDataRes::TicketAmountArrayHasBeenSet() const
{
    return m_ticketAmountArrayHasBeenSet;
}

vector<TicketThroughUnit> CaptchaTicketDataRes::GetTicketThroughArray() const
{
    return m_ticketThroughArray;
}

void CaptchaTicketDataRes::SetTicketThroughArray(const vector<TicketThroughUnit>& _ticketThroughArray)
{
    m_ticketThroughArray = _ticketThroughArray;
    m_ticketThroughArrayHasBeenSet = true;
}

bool CaptchaTicketDataRes::TicketThroughArrayHasBeenSet() const
{
    return m_ticketThroughArrayHasBeenSet;
}

vector<TicketInterceptUnit> CaptchaTicketDataRes::GetTicketInterceptArray() const
{
    return m_ticketInterceptArray;
}

void CaptchaTicketDataRes::SetTicketInterceptArray(const vector<TicketInterceptUnit>& _ticketInterceptArray)
{
    m_ticketInterceptArray = _ticketInterceptArray;
    m_ticketInterceptArrayHasBeenSet = true;
}

bool CaptchaTicketDataRes::TicketInterceptArrayHasBeenSet() const
{
    return m_ticketInterceptArrayHasBeenSet;
}

