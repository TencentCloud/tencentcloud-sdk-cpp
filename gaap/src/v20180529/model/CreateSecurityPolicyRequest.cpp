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

#include <tencentcloud/gaap/v20180529/model/CreateSecurityPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

CreateSecurityPolicyRequest::CreateSecurityPolicyRequest() :
    m_defaultActionHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

string CreateSecurityPolicyRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_defaultActionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DefaultAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_defaultAction.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSecurityPolicyRequest::GetDefaultAction() const
{
    return m_defaultAction;
}

void CreateSecurityPolicyRequest::SetDefaultAction(const string& _defaultAction)
{
    m_defaultAction = _defaultAction;
    m_defaultActionHasBeenSet = true;
}

bool CreateSecurityPolicyRequest::DefaultActionHasBeenSet() const
{
    return m_defaultActionHasBeenSet;
}

string CreateSecurityPolicyRequest::GetProxyId() const
{
    return m_proxyId;
}

void CreateSecurityPolicyRequest::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool CreateSecurityPolicyRequest::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string CreateSecurityPolicyRequest::GetGroupId() const
{
    return m_groupId;
}

void CreateSecurityPolicyRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreateSecurityPolicyRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}


