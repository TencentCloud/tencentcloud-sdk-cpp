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

#include <tencentcloud/dayu/v20180709/model/CreateCCSelfDefinePolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

CreateCCSelfDefinePolicyRequest::CreateCCSelfDefinePolicyRequest() :
    m_businessHasBeenSet(false),
    m_idHasBeenSet(false),
    m_policyHasBeenSet(false)
{
}

string CreateCCSelfDefinePolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_policy.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCCSelfDefinePolicyRequest::GetBusiness() const
{
    return m_business;
}

void CreateCCSelfDefinePolicyRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool CreateCCSelfDefinePolicyRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string CreateCCSelfDefinePolicyRequest::GetId() const
{
    return m_id;
}

void CreateCCSelfDefinePolicyRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CreateCCSelfDefinePolicyRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

CCPolicy CreateCCSelfDefinePolicyRequest::GetPolicy() const
{
    return m_policy;
}

void CreateCCSelfDefinePolicyRequest::SetPolicy(const CCPolicy& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool CreateCCSelfDefinePolicyRequest::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}


