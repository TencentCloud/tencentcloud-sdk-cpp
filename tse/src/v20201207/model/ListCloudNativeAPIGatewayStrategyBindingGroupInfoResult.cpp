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

#include <tencentcloud/tse/v20201207/model/ListCloudNativeAPIGatewayStrategyBindingGroupInfoResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ListCloudNativeAPIGatewayStrategyBindingGroupInfoResult::ListCloudNativeAPIGatewayStrategyBindingGroupInfoResult() :
    m_totalCountHasBeenSet(false),
    m_groupInfosHasBeenSet(false)
{
}

CoreInternalOutcome ListCloudNativeAPIGatewayStrategyBindingGroupInfoResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListCloudNativeAPIGatewayStrategyBindingGroupInfoResult.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("GroupInfos") && !value["GroupInfos"].IsNull())
    {
        if (!value["GroupInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListCloudNativeAPIGatewayStrategyBindingGroupInfoResult.GroupInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudNativeAPIGatewayStrategyBindingGroupInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groupInfos.push_back(item);
        }
        m_groupInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListCloudNativeAPIGatewayStrategyBindingGroupInfoResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_groupInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupInfos.begin(); itr != m_groupInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t ListCloudNativeAPIGatewayStrategyBindingGroupInfoResult::GetTotalCount() const
{
    return m_totalCount;
}

void ListCloudNativeAPIGatewayStrategyBindingGroupInfoResult::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ListCloudNativeAPIGatewayStrategyBindingGroupInfoResult::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<CloudNativeAPIGatewayStrategyBindingGroupInfo> ListCloudNativeAPIGatewayStrategyBindingGroupInfoResult::GetGroupInfos() const
{
    return m_groupInfos;
}

void ListCloudNativeAPIGatewayStrategyBindingGroupInfoResult::SetGroupInfos(const vector<CloudNativeAPIGatewayStrategyBindingGroupInfo>& _groupInfos)
{
    m_groupInfos = _groupInfos;
    m_groupInfosHasBeenSet = true;
}

bool ListCloudNativeAPIGatewayStrategyBindingGroupInfoResult::GroupInfosHasBeenSet() const
{
    return m_groupInfosHasBeenSet;
}

