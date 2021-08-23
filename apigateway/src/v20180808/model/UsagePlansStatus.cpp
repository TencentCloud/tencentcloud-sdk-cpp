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

#include <tencentcloud/apigateway/v20180808/model/UsagePlansStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

UsagePlansStatus::UsagePlansStatus() :
    m_totalCountHasBeenSet(false),
    m_usagePlanStatusSetHasBeenSet(false)
{
}

CoreInternalOutcome UsagePlansStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlansStatus.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("UsagePlanStatusSet") && !value["UsagePlanStatusSet"].IsNull())
    {
        if (!value["UsagePlanStatusSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UsagePlansStatus.UsagePlanStatusSet` is not array type"));

        const rapidjson::Value &tmpValue = value["UsagePlanStatusSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UsagePlanStatusInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_usagePlanStatusSet.push_back(item);
        }
        m_usagePlanStatusSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsagePlansStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_usagePlanStatusSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsagePlanStatusSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_usagePlanStatusSet.begin(); itr != m_usagePlanStatusSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t UsagePlansStatus::GetTotalCount() const
{
    return m_totalCount;
}

void UsagePlansStatus::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool UsagePlansStatus::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<UsagePlanStatusInfo> UsagePlansStatus::GetUsagePlanStatusSet() const
{
    return m_usagePlanStatusSet;
}

void UsagePlansStatus::SetUsagePlanStatusSet(const vector<UsagePlanStatusInfo>& _usagePlanStatusSet)
{
    m_usagePlanStatusSet = _usagePlanStatusSet;
    m_usagePlanStatusSetHasBeenSet = true;
}

bool UsagePlansStatus::UsagePlanStatusSetHasBeenSet() const
{
    return m_usagePlanStatusSetHasBeenSet;
}

