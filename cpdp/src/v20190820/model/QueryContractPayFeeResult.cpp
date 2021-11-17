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

#include <tencentcloud/cpdp/v20190820/model/QueryContractPayFeeResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryContractPayFeeResult::QueryContractPayFeeResult() :
    m_payHasBeenSet(false),
    m_extraInputHasBeenSet(false),
    m_payFeeHasBeenSet(false)
{
}

CoreInternalOutcome QueryContractPayFeeResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Pay") && !value["Pay"].IsNull())
    {
        if (!value["Pay"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QueryContractPayFeeResult.Pay` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pay.Deserialize(value["Pay"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_payHasBeenSet = true;
    }

    if (value.HasMember("ExtraInput") && !value["ExtraInput"].IsNull())
    {
        if (!value["ExtraInput"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueryContractPayFeeResult.ExtraInput` is not array type"));

        const rapidjson::Value &tmpValue = value["ExtraInput"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_extraInput.push_back((*itr).GetString());
        }
        m_extraInputHasBeenSet = true;
    }

    if (value.HasMember("PayFee") && !value["PayFee"].IsNull())
    {
        if (!value["PayFee"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueryContractPayFeeResult.PayFee` is not array type"));

        const rapidjson::Value &tmpValue = value["PayFee"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PayFeeDataResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_payFee.push_back(item);
        }
        m_payFeeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryContractPayFeeResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_payHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pay.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_extraInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_extraInput.begin(); itr != m_extraInput.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_payFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayFee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_payFee.begin(); itr != m_payFee.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


PayDataResult QueryContractPayFeeResult::GetPay() const
{
    return m_pay;
}

void QueryContractPayFeeResult::SetPay(const PayDataResult& _pay)
{
    m_pay = _pay;
    m_payHasBeenSet = true;
}

bool QueryContractPayFeeResult::PayHasBeenSet() const
{
    return m_payHasBeenSet;
}

vector<string> QueryContractPayFeeResult::GetExtraInput() const
{
    return m_extraInput;
}

void QueryContractPayFeeResult::SetExtraInput(const vector<string>& _extraInput)
{
    m_extraInput = _extraInput;
    m_extraInputHasBeenSet = true;
}

bool QueryContractPayFeeResult::ExtraInputHasBeenSet() const
{
    return m_extraInputHasBeenSet;
}

vector<PayFeeDataResult> QueryContractPayFeeResult::GetPayFee() const
{
    return m_payFee;
}

void QueryContractPayFeeResult::SetPayFee(const vector<PayFeeDataResult>& _payFee)
{
    m_payFee = _payFee;
    m_payFeeHasBeenSet = true;
}

bool QueryContractPayFeeResult::PayFeeHasBeenSet() const
{
    return m_payFeeHasBeenSet;
}

