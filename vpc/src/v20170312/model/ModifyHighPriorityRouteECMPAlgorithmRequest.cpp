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

#include <tencentcloud/vpc/v20170312/model/ModifyHighPriorityRouteECMPAlgorithmRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyHighPriorityRouteECMPAlgorithmRequest::ModifyHighPriorityRouteECMPAlgorithmRequest() :
    m_highPriorityRouteTableIdHasBeenSet(false),
    m_routeECMPAlgorithmsHasBeenSet(false)
{
}

string ModifyHighPriorityRouteECMPAlgorithmRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_highPriorityRouteTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighPriorityRouteTableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_highPriorityRouteTableId.c_str(), allocator).Move(), allocator);
    }

    if (m_routeECMPAlgorithmsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteECMPAlgorithms";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routeECMPAlgorithms.begin(); itr != m_routeECMPAlgorithms.end(); ++itr, ++i)
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


string ModifyHighPriorityRouteECMPAlgorithmRequest::GetHighPriorityRouteTableId() const
{
    return m_highPriorityRouteTableId;
}

void ModifyHighPriorityRouteECMPAlgorithmRequest::SetHighPriorityRouteTableId(const string& _highPriorityRouteTableId)
{
    m_highPriorityRouteTableId = _highPriorityRouteTableId;
    m_highPriorityRouteTableIdHasBeenSet = true;
}

bool ModifyHighPriorityRouteECMPAlgorithmRequest::HighPriorityRouteTableIdHasBeenSet() const
{
    return m_highPriorityRouteTableIdHasBeenSet;
}

vector<RouteECMPAlgorithm> ModifyHighPriorityRouteECMPAlgorithmRequest::GetRouteECMPAlgorithms() const
{
    return m_routeECMPAlgorithms;
}

void ModifyHighPriorityRouteECMPAlgorithmRequest::SetRouteECMPAlgorithms(const vector<RouteECMPAlgorithm>& _routeECMPAlgorithms)
{
    m_routeECMPAlgorithms = _routeECMPAlgorithms;
    m_routeECMPAlgorithmsHasBeenSet = true;
}

bool ModifyHighPriorityRouteECMPAlgorithmRequest::RouteECMPAlgorithmsHasBeenSet() const
{
    return m_routeECMPAlgorithmsHasBeenSet;
}


