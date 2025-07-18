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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankBankBranchListResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankBankBranchListResult::QueryOpenBankBankBranchListResult() :
    m_bankBranchListHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome QueryOpenBankBankBranchListResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BankBranchList") && !value["BankBranchList"].IsNull())
    {
        if (!value["BankBranchList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBankBranchListResult.BankBranchList` is not array type"));

        const rapidjson::Value &tmpValue = value["BankBranchList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BankBranchInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bankBranchList.push_back(item);
        }
        m_bankBranchListHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankBankBranchListResult.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryOpenBankBankBranchListResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bankBranchListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankBranchList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bankBranchList.begin(); itr != m_bankBranchList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


vector<BankBranchInfo> QueryOpenBankBankBranchListResult::GetBankBranchList() const
{
    return m_bankBranchList;
}

void QueryOpenBankBankBranchListResult::SetBankBranchList(const vector<BankBranchInfo>& _bankBranchList)
{
    m_bankBranchList = _bankBranchList;
    m_bankBranchListHasBeenSet = true;
}

bool QueryOpenBankBankBranchListResult::BankBranchListHasBeenSet() const
{
    return m_bankBranchListHasBeenSet;
}

int64_t QueryOpenBankBankBranchListResult::GetCount() const
{
    return m_count;
}

void QueryOpenBankBankBranchListResult::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool QueryOpenBankBankBranchListResult::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

