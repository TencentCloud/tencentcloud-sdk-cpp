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

#include <tencentcloud/vpc/v20170312/model/DescribeCcnRouteTableInputPolicysRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeCcnRouteTableInputPolicysRequest::DescribeCcnRouteTableInputPolicysRequest() :
    m_ccnIdHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_policyVersionHasBeenSet(false)
{
}

string DescribeCcnRouteTableInputPolicysRequest::ToJsonString() const
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

    if (m_policyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policyVersion, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCcnRouteTableInputPolicysRequest::GetCcnId() const
{
    return m_ccnId;
}

void DescribeCcnRouteTableInputPolicysRequest::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool DescribeCcnRouteTableInputPolicysRequest::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string DescribeCcnRouteTableInputPolicysRequest::GetRouteTableId() const
{
    return m_routeTableId;
}

void DescribeCcnRouteTableInputPolicysRequest::SetRouteTableId(const string& _routeTableId)
{
    m_routeTableId = _routeTableId;
    m_routeTableIdHasBeenSet = true;
}

bool DescribeCcnRouteTableInputPolicysRequest::RouteTableIdHasBeenSet() const
{
    return m_routeTableIdHasBeenSet;
}

uint64_t DescribeCcnRouteTableInputPolicysRequest::GetPolicyVersion() const
{
    return m_policyVersion;
}

void DescribeCcnRouteTableInputPolicysRequest::SetPolicyVersion(const uint64_t& _policyVersion)
{
    m_policyVersion = _policyVersion;
    m_policyVersionHasBeenSet = true;
}

bool DescribeCcnRouteTableInputPolicysRequest::PolicyVersionHasBeenSet() const
{
    return m_policyVersionHasBeenSet;
}


