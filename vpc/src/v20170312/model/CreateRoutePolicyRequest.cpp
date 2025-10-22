/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/vpc/v20170312/model/CreateRoutePolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateRoutePolicyRequest::CreateRoutePolicyRequest() :
    m_routePolicyDescriptionHasBeenSet(false),
    m_routePolicyNameHasBeenSet(false),
    m_routePolicyEntrySetHasBeenSet(false)
{
}

string CreateRoutePolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_routePolicyDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutePolicyDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routePolicyDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_routePolicyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutePolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routePolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_routePolicyEntrySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutePolicyEntrySet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routePolicyEntrySet.begin(); itr != m_routePolicyEntrySet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRoutePolicyRequest::GetRoutePolicyDescription() const
{
    return m_routePolicyDescription;
}

void CreateRoutePolicyRequest::SetRoutePolicyDescription(const string& _routePolicyDescription)
{
    m_routePolicyDescription = _routePolicyDescription;
    m_routePolicyDescriptionHasBeenSet = true;
}

bool CreateRoutePolicyRequest::RoutePolicyDescriptionHasBeenSet() const
{
    return m_routePolicyDescriptionHasBeenSet;
}

string CreateRoutePolicyRequest::GetRoutePolicyName() const
{
    return m_routePolicyName;
}

void CreateRoutePolicyRequest::SetRoutePolicyName(const string& _routePolicyName)
{
    m_routePolicyName = _routePolicyName;
    m_routePolicyNameHasBeenSet = true;
}

bool CreateRoutePolicyRequest::RoutePolicyNameHasBeenSet() const
{
    return m_routePolicyNameHasBeenSet;
}

vector<RoutePolicyEntry> CreateRoutePolicyRequest::GetRoutePolicyEntrySet() const
{
    return m_routePolicyEntrySet;
}

void CreateRoutePolicyRequest::SetRoutePolicyEntrySet(const vector<RoutePolicyEntry>& _routePolicyEntrySet)
{
    m_routePolicyEntrySet = _routePolicyEntrySet;
    m_routePolicyEntrySetHasBeenSet = true;
}

bool CreateRoutePolicyRequest::RoutePolicyEntrySetHasBeenSet() const
{
    return m_routePolicyEntrySetHasBeenSet;
}


