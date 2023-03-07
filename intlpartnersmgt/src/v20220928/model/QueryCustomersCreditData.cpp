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

#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCustomersCreditData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

QueryCustomersCreditData::QueryCustomersCreditData() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_arrearsHasBeenSet(false),
    m_associationTimeHasBeenSet(false),
    m_recentExpiryHasBeenSet(false),
    m_clientUinHasBeenSet(false),
    m_creditHasBeenSet(false),
    m_remainingCreditHasBeenSet(false),
    m_identifyTypeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_forceHasBeenSet(false)
{
}

CoreInternalOutcome QueryCustomersCreditData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCustomersCreditData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCustomersCreditData.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCustomersCreditData.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCustomersCreditData.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("Arrears") && !value["Arrears"].IsNull())
    {
        if (!value["Arrears"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCustomersCreditData.Arrears` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_arrears = string(value["Arrears"].GetString());
        m_arrearsHasBeenSet = true;
    }

    if (value.HasMember("AssociationTime") && !value["AssociationTime"].IsNull())
    {
        if (!value["AssociationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCustomersCreditData.AssociationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_associationTime = string(value["AssociationTime"].GetString());
        m_associationTimeHasBeenSet = true;
    }

    if (value.HasMember("RecentExpiry") && !value["RecentExpiry"].IsNull())
    {
        if (!value["RecentExpiry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCustomersCreditData.RecentExpiry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recentExpiry = string(value["RecentExpiry"].GetString());
        m_recentExpiryHasBeenSet = true;
    }

    if (value.HasMember("ClientUin") && !value["ClientUin"].IsNull())
    {
        if (!value["ClientUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCustomersCreditData.ClientUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clientUin = value["ClientUin"].GetUint64();
        m_clientUinHasBeenSet = true;
    }

    if (value.HasMember("Credit") && !value["Credit"].IsNull())
    {
        if (!value["Credit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCustomersCreditData.Credit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_credit = value["Credit"].GetDouble();
        m_creditHasBeenSet = true;
    }

    if (value.HasMember("RemainingCredit") && !value["RemainingCredit"].IsNull())
    {
        if (!value["RemainingCredit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCustomersCreditData.RemainingCredit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_remainingCredit = value["RemainingCredit"].GetDouble();
        m_remainingCreditHasBeenSet = true;
    }

    if (value.HasMember("IdentifyType") && !value["IdentifyType"].IsNull())
    {
        if (!value["IdentifyType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCustomersCreditData.IdentifyType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_identifyType = value["IdentifyType"].GetUint64();
        m_identifyTypeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCustomersCreditData.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Force") && !value["Force"].IsNull())
    {
        if (!value["Force"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryCustomersCreditData.Force` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_force = value["Force"].GetInt64();
        m_forceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryCustomersCreditData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_arrearsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Arrears";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_arrears.c_str(), allocator).Move(), allocator);
    }

    if (m_associationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_associationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_recentExpiryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecentExpiry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recentExpiry.c_str(), allocator).Move(), allocator);
    }

    if (m_clientUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientUin, allocator);
    }

    if (m_creditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Credit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_credit, allocator);
    }

    if (m_remainingCreditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainingCredit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainingCredit, allocator);
    }

    if (m_identifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_identifyType, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_forceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Force";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_force, allocator);
    }

}


string QueryCustomersCreditData::GetName() const
{
    return m_name;
}

void QueryCustomersCreditData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool QueryCustomersCreditData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string QueryCustomersCreditData::GetType() const
{
    return m_type;
}

void QueryCustomersCreditData::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool QueryCustomersCreditData::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string QueryCustomersCreditData::GetMobile() const
{
    return m_mobile;
}

void QueryCustomersCreditData::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool QueryCustomersCreditData::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string QueryCustomersCreditData::GetEmail() const
{
    return m_email;
}

void QueryCustomersCreditData::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool QueryCustomersCreditData::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string QueryCustomersCreditData::GetArrears() const
{
    return m_arrears;
}

void QueryCustomersCreditData::SetArrears(const string& _arrears)
{
    m_arrears = _arrears;
    m_arrearsHasBeenSet = true;
}

bool QueryCustomersCreditData::ArrearsHasBeenSet() const
{
    return m_arrearsHasBeenSet;
}

string QueryCustomersCreditData::GetAssociationTime() const
{
    return m_associationTime;
}

void QueryCustomersCreditData::SetAssociationTime(const string& _associationTime)
{
    m_associationTime = _associationTime;
    m_associationTimeHasBeenSet = true;
}

bool QueryCustomersCreditData::AssociationTimeHasBeenSet() const
{
    return m_associationTimeHasBeenSet;
}

string QueryCustomersCreditData::GetRecentExpiry() const
{
    return m_recentExpiry;
}

void QueryCustomersCreditData::SetRecentExpiry(const string& _recentExpiry)
{
    m_recentExpiry = _recentExpiry;
    m_recentExpiryHasBeenSet = true;
}

bool QueryCustomersCreditData::RecentExpiryHasBeenSet() const
{
    return m_recentExpiryHasBeenSet;
}

uint64_t QueryCustomersCreditData::GetClientUin() const
{
    return m_clientUin;
}

void QueryCustomersCreditData::SetClientUin(const uint64_t& _clientUin)
{
    m_clientUin = _clientUin;
    m_clientUinHasBeenSet = true;
}

bool QueryCustomersCreditData::ClientUinHasBeenSet() const
{
    return m_clientUinHasBeenSet;
}

double QueryCustomersCreditData::GetCredit() const
{
    return m_credit;
}

void QueryCustomersCreditData::SetCredit(const double& _credit)
{
    m_credit = _credit;
    m_creditHasBeenSet = true;
}

bool QueryCustomersCreditData::CreditHasBeenSet() const
{
    return m_creditHasBeenSet;
}

double QueryCustomersCreditData::GetRemainingCredit() const
{
    return m_remainingCredit;
}

void QueryCustomersCreditData::SetRemainingCredit(const double& _remainingCredit)
{
    m_remainingCredit = _remainingCredit;
    m_remainingCreditHasBeenSet = true;
}

bool QueryCustomersCreditData::RemainingCreditHasBeenSet() const
{
    return m_remainingCreditHasBeenSet;
}

uint64_t QueryCustomersCreditData::GetIdentifyType() const
{
    return m_identifyType;
}

void QueryCustomersCreditData::SetIdentifyType(const uint64_t& _identifyType)
{
    m_identifyType = _identifyType;
    m_identifyTypeHasBeenSet = true;
}

bool QueryCustomersCreditData::IdentifyTypeHasBeenSet() const
{
    return m_identifyTypeHasBeenSet;
}

string QueryCustomersCreditData::GetRemark() const
{
    return m_remark;
}

void QueryCustomersCreditData::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool QueryCustomersCreditData::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t QueryCustomersCreditData::GetForce() const
{
    return m_force;
}

void QueryCustomersCreditData::SetForce(const int64_t& _force)
{
    m_force = _force;
    m_forceHasBeenSet = true;
}

bool QueryCustomersCreditData::ForceHasBeenSet() const
{
    return m_forceHasBeenSet;
}

