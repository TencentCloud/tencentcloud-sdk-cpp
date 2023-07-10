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

#include <tencentcloud/dnspod/v20210323/model/DomainListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

DomainListItem::DomainListItem() :
    m_domainIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tTLHasBeenSet(false),
    m_cNAMESpeedupHasBeenSet(false),
    m_dNSStatusHasBeenSet(false),
    m_gradeHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_searchEnginePushHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_punycodeHasBeenSet(false),
    m_effectiveDNSHasBeenSet(false),
    m_gradeLevelHasBeenSet(false),
    m_gradeTitleHasBeenSet(false),
    m_isVipHasBeenSet(false),
    m_vipStartAtHasBeenSet(false),
    m_vipEndAtHasBeenSet(false),
    m_vipAutoRenewHasBeenSet(false),
    m_recordCountHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_updatedOnHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

CoreInternalOutcome DomainListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainListItem.DomainId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = value["DomainId"].GetUint64();
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainListItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainListItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TTL") && !value["TTL"].IsNull())
    {
        if (!value["TTL"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainListItem.TTL` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tTL = value["TTL"].GetUint64();
        m_tTLHasBeenSet = true;
    }

    if (value.HasMember("CNAMESpeedup") && !value["CNAMESpeedup"].IsNull())
    {
        if (!value["CNAMESpeedup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainListItem.CNAMESpeedup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cNAMESpeedup = string(value["CNAMESpeedup"].GetString());
        m_cNAMESpeedupHasBeenSet = true;
    }

    if (value.HasMember("DNSStatus") && !value["DNSStatus"].IsNull())
    {
        if (!value["DNSStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainListItem.DNSStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dNSStatus = string(value["DNSStatus"].GetString());
        m_dNSStatusHasBeenSet = true;
    }

    if (value.HasMember("Grade") && !value["Grade"].IsNull())
    {
        if (!value["Grade"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainListItem.Grade` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grade = string(value["Grade"].GetString());
        m_gradeHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainListItem.GroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetUint64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("SearchEnginePush") && !value["SearchEnginePush"].IsNull())
    {
        if (!value["SearchEnginePush"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainListItem.SearchEnginePush` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_searchEnginePush = string(value["SearchEnginePush"].GetString());
        m_searchEnginePushHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainListItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Punycode") && !value["Punycode"].IsNull())
    {
        if (!value["Punycode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainListItem.Punycode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_punycode = string(value["Punycode"].GetString());
        m_punycodeHasBeenSet = true;
    }

    if (value.HasMember("EffectiveDNS") && !value["EffectiveDNS"].IsNull())
    {
        if (!value["EffectiveDNS"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainListItem.EffectiveDNS` is not array type"));

        const rapidjson::Value &tmpValue = value["EffectiveDNS"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_effectiveDNS.push_back((*itr).GetString());
        }
        m_effectiveDNSHasBeenSet = true;
    }

    if (value.HasMember("GradeLevel") && !value["GradeLevel"].IsNull())
    {
        if (!value["GradeLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainListItem.GradeLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gradeLevel = value["GradeLevel"].GetUint64();
        m_gradeLevelHasBeenSet = true;
    }

    if (value.HasMember("GradeTitle") && !value["GradeTitle"].IsNull())
    {
        if (!value["GradeTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainListItem.GradeTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gradeTitle = string(value["GradeTitle"].GetString());
        m_gradeTitleHasBeenSet = true;
    }

    if (value.HasMember("IsVip") && !value["IsVip"].IsNull())
    {
        if (!value["IsVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainListItem.IsVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isVip = string(value["IsVip"].GetString());
        m_isVipHasBeenSet = true;
    }

    if (value.HasMember("VipStartAt") && !value["VipStartAt"].IsNull())
    {
        if (!value["VipStartAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainListItem.VipStartAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vipStartAt = string(value["VipStartAt"].GetString());
        m_vipStartAtHasBeenSet = true;
    }

    if (value.HasMember("VipEndAt") && !value["VipEndAt"].IsNull())
    {
        if (!value["VipEndAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainListItem.VipEndAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vipEndAt = string(value["VipEndAt"].GetString());
        m_vipEndAtHasBeenSet = true;
    }

    if (value.HasMember("VipAutoRenew") && !value["VipAutoRenew"].IsNull())
    {
        if (!value["VipAutoRenew"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainListItem.VipAutoRenew` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vipAutoRenew = string(value["VipAutoRenew"].GetString());
        m_vipAutoRenewHasBeenSet = true;
    }

    if (value.HasMember("RecordCount") && !value["RecordCount"].IsNull())
    {
        if (!value["RecordCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainListItem.RecordCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordCount = value["RecordCount"].GetUint64();
        m_recordCountHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainListItem.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("UpdatedOn") && !value["UpdatedOn"].IsNull())
    {
        if (!value["UpdatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainListItem.UpdatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedOn = string(value["UpdatedOn"].GetString());
        m_updatedOnHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainListItem.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainListItem.TagList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagList.push_back(item);
        }
        m_tagListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_tTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tTL, allocator);
    }

    if (m_cNAMESpeedupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CNAMESpeedup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cNAMESpeedup.c_str(), allocator).Move(), allocator);
    }

    if (m_dNSStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DNSStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dNSStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_gradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grade.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_searchEnginePushHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchEnginePush";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_searchEnginePush.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_punycodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Punycode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_punycode.c_str(), allocator).Move(), allocator);
    }

    if (m_effectiveDNSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveDNS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_effectiveDNS.begin(); itr != m_effectiveDNS.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_gradeLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GradeLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gradeLevel, allocator);
    }

    if (m_gradeTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GradeTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gradeTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_isVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isVip.c_str(), allocator).Move(), allocator);
    }

    if (m_vipStartAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipStartAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vipStartAt.c_str(), allocator).Move(), allocator);
    }

    if (m_vipEndAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipEndAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vipEndAt.c_str(), allocator).Move(), allocator);
    }

    if (m_vipAutoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipAutoRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vipAutoRenew.c_str(), allocator).Move(), allocator);
    }

    if (m_recordCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordCount, allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedOn.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t DomainListItem::GetDomainId() const
{
    return m_domainId;
}

void DomainListItem::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool DomainListItem::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string DomainListItem::GetName() const
{
    return m_name;
}

void DomainListItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DomainListItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DomainListItem::GetStatus() const
{
    return m_status;
}

void DomainListItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DomainListItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DomainListItem::GetTTL() const
{
    return m_tTL;
}

void DomainListItem::SetTTL(const uint64_t& _tTL)
{
    m_tTL = _tTL;
    m_tTLHasBeenSet = true;
}

bool DomainListItem::TTLHasBeenSet() const
{
    return m_tTLHasBeenSet;
}

string DomainListItem::GetCNAMESpeedup() const
{
    return m_cNAMESpeedup;
}

void DomainListItem::SetCNAMESpeedup(const string& _cNAMESpeedup)
{
    m_cNAMESpeedup = _cNAMESpeedup;
    m_cNAMESpeedupHasBeenSet = true;
}

bool DomainListItem::CNAMESpeedupHasBeenSet() const
{
    return m_cNAMESpeedupHasBeenSet;
}

string DomainListItem::GetDNSStatus() const
{
    return m_dNSStatus;
}

void DomainListItem::SetDNSStatus(const string& _dNSStatus)
{
    m_dNSStatus = _dNSStatus;
    m_dNSStatusHasBeenSet = true;
}

bool DomainListItem::DNSStatusHasBeenSet() const
{
    return m_dNSStatusHasBeenSet;
}

string DomainListItem::GetGrade() const
{
    return m_grade;
}

void DomainListItem::SetGrade(const string& _grade)
{
    m_grade = _grade;
    m_gradeHasBeenSet = true;
}

bool DomainListItem::GradeHasBeenSet() const
{
    return m_gradeHasBeenSet;
}

uint64_t DomainListItem::GetGroupId() const
{
    return m_groupId;
}

void DomainListItem::SetGroupId(const uint64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DomainListItem::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DomainListItem::GetSearchEnginePush() const
{
    return m_searchEnginePush;
}

void DomainListItem::SetSearchEnginePush(const string& _searchEnginePush)
{
    m_searchEnginePush = _searchEnginePush;
    m_searchEnginePushHasBeenSet = true;
}

bool DomainListItem::SearchEnginePushHasBeenSet() const
{
    return m_searchEnginePushHasBeenSet;
}

string DomainListItem::GetRemark() const
{
    return m_remark;
}

void DomainListItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DomainListItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DomainListItem::GetPunycode() const
{
    return m_punycode;
}

void DomainListItem::SetPunycode(const string& _punycode)
{
    m_punycode = _punycode;
    m_punycodeHasBeenSet = true;
}

bool DomainListItem::PunycodeHasBeenSet() const
{
    return m_punycodeHasBeenSet;
}

vector<string> DomainListItem::GetEffectiveDNS() const
{
    return m_effectiveDNS;
}

void DomainListItem::SetEffectiveDNS(const vector<string>& _effectiveDNS)
{
    m_effectiveDNS = _effectiveDNS;
    m_effectiveDNSHasBeenSet = true;
}

bool DomainListItem::EffectiveDNSHasBeenSet() const
{
    return m_effectiveDNSHasBeenSet;
}

uint64_t DomainListItem::GetGradeLevel() const
{
    return m_gradeLevel;
}

void DomainListItem::SetGradeLevel(const uint64_t& _gradeLevel)
{
    m_gradeLevel = _gradeLevel;
    m_gradeLevelHasBeenSet = true;
}

bool DomainListItem::GradeLevelHasBeenSet() const
{
    return m_gradeLevelHasBeenSet;
}

string DomainListItem::GetGradeTitle() const
{
    return m_gradeTitle;
}

void DomainListItem::SetGradeTitle(const string& _gradeTitle)
{
    m_gradeTitle = _gradeTitle;
    m_gradeTitleHasBeenSet = true;
}

bool DomainListItem::GradeTitleHasBeenSet() const
{
    return m_gradeTitleHasBeenSet;
}

string DomainListItem::GetIsVip() const
{
    return m_isVip;
}

void DomainListItem::SetIsVip(const string& _isVip)
{
    m_isVip = _isVip;
    m_isVipHasBeenSet = true;
}

bool DomainListItem::IsVipHasBeenSet() const
{
    return m_isVipHasBeenSet;
}

string DomainListItem::GetVipStartAt() const
{
    return m_vipStartAt;
}

void DomainListItem::SetVipStartAt(const string& _vipStartAt)
{
    m_vipStartAt = _vipStartAt;
    m_vipStartAtHasBeenSet = true;
}

bool DomainListItem::VipStartAtHasBeenSet() const
{
    return m_vipStartAtHasBeenSet;
}

string DomainListItem::GetVipEndAt() const
{
    return m_vipEndAt;
}

void DomainListItem::SetVipEndAt(const string& _vipEndAt)
{
    m_vipEndAt = _vipEndAt;
    m_vipEndAtHasBeenSet = true;
}

bool DomainListItem::VipEndAtHasBeenSet() const
{
    return m_vipEndAtHasBeenSet;
}

string DomainListItem::GetVipAutoRenew() const
{
    return m_vipAutoRenew;
}

void DomainListItem::SetVipAutoRenew(const string& _vipAutoRenew)
{
    m_vipAutoRenew = _vipAutoRenew;
    m_vipAutoRenewHasBeenSet = true;
}

bool DomainListItem::VipAutoRenewHasBeenSet() const
{
    return m_vipAutoRenewHasBeenSet;
}

uint64_t DomainListItem::GetRecordCount() const
{
    return m_recordCount;
}

void DomainListItem::SetRecordCount(const uint64_t& _recordCount)
{
    m_recordCount = _recordCount;
    m_recordCountHasBeenSet = true;
}

bool DomainListItem::RecordCountHasBeenSet() const
{
    return m_recordCountHasBeenSet;
}

string DomainListItem::GetCreatedOn() const
{
    return m_createdOn;
}

void DomainListItem::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool DomainListItem::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string DomainListItem::GetUpdatedOn() const
{
    return m_updatedOn;
}

void DomainListItem::SetUpdatedOn(const string& _updatedOn)
{
    m_updatedOn = _updatedOn;
    m_updatedOnHasBeenSet = true;
}

bool DomainListItem::UpdatedOnHasBeenSet() const
{
    return m_updatedOnHasBeenSet;
}

string DomainListItem::GetOwner() const
{
    return m_owner;
}

void DomainListItem::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool DomainListItem::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

vector<TagItem> DomainListItem::GetTagList() const
{
    return m_tagList;
}

void DomainListItem::SetTagList(const vector<TagItem>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool DomainListItem::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

