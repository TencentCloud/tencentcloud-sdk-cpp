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

#include <tencentcloud/apcas/v20201127/model/CallDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apcas::V20201127::Model;
using namespace std;

CallDetails::CallDetails() :
    m_totalCountHasBeenSet(false),
    m_callDetailSetHasBeenSet(false)
{
}

CoreInternalOutcome CallDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CallDetails.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("CallDetailSet") && !value["CallDetailSet"].IsNull())
    {
        if (!value["CallDetailSet"].IsArray())
            return CoreInternalOutcome(Error("response `CallDetails.CallDetailSet` is not array type"));

        const rapidjson::Value &tmpValue = value["CallDetailSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CallDetailItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_callDetailSet.push_back(item);
        }
        m_callDetailSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CallDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_callDetailSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallDetailSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_callDetailSet.begin(); itr != m_callDetailSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t CallDetails::GetTotalCount() const
{
    return m_totalCount;
}

void CallDetails::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool CallDetails::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<CallDetailItem> CallDetails::GetCallDetailSet() const
{
    return m_callDetailSet;
}

void CallDetails::SetCallDetailSet(const vector<CallDetailItem>& _callDetailSet)
{
    m_callDetailSet = _callDetailSet;
    m_callDetailSetHasBeenSet = true;
}

bool CallDetails::CallDetailSetHasBeenSet() const
{
    return m_callDetailSetHasBeenSet;
}

