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

#include <tencentcloud/bh/v20230418/model/Ticket.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

Ticket::Ticket() :
    m_idHasBeenSet(false),
    m_ticketIdHasBeenSet(false),
    m_ticketTypeHasBeenSet(false),
    m_aclHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_applyTimeHasBeenSet(false),
    m_applyUserHasBeenSet(false),
    m_approveUserHasBeenSet(false),
    m_approveDescHasBeenSet(false),
    m_aclIdHasBeenSet(false),
    m_approveUserSetHasBeenSet(false),
    m_approveUserInfoSetHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_approveTimeHasBeenSet(false),
    m_departmentIdHasBeenSet(false),
    m_departmentNameHasBeenSet(false),
    m_departmentSequenceHasBeenSet(false),
    m_applyUserNameHasBeenSet(false),
    m_applyRealNameHasBeenSet(false),
    m_applyTimeVersionHasBeenSet(false)
{
}

CoreInternalOutcome Ticket::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Ticket.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("TicketId") && !value["TicketId"].IsNull())
    {
        if (!value["TicketId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ticket.TicketId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ticketId = string(value["TicketId"].GetString());
        m_ticketIdHasBeenSet = true;
    }

    if (value.HasMember("TicketType") && !value["TicketType"].IsNull())
    {
        if (!value["TicketType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Ticket.TicketType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ticketType = value["TicketType"].GetUint64();
        m_ticketTypeHasBeenSet = true;
    }

    if (value.HasMember("Acl") && !value["Acl"].IsNull())
    {
        if (!value["Acl"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Ticket.Acl` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_acl.Deserialize(value["Acl"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aclHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ticket.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ticket.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Ticket.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ApplyTime") && !value["ApplyTime"].IsNull())
    {
        if (!value["ApplyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ticket.ApplyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyTime = string(value["ApplyTime"].GetString());
        m_applyTimeHasBeenSet = true;
    }

    if (value.HasMember("ApplyUser") && !value["ApplyUser"].IsNull())
    {
        if (!value["ApplyUser"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Ticket.ApplyUser` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_applyUser = value["ApplyUser"].GetUint64();
        m_applyUserHasBeenSet = true;
    }

    if (value.HasMember("ApproveUser") && !value["ApproveUser"].IsNull())
    {
        if (!value["ApproveUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ticket.ApproveUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveUser = string(value["ApproveUser"].GetString());
        m_approveUserHasBeenSet = true;
    }

    if (value.HasMember("ApproveDesc") && !value["ApproveDesc"].IsNull())
    {
        if (!value["ApproveDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ticket.ApproveDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveDesc = string(value["ApproveDesc"].GetString());
        m_approveDescHasBeenSet = true;
    }

    if (value.HasMember("AclId") && !value["AclId"].IsNull())
    {
        if (!value["AclId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Ticket.AclId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aclId = value["AclId"].GetUint64();
        m_aclIdHasBeenSet = true;
    }

    if (value.HasMember("ApproveUserSet") && !value["ApproveUserSet"].IsNull())
    {
        if (!value["ApproveUserSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Ticket.ApproveUserSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ApproveUserSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_approveUserSet.push_back((*itr).GetString());
        }
        m_approveUserSetHasBeenSet = true;
    }

    if (value.HasMember("ApproveUserInfoSet") && !value["ApproveUserInfoSet"].IsNull())
    {
        if (!value["ApproveUserInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Ticket.ApproveUserInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ApproveUserInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DepartmentManagerUser item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_approveUserInfoSet.push_back(item);
        }
        m_approveUserInfoSetHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ticket.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ticket.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ApproveTime") && !value["ApproveTime"].IsNull())
    {
        if (!value["ApproveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ticket.ApproveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveTime = string(value["ApproveTime"].GetString());
        m_approveTimeHasBeenSet = true;
    }

    if (value.HasMember("DepartmentId") && !value["DepartmentId"].IsNull())
    {
        if (!value["DepartmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ticket.DepartmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_departmentId = string(value["DepartmentId"].GetString());
        m_departmentIdHasBeenSet = true;
    }

    if (value.HasMember("DepartmentName") && !value["DepartmentName"].IsNull())
    {
        if (!value["DepartmentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ticket.DepartmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_departmentName = string(value["DepartmentName"].GetString());
        m_departmentNameHasBeenSet = true;
    }

    if (value.HasMember("DepartmentSequence") && !value["DepartmentSequence"].IsNull())
    {
        if (!value["DepartmentSequence"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Ticket.DepartmentSequence` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_departmentSequence = value["DepartmentSequence"].GetUint64();
        m_departmentSequenceHasBeenSet = true;
    }

    if (value.HasMember("ApplyUserName") && !value["ApplyUserName"].IsNull())
    {
        if (!value["ApplyUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ticket.ApplyUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyUserName = string(value["ApplyUserName"].GetString());
        m_applyUserNameHasBeenSet = true;
    }

    if (value.HasMember("ApplyRealName") && !value["ApplyRealName"].IsNull())
    {
        if (!value["ApplyRealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ticket.ApplyRealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyRealName = string(value["ApplyRealName"].GetString());
        m_applyRealNameHasBeenSet = true;
    }

    if (value.HasMember("ApplyTimeVersion") && !value["ApplyTimeVersion"].IsNull())
    {
        if (!value["ApplyTimeVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Ticket.ApplyTimeVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applyTimeVersion = value["ApplyTimeVersion"].GetInt64();
        m_applyTimeVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Ticket::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_ticketIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ticketId.c_str(), allocator).Move(), allocator);
    }

    if (m_ticketTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ticketType, allocator);
    }

    if (m_aclHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Acl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_acl.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_applyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_applyUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applyUser, allocator);
    }

    if (m_approveUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveUser.c_str(), allocator).Move(), allocator);
    }

    if (m_approveDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_aclIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aclId, allocator);
    }

    if (m_approveUserSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveUserSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_approveUserSet.begin(); itr != m_approveUserSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_approveUserInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveUserInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_approveUserInfoSet.begin(); itr != m_approveUserInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_approveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_departmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_departmentName.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentSequenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentSequence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_departmentSequence, allocator);
    }

    if (m_applyUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_applyRealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyRealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyRealName.c_str(), allocator).Move(), allocator);
    }

    if (m_applyTimeVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyTimeVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applyTimeVersion, allocator);
    }

}


uint64_t Ticket::GetId() const
{
    return m_id;
}

void Ticket::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Ticket::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Ticket::GetTicketId() const
{
    return m_ticketId;
}

void Ticket::SetTicketId(const string& _ticketId)
{
    m_ticketId = _ticketId;
    m_ticketIdHasBeenSet = true;
}

bool Ticket::TicketIdHasBeenSet() const
{
    return m_ticketIdHasBeenSet;
}

uint64_t Ticket::GetTicketType() const
{
    return m_ticketType;
}

void Ticket::SetTicketType(const uint64_t& _ticketType)
{
    m_ticketType = _ticketType;
    m_ticketTypeHasBeenSet = true;
}

bool Ticket::TicketTypeHasBeenSet() const
{
    return m_ticketTypeHasBeenSet;
}

Acl Ticket::GetAcl() const
{
    return m_acl;
}

void Ticket::SetAcl(const Acl& _acl)
{
    m_acl = _acl;
    m_aclHasBeenSet = true;
}

bool Ticket::AclHasBeenSet() const
{
    return m_aclHasBeenSet;
}

string Ticket::GetStartTime() const
{
    return m_startTime;
}

void Ticket::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool Ticket::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string Ticket::GetEndTime() const
{
    return m_endTime;
}

void Ticket::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool Ticket::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t Ticket::GetStatus() const
{
    return m_status;
}

void Ticket::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Ticket::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Ticket::GetApplyTime() const
{
    return m_applyTime;
}

void Ticket::SetApplyTime(const string& _applyTime)
{
    m_applyTime = _applyTime;
    m_applyTimeHasBeenSet = true;
}

bool Ticket::ApplyTimeHasBeenSet() const
{
    return m_applyTimeHasBeenSet;
}

uint64_t Ticket::GetApplyUser() const
{
    return m_applyUser;
}

void Ticket::SetApplyUser(const uint64_t& _applyUser)
{
    m_applyUser = _applyUser;
    m_applyUserHasBeenSet = true;
}

bool Ticket::ApplyUserHasBeenSet() const
{
    return m_applyUserHasBeenSet;
}

string Ticket::GetApproveUser() const
{
    return m_approveUser;
}

void Ticket::SetApproveUser(const string& _approveUser)
{
    m_approveUser = _approveUser;
    m_approveUserHasBeenSet = true;
}

bool Ticket::ApproveUserHasBeenSet() const
{
    return m_approveUserHasBeenSet;
}

string Ticket::GetApproveDesc() const
{
    return m_approveDesc;
}

void Ticket::SetApproveDesc(const string& _approveDesc)
{
    m_approveDesc = _approveDesc;
    m_approveDescHasBeenSet = true;
}

bool Ticket::ApproveDescHasBeenSet() const
{
    return m_approveDescHasBeenSet;
}

uint64_t Ticket::GetAclId() const
{
    return m_aclId;
}

void Ticket::SetAclId(const uint64_t& _aclId)
{
    m_aclId = _aclId;
    m_aclIdHasBeenSet = true;
}

bool Ticket::AclIdHasBeenSet() const
{
    return m_aclIdHasBeenSet;
}

vector<string> Ticket::GetApproveUserSet() const
{
    return m_approveUserSet;
}

void Ticket::SetApproveUserSet(const vector<string>& _approveUserSet)
{
    m_approveUserSet = _approveUserSet;
    m_approveUserSetHasBeenSet = true;
}

bool Ticket::ApproveUserSetHasBeenSet() const
{
    return m_approveUserSetHasBeenSet;
}

vector<DepartmentManagerUser> Ticket::GetApproveUserInfoSet() const
{
    return m_approveUserInfoSet;
}

void Ticket::SetApproveUserInfoSet(const vector<DepartmentManagerUser>& _approveUserInfoSet)
{
    m_approveUserInfoSet = _approveUserInfoSet;
    m_approveUserInfoSetHasBeenSet = true;
}

bool Ticket::ApproveUserInfoSetHasBeenSet() const
{
    return m_approveUserInfoSetHasBeenSet;
}

string Ticket::GetUpdateTime() const
{
    return m_updateTime;
}

void Ticket::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Ticket::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string Ticket::GetName() const
{
    return m_name;
}

void Ticket::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Ticket::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Ticket::GetApproveTime() const
{
    return m_approveTime;
}

void Ticket::SetApproveTime(const string& _approveTime)
{
    m_approveTime = _approveTime;
    m_approveTimeHasBeenSet = true;
}

bool Ticket::ApproveTimeHasBeenSet() const
{
    return m_approveTimeHasBeenSet;
}

string Ticket::GetDepartmentId() const
{
    return m_departmentId;
}

void Ticket::SetDepartmentId(const string& _departmentId)
{
    m_departmentId = _departmentId;
    m_departmentIdHasBeenSet = true;
}

bool Ticket::DepartmentIdHasBeenSet() const
{
    return m_departmentIdHasBeenSet;
}

string Ticket::GetDepartmentName() const
{
    return m_departmentName;
}

void Ticket::SetDepartmentName(const string& _departmentName)
{
    m_departmentName = _departmentName;
    m_departmentNameHasBeenSet = true;
}

bool Ticket::DepartmentNameHasBeenSet() const
{
    return m_departmentNameHasBeenSet;
}

uint64_t Ticket::GetDepartmentSequence() const
{
    return m_departmentSequence;
}

void Ticket::SetDepartmentSequence(const uint64_t& _departmentSequence)
{
    m_departmentSequence = _departmentSequence;
    m_departmentSequenceHasBeenSet = true;
}

bool Ticket::DepartmentSequenceHasBeenSet() const
{
    return m_departmentSequenceHasBeenSet;
}

string Ticket::GetApplyUserName() const
{
    return m_applyUserName;
}

void Ticket::SetApplyUserName(const string& _applyUserName)
{
    m_applyUserName = _applyUserName;
    m_applyUserNameHasBeenSet = true;
}

bool Ticket::ApplyUserNameHasBeenSet() const
{
    return m_applyUserNameHasBeenSet;
}

string Ticket::GetApplyRealName() const
{
    return m_applyRealName;
}

void Ticket::SetApplyRealName(const string& _applyRealName)
{
    m_applyRealName = _applyRealName;
    m_applyRealNameHasBeenSet = true;
}

bool Ticket::ApplyRealNameHasBeenSet() const
{
    return m_applyRealNameHasBeenSet;
}

int64_t Ticket::GetApplyTimeVersion() const
{
    return m_applyTimeVersion;
}

void Ticket::SetApplyTimeVersion(const int64_t& _applyTimeVersion)
{
    m_applyTimeVersion = _applyTimeVersion;
    m_applyTimeVersionHasBeenSet = true;
}

bool Ticket::ApplyTimeVersionHasBeenSet() const
{
    return m_applyTimeVersionHasBeenSet;
}

