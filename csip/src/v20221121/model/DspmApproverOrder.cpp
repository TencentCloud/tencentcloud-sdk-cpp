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

#include <tencentcloud/csip/v20221121/model/DspmApproverOrder.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmApproverOrder::DspmApproverOrder() :
    m_orderIdHasBeenSet(false),
    m_identifyIdHasBeenSet(false),
    m_applicantUinHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_applyTypeHasBeenSet(false),
    m_privilegeHasBeenSet(false),
    m_validatePeriodHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_managerTypeHasBeenSet(false),
    m_personHasBeenSet(false),
    m_subjectUserHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome DspmApproverOrder::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApproverOrder.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("IdentifyId") && !value["IdentifyId"].IsNull())
    {
        if (!value["IdentifyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApproverOrder.IdentifyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifyId = string(value["IdentifyId"].GetString());
        m_identifyIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicantUin") && !value["ApplicantUin"].IsNull())
    {
        if (!value["ApplicantUin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApproverOrder.ApplicantUin` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DspmApproverOrder.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApproverOrder.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("ApplyType") && !value["ApplyType"].IsNull())
    {
        if (!value["ApplyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApproverOrder.ApplyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applyType = value["ApplyType"].GetInt64();
        m_applyTypeHasBeenSet = true;
    }

    if (value.HasMember("Privilege") && !value["Privilege"].IsNull())
    {
        if (!value["Privilege"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApproverOrder.Privilege` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DspmApproverOrder.ValidatePeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_validatePeriod = value["ValidatePeriod"].GetInt64();
        m_validatePeriodHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApproverOrder.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("ManagerType") && !value["ManagerType"].IsNull())
    {
        if (!value["ManagerType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApproverOrder.ManagerType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_managerType = value["ManagerType"].GetInt64();
        m_managerTypeHasBeenSet = true;
    }

    if (value.HasMember("Person") && !value["Person"].IsNull())
    {
        if (!value["Person"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApproverOrder.Person` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DspmApproverOrder.SubjectUser` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subjectUser.Deserialize(value["SubjectUser"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subjectUserHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmApproverOrder.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmApproverOrder::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string DspmApproverOrder::GetOrderId() const
{
    return m_orderId;
}

void DspmApproverOrder::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool DspmApproverOrder::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string DspmApproverOrder::GetIdentifyId() const
{
    return m_identifyId;
}

void DspmApproverOrder::SetIdentifyId(const string& _identifyId)
{
    m_identifyId = _identifyId;
    m_identifyIdHasBeenSet = true;
}

bool DspmApproverOrder::IdentifyIdHasBeenSet() const
{
    return m_identifyIdHasBeenSet;
}

DspmUinUser DspmApproverOrder::GetApplicantUin() const
{
    return m_applicantUin;
}

void DspmApproverOrder::SetApplicantUin(const DspmUinUser& _applicantUin)
{
    m_applicantUin = _applicantUin;
    m_applicantUinHasBeenSet = true;
}

bool DspmApproverOrder::ApplicantUinHasBeenSet() const
{
    return m_applicantUinHasBeenSet;
}

string DspmApproverOrder::GetAssetId() const
{
    return m_assetId;
}

void DspmApproverOrder::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DspmApproverOrder::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string DspmApproverOrder::GetAssetName() const
{
    return m_assetName;
}

void DspmApproverOrder::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool DspmApproverOrder::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

int64_t DspmApproverOrder::GetApplyType() const
{
    return m_applyType;
}

void DspmApproverOrder::SetApplyType(const int64_t& _applyType)
{
    m_applyType = _applyType;
    m_applyTypeHasBeenSet = true;
}

bool DspmApproverOrder::ApplyTypeHasBeenSet() const
{
    return m_applyTypeHasBeenSet;
}

DspmDbAccountPrivilege DspmApproverOrder::GetPrivilege() const
{
    return m_privilege;
}

void DspmApproverOrder::SetPrivilege(const DspmDbAccountPrivilege& _privilege)
{
    m_privilege = _privilege;
    m_privilegeHasBeenSet = true;
}

bool DspmApproverOrder::PrivilegeHasBeenSet() const
{
    return m_privilegeHasBeenSet;
}

int64_t DspmApproverOrder::GetValidatePeriod() const
{
    return m_validatePeriod;
}

void DspmApproverOrder::SetValidatePeriod(const int64_t& _validatePeriod)
{
    m_validatePeriod = _validatePeriod;
    m_validatePeriodHasBeenSet = true;
}

bool DspmApproverOrder::ValidatePeriodHasBeenSet() const
{
    return m_validatePeriodHasBeenSet;
}

string DspmApproverOrder::GetReason() const
{
    return m_reason;
}

void DspmApproverOrder::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool DspmApproverOrder::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

int64_t DspmApproverOrder::GetManagerType() const
{
    return m_managerType;
}

void DspmApproverOrder::SetManagerType(const int64_t& _managerType)
{
    m_managerType = _managerType;
    m_managerTypeHasBeenSet = true;
}

bool DspmApproverOrder::ManagerTypeHasBeenSet() const
{
    return m_managerTypeHasBeenSet;
}

DspmPersonUser DspmApproverOrder::GetPerson() const
{
    return m_person;
}

void DspmApproverOrder::SetPerson(const DspmPersonUser& _person)
{
    m_person = _person;
    m_personHasBeenSet = true;
}

bool DspmApproverOrder::PersonHasBeenSet() const
{
    return m_personHasBeenSet;
}

DspmUinUser DspmApproverOrder::GetSubjectUser() const
{
    return m_subjectUser;
}

void DspmApproverOrder::SetSubjectUser(const DspmUinUser& _subjectUser)
{
    m_subjectUser = _subjectUser;
    m_subjectUserHasBeenSet = true;
}

bool DspmApproverOrder::SubjectUserHasBeenSet() const
{
    return m_subjectUserHasBeenSet;
}

string DspmApproverOrder::GetCreateTime() const
{
    return m_createTime;
}

void DspmApproverOrder::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DspmApproverOrder::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

