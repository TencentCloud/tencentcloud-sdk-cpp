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

#include <tencentcloud/clb/v20180317/model/ModifyIntentRouterAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModifyIntentRouterAttributeRequest::ModifyIntentRouterAttributeRequest() :
    m_intentRouterIdHasBeenSet(false),
    m_modelRouterIdHasBeenSet(false),
    m_routeNameHasBeenSet(false),
    m_routerDescribeHasBeenSet(false),
    m_tiersHasBeenSet(false)
{
}

string ModifyIntentRouterAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_intentRouterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentRouterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_intentRouterId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelRouterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelRouterId.c_str(), allocator).Move(), allocator);
    }

    if (m_routeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routeName.c_str(), allocator).Move(), allocator);
    }

    if (m_routerDescribeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouterDescribe";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routerDescribe.c_str(), allocator).Move(), allocator);
    }

    if (m_tiersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tiers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tiers.begin(); itr != m_tiers.end(); ++itr, ++i)
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


string ModifyIntentRouterAttributeRequest::GetIntentRouterId() const
{
    return m_intentRouterId;
}

void ModifyIntentRouterAttributeRequest::SetIntentRouterId(const string& _intentRouterId)
{
    m_intentRouterId = _intentRouterId;
    m_intentRouterIdHasBeenSet = true;
}

bool ModifyIntentRouterAttributeRequest::IntentRouterIdHasBeenSet() const
{
    return m_intentRouterIdHasBeenSet;
}

string ModifyIntentRouterAttributeRequest::GetModelRouterId() const
{
    return m_modelRouterId;
}

void ModifyIntentRouterAttributeRequest::SetModelRouterId(const string& _modelRouterId)
{
    m_modelRouterId = _modelRouterId;
    m_modelRouterIdHasBeenSet = true;
}

bool ModifyIntentRouterAttributeRequest::ModelRouterIdHasBeenSet() const
{
    return m_modelRouterIdHasBeenSet;
}

string ModifyIntentRouterAttributeRequest::GetRouteName() const
{
    return m_routeName;
}

void ModifyIntentRouterAttributeRequest::SetRouteName(const string& _routeName)
{
    m_routeName = _routeName;
    m_routeNameHasBeenSet = true;
}

bool ModifyIntentRouterAttributeRequest::RouteNameHasBeenSet() const
{
    return m_routeNameHasBeenSet;
}

string ModifyIntentRouterAttributeRequest::GetRouterDescribe() const
{
    return m_routerDescribe;
}

void ModifyIntentRouterAttributeRequest::SetRouterDescribe(const string& _routerDescribe)
{
    m_routerDescribe = _routerDescribe;
    m_routerDescribeHasBeenSet = true;
}

bool ModifyIntentRouterAttributeRequest::RouterDescribeHasBeenSet() const
{
    return m_routerDescribeHasBeenSet;
}

vector<TierItem> ModifyIntentRouterAttributeRequest::GetTiers() const
{
    return m_tiers;
}

void ModifyIntentRouterAttributeRequest::SetTiers(const vector<TierItem>& _tiers)
{
    m_tiers = _tiers;
    m_tiersHasBeenSet = true;
}

bool ModifyIntentRouterAttributeRequest::TiersHasBeenSet() const
{
    return m_tiersHasBeenSet;
}


