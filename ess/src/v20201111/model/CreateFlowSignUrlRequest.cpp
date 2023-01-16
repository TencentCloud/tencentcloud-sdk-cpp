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

#include <tencentcloud/ess/v20201111/model/CreateFlowSignUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateFlowSignUrlRequest::CreateFlowSignUrlRequest() :
    m_flowIdHasBeenSet(false),
    m_flowApproverInfosHasBeenSet(false),
    m_organizationHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string CreateFlowSignUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowApproverInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowApproverInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowApproverInfos.begin(); itr != m_flowApproverInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_organizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Organization";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_organization.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFlowSignUrlRequest::GetFlowId() const
{
    return m_flowId;
}

void CreateFlowSignUrlRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool CreateFlowSignUrlRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

vector<FlowCreateApprover> CreateFlowSignUrlRequest::GetFlowApproverInfos() const
{
    return m_flowApproverInfos;
}

void CreateFlowSignUrlRequest::SetFlowApproverInfos(const vector<FlowCreateApprover>& _flowApproverInfos)
{
    m_flowApproverInfos = _flowApproverInfos;
    m_flowApproverInfosHasBeenSet = true;
}

bool CreateFlowSignUrlRequest::FlowApproverInfosHasBeenSet() const
{
    return m_flowApproverInfosHasBeenSet;
}

OrganizationInfo CreateFlowSignUrlRequest::GetOrganization() const
{
    return m_organization;
}

void CreateFlowSignUrlRequest::SetOrganization(const OrganizationInfo& _organization)
{
    m_organization = _organization;
    m_organizationHasBeenSet = true;
}

bool CreateFlowSignUrlRequest::OrganizationHasBeenSet() const
{
    return m_organizationHasBeenSet;
}

UserInfo CreateFlowSignUrlRequest::GetOperator() const
{
    return m_operator;
}

void CreateFlowSignUrlRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateFlowSignUrlRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


