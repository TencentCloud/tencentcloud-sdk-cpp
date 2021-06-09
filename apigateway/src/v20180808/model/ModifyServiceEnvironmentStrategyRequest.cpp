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

#include <tencentcloud/apigateway/v20180808/model/ModifyServiceEnvironmentStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ModifyServiceEnvironmentStrategyRequest::ModifyServiceEnvironmentStrategyRequest() :
    m_serviceIdHasBeenSet(false),
    m_strategyHasBeenSet(false),
    m_environmentNamesHasBeenSet(false)
{
}

string ModifyServiceEnvironmentStrategyRequest::ToJsonString() const
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

    if (m_strategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_strategy, allocator);
    }

    if (m_environmentNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_environmentNames.begin(); itr != m_environmentNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyServiceEnvironmentStrategyRequest::GetServiceId() const
{
    return m_serviceId;
}

void ModifyServiceEnvironmentStrategyRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool ModifyServiceEnvironmentStrategyRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

int64_t ModifyServiceEnvironmentStrategyRequest::GetStrategy() const
{
    return m_strategy;
}

void ModifyServiceEnvironmentStrategyRequest::SetStrategy(const int64_t& _strategy)
{
    m_strategy = _strategy;
    m_strategyHasBeenSet = true;
}

bool ModifyServiceEnvironmentStrategyRequest::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}

vector<string> ModifyServiceEnvironmentStrategyRequest::GetEnvironmentNames() const
{
    return m_environmentNames;
}

void ModifyServiceEnvironmentStrategyRequest::SetEnvironmentNames(const vector<string>& _environmentNames)
{
    m_environmentNames = _environmentNames;
    m_environmentNamesHasBeenSet = true;
}

bool ModifyServiceEnvironmentStrategyRequest::EnvironmentNamesHasBeenSet() const
{
    return m_environmentNamesHasBeenSet;
}


