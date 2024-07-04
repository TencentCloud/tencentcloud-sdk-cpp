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

#include <tencentcloud/bpaas/v20181217/model/ApproveUser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bpaas::V20181217::Model;
using namespace std;

ApproveUser::ApproveUser() :
    m_uinHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_descHasBeenSet(false),
    m_nickHasBeenSet(false),
    m_scfHasBeenSet(false),
    m_approveStatusHasBeenSet(false),
    m_approveMsgHasBeenSet(false),
    m_approveTimeHasBeenSet(false),
    m_approveGroupHasBeenSet(false)
{
}

CoreInternalOutcome ApproveUser::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApproveUser.Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApproveUser.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApproveUser.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Nick") && !value["Nick"].IsNull())
    {
        if (!value["Nick"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApproveUser.Nick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nick = string(value["Nick"].GetString());
        m_nickHasBeenSet = true;
    }

    if (value.HasMember("Scf") && !value["Scf"].IsNull())
    {
        if (!value["Scf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ApproveUser.Scf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scf.Deserialize(value["Scf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scfHasBeenSet = true;
    }

    if (value.HasMember("ApproveStatus") && !value["ApproveStatus"].IsNull())
    {
        if (!value["ApproveStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApproveUser.ApproveStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_approveStatus = value["ApproveStatus"].GetUint64();
        m_approveStatusHasBeenSet = true;
    }

    if (value.HasMember("ApproveMsg") && !value["ApproveMsg"].IsNull())
    {
        if (!value["ApproveMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApproveUser.ApproveMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveMsg = string(value["ApproveMsg"].GetString());
        m_approveMsgHasBeenSet = true;
    }

    if (value.HasMember("ApproveTime") && !value["ApproveTime"].IsNull())
    {
        if (!value["ApproveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApproveUser.ApproveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveTime = string(value["ApproveTime"].GetString());
        m_approveTimeHasBeenSet = true;
    }

    if (value.HasMember("ApproveGroup") && !value["ApproveGroup"].IsNull())
    {
        if (!value["ApproveGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApproveUser.ApproveGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveGroup = string(value["ApproveGroup"].GetString());
        m_approveGroupHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApproveUser::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_nickHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nick";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nick.c_str(), allocator).Move(), allocator);
    }

    if (m_scfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_approveStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approveStatus, allocator);
    }

    if (m_approveMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_approveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_approveGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveGroup.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ApproveUser::GetUin() const
{
    return m_uin;
}

void ApproveUser::SetUin(const uint64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool ApproveUser::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

uint64_t ApproveUser::GetType() const
{
    return m_type;
}

void ApproveUser::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ApproveUser::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ApproveUser::GetDesc() const
{
    return m_desc;
}

void ApproveUser::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool ApproveUser::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string ApproveUser::GetNick() const
{
    return m_nick;
}

void ApproveUser::SetNick(const string& _nick)
{
    m_nick = _nick;
    m_nickHasBeenSet = true;
}

bool ApproveUser::NickHasBeenSet() const
{
    return m_nickHasBeenSet;
}

Scf ApproveUser::GetScf() const
{
    return m_scf;
}

void ApproveUser::SetScf(const Scf& _scf)
{
    m_scf = _scf;
    m_scfHasBeenSet = true;
}

bool ApproveUser::ScfHasBeenSet() const
{
    return m_scfHasBeenSet;
}

uint64_t ApproveUser::GetApproveStatus() const
{
    return m_approveStatus;
}

void ApproveUser::SetApproveStatus(const uint64_t& _approveStatus)
{
    m_approveStatus = _approveStatus;
    m_approveStatusHasBeenSet = true;
}

bool ApproveUser::ApproveStatusHasBeenSet() const
{
    return m_approveStatusHasBeenSet;
}

string ApproveUser::GetApproveMsg() const
{
    return m_approveMsg;
}

void ApproveUser::SetApproveMsg(const string& _approveMsg)
{
    m_approveMsg = _approveMsg;
    m_approveMsgHasBeenSet = true;
}

bool ApproveUser::ApproveMsgHasBeenSet() const
{
    return m_approveMsgHasBeenSet;
}

string ApproveUser::GetApproveTime() const
{
    return m_approveTime;
}

void ApproveUser::SetApproveTime(const string& _approveTime)
{
    m_approveTime = _approveTime;
    m_approveTimeHasBeenSet = true;
}

bool ApproveUser::ApproveTimeHasBeenSet() const
{
    return m_approveTimeHasBeenSet;
}

string ApproveUser::GetApproveGroup() const
{
    return m_approveGroup;
}

void ApproveUser::SetApproveGroup(const string& _approveGroup)
{
    m_approveGroup = _approveGroup;
    m_approveGroupHasBeenSet = true;
}

bool ApproveUser::ApproveGroupHasBeenSet() const
{
    return m_approveGroupHasBeenSet;
}

