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

#include <tencentcloud/vpc/v20170312/model/WithdrawNotifyRoutesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

WithdrawNotifyRoutesRequest::WithdrawNotifyRoutesRequest() :
    m_routeTableIdHasBeenSet(false),
    m_routeItemIdsHasBeenSet(false)
{
}

string WithdrawNotifyRoutesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_routeTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routeTableId.c_str(), allocator).Move(), allocator);
    }

    if (m_routeItemIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteItemIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_routeItemIds.begin(); itr != m_routeItemIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string WithdrawNotifyRoutesRequest::GetRouteTableId() const
{
    return m_routeTableId;
}

void WithdrawNotifyRoutesRequest::SetRouteTableId(const string& _routeTableId)
{
    m_routeTableId = _routeTableId;
    m_routeTableIdHasBeenSet = true;
}

bool WithdrawNotifyRoutesRequest::RouteTableIdHasBeenSet() const
{
    return m_routeTableIdHasBeenSet;
}

vector<string> WithdrawNotifyRoutesRequest::GetRouteItemIds() const
{
    return m_routeItemIds;
}

void WithdrawNotifyRoutesRequest::SetRouteItemIds(const vector<string>& _routeItemIds)
{
    m_routeItemIds = _routeItemIds;
    m_routeItemIdsHasBeenSet = true;
}

bool WithdrawNotifyRoutesRequest::RouteItemIdsHasBeenSet() const
{
    return m_routeItemIdsHasBeenSet;
}


