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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankExternalSubMerchantBankAccountResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankExternalSubMerchantBankAccountResult::QueryOpenBankExternalSubMerchantBankAccountResult() :
    m_accountListHasBeenSet(false)
{
}

CoreInternalOutcome QueryOpenBankExternalSubMerchantBankAccountResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountList") && !value["AccountList"].IsNull())
    {
        if (!value["AccountList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankExternalSubMerchantBankAccountResult.AccountList` is not array type"));

        const rapidjson::Value &tmpValue = value["AccountList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QueryOpenBankExternalSubMerchantBankAccountData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accountList.push_back(item);
        }
        m_accountListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryOpenBankExternalSubMerchantBankAccountResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accountList.begin(); itr != m_accountList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<QueryOpenBankExternalSubMerchantBankAccountData> QueryOpenBankExternalSubMerchantBankAccountResult::GetAccountList() const
{
    return m_accountList;
}

void QueryOpenBankExternalSubMerchantBankAccountResult::SetAccountList(const vector<QueryOpenBankExternalSubMerchantBankAccountData>& _accountList)
{
    m_accountList = _accountList;
    m_accountListHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantBankAccountResult::AccountListHasBeenSet() const
{
    return m_accountListHasBeenSet;
}

