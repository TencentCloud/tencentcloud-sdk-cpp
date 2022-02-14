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

#include <tencentcloud/antiddos/v20200309/model/ModifyPortAclConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

ModifyPortAclConfigRequest::ModifyPortAclConfigRequest() :
    m_instanceIdHasBeenSet(false),
    m_oldAclConfigHasBeenSet(false),
    m_newAclConfigHasBeenSet(false)
{
}

string ModifyPortAclConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_oldAclConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldAclConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oldAclConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_newAclConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewAclConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_newAclConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPortAclConfigRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyPortAclConfigRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyPortAclConfigRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

AclConfig ModifyPortAclConfigRequest::GetOldAclConfig() const
{
    return m_oldAclConfig;
}

void ModifyPortAclConfigRequest::SetOldAclConfig(const AclConfig& _oldAclConfig)
{
    m_oldAclConfig = _oldAclConfig;
    m_oldAclConfigHasBeenSet = true;
}

bool ModifyPortAclConfigRequest::OldAclConfigHasBeenSet() const
{
    return m_oldAclConfigHasBeenSet;
}

AclConfig ModifyPortAclConfigRequest::GetNewAclConfig() const
{
    return m_newAclConfig;
}

void ModifyPortAclConfigRequest::SetNewAclConfig(const AclConfig& _newAclConfig)
{
    m_newAclConfig = _newAclConfig;
    m_newAclConfigHasBeenSet = true;
}

bool ModifyPortAclConfigRequest::NewAclConfigHasBeenSet() const
{
    return m_newAclConfigHasBeenSet;
}


