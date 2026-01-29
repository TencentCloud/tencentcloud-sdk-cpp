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

#include <tencentcloud/tcb/v20180608/model/PermissionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

PermissionInfo::PermissionInfo() :
    m_aclTagHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_ruleHasBeenSet(false)
{
}

CoreInternalOutcome PermissionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AclTag") && !value["AclTag"].IsNull())
    {
        if (!value["AclTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionInfo.AclTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aclTag = string(value["AclTag"].GetString());
        m_aclTagHasBeenSet = true;
    }

    if (value.HasMember("EnvId") && !value["EnvId"].IsNull())
    {
        if (!value["EnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionInfo.EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(value["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (value.HasMember("Rule") && !value["Rule"].IsNull())
    {
        if (!value["Rule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionInfo.Rule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rule = string(value["Rule"].GetString());
        m_ruleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PermissionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aclTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aclTag.c_str(), allocator).Move(), allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rule.c_str(), allocator).Move(), allocator);
    }

}


string PermissionInfo::GetAclTag() const
{
    return m_aclTag;
}

void PermissionInfo::SetAclTag(const string& _aclTag)
{
    m_aclTag = _aclTag;
    m_aclTagHasBeenSet = true;
}

bool PermissionInfo::AclTagHasBeenSet() const
{
    return m_aclTagHasBeenSet;
}

string PermissionInfo::GetEnvId() const
{
    return m_envId;
}

void PermissionInfo::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool PermissionInfo::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string PermissionInfo::GetRule() const
{
    return m_rule;
}

void PermissionInfo::SetRule(const string& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool PermissionInfo::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

