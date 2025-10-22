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

#include <tencentcloud/vpc/v20170312/model/ModifyRoutePolicyAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyRoutePolicyAttributeRequest::ModifyRoutePolicyAttributeRequest() :
    m_routePolicyIdHasBeenSet(false),
    m_routePolicyNameHasBeenSet(false),
    m_routePolicyDescriptionHasBeenSet(false)
{
}

string ModifyRoutePolicyAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_routePolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutePolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routePolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_routePolicyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutePolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routePolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_routePolicyDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutePolicyDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routePolicyDescription.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRoutePolicyAttributeRequest::GetRoutePolicyId() const
{
    return m_routePolicyId;
}

void ModifyRoutePolicyAttributeRequest::SetRoutePolicyId(const string& _routePolicyId)
{
    m_routePolicyId = _routePolicyId;
    m_routePolicyIdHasBeenSet = true;
}

bool ModifyRoutePolicyAttributeRequest::RoutePolicyIdHasBeenSet() const
{
    return m_routePolicyIdHasBeenSet;
}

string ModifyRoutePolicyAttributeRequest::GetRoutePolicyName() const
{
    return m_routePolicyName;
}

void ModifyRoutePolicyAttributeRequest::SetRoutePolicyName(const string& _routePolicyName)
{
    m_routePolicyName = _routePolicyName;
    m_routePolicyNameHasBeenSet = true;
}

bool ModifyRoutePolicyAttributeRequest::RoutePolicyNameHasBeenSet() const
{
    return m_routePolicyNameHasBeenSet;
}

string ModifyRoutePolicyAttributeRequest::GetRoutePolicyDescription() const
{
    return m_routePolicyDescription;
}

void ModifyRoutePolicyAttributeRequest::SetRoutePolicyDescription(const string& _routePolicyDescription)
{
    m_routePolicyDescription = _routePolicyDescription;
    m_routePolicyDescriptionHasBeenSet = true;
}

bool ModifyRoutePolicyAttributeRequest::RoutePolicyDescriptionHasBeenSet() const
{
    return m_routePolicyDescriptionHasBeenSet;
}


