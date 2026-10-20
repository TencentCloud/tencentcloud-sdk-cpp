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

#include <tencentcloud/organization/v20210331/model/PermissionApplyOrder.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

PermissionApplyOrder::PermissionApplyOrder() :
    m_applyIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_targetUinHasBeenSet(false),
    m_targetNameHasBeenSet(false),
    m_roleConfigurationsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_auditOpinionHasBeenSet(false),
    m_auditTimeHasBeenSet(false)
{
}

CoreInternalOutcome PermissionApplyOrder::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplyId") && !value["ApplyId"].IsNull())
    {
        if (!value["ApplyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionApplyOrder.ApplyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyId = string(value["ApplyId"].GetString());
        m_applyIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionApplyOrder.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionApplyOrder.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("TargetUin") && !value["TargetUin"].IsNull())
    {
        if (!value["TargetUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionApplyOrder.TargetUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetUin = value["TargetUin"].GetInt64();
        m_targetUinHasBeenSet = true;
    }

    if (value.HasMember("TargetName") && !value["TargetName"].IsNull())
    {
        if (!value["TargetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionApplyOrder.TargetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetName = string(value["TargetName"].GetString());
        m_targetNameHasBeenSet = true;
    }

    if (value.HasMember("RoleConfigurations") && !value["RoleConfigurations"].IsNull())
    {
        if (!value["RoleConfigurations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PermissionApplyOrder.RoleConfigurations` is not array type"));

        const rapidjson::Value &tmpValue = value["RoleConfigurations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApplyRoleConfiguration item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_roleConfigurations.push_back(item);
        }
        m_roleConfigurationsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionApplyOrder.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionApplyOrder.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AuditOpinion") && !value["AuditOpinion"].IsNull())
    {
        if (!value["AuditOpinion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionApplyOrder.AuditOpinion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditOpinion = string(value["AuditOpinion"].GetString());
        m_auditOpinionHasBeenSet = true;
    }

    if (value.HasMember("AuditTime") && !value["AuditTime"].IsNull())
    {
        if (!value["AuditTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionApplyOrder.AuditTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditTime = string(value["AuditTime"].GetString());
        m_auditTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PermissionApplyOrder::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetUin, allocator);
    }

    if (m_targetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetName.c_str(), allocator).Move(), allocator);
    }

    if (m_roleConfigurationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleConfigurations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_roleConfigurations.begin(); itr != m_roleConfigurations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_auditOpinionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditOpinion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditOpinion.c_str(), allocator).Move(), allocator);
    }

    if (m_auditTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditTime.c_str(), allocator).Move(), allocator);
    }

}


string PermissionApplyOrder::GetApplyId() const
{
    return m_applyId;
}

void PermissionApplyOrder::SetApplyId(const string& _applyId)
{
    m_applyId = _applyId;
    m_applyIdHasBeenSet = true;
}

bool PermissionApplyOrder::ApplyIdHasBeenSet() const
{
    return m_applyIdHasBeenSet;
}

string PermissionApplyOrder::GetUserId() const
{
    return m_userId;
}

void PermissionApplyOrder::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool PermissionApplyOrder::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string PermissionApplyOrder::GetUserName() const
{
    return m_userName;
}

void PermissionApplyOrder::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool PermissionApplyOrder::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

int64_t PermissionApplyOrder::GetTargetUin() const
{
    return m_targetUin;
}

void PermissionApplyOrder::SetTargetUin(const int64_t& _targetUin)
{
    m_targetUin = _targetUin;
    m_targetUinHasBeenSet = true;
}

bool PermissionApplyOrder::TargetUinHasBeenSet() const
{
    return m_targetUinHasBeenSet;
}

string PermissionApplyOrder::GetTargetName() const
{
    return m_targetName;
}

void PermissionApplyOrder::SetTargetName(const string& _targetName)
{
    m_targetName = _targetName;
    m_targetNameHasBeenSet = true;
}

bool PermissionApplyOrder::TargetNameHasBeenSet() const
{
    return m_targetNameHasBeenSet;
}

vector<ApplyRoleConfiguration> PermissionApplyOrder::GetRoleConfigurations() const
{
    return m_roleConfigurations;
}

void PermissionApplyOrder::SetRoleConfigurations(const vector<ApplyRoleConfiguration>& _roleConfigurations)
{
    m_roleConfigurations = _roleConfigurations;
    m_roleConfigurationsHasBeenSet = true;
}

bool PermissionApplyOrder::RoleConfigurationsHasBeenSet() const
{
    return m_roleConfigurationsHasBeenSet;
}

int64_t PermissionApplyOrder::GetStatus() const
{
    return m_status;
}

void PermissionApplyOrder::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PermissionApplyOrder::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PermissionApplyOrder::GetCreateTime() const
{
    return m_createTime;
}

void PermissionApplyOrder::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PermissionApplyOrder::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string PermissionApplyOrder::GetAuditOpinion() const
{
    return m_auditOpinion;
}

void PermissionApplyOrder::SetAuditOpinion(const string& _auditOpinion)
{
    m_auditOpinion = _auditOpinion;
    m_auditOpinionHasBeenSet = true;
}

bool PermissionApplyOrder::AuditOpinionHasBeenSet() const
{
    return m_auditOpinionHasBeenSet;
}

string PermissionApplyOrder::GetAuditTime() const
{
    return m_auditTime;
}

void PermissionApplyOrder::SetAuditTime(const string& _auditTime)
{
    m_auditTime = _auditTime;
    m_auditTimeHasBeenSet = true;
}

bool PermissionApplyOrder::AuditTimeHasBeenSet() const
{
    return m_auditTimeHasBeenSet;
}

