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

#include <tencentcloud/evt/v20250217/model/CompleteApprovalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Evt::V20250217::Model;
using namespace std;

CompleteApprovalRequest::CompleteApprovalRequest() :
    m_approvalIdHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_opinionHasBeenSet(false),
    m_userTokenHasBeenSet(false)
{
}

string CompleteApprovalRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_approvalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_approvalId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_result, allocator);
    }

    if (m_opinionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Opinion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_opinion.c_str(), allocator).Move(), allocator);
    }

    if (m_userTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CompleteApprovalRequest::GetApprovalId() const
{
    return m_approvalId;
}

void CompleteApprovalRequest::SetApprovalId(const string& _approvalId)
{
    m_approvalId = _approvalId;
    m_approvalIdHasBeenSet = true;
}

bool CompleteApprovalRequest::ApprovalIdHasBeenSet() const
{
    return m_approvalIdHasBeenSet;
}

string CompleteApprovalRequest::GetNodeId() const
{
    return m_nodeId;
}

void CompleteApprovalRequest::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool CompleteApprovalRequest::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

uint64_t CompleteApprovalRequest::GetResult() const
{
    return m_result;
}

void CompleteApprovalRequest::SetResult(const uint64_t& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool CompleteApprovalRequest::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string CompleteApprovalRequest::GetOpinion() const
{
    return m_opinion;
}

void CompleteApprovalRequest::SetOpinion(const string& _opinion)
{
    m_opinion = _opinion;
    m_opinionHasBeenSet = true;
}

bool CompleteApprovalRequest::OpinionHasBeenSet() const
{
    return m_opinionHasBeenSet;
}

string CompleteApprovalRequest::GetUserToken() const
{
    return m_userToken;
}

void CompleteApprovalRequest::SetUserToken(const string& _userToken)
{
    m_userToken = _userToken;
    m_userTokenHasBeenSet = true;
}

bool CompleteApprovalRequest::UserTokenHasBeenSet() const
{
    return m_userTokenHasBeenSet;
}


