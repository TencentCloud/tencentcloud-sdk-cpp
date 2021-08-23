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

#include <tencentcloud/cfs/v20190719/model/CreateCfsRuleResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

CreateCfsRuleResponse::CreateCfsRuleResponse() :
    m_ruleIdHasBeenSet(false),
    m_pGroupIdHasBeenSet(false),
    m_authClientIpHasBeenSet(false),
    m_rWPermissionHasBeenSet(false),
    m_userPermissionHasBeenSet(false),
    m_priorityHasBeenSet(false)
{
}

CoreInternalOutcome CreateCfsRuleResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("RuleId") && !rsp["RuleId"].IsNull())
    {
        if (!rsp["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(rsp["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (rsp.HasMember("PGroupId") && !rsp["PGroupId"].IsNull())
    {
        if (!rsp["PGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pGroupId = string(rsp["PGroupId"].GetString());
        m_pGroupIdHasBeenSet = true;
    }

    if (rsp.HasMember("AuthClientIp") && !rsp["AuthClientIp"].IsNull())
    {
        if (!rsp["AuthClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authClientIp = string(rsp["AuthClientIp"].GetString());
        m_authClientIpHasBeenSet = true;
    }

    if (rsp.HasMember("RWPermission") && !rsp["RWPermission"].IsNull())
    {
        if (!rsp["RWPermission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RWPermission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rWPermission = string(rsp["RWPermission"].GetString());
        m_rWPermissionHasBeenSet = true;
    }

    if (rsp.HasMember("UserPermission") && !rsp["UserPermission"].IsNull())
    {
        if (!rsp["UserPermission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserPermission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userPermission = string(rsp["UserPermission"].GetString());
        m_userPermissionHasBeenSet = true;
    }

    if (rsp.HasMember("Priority") && !rsp["Priority"].IsNull())
    {
        if (!rsp["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = rsp["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateCfsRuleResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_pGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_authClientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authClientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_rWPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RWPermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rWPermission.c_str(), allocator).Move(), allocator);
    }

    if (m_userPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserPermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userPermission.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string CreateCfsRuleResponse::GetRuleId() const
{
    return m_ruleId;
}

bool CreateCfsRuleResponse::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string CreateCfsRuleResponse::GetPGroupId() const
{
    return m_pGroupId;
}

bool CreateCfsRuleResponse::PGroupIdHasBeenSet() const
{
    return m_pGroupIdHasBeenSet;
}

string CreateCfsRuleResponse::GetAuthClientIp() const
{
    return m_authClientIp;
}

bool CreateCfsRuleResponse::AuthClientIpHasBeenSet() const
{
    return m_authClientIpHasBeenSet;
}

string CreateCfsRuleResponse::GetRWPermission() const
{
    return m_rWPermission;
}

bool CreateCfsRuleResponse::RWPermissionHasBeenSet() const
{
    return m_rWPermissionHasBeenSet;
}

string CreateCfsRuleResponse::GetUserPermission() const
{
    return m_userPermission;
}

bool CreateCfsRuleResponse::UserPermissionHasBeenSet() const
{
    return m_userPermissionHasBeenSet;
}

int64_t CreateCfsRuleResponse::GetPriority() const
{
    return m_priority;
}

bool CreateCfsRuleResponse::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}


