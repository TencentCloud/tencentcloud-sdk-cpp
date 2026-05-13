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

#include <tencentcloud/csip/v20221121/model/DspmApplyOrder.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmApplyOrder::DspmApplyOrder() :
    m_orderIdHasBeenSet(false),
    m_identifyIdHasBeenSet(false),
    m_applicantUinHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_applyTypeHasBeenSet(false),
    m_privilegeHasBeenSet(false),
    m_validatePeriodHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_approverStepsHasBeenSet(false),
    m_managerTypeHasBeenSet(false),
    m_personHasBeenSet(false),
    m_subjectUserHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome DspmApplyOrder::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApplyOrder.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("IdentifyId") && !value["IdentifyId"].IsNull())
    {
        if (!value["IdentifyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApplyOrder.IdentifyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifyId = string(value["IdentifyId"].GetString());
        m_identifyIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicantUin") && !value["ApplicantUin"].IsNull())
    {
        if (!value["ApplicantUin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApplyOrder.ApplicantUin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_applicantUin.Deserialize(value["ApplicantUin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_applicantUinHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApplyOrder.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApplyOrder.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApplyOrder.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ApplyType") && !value["ApplyType"].IsNull())
    {
        if (!value["ApplyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApplyOrder.ApplyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applyType = value["ApplyType"].GetInt64();
        m_applyTypeHasBeenSet = true;
    }

    if (value.HasMember("Privilege") && !value["Privilege"].IsNull())
    {
        if (!value["Privilege"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApplyOrder.Privilege` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_privilege.Deserialize(value["Privilege"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_privilegeHasBeenSet = true;
    }

    if (value.HasMember("ValidatePeriod") && !value["ValidatePeriod"].IsNull())
    {
        if (!value["ValidatePeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApplyOrder.ValidatePeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_validatePeriod = value["ValidatePeriod"].GetInt64();
        m_validatePeriodHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApplyOrder.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("ApproverSteps") && !value["ApproverSteps"].IsNull())
    {
        if (!value["ApproverSteps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmApplyOrder.ApproverSteps` is not array type"));

        const rapidjson::Value &tmpValue = value["ApproverSteps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspmApproverStep item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_approverSteps.push_back(item);
        }
        m_approverStepsHasBeenSet = true;
    }

    if (value.HasMember("ManagerType") && !value["ManagerType"].IsNull())
    {
        if (!value["ManagerType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApplyOrder.ManagerType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_managerType = value["ManagerType"].GetInt64();
        m_managerTypeHasBeenSet = true;
    }

    if (value.HasMember("Person") && !value["Person"].IsNull())
    {
        if (!value["Person"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApplyOrder.Person` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_person.Deserialize(value["Person"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_personHasBeenSet = true;
    }

    if (value.HasMember("SubjectUser") && !value["SubjectUser"].IsNull())
    {
        if (!value["SubjectUser"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApplyOrder.SubjectUser` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subjectUser.Deserialize(value["SubjectUser"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subjectUserHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApplyOrder.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApplyOrder.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmApplyOrder::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_identifyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identifyId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicantUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicantUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_applicantUin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_applyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applyType, allocator);
    }

    if (m_privilegeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privilege";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_privilege.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_validatePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidatePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validatePeriod, allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_approverStepsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverSteps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_approverSteps.begin(); itr != m_approverSteps.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_managerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_managerType, allocator);
    }

    if (m_personHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Person";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_person.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subjectUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subjectUser.ToJsonObject(value[key.c_str()], allocator);
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

}


string DspmApplyOrder::GetOrderId() const
{
    return m_orderId;
}

void DspmApplyOrder::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool DspmApplyOrder::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string DspmApplyOrder::GetIdentifyId() const
{
    return m_identifyId;
}

void DspmApplyOrder::SetIdentifyId(const string& _identifyId)
{
    m_identifyId = _identifyId;
    m_identifyIdHasBeenSet = true;
}

bool DspmApplyOrder::IdentifyIdHasBeenSet() const
{
    return m_identifyIdHasBeenSet;
}

DspmUinUser DspmApplyOrder::GetApplicantUin() const
{
    return m_applicantUin;
}

void DspmApplyOrder::SetApplicantUin(const DspmUinUser& _applicantUin)
{
    m_applicantUin = _applicantUin;
    m_applicantUinHasBeenSet = true;
}

bool DspmApplyOrder::ApplicantUinHasBeenSet() const
{
    return m_applicantUinHasBeenSet;
}

string DspmApplyOrder::GetAssetId() const
{
    return m_assetId;
}

void DspmApplyOrder::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DspmApplyOrder::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string DspmApplyOrder::GetAssetName() const
{
    return m_assetName;
}

void DspmApplyOrder::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool DspmApplyOrder::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string DspmApplyOrder::GetRegion() const
{
    return m_region;
}

void DspmApplyOrder::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DspmApplyOrder::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t DspmApplyOrder::GetApplyType() const
{
    return m_applyType;
}

void DspmApplyOrder::SetApplyType(const int64_t& _applyType)
{
    m_applyType = _applyType;
    m_applyTypeHasBeenSet = true;
}

bool DspmApplyOrder::ApplyTypeHasBeenSet() const
{
    return m_applyTypeHasBeenSet;
}

DspmDbAccountPrivilege DspmApplyOrder::GetPrivilege() const
{
    return m_privilege;
}

void DspmApplyOrder::SetPrivilege(const DspmDbAccountPrivilege& _privilege)
{
    m_privilege = _privilege;
    m_privilegeHasBeenSet = true;
}

bool DspmApplyOrder::PrivilegeHasBeenSet() const
{
    return m_privilegeHasBeenSet;
}

int64_t DspmApplyOrder::GetValidatePeriod() const
{
    return m_validatePeriod;
}

void DspmApplyOrder::SetValidatePeriod(const int64_t& _validatePeriod)
{
    m_validatePeriod = _validatePeriod;
    m_validatePeriodHasBeenSet = true;
}

bool DspmApplyOrder::ValidatePeriodHasBeenSet() const
{
    return m_validatePeriodHasBeenSet;
}

string DspmApplyOrder::GetReason() const
{
    return m_reason;
}

void DspmApplyOrder::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool DspmApplyOrder::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

vector<DspmApproverStep> DspmApplyOrder::GetApproverSteps() const
{
    return m_approverSteps;
}

void DspmApplyOrder::SetApproverSteps(const vector<DspmApproverStep>& _approverSteps)
{
    m_approverSteps = _approverSteps;
    m_approverStepsHasBeenSet = true;
}

bool DspmApplyOrder::ApproverStepsHasBeenSet() const
{
    return m_approverStepsHasBeenSet;
}

int64_t DspmApplyOrder::GetManagerType() const
{
    return m_managerType;
}

void DspmApplyOrder::SetManagerType(const int64_t& _managerType)
{
    m_managerType = _managerType;
    m_managerTypeHasBeenSet = true;
}

bool DspmApplyOrder::ManagerTypeHasBeenSet() const
{
    return m_managerTypeHasBeenSet;
}

DspmPersonUser DspmApplyOrder::GetPerson() const
{
    return m_person;
}

void DspmApplyOrder::SetPerson(const DspmPersonUser& _person)
{
    m_person = _person;
    m_personHasBeenSet = true;
}

bool DspmApplyOrder::PersonHasBeenSet() const
{
    return m_personHasBeenSet;
}

DspmUinUser DspmApplyOrder::GetSubjectUser() const
{
    return m_subjectUser;
}

void DspmApplyOrder::SetSubjectUser(const DspmUinUser& _subjectUser)
{
    m_subjectUser = _subjectUser;
    m_subjectUserHasBeenSet = true;
}

bool DspmApplyOrder::SubjectUserHasBeenSet() const
{
    return m_subjectUserHasBeenSet;
}

int64_t DspmApplyOrder::GetStatus() const
{
    return m_status;
}

void DspmApplyOrder::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DspmApplyOrder::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DspmApplyOrder::GetCreateTime() const
{
    return m_createTime;
}

void DspmApplyOrder::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DspmApplyOrder::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

