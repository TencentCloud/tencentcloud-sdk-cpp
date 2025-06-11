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

#include <tencentcloud/dnspod/v20210323/model/PackageListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

PackageListItem::PackageListItem() :
    m_domainIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_gradeHasBeenSet(false),
    m_gradeTitleHasBeenSet(false),
    m_vipStartAtHasBeenSet(false),
    m_vipEndAtHasBeenSet(false),
    m_vipAutoRenewHasBeenSet(false),
    m_remainTimesHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_gradeLevelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isGracePeriodHasBeenSet(false),
    m_downgradeHasBeenSet(false),
    m_securityInfoHasBeenSet(false),
    m_isSubDomainHasBeenSet(false)
{
}

CoreInternalOutcome PackageListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageListItem.DomainId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = value["DomainId"].GetUint64();
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageListItem.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Grade") && !value["Grade"].IsNull())
    {
        if (!value["Grade"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageListItem.Grade` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grade = string(value["Grade"].GetString());
        m_gradeHasBeenSet = true;
    }

    if (value.HasMember("GradeTitle") && !value["GradeTitle"].IsNull())
    {
        if (!value["GradeTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageListItem.GradeTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gradeTitle = string(value["GradeTitle"].GetString());
        m_gradeTitleHasBeenSet = true;
    }

    if (value.HasMember("VipStartAt") && !value["VipStartAt"].IsNull())
    {
        if (!value["VipStartAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageListItem.VipStartAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vipStartAt = string(value["VipStartAt"].GetString());
        m_vipStartAtHasBeenSet = true;
    }

    if (value.HasMember("VipEndAt") && !value["VipEndAt"].IsNull())
    {
        if (!value["VipEndAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageListItem.VipEndAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vipEndAt = string(value["VipEndAt"].GetString());
        m_vipEndAtHasBeenSet = true;
    }

    if (value.HasMember("VipAutoRenew") && !value["VipAutoRenew"].IsNull())
    {
        if (!value["VipAutoRenew"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageListItem.VipAutoRenew` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vipAutoRenew = string(value["VipAutoRenew"].GetString());
        m_vipAutoRenewHasBeenSet = true;
    }

    if (value.HasMember("RemainTimes") && !value["RemainTimes"].IsNull())
    {
        if (!value["RemainTimes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageListItem.RemainTimes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_remainTimes = value["RemainTimes"].GetUint64();
        m_remainTimesHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageListItem.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("GradeLevel") && !value["GradeLevel"].IsNull())
    {
        if (!value["GradeLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageListItem.GradeLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gradeLevel = value["GradeLevel"].GetUint64();
        m_gradeLevelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageListItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsGracePeriod") && !value["IsGracePeriod"].IsNull())
    {
        if (!value["IsGracePeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageListItem.IsGracePeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isGracePeriod = string(value["IsGracePeriod"].GetString());
        m_isGracePeriodHasBeenSet = true;
    }

    if (value.HasMember("Downgrade") && !value["Downgrade"].IsNull())
    {
        if (!value["Downgrade"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PackageListItem.Downgrade` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_downgrade = value["Downgrade"].GetBool();
        m_downgradeHasBeenSet = true;
    }

    if (value.HasMember("SecurityInfo") && !value["SecurityInfo"].IsNull())
    {
        if (!value["SecurityInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PackageListItem.SecurityInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_securityInfo.Deserialize(value["SecurityInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_securityInfoHasBeenSet = true;
    }

    if (value.HasMember("IsSubDomain") && !value["IsSubDomain"].IsNull())
    {
        if (!value["IsSubDomain"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PackageListItem.IsSubDomain` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSubDomain = value["IsSubDomain"].GetBool();
        m_isSubDomainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PackageListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainId, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_gradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grade.c_str(), allocator).Move(), allocator);
    }

    if (m_gradeTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GradeTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gradeTitle.c_str(), allocator).Move(), allocator);
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

    if (m_remainTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainTimes, allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_gradeLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GradeLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gradeLevel, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_isGracePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGracePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isGracePeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_downgradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Downgrade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_downgrade, allocator);
    }

    if (m_securityInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_securityInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isSubDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSubDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSubDomain, allocator);
    }

}


uint64_t PackageListItem::GetDomainId() const
{
    return m_domainId;
}

void PackageListItem::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool PackageListItem::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string PackageListItem::GetDomain() const
{
    return m_domain;
}

void PackageListItem::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool PackageListItem::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string PackageListItem::GetGrade() const
{
    return m_grade;
}

void PackageListItem::SetGrade(const string& _grade)
{
    m_grade = _grade;
    m_gradeHasBeenSet = true;
}

bool PackageListItem::GradeHasBeenSet() const
{
    return m_gradeHasBeenSet;
}

string PackageListItem::GetGradeTitle() const
{
    return m_gradeTitle;
}

void PackageListItem::SetGradeTitle(const string& _gradeTitle)
{
    m_gradeTitle = _gradeTitle;
    m_gradeTitleHasBeenSet = true;
}

bool PackageListItem::GradeTitleHasBeenSet() const
{
    return m_gradeTitleHasBeenSet;
}

string PackageListItem::GetVipStartAt() const
{
    return m_vipStartAt;
}

void PackageListItem::SetVipStartAt(const string& _vipStartAt)
{
    m_vipStartAt = _vipStartAt;
    m_vipStartAtHasBeenSet = true;
}

bool PackageListItem::VipStartAtHasBeenSet() const
{
    return m_vipStartAtHasBeenSet;
}

string PackageListItem::GetVipEndAt() const
{
    return m_vipEndAt;
}

void PackageListItem::SetVipEndAt(const string& _vipEndAt)
{
    m_vipEndAt = _vipEndAt;
    m_vipEndAtHasBeenSet = true;
}

bool PackageListItem::VipEndAtHasBeenSet() const
{
    return m_vipEndAtHasBeenSet;
}

string PackageListItem::GetVipAutoRenew() const
{
    return m_vipAutoRenew;
}

void PackageListItem::SetVipAutoRenew(const string& _vipAutoRenew)
{
    m_vipAutoRenew = _vipAutoRenew;
    m_vipAutoRenewHasBeenSet = true;
}

bool PackageListItem::VipAutoRenewHasBeenSet() const
{
    return m_vipAutoRenewHasBeenSet;
}

uint64_t PackageListItem::GetRemainTimes() const
{
    return m_remainTimes;
}

void PackageListItem::SetRemainTimes(const uint64_t& _remainTimes)
{
    m_remainTimes = _remainTimes;
    m_remainTimesHasBeenSet = true;
}

bool PackageListItem::RemainTimesHasBeenSet() const
{
    return m_remainTimesHasBeenSet;
}

string PackageListItem::GetResourceId() const
{
    return m_resourceId;
}

void PackageListItem::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool PackageListItem::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

uint64_t PackageListItem::GetGradeLevel() const
{
    return m_gradeLevel;
}

void PackageListItem::SetGradeLevel(const uint64_t& _gradeLevel)
{
    m_gradeLevel = _gradeLevel;
    m_gradeLevelHasBeenSet = true;
}

bool PackageListItem::GradeLevelHasBeenSet() const
{
    return m_gradeLevelHasBeenSet;
}

string PackageListItem::GetStatus() const
{
    return m_status;
}

void PackageListItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PackageListItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PackageListItem::GetIsGracePeriod() const
{
    return m_isGracePeriod;
}

void PackageListItem::SetIsGracePeriod(const string& _isGracePeriod)
{
    m_isGracePeriod = _isGracePeriod;
    m_isGracePeriodHasBeenSet = true;
}

bool PackageListItem::IsGracePeriodHasBeenSet() const
{
    return m_isGracePeriodHasBeenSet;
}

bool PackageListItem::GetDowngrade() const
{
    return m_downgrade;
}

void PackageListItem::SetDowngrade(const bool& _downgrade)
{
    m_downgrade = _downgrade;
    m_downgradeHasBeenSet = true;
}

bool PackageListItem::DowngradeHasBeenSet() const
{
    return m_downgradeHasBeenSet;
}

SecurityInfo PackageListItem::GetSecurityInfo() const
{
    return m_securityInfo;
}

void PackageListItem::SetSecurityInfo(const SecurityInfo& _securityInfo)
{
    m_securityInfo = _securityInfo;
    m_securityInfoHasBeenSet = true;
}

bool PackageListItem::SecurityInfoHasBeenSet() const
{
    return m_securityInfoHasBeenSet;
}

bool PackageListItem::GetIsSubDomain() const
{
    return m_isSubDomain;
}

void PackageListItem::SetIsSubDomain(const bool& _isSubDomain)
{
    m_isSubDomain = _isSubDomain;
    m_isSubDomainHasBeenSet = true;
}

bool PackageListItem::IsSubDomainHasBeenSet() const
{
    return m_isSubDomainHasBeenSet;
}

