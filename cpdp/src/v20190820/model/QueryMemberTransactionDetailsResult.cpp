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

#include <tencentcloud/cpdp/v20190820/model/QueryMemberTransactionDetailsResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryMemberTransactionDetailsResult::QueryMemberTransactionDetailsResult() :
    m_resultCountHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_endFlagHasBeenSet(false),
    m_tranItemArrayHasBeenSet(false)
{
}

CoreInternalOutcome QueryMemberTransactionDetailsResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResultCount") && !value["ResultCount"].IsNull())
    {
        if (!value["ResultCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryMemberTransactionDetailsResult.ResultCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resultCount = value["ResultCount"].GetUint64();
        m_resultCountHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryMemberTransactionDetailsResult.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("EndFlag") && !value["EndFlag"].IsNull())
    {
        if (!value["EndFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryMemberTransactionDetailsResult.EndFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endFlag = string(value["EndFlag"].GetString());
        m_endFlagHasBeenSet = true;
    }

    if (value.HasMember("TranItemArray") && !value["TranItemArray"].IsNull())
    {
        if (!value["TranItemArray"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueryMemberTransactionDetailsResult.TranItemArray` is not array type"));

        const rapidjson::Value &tmpValue = value["TranItemArray"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MemberTransactionItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tranItemArray.push_back(item);
        }
        m_tranItemArrayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryMemberTransactionDetailsResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultCount, allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_endFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_tranItemArrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranItemArray";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tranItemArray.begin(); itr != m_tranItemArray.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t QueryMemberTransactionDetailsResult::GetResultCount() const
{
    return m_resultCount;
}

void QueryMemberTransactionDetailsResult::SetResultCount(const uint64_t& _resultCount)
{
    m_resultCount = _resultCount;
    m_resultCountHasBeenSet = true;
}

bool QueryMemberTransactionDetailsResult::ResultCountHasBeenSet() const
{
    return m_resultCountHasBeenSet;
}

uint64_t QueryMemberTransactionDetailsResult::GetTotalCount() const
{
    return m_totalCount;
}

void QueryMemberTransactionDetailsResult::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool QueryMemberTransactionDetailsResult::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

string QueryMemberTransactionDetailsResult::GetEndFlag() const
{
    return m_endFlag;
}

void QueryMemberTransactionDetailsResult::SetEndFlag(const string& _endFlag)
{
    m_endFlag = _endFlag;
    m_endFlagHasBeenSet = true;
}

bool QueryMemberTransactionDetailsResult::EndFlagHasBeenSet() const
{
    return m_endFlagHasBeenSet;
}

vector<MemberTransactionItem> QueryMemberTransactionDetailsResult::GetTranItemArray() const
{
    return m_tranItemArray;
}

void QueryMemberTransactionDetailsResult::SetTranItemArray(const vector<MemberTransactionItem>& _tranItemArray)
{
    m_tranItemArray = _tranItemArray;
    m_tranItemArrayHasBeenSet = true;
}

bool QueryMemberTransactionDetailsResult::TranItemArrayHasBeenSet() const
{
    return m_tranItemArrayHasBeenSet;
}

