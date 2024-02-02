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

#include <tencentcloud/tse/v20201207/model/UnbindAutoScalerResourceStrategyFromGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

UnbindAutoScalerResourceStrategyFromGroupsRequest::UnbindAutoScalerResourceStrategyFromGroupsRequest() :
    m_gatewayIdHasBeenSet(false),
    m_strategyIdHasBeenSet(false),
    m_groupIdsHasBeenSet(false)
{
}

string UnbindAutoScalerResourceStrategyFromGroupsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_strategyId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIds.begin(); itr != m_groupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UnbindAutoScalerResourceStrategyFromGroupsRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void UnbindAutoScalerResourceStrategyFromGroupsRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool UnbindAutoScalerResourceStrategyFromGroupsRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string UnbindAutoScalerResourceStrategyFromGroupsRequest::GetStrategyId() const
{
    return m_strategyId;
}

void UnbindAutoScalerResourceStrategyFromGroupsRequest::SetStrategyId(const string& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool UnbindAutoScalerResourceStrategyFromGroupsRequest::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

vector<string> UnbindAutoScalerResourceStrategyFromGroupsRequest::GetGroupIds() const
{
    return m_groupIds;
}

void UnbindAutoScalerResourceStrategyFromGroupsRequest::SetGroupIds(const vector<string>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool UnbindAutoScalerResourceStrategyFromGroupsRequest::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}


