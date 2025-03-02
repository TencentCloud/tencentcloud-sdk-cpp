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

#include <tencentcloud/essbasic/v20210526/model/CreateEmployeeChangeUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CreateEmployeeChangeUrlRequest::CreateEmployeeChangeUrlRequest() :
    m_agentHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_newMobileHasBeenSet(false)
{
}

string CreateEmployeeChangeUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_newMobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewMobile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newMobile.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent CreateEmployeeChangeUrlRequest::GetAgent() const
{
    return m_agent;
}

void CreateEmployeeChangeUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateEmployeeChangeUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string CreateEmployeeChangeUrlRequest::GetOpenId() const
{
    return m_openId;
}

void CreateEmployeeChangeUrlRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool CreateEmployeeChangeUrlRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string CreateEmployeeChangeUrlRequest::GetNewMobile() const
{
    return m_newMobile;
}

void CreateEmployeeChangeUrlRequest::SetNewMobile(const string& _newMobile)
{
    m_newMobile = _newMobile;
    m_newMobileHasBeenSet = true;
}

bool CreateEmployeeChangeUrlRequest::NewMobileHasBeenSet() const
{
    return m_newMobileHasBeenSet;
}


