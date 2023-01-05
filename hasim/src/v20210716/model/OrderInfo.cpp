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

#include <tencentcloud/hasim/v20210716/model/OrderInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hasim::V20210716::Model;
using namespace std;

OrderInfo::OrderInfo() :
    m_dealNameHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_buyNumHasBeenSet(false),
    m_industryCodeHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_contactHasBeenSet(false),
    m_msisdnHasBeenSet(false),
    m_specificationHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_bigDealIdHasBeenSet(false),
    m_auditStatusHasBeenSet(false),
    m_flowStatusHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_refundBigDealIdHasBeenSet(false)
{
}

CoreInternalOutcome OrderInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DealName") && !value["DealName"].IsNull())
    {
        if (!value["DealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.DealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealName = string(value["DealName"].GetString());
        m_dealNameHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("BuyNum") && !value["BuyNum"].IsNull())
    {
        if (!value["BuyNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.BuyNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_buyNum = value["BuyNum"].GetInt64();
        m_buyNumHasBeenSet = true;
    }

    if (value.HasMember("IndustryCode") && !value["IndustryCode"].IsNull())
    {
        if (!value["IndustryCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.IndustryCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_industryCode = string(value["IndustryCode"].GetString());
        m_industryCodeHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Contact") && !value["Contact"].IsNull())
    {
        if (!value["Contact"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.Contact` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contact = string(value["Contact"].GetString());
        m_contactHasBeenSet = true;
    }

    if (value.HasMember("Msisdn") && !value["Msisdn"].IsNull())
    {
        if (!value["Msisdn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.Msisdn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msisdn = string(value["Msisdn"].GetString());
        m_msisdnHasBeenSet = true;
    }

    if (value.HasMember("Specification") && !value["Specification"].IsNull())
    {
        if (!value["Specification"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.Specification` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specification = string(value["Specification"].GetString());
        m_specificationHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("BigDealId") && !value["BigDealId"].IsNull())
    {
        if (!value["BigDealId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.BigDealId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bigDealId = string(value["BigDealId"].GetString());
        m_bigDealIdHasBeenSet = true;
    }

    if (value.HasMember("AuditStatus") && !value["AuditStatus"].IsNull())
    {
        if (!value["AuditStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.AuditStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditStatus = string(value["AuditStatus"].GetString());
        m_auditStatusHasBeenSet = true;
    }

    if (value.HasMember("FlowStatus") && !value["FlowStatus"].IsNull())
    {
        if (!value["FlowStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.FlowStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowStatus = string(value["FlowStatus"].GetString());
        m_flowStatusHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("RefundBigDealId") && !value["RefundBigDealId"].IsNull())
    {
        if (!value["RefundBigDealId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderInfo.RefundBigDealId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refundBigDealId = string(value["RefundBigDealId"].GetString());
        m_refundBigDealIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrderInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealName.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_buyNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_buyNum, allocator);
    }

    if (m_industryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndustryCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_industryCode.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_contactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contact";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contact.c_str(), allocator).Move(), allocator);
    }

    if (m_msisdnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Msisdn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msisdn.c_str(), allocator).Move(), allocator);
    }

    if (m_specificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Specification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specification.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_bigDealIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BigDealId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bigDealId.c_str(), allocator).Move(), allocator);
    }

    if (m_auditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_flowStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_refundBigDealIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundBigDealId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refundBigDealId.c_str(), allocator).Move(), allocator);
    }

}


string OrderInfo::GetDealName() const
{
    return m_dealName;
}

void OrderInfo::SetDealName(const string& _dealName)
{
    m_dealName = _dealName;
    m_dealNameHasBeenSet = true;
}

bool OrderInfo::DealNameHasBeenSet() const
{
    return m_dealNameHasBeenSet;
}

string OrderInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void OrderInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool OrderInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string OrderInfo::GetUin() const
{
    return m_uin;
}

void OrderInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool OrderInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t OrderInfo::GetBuyNum() const
{
    return m_buyNum;
}

void OrderInfo::SetBuyNum(const int64_t& _buyNum)
{
    m_buyNum = _buyNum;
    m_buyNumHasBeenSet = true;
}

bool OrderInfo::BuyNumHasBeenSet() const
{
    return m_buyNumHasBeenSet;
}

string OrderInfo::GetIndustryCode() const
{
    return m_industryCode;
}

void OrderInfo::SetIndustryCode(const string& _industryCode)
{
    m_industryCode = _industryCode;
    m_industryCodeHasBeenSet = true;
}

bool OrderInfo::IndustryCodeHasBeenSet() const
{
    return m_industryCodeHasBeenSet;
}

string OrderInfo::GetAddress() const
{
    return m_address;
}

void OrderInfo::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool OrderInfo::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string OrderInfo::GetContact() const
{
    return m_contact;
}

void OrderInfo::SetContact(const string& _contact)
{
    m_contact = _contact;
    m_contactHasBeenSet = true;
}

bool OrderInfo::ContactHasBeenSet() const
{
    return m_contactHasBeenSet;
}

string OrderInfo::GetMsisdn() const
{
    return m_msisdn;
}

void OrderInfo::SetMsisdn(const string& _msisdn)
{
    m_msisdn = _msisdn;
    m_msisdnHasBeenSet = true;
}

bool OrderInfo::MsisdnHasBeenSet() const
{
    return m_msisdnHasBeenSet;
}

string OrderInfo::GetSpecification() const
{
    return m_specification;
}

void OrderInfo::SetSpecification(const string& _specification)
{
    m_specification = _specification;
    m_specificationHasBeenSet = true;
}

bool OrderInfo::SpecificationHasBeenSet() const
{
    return m_specificationHasBeenSet;
}

string OrderInfo::GetComment() const
{
    return m_comment;
}

void OrderInfo::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool OrderInfo::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string OrderInfo::GetBigDealId() const
{
    return m_bigDealId;
}

void OrderInfo::SetBigDealId(const string& _bigDealId)
{
    m_bigDealId = _bigDealId;
    m_bigDealIdHasBeenSet = true;
}

bool OrderInfo::BigDealIdHasBeenSet() const
{
    return m_bigDealIdHasBeenSet;
}

string OrderInfo::GetAuditStatus() const
{
    return m_auditStatus;
}

void OrderInfo::SetAuditStatus(const string& _auditStatus)
{
    m_auditStatus = _auditStatus;
    m_auditStatusHasBeenSet = true;
}

bool OrderInfo::AuditStatusHasBeenSet() const
{
    return m_auditStatusHasBeenSet;
}

string OrderInfo::GetFlowStatus() const
{
    return m_flowStatus;
}

void OrderInfo::SetFlowStatus(const string& _flowStatus)
{
    m_flowStatus = _flowStatus;
    m_flowStatusHasBeenSet = true;
}

bool OrderInfo::FlowStatusHasBeenSet() const
{
    return m_flowStatusHasBeenSet;
}

string OrderInfo::GetRemark() const
{
    return m_remark;
}

void OrderInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool OrderInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string OrderInfo::GetRefundBigDealId() const
{
    return m_refundBigDealId;
}

void OrderInfo::SetRefundBigDealId(const string& _refundBigDealId)
{
    m_refundBigDealId = _refundBigDealId;
    m_refundBigDealIdHasBeenSet = true;
}

bool OrderInfo::RefundBigDealIdHasBeenSet() const
{
    return m_refundBigDealIdHasBeenSet;
}

