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

#include <tencentcloud/clb/v20180317/model/ModifyModelRouterSecurityGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModifyModelRouterSecurityGroupsRequest::ModifyModelRouterSecurityGroupsRequest() :
    m_modelRouterIdHasBeenSet(false),
    m_securityGroupsHasBeenSet(false)
{
}

string ModifyModelRouterSecurityGroupsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelRouterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelRouterId.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroups";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroups.begin(); itr != m_securityGroups.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyModelRouterSecurityGroupsRequest::GetModelRouterId() const
{
    return m_modelRouterId;
}

void ModifyModelRouterSecurityGroupsRequest::SetModelRouterId(const string& _modelRouterId)
{
    m_modelRouterId = _modelRouterId;
    m_modelRouterIdHasBeenSet = true;
}

bool ModifyModelRouterSecurityGroupsRequest::ModelRouterIdHasBeenSet() const
{
    return m_modelRouterIdHasBeenSet;
}

vector<string> ModifyModelRouterSecurityGroupsRequest::GetSecurityGroups() const
{
    return m_securityGroups;
}

void ModifyModelRouterSecurityGroupsRequest::SetSecurityGroups(const vector<string>& _securityGroups)
{
    m_securityGroups = _securityGroups;
    m_securityGroupsHasBeenSet = true;
}

bool ModifyModelRouterSecurityGroupsRequest::SecurityGroupsHasBeenSet() const
{
    return m_securityGroupsHasBeenSet;
}


