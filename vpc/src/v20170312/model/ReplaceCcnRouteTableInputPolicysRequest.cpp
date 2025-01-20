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

#include <tencentcloud/vpc/v20170312/model/ReplaceCcnRouteTableInputPolicysRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ReplaceCcnRouteTableInputPolicysRequest::ReplaceCcnRouteTableInputPolicysRequest() :
    m_ccnIdHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_policysHasBeenSet(false)
{
}

string ReplaceCcnRouteTableInputPolicysRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_routeTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routeTableId.c_str(), allocator).Move(), allocator);
    }

    if (m_policysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policys.begin(); itr != m_policys.end(); ++itr, ++i)
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


string ReplaceCcnRouteTableInputPolicysRequest::GetCcnId() const
{
    return m_ccnId;
}

void ReplaceCcnRouteTableInputPolicysRequest::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool ReplaceCcnRouteTableInputPolicysRequest::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string ReplaceCcnRouteTableInputPolicysRequest::GetRouteTableId() const
{
    return m_routeTableId;
}

void ReplaceCcnRouteTableInputPolicysRequest::SetRouteTableId(const string& _routeTableId)
{
    m_routeTableId = _routeTableId;
    m_routeTableIdHasBeenSet = true;
}

bool ReplaceCcnRouteTableInputPolicysRequest::RouteTableIdHasBeenSet() const
{
    return m_routeTableIdHasBeenSet;
}

vector<CcnRouteTableInputPolicy> ReplaceCcnRouteTableInputPolicysRequest::GetPolicys() const
{
    return m_policys;
}

void ReplaceCcnRouteTableInputPolicysRequest::SetPolicys(const vector<CcnRouteTableInputPolicy>& _policys)
{
    m_policys = _policys;
    m_policysHasBeenSet = true;
}

bool ReplaceCcnRouteTableInputPolicysRequest::PolicysHasBeenSet() const
{
    return m_policysHasBeenSet;
}


