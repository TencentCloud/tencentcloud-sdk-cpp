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

#include <tencentcloud/apigateway/v20180808/model/ServiceUsagePlanSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ServiceUsagePlanSet::ServiceUsagePlanSet() :
    m_totalCountHasBeenSet(false),
    m_serviceUsagePlanListHasBeenSet(false)
{
}

CoreInternalOutcome ServiceUsagePlanSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceUsagePlanSet.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("ServiceUsagePlanList") && !value["ServiceUsagePlanList"].IsNull())
    {
        if (!value["ServiceUsagePlanList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceUsagePlanSet.ServiceUsagePlanList` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceUsagePlanList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiUsagePlan item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceUsagePlanList.push_back(item);
        }
        m_serviceUsagePlanListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceUsagePlanSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_serviceUsagePlanListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceUsagePlanList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceUsagePlanList.begin(); itr != m_serviceUsagePlanList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t ServiceUsagePlanSet::GetTotalCount() const
{
    return m_totalCount;
}

void ServiceUsagePlanSet::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ServiceUsagePlanSet::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<ApiUsagePlan> ServiceUsagePlanSet::GetServiceUsagePlanList() const
{
    return m_serviceUsagePlanList;
}

void ServiceUsagePlanSet::SetServiceUsagePlanList(const vector<ApiUsagePlan>& _serviceUsagePlanList)
{
    m_serviceUsagePlanList = _serviceUsagePlanList;
    m_serviceUsagePlanListHasBeenSet = true;
}

bool ServiceUsagePlanSet::ServiceUsagePlanListHasBeenSet() const
{
    return m_serviceUsagePlanListHasBeenSet;
}

