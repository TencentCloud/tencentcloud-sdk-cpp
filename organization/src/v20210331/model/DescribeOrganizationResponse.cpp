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

#include <tencentcloud/organization/v20210331/model/DescribeOrganizationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

DescribeOrganizationResponse::DescribeOrganizationResponse() :
    m_orgIdHasBeenSet(false),
    m_hostUinHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_orgTypeHasBeenSet(false),
    m_isManagerHasBeenSet(false),
    m_orgPolicyTypeHasBeenSet(false),
    m_orgPolicyNameHasBeenSet(false),
    m_orgPermissionHasBeenSet(false),
    m_rootNodeIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_joinTimeHasBeenSet(false),
    m_isAllowQuitHasBeenSet(false),
    m_payUinHasBeenSet(false),
    m_payNameHasBeenSet(false),
    m_isAssignManagerHasBeenSet(false),
    m_isAuthManagerHasBeenSet(false)
{
}

CoreInternalOutcome DescribeOrganizationResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("OrgId") && !rsp["OrgId"].IsNull())
    {
        if (!rsp["OrgId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orgId = rsp["OrgId"].GetInt64();
        m_orgIdHasBeenSet = true;
    }

    if (rsp.HasMember("HostUin") && !rsp["HostUin"].IsNull())
    {
        if (!rsp["HostUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostUin = rsp["HostUin"].GetInt64();
        m_hostUinHasBeenSet = true;
    }

    if (rsp.HasMember("NickName") && !rsp["NickName"].IsNull())
    {
        if (!rsp["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(rsp["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (rsp.HasMember("OrgType") && !rsp["OrgType"].IsNull())
    {
        if (!rsp["OrgType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orgType = rsp["OrgType"].GetInt64();
        m_orgTypeHasBeenSet = true;
    }

    if (rsp.HasMember("IsManager") && !rsp["IsManager"].IsNull())
    {
        if (!rsp["IsManager"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsManager` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isManager = rsp["IsManager"].GetBool();
        m_isManagerHasBeenSet = true;
    }

    if (rsp.HasMember("OrgPolicyType") && !rsp["OrgPolicyType"].IsNull())
    {
        if (!rsp["OrgPolicyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgPolicyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgPolicyType = string(rsp["OrgPolicyType"].GetString());
        m_orgPolicyTypeHasBeenSet = true;
    }

    if (rsp.HasMember("OrgPolicyName") && !rsp["OrgPolicyName"].IsNull())
    {
        if (!rsp["OrgPolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgPolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgPolicyName = string(rsp["OrgPolicyName"].GetString());
        m_orgPolicyNameHasBeenSet = true;
    }

    if (rsp.HasMember("OrgPermission") && !rsp["OrgPermission"].IsNull())
    {
        if (!rsp["OrgPermission"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OrgPermission` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OrgPermission"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OrgPermission item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_orgPermission.push_back(item);
        }
        m_orgPermissionHasBeenSet = true;
    }

    if (rsp.HasMember("RootNodeId") && !rsp["RootNodeId"].IsNull())
    {
        if (!rsp["RootNodeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RootNodeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rootNodeId = rsp["RootNodeId"].GetInt64();
        m_rootNodeIdHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("JoinTime") && !rsp["JoinTime"].IsNull())
    {
        if (!rsp["JoinTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JoinTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_joinTime = string(rsp["JoinTime"].GetString());
        m_joinTimeHasBeenSet = true;
    }

    if (rsp.HasMember("IsAllowQuit") && !rsp["IsAllowQuit"].IsNull())
    {
        if (!rsp["IsAllowQuit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IsAllowQuit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isAllowQuit = string(rsp["IsAllowQuit"].GetString());
        m_isAllowQuitHasBeenSet = true;
    }

    if (rsp.HasMember("PayUin") && !rsp["PayUin"].IsNull())
    {
        if (!rsp["PayUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payUin = string(rsp["PayUin"].GetString());
        m_payUinHasBeenSet = true;
    }

    if (rsp.HasMember("PayName") && !rsp["PayName"].IsNull())
    {
        if (!rsp["PayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payName = string(rsp["PayName"].GetString());
        m_payNameHasBeenSet = true;
    }

    if (rsp.HasMember("IsAssignManager") && !rsp["IsAssignManager"].IsNull())
    {
        if (!rsp["IsAssignManager"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsAssignManager` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAssignManager = rsp["IsAssignManager"].GetBool();
        m_isAssignManagerHasBeenSet = true;
    }

    if (rsp.HasMember("IsAuthManager") && !rsp["IsAuthManager"].IsNull())
    {
        if (!rsp["IsAuthManager"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsAuthManager` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAuthManager = rsp["IsAuthManager"].GetBool();
        m_isAuthManagerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeOrganizationResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_orgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orgId, allocator);
    }

    if (m_hostUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostUin, allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_orgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orgType, allocator);
    }

    if (m_isManagerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsManager";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isManager, allocator);
    }

    if (m_orgPolicyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgPolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgPolicyType.c_str(), allocator).Move(), allocator);
    }

    if (m_orgPolicyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgPolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgPolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_orgPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgPermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_orgPermission.begin(); itr != m_orgPermission.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rootNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rootNodeId, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_joinTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_joinTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isAllowQuitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAllowQuit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isAllowQuit.c_str(), allocator).Move(), allocator);
    }

    if (m_payUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payUin.c_str(), allocator).Move(), allocator);
    }

    if (m_payNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payName.c_str(), allocator).Move(), allocator);
    }

    if (m_isAssignManagerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAssignManager";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAssignManager, allocator);
    }

    if (m_isAuthManagerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAuthManager";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAuthManager, allocator);
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


int64_t DescribeOrganizationResponse::GetOrgId() const
{
    return m_orgId;
}

bool DescribeOrganizationResponse::OrgIdHasBeenSet() const
{
    return m_orgIdHasBeenSet;
}

int64_t DescribeOrganizationResponse::GetHostUin() const
{
    return m_hostUin;
}

bool DescribeOrganizationResponse::HostUinHasBeenSet() const
{
    return m_hostUinHasBeenSet;
}

string DescribeOrganizationResponse::GetNickName() const
{
    return m_nickName;
}

bool DescribeOrganizationResponse::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

int64_t DescribeOrganizationResponse::GetOrgType() const
{
    return m_orgType;
}

bool DescribeOrganizationResponse::OrgTypeHasBeenSet() const
{
    return m_orgTypeHasBeenSet;
}

bool DescribeOrganizationResponse::GetIsManager() const
{
    return m_isManager;
}

bool DescribeOrganizationResponse::IsManagerHasBeenSet() const
{
    return m_isManagerHasBeenSet;
}

string DescribeOrganizationResponse::GetOrgPolicyType() const
{
    return m_orgPolicyType;
}

bool DescribeOrganizationResponse::OrgPolicyTypeHasBeenSet() const
{
    return m_orgPolicyTypeHasBeenSet;
}

string DescribeOrganizationResponse::GetOrgPolicyName() const
{
    return m_orgPolicyName;
}

bool DescribeOrganizationResponse::OrgPolicyNameHasBeenSet() const
{
    return m_orgPolicyNameHasBeenSet;
}

vector<OrgPermission> DescribeOrganizationResponse::GetOrgPermission() const
{
    return m_orgPermission;
}

bool DescribeOrganizationResponse::OrgPermissionHasBeenSet() const
{
    return m_orgPermissionHasBeenSet;
}

int64_t DescribeOrganizationResponse::GetRootNodeId() const
{
    return m_rootNodeId;
}

bool DescribeOrganizationResponse::RootNodeIdHasBeenSet() const
{
    return m_rootNodeIdHasBeenSet;
}

string DescribeOrganizationResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeOrganizationResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeOrganizationResponse::GetJoinTime() const
{
    return m_joinTime;
}

bool DescribeOrganizationResponse::JoinTimeHasBeenSet() const
{
    return m_joinTimeHasBeenSet;
}

string DescribeOrganizationResponse::GetIsAllowQuit() const
{
    return m_isAllowQuit;
}

bool DescribeOrganizationResponse::IsAllowQuitHasBeenSet() const
{
    return m_isAllowQuitHasBeenSet;
}

string DescribeOrganizationResponse::GetPayUin() const
{
    return m_payUin;
}

bool DescribeOrganizationResponse::PayUinHasBeenSet() const
{
    return m_payUinHasBeenSet;
}

string DescribeOrganizationResponse::GetPayName() const
{
    return m_payName;
}

bool DescribeOrganizationResponse::PayNameHasBeenSet() const
{
    return m_payNameHasBeenSet;
}

bool DescribeOrganizationResponse::GetIsAssignManager() const
{
    return m_isAssignManager;
}

bool DescribeOrganizationResponse::IsAssignManagerHasBeenSet() const
{
    return m_isAssignManagerHasBeenSet;
}

bool DescribeOrganizationResponse::GetIsAuthManager() const
{
    return m_isAuthManager;
}

bool DescribeOrganizationResponse::IsAuthManagerHasBeenSet() const
{
    return m_isAuthManagerHasBeenSet;
}


