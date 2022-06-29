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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankSupportBankListResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankSupportBankListResult::QueryOpenBankSupportBankListResult() :
    m_supportBankListHasBeenSet(false)
{
}

CoreInternalOutcome QueryOpenBankSupportBankListResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SupportBankList") && !value["SupportBankList"].IsNull())
    {
        if (!value["SupportBankList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankSupportBankListResult.SupportBankList` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportBankList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SupportBankInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_supportBankList.push_back(item);
        }
        m_supportBankListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryOpenBankSupportBankListResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_supportBankListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportBankList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_supportBankList.begin(); itr != m_supportBankList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<SupportBankInfo> QueryOpenBankSupportBankListResult::GetSupportBankList() const
{
    return m_supportBankList;
}

void QueryOpenBankSupportBankListResult::SetSupportBankList(const vector<SupportBankInfo>& _supportBankList)
{
    m_supportBankList = _supportBankList;
    m_supportBankListHasBeenSet = true;
}

bool QueryOpenBankSupportBankListResult::SupportBankListHasBeenSet() const
{
    return m_supportBankListHasBeenSet;
}

