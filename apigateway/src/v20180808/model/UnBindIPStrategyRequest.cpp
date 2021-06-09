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

#include <tencentcloud/apigateway/v20180808/model/UnBindIPStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

UnBindIPStrategyRequest::UnBindIPStrategyRequest() :
    m_serviceIdHasBeenSet(false),
    m_strategyIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_unBindApiIdsHasBeenSet(false)
{
}

string UnBindIPStrategyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_strategyId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environmentName.c_str(), allocator).Move(), allocator);
    }

    if (m_unBindApiIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnBindApiIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_unBindApiIds.begin(); itr != m_unBindApiIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UnBindIPStrategyRequest::GetServiceId() const
{
    return m_serviceId;
}

void UnBindIPStrategyRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool UnBindIPStrategyRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string UnBindIPStrategyRequest::GetStrategyId() const
{
    return m_strategyId;
}

void UnBindIPStrategyRequest::SetStrategyId(const string& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool UnBindIPStrategyRequest::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

string UnBindIPStrategyRequest::GetEnvironmentName() const
{
    return m_environmentName;
}

void UnBindIPStrategyRequest::SetEnvironmentName(const string& _environmentName)
{
    m_environmentName = _environmentName;
    m_environmentNameHasBeenSet = true;
}

bool UnBindIPStrategyRequest::EnvironmentNameHasBeenSet() const
{
    return m_environmentNameHasBeenSet;
}

vector<string> UnBindIPStrategyRequest::GetUnBindApiIds() const
{
    return m_unBindApiIds;
}

void UnBindIPStrategyRequest::SetUnBindApiIds(const vector<string>& _unBindApiIds)
{
    m_unBindApiIds = _unBindApiIds;
    m_unBindApiIdsHasBeenSet = true;
}

bool UnBindIPStrategyRequest::UnBindApiIdsHasBeenSet() const
{
    return m_unBindApiIdsHasBeenSet;
}


