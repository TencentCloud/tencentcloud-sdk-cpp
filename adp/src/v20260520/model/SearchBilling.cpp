/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/adp/v20260520/model/SearchBilling.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SearchBilling::SearchBilling() :
    m_billingTagListHasBeenSet(false),
    m_financeSubBusinessTypeHasBeenSet(false)
{
}

CoreInternalOutcome SearchBilling::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BillingTagList") && !value["BillingTagList"].IsNull())
    {
        if (!value["BillingTagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchBilling.BillingTagList` is not array type"));

        const rapidjson::Value &tmpValue = value["BillingTagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_billingTagList.push_back(item);
        }
        m_billingTagListHasBeenSet = true;
    }

    if (value.HasMember("FinanceSubBusinessType") && !value["FinanceSubBusinessType"].IsNull())
    {
        if (!value["FinanceSubBusinessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchBilling.FinanceSubBusinessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_financeSubBusinessType = string(value["FinanceSubBusinessType"].GetString());
        m_financeSubBusinessTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchBilling::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_billingTagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingTagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_billingTagList.begin(); itr != m_billingTagList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_financeSubBusinessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinanceSubBusinessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_financeSubBusinessType.c_str(), allocator).Move(), allocator);
    }

}


vector<KVPair> SearchBilling::GetBillingTagList() const
{
    return m_billingTagList;
}

void SearchBilling::SetBillingTagList(const vector<KVPair>& _billingTagList)
{
    m_billingTagList = _billingTagList;
    m_billingTagListHasBeenSet = true;
}

bool SearchBilling::BillingTagListHasBeenSet() const
{
    return m_billingTagListHasBeenSet;
}

string SearchBilling::GetFinanceSubBusinessType() const
{
    return m_financeSubBusinessType;
}

void SearchBilling::SetFinanceSubBusinessType(const string& _financeSubBusinessType)
{
    m_financeSubBusinessType = _financeSubBusinessType;
    m_financeSubBusinessTypeHasBeenSet = true;
}

bool SearchBilling::FinanceSubBusinessTypeHasBeenSet() const
{
    return m_financeSubBusinessTypeHasBeenSet;
}

