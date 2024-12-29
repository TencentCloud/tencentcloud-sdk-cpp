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

#include <tencentcloud/billing/v20180709/model/VoucherInfos.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

VoucherInfos::VoucherInfos() :
    m_ownerUinHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_nominalValueHasBeenSet(false),
    m_balanceHasBeenSet(false),
    m_voucherIdHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_paySceneHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_applicableProductsHasBeenSet(false),
    m_excludedProductsHasBeenSet(false),
    m_policyRemarkHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome VoucherInfos::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoucherInfos.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoucherInfos.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("NominalValue") && !value["NominalValue"].IsNull())
    {
        if (!value["NominalValue"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VoucherInfos.NominalValue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nominalValue = value["NominalValue"].GetInt64();
        m_nominalValueHasBeenSet = true;
    }

    if (value.HasMember("Balance") && !value["Balance"].IsNull())
    {
        if (!value["Balance"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VoucherInfos.Balance` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_balance = value["Balance"].GetInt64();
        m_balanceHasBeenSet = true;
    }

    if (value.HasMember("VoucherId") && !value["VoucherId"].IsNull())
    {
        if (!value["VoucherId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoucherInfos.VoucherId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherId = string(value["VoucherId"].GetString());
        m_voucherIdHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoucherInfos.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("PayScene") && !value["PayScene"].IsNull())
    {
        if (!value["PayScene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoucherInfos.PayScene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payScene = string(value["PayScene"].GetString());
        m_paySceneHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoucherInfos.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoucherInfos.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ApplicableProducts") && !value["ApplicableProducts"].IsNull())
    {
        if (!value["ApplicableProducts"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VoucherInfos.ApplicableProducts` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_applicableProducts.Deserialize(value["ApplicableProducts"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_applicableProductsHasBeenSet = true;
    }

    if (value.HasMember("ExcludedProducts") && !value["ExcludedProducts"].IsNull())
    {
        if (!value["ExcludedProducts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VoucherInfos.ExcludedProducts` is not array type"));

        const rapidjson::Value &tmpValue = value["ExcludedProducts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExcludedProducts item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_excludedProducts.push_back(item);
        }
        m_excludedProductsHasBeenSet = true;
    }

    if (value.HasMember("PolicyRemark") && !value["PolicyRemark"].IsNull())
    {
        if (!value["PolicyRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoucherInfos.PolicyRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyRemark = string(value["PolicyRemark"].GetString());
        m_policyRemarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoucherInfos.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VoucherInfos::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_nominalValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NominalValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nominalValue, allocator);
    }

    if (m_balanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Balance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_balance, allocator);
    }

    if (m_voucherIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voucherId.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_paySceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayScene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payScene.c_str(), allocator).Move(), allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_applicableProductsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicableProducts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_applicableProducts.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_excludedProductsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludedProducts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_excludedProducts.begin(); itr != m_excludedProducts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_policyRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string VoucherInfos::GetOwnerUin() const
{
    return m_ownerUin;
}

void VoucherInfos::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool VoucherInfos::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string VoucherInfos::GetStatus() const
{
    return m_status;
}

void VoucherInfos::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VoucherInfos::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t VoucherInfos::GetNominalValue() const
{
    return m_nominalValue;
}

void VoucherInfos::SetNominalValue(const int64_t& _nominalValue)
{
    m_nominalValue = _nominalValue;
    m_nominalValueHasBeenSet = true;
}

bool VoucherInfos::NominalValueHasBeenSet() const
{
    return m_nominalValueHasBeenSet;
}

int64_t VoucherInfos::GetBalance() const
{
    return m_balance;
}

void VoucherInfos::SetBalance(const int64_t& _balance)
{
    m_balance = _balance;
    m_balanceHasBeenSet = true;
}

bool VoucherInfos::BalanceHasBeenSet() const
{
    return m_balanceHasBeenSet;
}

string VoucherInfos::GetVoucherId() const
{
    return m_voucherId;
}

void VoucherInfos::SetVoucherId(const string& _voucherId)
{
    m_voucherId = _voucherId;
    m_voucherIdHasBeenSet = true;
}

bool VoucherInfos::VoucherIdHasBeenSet() const
{
    return m_voucherIdHasBeenSet;
}

string VoucherInfos::GetPayMode() const
{
    return m_payMode;
}

void VoucherInfos::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool VoucherInfos::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string VoucherInfos::GetPayScene() const
{
    return m_payScene;
}

void VoucherInfos::SetPayScene(const string& _payScene)
{
    m_payScene = _payScene;
    m_paySceneHasBeenSet = true;
}

bool VoucherInfos::PaySceneHasBeenSet() const
{
    return m_paySceneHasBeenSet;
}

string VoucherInfos::GetBeginTime() const
{
    return m_beginTime;
}

void VoucherInfos::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool VoucherInfos::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string VoucherInfos::GetEndTime() const
{
    return m_endTime;
}

void VoucherInfos::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool VoucherInfos::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

ApplicableProducts VoucherInfos::GetApplicableProducts() const
{
    return m_applicableProducts;
}

void VoucherInfos::SetApplicableProducts(const ApplicableProducts& _applicableProducts)
{
    m_applicableProducts = _applicableProducts;
    m_applicableProductsHasBeenSet = true;
}

bool VoucherInfos::ApplicableProductsHasBeenSet() const
{
    return m_applicableProductsHasBeenSet;
}

vector<ExcludedProducts> VoucherInfos::GetExcludedProducts() const
{
    return m_excludedProducts;
}

void VoucherInfos::SetExcludedProducts(const vector<ExcludedProducts>& _excludedProducts)
{
    m_excludedProducts = _excludedProducts;
    m_excludedProductsHasBeenSet = true;
}

bool VoucherInfos::ExcludedProductsHasBeenSet() const
{
    return m_excludedProductsHasBeenSet;
}

string VoucherInfos::GetPolicyRemark() const
{
    return m_policyRemark;
}

void VoucherInfos::SetPolicyRemark(const string& _policyRemark)
{
    m_policyRemark = _policyRemark;
    m_policyRemarkHasBeenSet = true;
}

bool VoucherInfos::PolicyRemarkHasBeenSet() const
{
    return m_policyRemarkHasBeenSet;
}

string VoucherInfos::GetCreateTime() const
{
    return m_createTime;
}

void VoucherInfos::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VoucherInfos::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

