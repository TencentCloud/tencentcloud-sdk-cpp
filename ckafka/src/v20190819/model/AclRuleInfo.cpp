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

#include <tencentcloud/ckafka/v20190819/model/AclRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

AclRuleInfo::AclRuleInfo() :
    m_operationHasBeenSet(false),
    m_permissionTypeHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_principalHasBeenSet(false)
{
}

CoreInternalOutcome AclRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclRuleInfo.Operation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operation = string(value["Operation"].GetString());
        m_operationHasBeenSet = true;
    }

    if (value.HasMember("PermissionType") && !value["PermissionType"].IsNull())
    {
        if (!value["PermissionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclRuleInfo.PermissionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permissionType = string(value["PermissionType"].GetString());
        m_permissionTypeHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclRuleInfo.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Principal") && !value["Principal"].IsNull())
    {
        if (!value["Principal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclRuleInfo.Principal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_principal = string(value["Principal"].GetString());
        m_principalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AclRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_permissionType.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_principalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Principal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_principal.c_str(), allocator).Move(), allocator);
    }

}


string AclRuleInfo::GetOperation() const
{
    return m_operation;
}

void AclRuleInfo::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool AclRuleInfo::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string AclRuleInfo::GetPermissionType() const
{
    return m_permissionType;
}

void AclRuleInfo::SetPermissionType(const string& _permissionType)
{
    m_permissionType = _permissionType;
    m_permissionTypeHasBeenSet = true;
}

bool AclRuleInfo::PermissionTypeHasBeenSet() const
{
    return m_permissionTypeHasBeenSet;
}

string AclRuleInfo::GetHost() const
{
    return m_host;
}

void AclRuleInfo::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool AclRuleInfo::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string AclRuleInfo::GetPrincipal() const
{
    return m_principal;
}

void AclRuleInfo::SetPrincipal(const string& _principal)
{
    m_principal = _principal;
    m_principalHasBeenSet = true;
}

bool AclRuleInfo::PrincipalHasBeenSet() const
{
    return m_principalHasBeenSet;
}

