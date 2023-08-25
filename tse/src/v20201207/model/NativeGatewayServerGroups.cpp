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

#include <tencentcloud/tse/v20201207/model/NativeGatewayServerGroups.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

NativeGatewayServerGroups::NativeGatewayServerGroups() :
    m_totalCountHasBeenSet(false),
    m_gatewayGroupListHasBeenSet(false)
{
}

CoreInternalOutcome NativeGatewayServerGroups::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServerGroups.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("GatewayGroupList") && !value["GatewayGroupList"].IsNull())
    {
        if (!value["GatewayGroupList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServerGroups.GatewayGroupList` is not array type"));

        const rapidjson::Value &tmpValue = value["GatewayGroupList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NativeGatewayServerGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_gatewayGroupList.push_back(item);
        }
        m_gatewayGroupListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NativeGatewayServerGroups::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_gatewayGroupListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayGroupList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_gatewayGroupList.begin(); itr != m_gatewayGroupList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t NativeGatewayServerGroups::GetTotalCount() const
{
    return m_totalCount;
}

void NativeGatewayServerGroups::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool NativeGatewayServerGroups::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<NativeGatewayServerGroup> NativeGatewayServerGroups::GetGatewayGroupList() const
{
    return m_gatewayGroupList;
}

void NativeGatewayServerGroups::SetGatewayGroupList(const vector<NativeGatewayServerGroup>& _gatewayGroupList)
{
    m_gatewayGroupList = _gatewayGroupList;
    m_gatewayGroupListHasBeenSet = true;
}

bool NativeGatewayServerGroups::GatewayGroupListHasBeenSet() const
{
    return m_gatewayGroupListHasBeenSet;
}

