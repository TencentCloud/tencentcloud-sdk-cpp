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

#include <tencentcloud/csip/v20221121/model/OrganizationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

OrganizationInfo::OrganizationInfo() :
    m_nickNameHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_joinTypeHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_adminNameHasBeenSet(false),
    m_adminUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_memberCountHasBeenSet(false),
    m_subAccountCountHasBeenSet(false),
    m_abnormalSubUserCountHasBeenSet(false),
    m_groupPermissionHasBeenSet(false),
    m_memberPermissionHasBeenSet(false),
    m_groupPayModeHasBeenSet(false),
    m_memberPayModeHasBeenSet(false),
    m_cFWProtectHasBeenSet(false),
    m_wAFProtectHasBeenSet(false),
    m_cWPProtectHasBeenSet(false),
    m_departmentsHasBeenSet(false),
    m_memberCreateTimeHasBeenSet(false),
    m_cSIPProtectHasBeenSet(false),
    m_quotaConsumerHasBeenSet(false),
    m_enableAdminCountHasBeenSet(false),
    m_cloudCountDescHasBeenSet(false),
    m_adminCountHasBeenSet(false)
{
}

CoreInternalOutcome OrganizationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("MemberId") && !value["MemberId"].IsNull())
    {
        if (!value["MemberId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.MemberId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberId = string(value["MemberId"].GetString());
        m_memberIdHasBeenSet = true;
    }

    if (value.HasMember("JoinType") && !value["JoinType"].IsNull())
    {
        if (!value["JoinType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.JoinType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_joinType = string(value["JoinType"].GetString());
        m_joinTypeHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("AdminName") && !value["AdminName"].IsNull())
    {
        if (!value["AdminName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.AdminName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminName = string(value["AdminName"].GetString());
        m_adminNameHasBeenSet = true;
    }

    if (value.HasMember("AdminUin") && !value["AdminUin"].IsNull())
    {
        if (!value["AdminUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.AdminUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminUin = string(value["AdminUin"].GetString());
        m_adminUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.NodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetInt64();
        m_nodeCountHasBeenSet = true;
    }

    if (value.HasMember("MemberCount") && !value["MemberCount"].IsNull())
    {
        if (!value["MemberCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.MemberCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memberCount = value["MemberCount"].GetInt64();
        m_memberCountHasBeenSet = true;
    }

    if (value.HasMember("SubAccountCount") && !value["SubAccountCount"].IsNull())
    {
        if (!value["SubAccountCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.SubAccountCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountCount = value["SubAccountCount"].GetInt64();
        m_subAccountCountHasBeenSet = true;
    }

    if (value.HasMember("AbnormalSubUserCount") && !value["AbnormalSubUserCount"].IsNull())
    {
        if (!value["AbnormalSubUserCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.AbnormalSubUserCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_abnormalSubUserCount = value["AbnormalSubUserCount"].GetInt64();
        m_abnormalSubUserCountHasBeenSet = true;
    }

    if (value.HasMember("GroupPermission") && !value["GroupPermission"].IsNull())
    {
        if (!value["GroupPermission"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.GroupPermission` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupPermission"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groupPermission.push_back((*itr).GetString());
        }
        m_groupPermissionHasBeenSet = true;
    }

    if (value.HasMember("MemberPermission") && !value["MemberPermission"].IsNull())
    {
        if (!value["MemberPermission"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.MemberPermission` is not array type"));

        const rapidjson::Value &tmpValue = value["MemberPermission"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_memberPermission.push_back((*itr).GetString());
        }
        m_memberPermissionHasBeenSet = true;
    }

    if (value.HasMember("GroupPayMode") && !value["GroupPayMode"].IsNull())
    {
        if (!value["GroupPayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.GroupPayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupPayMode = value["GroupPayMode"].GetInt64();
        m_groupPayModeHasBeenSet = true;
    }

    if (value.HasMember("MemberPayMode") && !value["MemberPayMode"].IsNull())
    {
        if (!value["MemberPayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.MemberPayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memberPayMode = value["MemberPayMode"].GetInt64();
        m_memberPayModeHasBeenSet = true;
    }

    if (value.HasMember("CFWProtect") && !value["CFWProtect"].IsNull())
    {
        if (!value["CFWProtect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.CFWProtect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cFWProtect = string(value["CFWProtect"].GetString());
        m_cFWProtectHasBeenSet = true;
    }

    if (value.HasMember("WAFProtect") && !value["WAFProtect"].IsNull())
    {
        if (!value["WAFProtect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.WAFProtect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wAFProtect = string(value["WAFProtect"].GetString());
        m_wAFProtectHasBeenSet = true;
    }

    if (value.HasMember("CWPProtect") && !value["CWPProtect"].IsNull())
    {
        if (!value["CWPProtect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.CWPProtect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cWPProtect = string(value["CWPProtect"].GetString());
        m_cWPProtectHasBeenSet = true;
    }

    if (value.HasMember("Departments") && !value["Departments"].IsNull())
    {
        if (!value["Departments"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.Departments` is not array type"));

        const rapidjson::Value &tmpValue = value["Departments"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_departments.push_back((*itr).GetString());
        }
        m_departmentsHasBeenSet = true;
    }

    if (value.HasMember("MemberCreateTime") && !value["MemberCreateTime"].IsNull())
    {
        if (!value["MemberCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.MemberCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberCreateTime = string(value["MemberCreateTime"].GetString());
        m_memberCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("CSIPProtect") && !value["CSIPProtect"].IsNull())
    {
        if (!value["CSIPProtect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.CSIPProtect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cSIPProtect = string(value["CSIPProtect"].GetString());
        m_cSIPProtectHasBeenSet = true;
    }

    if (value.HasMember("QuotaConsumer") && !value["QuotaConsumer"].IsNull())
    {
        if (!value["QuotaConsumer"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.QuotaConsumer` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaConsumer = value["QuotaConsumer"].GetInt64();
        m_quotaConsumerHasBeenSet = true;
    }

    if (value.HasMember("EnableAdminCount") && !value["EnableAdminCount"].IsNull())
    {
        if (!value["EnableAdminCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.EnableAdminCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableAdminCount = value["EnableAdminCount"].GetInt64();
        m_enableAdminCountHasBeenSet = true;
    }

    if (value.HasMember("CloudCountDesc") && !value["CloudCountDesc"].IsNull())
    {
        if (!value["CloudCountDesc"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.CloudCountDesc` is not array type"));

        const rapidjson::Value &tmpValue = value["CloudCountDesc"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudCountDesc item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cloudCountDesc.push_back(item);
        }
        m_cloudCountDescHasBeenSet = true;
    }

    if (value.HasMember("AdminCount") && !value["AdminCount"].IsNull())
    {
        if (!value["AdminCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationInfo.AdminCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_adminCount = value["AdminCount"].GetInt64();
        m_adminCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrganizationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberId.c_str(), allocator).Move(), allocator);
    }

    if (m_joinTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_joinType.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_adminNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminName.c_str(), allocator).Move(), allocator);
    }

    if (m_adminUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminUin.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_memberCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memberCount, allocator);
    }

    if (m_subAccountCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subAccountCount, allocator);
    }

    if (m_abnormalSubUserCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalSubUserCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_abnormalSubUserCount, allocator);
    }

    if (m_groupPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupPermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupPermission.begin(); itr != m_groupPermission.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_memberPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberPermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberPermission.begin(); itr != m_memberPermission.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_groupPayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupPayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupPayMode, allocator);
    }

    if (m_memberPayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberPayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memberPayMode, allocator);
    }

    if (m_cFWProtectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFWProtect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cFWProtect.c_str(), allocator).Move(), allocator);
    }

    if (m_wAFProtectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WAFProtect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wAFProtect.c_str(), allocator).Move(), allocator);
    }

    if (m_cWPProtectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CWPProtect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cWPProtect.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Departments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_departments.begin(); itr != m_departments.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_memberCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cSIPProtectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CSIPProtect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cSIPProtect.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaConsumerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaConsumer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaConsumer, allocator);
    }

    if (m_enableAdminCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAdminCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableAdminCount, allocator);
    }

    if (m_cloudCountDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudCountDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cloudCountDesc.begin(); itr != m_cloudCountDesc.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_adminCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_adminCount, allocator);
    }

}


string OrganizationInfo::GetNickName() const
{
    return m_nickName;
}

void OrganizationInfo::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool OrganizationInfo::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string OrganizationInfo::GetNodeName() const
{
    return m_nodeName;
}

void OrganizationInfo::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool OrganizationInfo::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string OrganizationInfo::GetRole() const
{
    return m_role;
}

void OrganizationInfo::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool OrganizationInfo::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string OrganizationInfo::GetMemberId() const
{
    return m_memberId;
}

void OrganizationInfo::SetMemberId(const string& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool OrganizationInfo::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string OrganizationInfo::GetJoinType() const
{
    return m_joinType;
}

void OrganizationInfo::SetJoinType(const string& _joinType)
{
    m_joinType = _joinType;
    m_joinTypeHasBeenSet = true;
}

bool OrganizationInfo::JoinTypeHasBeenSet() const
{
    return m_joinTypeHasBeenSet;
}

string OrganizationInfo::GetGroupName() const
{
    return m_groupName;
}

void OrganizationInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool OrganizationInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string OrganizationInfo::GetAdminName() const
{
    return m_adminName;
}

void OrganizationInfo::SetAdminName(const string& _adminName)
{
    m_adminName = _adminName;
    m_adminNameHasBeenSet = true;
}

bool OrganizationInfo::AdminNameHasBeenSet() const
{
    return m_adminNameHasBeenSet;
}

string OrganizationInfo::GetAdminUin() const
{
    return m_adminUin;
}

void OrganizationInfo::SetAdminUin(const string& _adminUin)
{
    m_adminUin = _adminUin;
    m_adminUinHasBeenSet = true;
}

bool OrganizationInfo::AdminUinHasBeenSet() const
{
    return m_adminUinHasBeenSet;
}

string OrganizationInfo::GetCreateTime() const
{
    return m_createTime;
}

void OrganizationInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool OrganizationInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t OrganizationInfo::GetNodeCount() const
{
    return m_nodeCount;
}

void OrganizationInfo::SetNodeCount(const int64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool OrganizationInfo::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

int64_t OrganizationInfo::GetMemberCount() const
{
    return m_memberCount;
}

void OrganizationInfo::SetMemberCount(const int64_t& _memberCount)
{
    m_memberCount = _memberCount;
    m_memberCountHasBeenSet = true;
}

bool OrganizationInfo::MemberCountHasBeenSet() const
{
    return m_memberCountHasBeenSet;
}

int64_t OrganizationInfo::GetSubAccountCount() const
{
    return m_subAccountCount;
}

void OrganizationInfo::SetSubAccountCount(const int64_t& _subAccountCount)
{
    m_subAccountCount = _subAccountCount;
    m_subAccountCountHasBeenSet = true;
}

bool OrganizationInfo::SubAccountCountHasBeenSet() const
{
    return m_subAccountCountHasBeenSet;
}

int64_t OrganizationInfo::GetAbnormalSubUserCount() const
{
    return m_abnormalSubUserCount;
}

void OrganizationInfo::SetAbnormalSubUserCount(const int64_t& _abnormalSubUserCount)
{
    m_abnormalSubUserCount = _abnormalSubUserCount;
    m_abnormalSubUserCountHasBeenSet = true;
}

bool OrganizationInfo::AbnormalSubUserCountHasBeenSet() const
{
    return m_abnormalSubUserCountHasBeenSet;
}

vector<string> OrganizationInfo::GetGroupPermission() const
{
    return m_groupPermission;
}

void OrganizationInfo::SetGroupPermission(const vector<string>& _groupPermission)
{
    m_groupPermission = _groupPermission;
    m_groupPermissionHasBeenSet = true;
}

bool OrganizationInfo::GroupPermissionHasBeenSet() const
{
    return m_groupPermissionHasBeenSet;
}

vector<string> OrganizationInfo::GetMemberPermission() const
{
    return m_memberPermission;
}

void OrganizationInfo::SetMemberPermission(const vector<string>& _memberPermission)
{
    m_memberPermission = _memberPermission;
    m_memberPermissionHasBeenSet = true;
}

bool OrganizationInfo::MemberPermissionHasBeenSet() const
{
    return m_memberPermissionHasBeenSet;
}

int64_t OrganizationInfo::GetGroupPayMode() const
{
    return m_groupPayMode;
}

void OrganizationInfo::SetGroupPayMode(const int64_t& _groupPayMode)
{
    m_groupPayMode = _groupPayMode;
    m_groupPayModeHasBeenSet = true;
}

bool OrganizationInfo::GroupPayModeHasBeenSet() const
{
    return m_groupPayModeHasBeenSet;
}

int64_t OrganizationInfo::GetMemberPayMode() const
{
    return m_memberPayMode;
}

void OrganizationInfo::SetMemberPayMode(const int64_t& _memberPayMode)
{
    m_memberPayMode = _memberPayMode;
    m_memberPayModeHasBeenSet = true;
}

bool OrganizationInfo::MemberPayModeHasBeenSet() const
{
    return m_memberPayModeHasBeenSet;
}

string OrganizationInfo::GetCFWProtect() const
{
    return m_cFWProtect;
}

void OrganizationInfo::SetCFWProtect(const string& _cFWProtect)
{
    m_cFWProtect = _cFWProtect;
    m_cFWProtectHasBeenSet = true;
}

bool OrganizationInfo::CFWProtectHasBeenSet() const
{
    return m_cFWProtectHasBeenSet;
}

string OrganizationInfo::GetWAFProtect() const
{
    return m_wAFProtect;
}

void OrganizationInfo::SetWAFProtect(const string& _wAFProtect)
{
    m_wAFProtect = _wAFProtect;
    m_wAFProtectHasBeenSet = true;
}

bool OrganizationInfo::WAFProtectHasBeenSet() const
{
    return m_wAFProtectHasBeenSet;
}

string OrganizationInfo::GetCWPProtect() const
{
    return m_cWPProtect;
}

void OrganizationInfo::SetCWPProtect(const string& _cWPProtect)
{
    m_cWPProtect = _cWPProtect;
    m_cWPProtectHasBeenSet = true;
}

bool OrganizationInfo::CWPProtectHasBeenSet() const
{
    return m_cWPProtectHasBeenSet;
}

vector<string> OrganizationInfo::GetDepartments() const
{
    return m_departments;
}

void OrganizationInfo::SetDepartments(const vector<string>& _departments)
{
    m_departments = _departments;
    m_departmentsHasBeenSet = true;
}

bool OrganizationInfo::DepartmentsHasBeenSet() const
{
    return m_departmentsHasBeenSet;
}

string OrganizationInfo::GetMemberCreateTime() const
{
    return m_memberCreateTime;
}

void OrganizationInfo::SetMemberCreateTime(const string& _memberCreateTime)
{
    m_memberCreateTime = _memberCreateTime;
    m_memberCreateTimeHasBeenSet = true;
}

bool OrganizationInfo::MemberCreateTimeHasBeenSet() const
{
    return m_memberCreateTimeHasBeenSet;
}

string OrganizationInfo::GetCSIPProtect() const
{
    return m_cSIPProtect;
}

void OrganizationInfo::SetCSIPProtect(const string& _cSIPProtect)
{
    m_cSIPProtect = _cSIPProtect;
    m_cSIPProtectHasBeenSet = true;
}

bool OrganizationInfo::CSIPProtectHasBeenSet() const
{
    return m_cSIPProtectHasBeenSet;
}

int64_t OrganizationInfo::GetQuotaConsumer() const
{
    return m_quotaConsumer;
}

void OrganizationInfo::SetQuotaConsumer(const int64_t& _quotaConsumer)
{
    m_quotaConsumer = _quotaConsumer;
    m_quotaConsumerHasBeenSet = true;
}

bool OrganizationInfo::QuotaConsumerHasBeenSet() const
{
    return m_quotaConsumerHasBeenSet;
}

int64_t OrganizationInfo::GetEnableAdminCount() const
{
    return m_enableAdminCount;
}

void OrganizationInfo::SetEnableAdminCount(const int64_t& _enableAdminCount)
{
    m_enableAdminCount = _enableAdminCount;
    m_enableAdminCountHasBeenSet = true;
}

bool OrganizationInfo::EnableAdminCountHasBeenSet() const
{
    return m_enableAdminCountHasBeenSet;
}

vector<CloudCountDesc> OrganizationInfo::GetCloudCountDesc() const
{
    return m_cloudCountDesc;
}

void OrganizationInfo::SetCloudCountDesc(const vector<CloudCountDesc>& _cloudCountDesc)
{
    m_cloudCountDesc = _cloudCountDesc;
    m_cloudCountDescHasBeenSet = true;
}

bool OrganizationInfo::CloudCountDescHasBeenSet() const
{
    return m_cloudCountDescHasBeenSet;
}

int64_t OrganizationInfo::GetAdminCount() const
{
    return m_adminCount;
}

void OrganizationInfo::SetAdminCount(const int64_t& _adminCount)
{
    m_adminCount = _adminCount;
    m_adminCountHasBeenSet = true;
}

bool OrganizationInfo::AdminCountHasBeenSet() const
{
    return m_adminCountHasBeenSet;
}

