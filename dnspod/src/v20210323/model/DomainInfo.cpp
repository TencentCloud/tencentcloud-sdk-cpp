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

#include <tencentcloud/dnspod/v20210323/model/DomainInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace rapidjson;
using namespace std;

DomainInfo::DomainInfo() :
    m_domainIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_gradeHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_isMarkHasBeenSet(false),
    m_tTLHasBeenSet(false),
    m_cnameSpeedupHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_punycodeHasBeenSet(false),
    m_dnsStatusHasBeenSet(false),
    m_dnspodNsListHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_gradeLevelHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_isVipHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_gradeTitleHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_updatedOnHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_actualNsListHasBeenSet(false),
    m_recordCountHasBeenSet(false),
    m_ownerNickHasBeenSet(false)
{
}

CoreInternalOutcome DomainInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DomainInfo.DomainId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = value["DomainId"].GetUint64();
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Grade") && !value["Grade"].IsNull())
    {
        if (!value["Grade"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainInfo.Grade` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grade = string(value["Grade"].GetString());
        m_gradeHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DomainInfo.GroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetUint64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("IsMark") && !value["IsMark"].IsNull())
    {
        if (!value["IsMark"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainInfo.IsMark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isMark = string(value["IsMark"].GetString());
        m_isMarkHasBeenSet = true;
    }

    if (value.HasMember("TTL") && !value["TTL"].IsNull())
    {
        if (!value["TTL"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DomainInfo.TTL` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tTL = value["TTL"].GetUint64();
        m_tTLHasBeenSet = true;
    }

    if (value.HasMember("CnameSpeedup") && !value["CnameSpeedup"].IsNull())
    {
        if (!value["CnameSpeedup"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainInfo.CnameSpeedup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cnameSpeedup = string(value["CnameSpeedup"].GetString());
        m_cnameSpeedupHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Punycode") && !value["Punycode"].IsNull())
    {
        if (!value["Punycode"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainInfo.Punycode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_punycode = string(value["Punycode"].GetString());
        m_punycodeHasBeenSet = true;
    }

    if (value.HasMember("DnsStatus") && !value["DnsStatus"].IsNull())
    {
        if (!value["DnsStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainInfo.DnsStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dnsStatus = string(value["DnsStatus"].GetString());
        m_dnsStatusHasBeenSet = true;
    }

    if (value.HasMember("DnspodNsList") && !value["DnspodNsList"].IsNull())
    {
        if (!value["DnspodNsList"].IsArray())
            return CoreInternalOutcome(Error("response `DomainInfo.DnspodNsList` is not array type"));

        const Value &tmpValue = value["DnspodNsList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dnspodNsList.push_back((*itr).GetString());
        }
        m_dnspodNsListHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("GradeLevel") && !value["GradeLevel"].IsNull())
    {
        if (!value["GradeLevel"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DomainInfo.GradeLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gradeLevel = value["GradeLevel"].GetUint64();
        m_gradeLevelHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DomainInfo.UserId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userId = value["UserId"].GetUint64();
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("IsVip") && !value["IsVip"].IsNull())
    {
        if (!value["IsVip"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainInfo.IsVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isVip = string(value["IsVip"].GetString());
        m_isVipHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainInfo.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("GradeTitle") && !value["GradeTitle"].IsNull())
    {
        if (!value["GradeTitle"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainInfo.GradeTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gradeTitle = string(value["GradeTitle"].GetString());
        m_gradeTitleHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainInfo.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("UpdatedOn") && !value["UpdatedOn"].IsNull())
    {
        if (!value["UpdatedOn"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainInfo.UpdatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedOn = string(value["UpdatedOn"].GetString());
        m_updatedOnHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("ActualNsList") && !value["ActualNsList"].IsNull())
    {
        if (!value["ActualNsList"].IsArray())
            return CoreInternalOutcome(Error("response `DomainInfo.ActualNsList` is not array type"));

        const Value &tmpValue = value["ActualNsList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_actualNsList.push_back((*itr).GetString());
        }
        m_actualNsListHasBeenSet = true;
    }

    if (value.HasMember("RecordCount") && !value["RecordCount"].IsNull())
    {
        if (!value["RecordCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DomainInfo.RecordCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordCount = value["RecordCount"].GetUint64();
        m_recordCountHasBeenSet = true;
    }

    if (value.HasMember("OwnerNick") && !value["OwnerNick"].IsNull())
    {
        if (!value["OwnerNick"].IsString())
        {
            return CoreInternalOutcome(Error("response `DomainInfo.OwnerNick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerNick = string(value["OwnerNick"].GetString());
        m_ownerNickHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_domainIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_gradeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Grade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_grade.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_isMarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_isMark.c_str(), allocator).Move(), allocator);
    }

    if (m_tTLHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tTL, allocator);
    }

    if (m_cnameSpeedupHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CnameSpeedup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cnameSpeedup.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_punycodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Punycode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_punycode.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DnsStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dnsStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_dnspodNsListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DnspodNsList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_dnspodNsList.begin(); itr != m_dnspodNsList.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_gradeLevelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GradeLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gradeLevel, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userId, allocator);
    }

    if (m_isVipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_isVip.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_gradeTitleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GradeTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_gradeTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedOnHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updatedOn.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_actualNsListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ActualNsList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_actualNsList.begin(); itr != m_actualNsList.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_recordCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecordCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordCount, allocator);
    }

    if (m_ownerNickHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OwnerNick";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ownerNick.c_str(), allocator).Move(), allocator);
    }

}


uint64_t DomainInfo::GetDomainId() const
{
    return m_domainId;
}

void DomainInfo::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool DomainInfo::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string DomainInfo::GetStatus() const
{
    return m_status;
}

void DomainInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DomainInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DomainInfo::GetGrade() const
{
    return m_grade;
}

void DomainInfo::SetGrade(const string& _grade)
{
    m_grade = _grade;
    m_gradeHasBeenSet = true;
}

bool DomainInfo::GradeHasBeenSet() const
{
    return m_gradeHasBeenSet;
}

uint64_t DomainInfo::GetGroupId() const
{
    return m_groupId;
}

void DomainInfo::SetGroupId(const uint64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DomainInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DomainInfo::GetIsMark() const
{
    return m_isMark;
}

void DomainInfo::SetIsMark(const string& _isMark)
{
    m_isMark = _isMark;
    m_isMarkHasBeenSet = true;
}

bool DomainInfo::IsMarkHasBeenSet() const
{
    return m_isMarkHasBeenSet;
}

uint64_t DomainInfo::GetTTL() const
{
    return m_tTL;
}

void DomainInfo::SetTTL(const uint64_t& _tTL)
{
    m_tTL = _tTL;
    m_tTLHasBeenSet = true;
}

bool DomainInfo::TTLHasBeenSet() const
{
    return m_tTLHasBeenSet;
}

string DomainInfo::GetCnameSpeedup() const
{
    return m_cnameSpeedup;
}

void DomainInfo::SetCnameSpeedup(const string& _cnameSpeedup)
{
    m_cnameSpeedup = _cnameSpeedup;
    m_cnameSpeedupHasBeenSet = true;
}

bool DomainInfo::CnameSpeedupHasBeenSet() const
{
    return m_cnameSpeedupHasBeenSet;
}

string DomainInfo::GetRemark() const
{
    return m_remark;
}

void DomainInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DomainInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DomainInfo::GetPunycode() const
{
    return m_punycode;
}

void DomainInfo::SetPunycode(const string& _punycode)
{
    m_punycode = _punycode;
    m_punycodeHasBeenSet = true;
}

bool DomainInfo::PunycodeHasBeenSet() const
{
    return m_punycodeHasBeenSet;
}

string DomainInfo::GetDnsStatus() const
{
    return m_dnsStatus;
}

void DomainInfo::SetDnsStatus(const string& _dnsStatus)
{
    m_dnsStatus = _dnsStatus;
    m_dnsStatusHasBeenSet = true;
}

bool DomainInfo::DnsStatusHasBeenSet() const
{
    return m_dnsStatusHasBeenSet;
}

vector<string> DomainInfo::GetDnspodNsList() const
{
    return m_dnspodNsList;
}

void DomainInfo::SetDnspodNsList(const vector<string>& _dnspodNsList)
{
    m_dnspodNsList = _dnspodNsList;
    m_dnspodNsListHasBeenSet = true;
}

bool DomainInfo::DnspodNsListHasBeenSet() const
{
    return m_dnspodNsListHasBeenSet;
}

string DomainInfo::GetDomain() const
{
    return m_domain;
}

void DomainInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DomainInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t DomainInfo::GetGradeLevel() const
{
    return m_gradeLevel;
}

void DomainInfo::SetGradeLevel(const uint64_t& _gradeLevel)
{
    m_gradeLevel = _gradeLevel;
    m_gradeLevelHasBeenSet = true;
}

bool DomainInfo::GradeLevelHasBeenSet() const
{
    return m_gradeLevelHasBeenSet;
}

uint64_t DomainInfo::GetUserId() const
{
    return m_userId;
}

void DomainInfo::SetUserId(const uint64_t& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DomainInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DomainInfo::GetIsVip() const
{
    return m_isVip;
}

void DomainInfo::SetIsVip(const string& _isVip)
{
    m_isVip = _isVip;
    m_isVipHasBeenSet = true;
}

bool DomainInfo::IsVipHasBeenSet() const
{
    return m_isVipHasBeenSet;
}

string DomainInfo::GetOwner() const
{
    return m_owner;
}

void DomainInfo::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool DomainInfo::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string DomainInfo::GetGradeTitle() const
{
    return m_gradeTitle;
}

void DomainInfo::SetGradeTitle(const string& _gradeTitle)
{
    m_gradeTitle = _gradeTitle;
    m_gradeTitleHasBeenSet = true;
}

bool DomainInfo::GradeTitleHasBeenSet() const
{
    return m_gradeTitleHasBeenSet;
}

string DomainInfo::GetCreatedOn() const
{
    return m_createdOn;
}

void DomainInfo::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool DomainInfo::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string DomainInfo::GetUpdatedOn() const
{
    return m_updatedOn;
}

void DomainInfo::SetUpdatedOn(const string& _updatedOn)
{
    m_updatedOn = _updatedOn;
    m_updatedOnHasBeenSet = true;
}

bool DomainInfo::UpdatedOnHasBeenSet() const
{
    return m_updatedOnHasBeenSet;
}

string DomainInfo::GetUin() const
{
    return m_uin;
}

void DomainInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DomainInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

vector<string> DomainInfo::GetActualNsList() const
{
    return m_actualNsList;
}

void DomainInfo::SetActualNsList(const vector<string>& _actualNsList)
{
    m_actualNsList = _actualNsList;
    m_actualNsListHasBeenSet = true;
}

bool DomainInfo::ActualNsListHasBeenSet() const
{
    return m_actualNsListHasBeenSet;
}

uint64_t DomainInfo::GetRecordCount() const
{
    return m_recordCount;
}

void DomainInfo::SetRecordCount(const uint64_t& _recordCount)
{
    m_recordCount = _recordCount;
    m_recordCountHasBeenSet = true;
}

bool DomainInfo::RecordCountHasBeenSet() const
{
    return m_recordCountHasBeenSet;
}

string DomainInfo::GetOwnerNick() const
{
    return m_ownerNick;
}

void DomainInfo::SetOwnerNick(const string& _ownerNick)
{
    m_ownerNick = _ownerNick;
    m_ownerNickHasBeenSet = true;
}

bool DomainInfo::OwnerNickHasBeenSet() const
{
    return m_ownerNickHasBeenSet;
}

