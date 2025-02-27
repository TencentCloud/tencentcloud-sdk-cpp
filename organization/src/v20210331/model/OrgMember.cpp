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

#include <tencentcloud/organization/v20210331/model/OrgMember.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

OrgMember::OrgMember() :
    m_memberUinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_memberTypeHasBeenSet(false),
    m_orgPolicyTypeHasBeenSet(false),
    m_orgPolicyNameHasBeenSet(false),
    m_orgPermissionHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_isAllowQuitHasBeenSet(false),
    m_payUinHasBeenSet(false),
    m_payNameHasBeenSet(false),
    m_orgIdentityHasBeenSet(false),
    m_bindStatusHasBeenSet(false),
    m_permissionStatusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_nickNameHasBeenSet(false)
{
}

CoreInternalOutcome OrgMember::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MemberUin") && !value["MemberUin"].IsNull())
    {
        if (!value["MemberUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMember.MemberUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memberUin = value["MemberUin"].GetInt64();
        m_memberUinHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMember.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("MemberType") && !value["MemberType"].IsNull())
    {
        if (!value["MemberType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMember.MemberType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberType = string(value["MemberType"].GetString());
        m_memberTypeHasBeenSet = true;
    }

    if (value.HasMember("OrgPolicyType") && !value["OrgPolicyType"].IsNull())
    {
        if (!value["OrgPolicyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMember.OrgPolicyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgPolicyType = string(value["OrgPolicyType"].GetString());
        m_orgPolicyTypeHasBeenSet = true;
    }

    if (value.HasMember("OrgPolicyName") && !value["OrgPolicyName"].IsNull())
    {
        if (!value["OrgPolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMember.OrgPolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgPolicyName = string(value["OrgPolicyName"].GetString());
        m_orgPolicyNameHasBeenSet = true;
    }

    if (value.HasMember("OrgPermission") && !value["OrgPermission"].IsNull())
    {
        if (!value["OrgPermission"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OrgMember.OrgPermission` is not array type"));

        const rapidjson::Value &tmpValue = value["OrgPermission"];
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

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMember.NodeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = value["NodeId"].GetInt64();
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMember.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMember.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMember.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMember.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("IsAllowQuit") && !value["IsAllowQuit"].IsNull())
    {
        if (!value["IsAllowQuit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMember.IsAllowQuit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isAllowQuit = string(value["IsAllowQuit"].GetString());
        m_isAllowQuitHasBeenSet = true;
    }

    if (value.HasMember("PayUin") && !value["PayUin"].IsNull())
    {
        if (!value["PayUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMember.PayUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payUin = string(value["PayUin"].GetString());
        m_payUinHasBeenSet = true;
    }

    if (value.HasMember("PayName") && !value["PayName"].IsNull())
    {
        if (!value["PayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMember.PayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payName = string(value["PayName"].GetString());
        m_payNameHasBeenSet = true;
    }

    if (value.HasMember("OrgIdentity") && !value["OrgIdentity"].IsNull())
    {
        if (!value["OrgIdentity"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OrgMember.OrgIdentity` is not array type"));

        const rapidjson::Value &tmpValue = value["OrgIdentity"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MemberIdentity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_orgIdentity.push_back(item);
        }
        m_orgIdentityHasBeenSet = true;
    }

    if (value.HasMember("BindStatus") && !value["BindStatus"].IsNull())
    {
        if (!value["BindStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMember.BindStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindStatus = string(value["BindStatus"].GetString());
        m_bindStatusHasBeenSet = true;
    }

    if (value.HasMember("PermissionStatus") && !value["PermissionStatus"].IsNull())
    {
        if (!value["PermissionStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMember.PermissionStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permissionStatus = string(value["PermissionStatus"].GetString());
        m_permissionStatusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OrgMember.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMember.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrgMember::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_memberUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memberUin, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_memberTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberType.c_str(), allocator).Move(), allocator);
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

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeId, allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
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

    if (m_orgIdentityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgIdentity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_orgIdentity.begin(); itr != m_orgIdentity.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bindStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_permissionStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

}


int64_t OrgMember::GetMemberUin() const
{
    return m_memberUin;
}

void OrgMember::SetMemberUin(const int64_t& _memberUin)
{
    m_memberUin = _memberUin;
    m_memberUinHasBeenSet = true;
}

bool OrgMember::MemberUinHasBeenSet() const
{
    return m_memberUinHasBeenSet;
}

string OrgMember::GetName() const
{
    return m_name;
}

void OrgMember::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool OrgMember::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string OrgMember::GetMemberType() const
{
    return m_memberType;
}

void OrgMember::SetMemberType(const string& _memberType)
{
    m_memberType = _memberType;
    m_memberTypeHasBeenSet = true;
}

bool OrgMember::MemberTypeHasBeenSet() const
{
    return m_memberTypeHasBeenSet;
}

string OrgMember::GetOrgPolicyType() const
{
    return m_orgPolicyType;
}

void OrgMember::SetOrgPolicyType(const string& _orgPolicyType)
{
    m_orgPolicyType = _orgPolicyType;
    m_orgPolicyTypeHasBeenSet = true;
}

bool OrgMember::OrgPolicyTypeHasBeenSet() const
{
    return m_orgPolicyTypeHasBeenSet;
}

string OrgMember::GetOrgPolicyName() const
{
    return m_orgPolicyName;
}

void OrgMember::SetOrgPolicyName(const string& _orgPolicyName)
{
    m_orgPolicyName = _orgPolicyName;
    m_orgPolicyNameHasBeenSet = true;
}

bool OrgMember::OrgPolicyNameHasBeenSet() const
{
    return m_orgPolicyNameHasBeenSet;
}

vector<OrgPermission> OrgMember::GetOrgPermission() const
{
    return m_orgPermission;
}

void OrgMember::SetOrgPermission(const vector<OrgPermission>& _orgPermission)
{
    m_orgPermission = _orgPermission;
    m_orgPermissionHasBeenSet = true;
}

bool OrgMember::OrgPermissionHasBeenSet() const
{
    return m_orgPermissionHasBeenSet;
}

int64_t OrgMember::GetNodeId() const
{
    return m_nodeId;
}

void OrgMember::SetNodeId(const int64_t& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool OrgMember::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string OrgMember::GetNodeName() const
{
    return m_nodeName;
}

void OrgMember::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool OrgMember::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string OrgMember::GetRemark() const
{
    return m_remark;
}

void OrgMember::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool OrgMember::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string OrgMember::GetCreateTime() const
{
    return m_createTime;
}

void OrgMember::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool OrgMember::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string OrgMember::GetUpdateTime() const
{
    return m_updateTime;
}

void OrgMember::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool OrgMember::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string OrgMember::GetIsAllowQuit() const
{
    return m_isAllowQuit;
}

void OrgMember::SetIsAllowQuit(const string& _isAllowQuit)
{
    m_isAllowQuit = _isAllowQuit;
    m_isAllowQuitHasBeenSet = true;
}

bool OrgMember::IsAllowQuitHasBeenSet() const
{
    return m_isAllowQuitHasBeenSet;
}

string OrgMember::GetPayUin() const
{
    return m_payUin;
}

void OrgMember::SetPayUin(const string& _payUin)
{
    m_payUin = _payUin;
    m_payUinHasBeenSet = true;
}

bool OrgMember::PayUinHasBeenSet() const
{
    return m_payUinHasBeenSet;
}

string OrgMember::GetPayName() const
{
    return m_payName;
}

void OrgMember::SetPayName(const string& _payName)
{
    m_payName = _payName;
    m_payNameHasBeenSet = true;
}

bool OrgMember::PayNameHasBeenSet() const
{
    return m_payNameHasBeenSet;
}

vector<MemberIdentity> OrgMember::GetOrgIdentity() const
{
    return m_orgIdentity;
}

void OrgMember::SetOrgIdentity(const vector<MemberIdentity>& _orgIdentity)
{
    m_orgIdentity = _orgIdentity;
    m_orgIdentityHasBeenSet = true;
}

bool OrgMember::OrgIdentityHasBeenSet() const
{
    return m_orgIdentityHasBeenSet;
}

string OrgMember::GetBindStatus() const
{
    return m_bindStatus;
}

void OrgMember::SetBindStatus(const string& _bindStatus)
{
    m_bindStatus = _bindStatus;
    m_bindStatusHasBeenSet = true;
}

bool OrgMember::BindStatusHasBeenSet() const
{
    return m_bindStatusHasBeenSet;
}

string OrgMember::GetPermissionStatus() const
{
    return m_permissionStatus;
}

void OrgMember::SetPermissionStatus(const string& _permissionStatus)
{
    m_permissionStatus = _permissionStatus;
    m_permissionStatusHasBeenSet = true;
}

bool OrgMember::PermissionStatusHasBeenSet() const
{
    return m_permissionStatusHasBeenSet;
}

vector<Tag> OrgMember::GetTags() const
{
    return m_tags;
}

void OrgMember::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool OrgMember::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string OrgMember::GetNickName() const
{
    return m_nickName;
}

void OrgMember::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool OrgMember::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

