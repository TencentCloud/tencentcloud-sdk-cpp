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

#include <tencentcloud/ecm/v20190719/model/ModifyModuleSecurityGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

ModifyModuleSecurityGroupsRequest::ModifyModuleSecurityGroupsRequest() :
    m_securityGroupIdSetHasBeenSet(false),
    m_moduleIdHasBeenSet(false)
{
}

string ModifyModuleSecurityGroupsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_securityGroupIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIdSet.begin(); itr != m_securityGroupIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_moduleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_moduleId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyModuleSecurityGroupsRequest::GetSecurityGroupIdSet() const
{
    return m_securityGroupIdSet;
}

void ModifyModuleSecurityGroupsRequest::SetSecurityGroupIdSet(const vector<string>& _securityGroupIdSet)
{
    m_securityGroupIdSet = _securityGroupIdSet;
    m_securityGroupIdSetHasBeenSet = true;
}

bool ModifyModuleSecurityGroupsRequest::SecurityGroupIdSetHasBeenSet() const
{
    return m_securityGroupIdSetHasBeenSet;
}

string ModifyModuleSecurityGroupsRequest::GetModuleId() const
{
    return m_moduleId;
}

void ModifyModuleSecurityGroupsRequest::SetModuleId(const string& _moduleId)
{
    m_moduleId = _moduleId;
    m_moduleIdHasBeenSet = true;
}

bool ModifyModuleSecurityGroupsRequest::ModuleIdHasBeenSet() const
{
    return m_moduleIdHasBeenSet;
}


