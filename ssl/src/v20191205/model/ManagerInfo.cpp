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

#include <tencentcloud/ssl/v20191205/model/ManagerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

ManagerInfo::ManagerInfo() :
    m_statusHasBeenSet(false),
    m_managerFirstNameHasBeenSet(false),
    m_managerLastNameHasBeenSet(false),
    m_managerPositionHasBeenSet(false),
    m_managerPhoneHasBeenSet(false),
    m_managerMailHasBeenSet(false),
    m_managerDepartmentHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_domainCountHasBeenSet(false),
    m_certCountHasBeenSet(false),
    m_managerIdHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_submitAuditTimeHasBeenSet(false),
    m_verifyTimeHasBeenSet(false),
    m_statusInfoHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome ManagerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ManagerFirstName") && !value["ManagerFirstName"].IsNull())
    {
        if (!value["ManagerFirstName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerInfo.ManagerFirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managerFirstName = string(value["ManagerFirstName"].GetString());
        m_managerFirstNameHasBeenSet = true;
    }

    if (value.HasMember("ManagerLastName") && !value["ManagerLastName"].IsNull())
    {
        if (!value["ManagerLastName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerInfo.ManagerLastName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managerLastName = string(value["ManagerLastName"].GetString());
        m_managerLastNameHasBeenSet = true;
    }

    if (value.HasMember("ManagerPosition") && !value["ManagerPosition"].IsNull())
    {
        if (!value["ManagerPosition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerInfo.ManagerPosition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managerPosition = string(value["ManagerPosition"].GetString());
        m_managerPositionHasBeenSet = true;
    }

    if (value.HasMember("ManagerPhone") && !value["ManagerPhone"].IsNull())
    {
        if (!value["ManagerPhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerInfo.ManagerPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managerPhone = string(value["ManagerPhone"].GetString());
        m_managerPhoneHasBeenSet = true;
    }

    if (value.HasMember("ManagerMail") && !value["ManagerMail"].IsNull())
    {
        if (!value["ManagerMail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerInfo.ManagerMail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managerMail = string(value["ManagerMail"].GetString());
        m_managerMailHasBeenSet = true;
    }

    if (value.HasMember("ManagerDepartment") && !value["ManagerDepartment"].IsNull())
    {
        if (!value["ManagerDepartment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerInfo.ManagerDepartment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managerDepartment = string(value["ManagerDepartment"].GetString());
        m_managerDepartmentHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DomainCount") && !value["DomainCount"].IsNull())
    {
        if (!value["DomainCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerInfo.DomainCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_domainCount = value["DomainCount"].GetInt64();
        m_domainCountHasBeenSet = true;
    }

    if (value.HasMember("CertCount") && !value["CertCount"].IsNull())
    {
        if (!value["CertCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerInfo.CertCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_certCount = value["CertCount"].GetInt64();
        m_certCountHasBeenSet = true;
    }

    if (value.HasMember("ManagerId") && !value["ManagerId"].IsNull())
    {
        if (!value["ManagerId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerInfo.ManagerId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_managerId = value["ManagerId"].GetInt64();
        m_managerIdHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("SubmitAuditTime") && !value["SubmitAuditTime"].IsNull())
    {
        if (!value["SubmitAuditTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerInfo.SubmitAuditTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_submitAuditTime = string(value["SubmitAuditTime"].GetString());
        m_submitAuditTimeHasBeenSet = true;
    }

    if (value.HasMember("VerifyTime") && !value["VerifyTime"].IsNull())
    {
        if (!value["VerifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerInfo.VerifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyTime = string(value["VerifyTime"].GetString());
        m_verifyTimeHasBeenSet = true;
    }

    if (value.HasMember("StatusInfo") && !value["StatusInfo"].IsNull())
    {
        if (!value["StatusInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ManagerInfo.StatusInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["StatusInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ManagerStatusInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_statusInfo.push_back(item);
        }
        m_statusInfoHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ManagerInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tags item;
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


    return CoreInternalOutcome(true);
}

void ManagerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_managerFirstNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerFirstName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_managerFirstName.c_str(), allocator).Move(), allocator);
    }

    if (m_managerLastNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerLastName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_managerLastName.c_str(), allocator).Move(), allocator);
    }

    if (m_managerPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerPosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_managerPosition.c_str(), allocator).Move(), allocator);
    }

    if (m_managerPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_managerPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_managerMailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerMail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_managerMail.c_str(), allocator).Move(), allocator);
    }

    if (m_managerDepartmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerDepartment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_managerDepartment.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_domainCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainCount, allocator);
    }

    if (m_certCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certCount, allocator);
    }

    if (m_managerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_managerId, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_submitAuditTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitAuditTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_submitAuditTime.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_statusInfo.begin(); itr != m_statusInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

}


string ManagerInfo::GetStatus() const
{
    return m_status;
}

void ManagerInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ManagerInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ManagerInfo::GetManagerFirstName() const
{
    return m_managerFirstName;
}

void ManagerInfo::SetManagerFirstName(const string& _managerFirstName)
{
    m_managerFirstName = _managerFirstName;
    m_managerFirstNameHasBeenSet = true;
}

bool ManagerInfo::ManagerFirstNameHasBeenSet() const
{
    return m_managerFirstNameHasBeenSet;
}

string ManagerInfo::GetManagerLastName() const
{
    return m_managerLastName;
}

void ManagerInfo::SetManagerLastName(const string& _managerLastName)
{
    m_managerLastName = _managerLastName;
    m_managerLastNameHasBeenSet = true;
}

bool ManagerInfo::ManagerLastNameHasBeenSet() const
{
    return m_managerLastNameHasBeenSet;
}

string ManagerInfo::GetManagerPosition() const
{
    return m_managerPosition;
}

void ManagerInfo::SetManagerPosition(const string& _managerPosition)
{
    m_managerPosition = _managerPosition;
    m_managerPositionHasBeenSet = true;
}

bool ManagerInfo::ManagerPositionHasBeenSet() const
{
    return m_managerPositionHasBeenSet;
}

string ManagerInfo::GetManagerPhone() const
{
    return m_managerPhone;
}

void ManagerInfo::SetManagerPhone(const string& _managerPhone)
{
    m_managerPhone = _managerPhone;
    m_managerPhoneHasBeenSet = true;
}

bool ManagerInfo::ManagerPhoneHasBeenSet() const
{
    return m_managerPhoneHasBeenSet;
}

string ManagerInfo::GetManagerMail() const
{
    return m_managerMail;
}

void ManagerInfo::SetManagerMail(const string& _managerMail)
{
    m_managerMail = _managerMail;
    m_managerMailHasBeenSet = true;
}

bool ManagerInfo::ManagerMailHasBeenSet() const
{
    return m_managerMailHasBeenSet;
}

string ManagerInfo::GetManagerDepartment() const
{
    return m_managerDepartment;
}

void ManagerInfo::SetManagerDepartment(const string& _managerDepartment)
{
    m_managerDepartment = _managerDepartment;
    m_managerDepartmentHasBeenSet = true;
}

bool ManagerInfo::ManagerDepartmentHasBeenSet() const
{
    return m_managerDepartmentHasBeenSet;
}

string ManagerInfo::GetCreateTime() const
{
    return m_createTime;
}

void ManagerInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ManagerInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t ManagerInfo::GetDomainCount() const
{
    return m_domainCount;
}

void ManagerInfo::SetDomainCount(const int64_t& _domainCount)
{
    m_domainCount = _domainCount;
    m_domainCountHasBeenSet = true;
}

bool ManagerInfo::DomainCountHasBeenSet() const
{
    return m_domainCountHasBeenSet;
}

int64_t ManagerInfo::GetCertCount() const
{
    return m_certCount;
}

void ManagerInfo::SetCertCount(const int64_t& _certCount)
{
    m_certCount = _certCount;
    m_certCountHasBeenSet = true;
}

bool ManagerInfo::CertCountHasBeenSet() const
{
    return m_certCountHasBeenSet;
}

int64_t ManagerInfo::GetManagerId() const
{
    return m_managerId;
}

void ManagerInfo::SetManagerId(const int64_t& _managerId)
{
    m_managerId = _managerId;
    m_managerIdHasBeenSet = true;
}

bool ManagerInfo::ManagerIdHasBeenSet() const
{
    return m_managerIdHasBeenSet;
}

string ManagerInfo::GetExpireTime() const
{
    return m_expireTime;
}

void ManagerInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ManagerInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string ManagerInfo::GetSubmitAuditTime() const
{
    return m_submitAuditTime;
}

void ManagerInfo::SetSubmitAuditTime(const string& _submitAuditTime)
{
    m_submitAuditTime = _submitAuditTime;
    m_submitAuditTimeHasBeenSet = true;
}

bool ManagerInfo::SubmitAuditTimeHasBeenSet() const
{
    return m_submitAuditTimeHasBeenSet;
}

string ManagerInfo::GetVerifyTime() const
{
    return m_verifyTime;
}

void ManagerInfo::SetVerifyTime(const string& _verifyTime)
{
    m_verifyTime = _verifyTime;
    m_verifyTimeHasBeenSet = true;
}

bool ManagerInfo::VerifyTimeHasBeenSet() const
{
    return m_verifyTimeHasBeenSet;
}

vector<ManagerStatusInfo> ManagerInfo::GetStatusInfo() const
{
    return m_statusInfo;
}

void ManagerInfo::SetStatusInfo(const vector<ManagerStatusInfo>& _statusInfo)
{
    m_statusInfo = _statusInfo;
    m_statusInfoHasBeenSet = true;
}

bool ManagerInfo::StatusInfoHasBeenSet() const
{
    return m_statusInfoHasBeenSet;
}

vector<Tags> ManagerInfo::GetTags() const
{
    return m_tags;
}

void ManagerInfo::SetTags(const vector<Tags>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ManagerInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

