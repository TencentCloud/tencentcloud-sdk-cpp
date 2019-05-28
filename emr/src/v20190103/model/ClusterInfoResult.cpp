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

#include <tencentcloud/emr/v20190103/model/ClusterInfoResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace rapidjson;
using namespace std;

ClusterInfoResult::ClusterInfoResult() :
    m_totalCntHasBeenSet(false),
    m_clusterListHasBeenSet(false)
{
}

CoreInternalOutcome ClusterInfoResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCnt") && !value["TotalCnt"].IsNull())
    {
        if (!value["TotalCnt"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ClusterInfoResult.TotalCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCnt = value["TotalCnt"].GetUint64();
        m_totalCntHasBeenSet = true;
    }

    if (value.HasMember("ClusterList") && !value["ClusterList"].IsNull())
    {
        if (!value["ClusterList"].IsArray())
            return CoreInternalOutcome(Error("response `ClusterInfoResult.ClusterList` is not array type"));

        const Value &tmpValue = value["ClusterList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClusterInstanceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clusterList.push_back(item);
        }
        m_clusterListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterInfoResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_totalCntHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TotalCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCnt, allocator);
    }

    if (m_clusterListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusterList.begin(); itr != m_clusterList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t ClusterInfoResult::GetTotalCnt() const
{
    return m_totalCnt;
}

void ClusterInfoResult::SetTotalCnt(const uint64_t& _totalCnt)
{
    m_totalCnt = _totalCnt;
    m_totalCntHasBeenSet = true;
}

bool ClusterInfoResult::TotalCntHasBeenSet() const
{
    return m_totalCntHasBeenSet;
}

vector<ClusterInstanceInfo> ClusterInfoResult::GetClusterList() const
{
    return m_clusterList;
}

void ClusterInfoResult::SetClusterList(const vector<ClusterInstanceInfo>& _clusterList)
{
    m_clusterList = _clusterList;
    m_clusterListHasBeenSet = true;
}

bool ClusterInfoResult::ClusterListHasBeenSet() const
{
    return m_clusterListHasBeenSet;
}

