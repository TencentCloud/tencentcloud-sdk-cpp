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

#include <tencentcloud/vpc/v20170312/model/ResetRoutePolicyAssociationsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ResetRoutePolicyAssociationsRequest::ResetRoutePolicyAssociationsRequest() :
    m_routeTableIdHasBeenSet(false),
    m_routePolicyAssociationSetHasBeenSet(false)
{
}

string ResetRoutePolicyAssociationsRequest::ToJsonString() const
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

    if (m_routePolicyAssociationSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutePolicyAssociationSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routePolicyAssociationSet.begin(); itr != m_routePolicyAssociationSet.end(); ++itr, ++i)
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


string ResetRoutePolicyAssociationsRequest::GetRouteTableId() const
{
    return m_routeTableId;
}

void ResetRoutePolicyAssociationsRequest::SetRouteTableId(const string& _routeTableId)
{
    m_routeTableId = _routeTableId;
    m_routeTableIdHasBeenSet = true;
}

bool ResetRoutePolicyAssociationsRequest::RouteTableIdHasBeenSet() const
{
    return m_routeTableIdHasBeenSet;
}

vector<RoutePolicyAssociation> ResetRoutePolicyAssociationsRequest::GetRoutePolicyAssociationSet() const
{
    return m_routePolicyAssociationSet;
}

void ResetRoutePolicyAssociationsRequest::SetRoutePolicyAssociationSet(const vector<RoutePolicyAssociation>& _routePolicyAssociationSet)
{
    m_routePolicyAssociationSet = _routePolicyAssociationSet;
    m_routePolicyAssociationSetHasBeenSet = true;
}

bool ResetRoutePolicyAssociationsRequest::RoutePolicyAssociationSetHasBeenSet() const
{
    return m_routePolicyAssociationSetHasBeenSet;
}


