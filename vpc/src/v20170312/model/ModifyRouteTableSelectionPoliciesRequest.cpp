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

#include <tencentcloud/vpc/v20170312/model/ModifyRouteTableSelectionPoliciesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyRouteTableSelectionPoliciesRequest::ModifyRouteTableSelectionPoliciesRequest() :
    m_ccnIdHasBeenSet(false),
    m_selectionPoliciesHasBeenSet(false)
{
}

string ModifyRouteTableSelectionPoliciesRequest::ToJsonString() const
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

    if (m_selectionPoliciesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectionPolicies";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_selectionPolicies.begin(); itr != m_selectionPolicies.end(); ++itr, ++i)
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


string ModifyRouteTableSelectionPoliciesRequest::GetCcnId() const
{
    return m_ccnId;
}

void ModifyRouteTableSelectionPoliciesRequest::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool ModifyRouteTableSelectionPoliciesRequest::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

vector<CcnRouteTableSelectPolicy> ModifyRouteTableSelectionPoliciesRequest::GetSelectionPolicies() const
{
    return m_selectionPolicies;
}

void ModifyRouteTableSelectionPoliciesRequest::SetSelectionPolicies(const vector<CcnRouteTableSelectPolicy>& _selectionPolicies)
{
    m_selectionPolicies = _selectionPolicies;
    m_selectionPoliciesHasBeenSet = true;
}

bool ModifyRouteTableSelectionPoliciesRequest::SelectionPoliciesHasBeenSet() const
{
    return m_selectionPoliciesHasBeenSet;
}


