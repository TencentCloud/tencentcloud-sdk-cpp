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

#include <tencentcloud/ms/v20180408/model/ShieldPlanInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace rapidjson;
using namespace std;

ShieldPlanInfo::ShieldPlanInfo() :
    m_totalCountHasBeenSet(false),
    m_planSetHasBeenSet(false)
{
}

CoreInternalOutcome ShieldPlanInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ShieldPlanInfo.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("PlanSet") && !value["PlanSet"].IsNull())
    {
        if (!value["PlanSet"].IsArray())
            return CoreInternalOutcome(Error("response `ShieldPlanInfo.PlanSet` is not array type"));

        const Value &tmpValue = value["PlanSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PlanDetailInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_planSet.push_back(item);
        }
        m_planSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShieldPlanInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_planSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PlanSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_planSet.begin(); itr != m_planSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t ShieldPlanInfo::GetTotalCount() const
{
    return m_totalCount;
}

void ShieldPlanInfo::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ShieldPlanInfo::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<PlanDetailInfo> ShieldPlanInfo::GetPlanSet() const
{
    return m_planSet;
}

void ShieldPlanInfo::SetPlanSet(const vector<PlanDetailInfo>& _planSet)
{
    m_planSet = _planSet;
    m_planSetHasBeenSet = true;
}

bool ShieldPlanInfo::PlanSetHasBeenSet() const
{
    return m_planSetHasBeenSet;
}

