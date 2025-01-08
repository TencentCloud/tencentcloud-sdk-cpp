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

#include <tencentcloud/essbasic/v20210526/model/FlowApproverDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

FlowApproverDetail::FlowApproverDetail() :
    m_receiptIdHasBeenSet(false),
    m_proxyOrganizationOpenIdHasBeenSet(false),
    m_proxyOperatorOpenIdHasBeenSet(false),
    m_proxyOrganizationNameHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_signOrderHasBeenSet(false),
    m_approveNameHasBeenSet(false),
    m_approveStatusHasBeenSet(false),
    m_approveMessageHasBeenSet(false),
    m_approveTimeHasBeenSet(false),
    m_approveTypeHasBeenSet(false),
    m_approverRoleNameHasBeenSet(false),
    m_signIdHasBeenSet(false),
    m_recipientIdHasBeenSet(false)
{
}

CoreInternalOutcome FlowApproverDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReceiptId") && !value["ReceiptId"].IsNull())
    {
        if (!value["ReceiptId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverDetail.ReceiptId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiptId = string(value["ReceiptId"].GetString());
        m_receiptIdHasBeenSet = true;
    }

    if (value.HasMember("ProxyOrganizationOpenId") && !value["ProxyOrganizationOpenId"].IsNull())
    {
        if (!value["ProxyOrganizationOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverDetail.ProxyOrganizationOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyOrganizationOpenId = string(value["ProxyOrganizationOpenId"].GetString());
        m_proxyOrganizationOpenIdHasBeenSet = true;
    }

    if (value.HasMember("ProxyOperatorOpenId") && !value["ProxyOperatorOpenId"].IsNull())
    {
        if (!value["ProxyOperatorOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverDetail.ProxyOperatorOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyOperatorOpenId = string(value["ProxyOperatorOpenId"].GetString());
        m_proxyOperatorOpenIdHasBeenSet = true;
    }

    if (value.HasMember("ProxyOrganizationName") && !value["ProxyOrganizationName"].IsNull())
    {
        if (!value["ProxyOrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverDetail.ProxyOrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyOrganizationName = string(value["ProxyOrganizationName"].GetString());
        m_proxyOrganizationNameHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverDetail.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("SignOrder") && !value["SignOrder"].IsNull())
    {
        if (!value["SignOrder"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverDetail.SignOrder` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_signOrder = value["SignOrder"].GetInt64();
        m_signOrderHasBeenSet = true;
    }

    if (value.HasMember("ApproveName") && !value["ApproveName"].IsNull())
    {
        if (!value["ApproveName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverDetail.ApproveName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveName = string(value["ApproveName"].GetString());
        m_approveNameHasBeenSet = true;
    }

    if (value.HasMember("ApproveStatus") && !value["ApproveStatus"].IsNull())
    {
        if (!value["ApproveStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverDetail.ApproveStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveStatus = string(value["ApproveStatus"].GetString());
        m_approveStatusHasBeenSet = true;
    }

    if (value.HasMember("ApproveMessage") && !value["ApproveMessage"].IsNull())
    {
        if (!value["ApproveMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverDetail.ApproveMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveMessage = string(value["ApproveMessage"].GetString());
        m_approveMessageHasBeenSet = true;
    }

    if (value.HasMember("ApproveTime") && !value["ApproveTime"].IsNull())
    {
        if (!value["ApproveTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverDetail.ApproveTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approveTime = value["ApproveTime"].GetInt64();
        m_approveTimeHasBeenSet = true;
    }

    if (value.HasMember("ApproveType") && !value["ApproveType"].IsNull())
    {
        if (!value["ApproveType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverDetail.ApproveType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveType = string(value["ApproveType"].GetString());
        m_approveTypeHasBeenSet = true;
    }

    if (value.HasMember("ApproverRoleName") && !value["ApproverRoleName"].IsNull())
    {
        if (!value["ApproverRoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverDetail.ApproverRoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverRoleName = string(value["ApproverRoleName"].GetString());
        m_approverRoleNameHasBeenSet = true;
    }

    if (value.HasMember("SignId") && !value["SignId"].IsNull())
    {
        if (!value["SignId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverDetail.SignId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signId = string(value["SignId"].GetString());
        m_signIdHasBeenSet = true;
    }

    if (value.HasMember("RecipientId") && !value["RecipientId"].IsNull())
    {
        if (!value["RecipientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverDetail.RecipientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recipientId = string(value["RecipientId"].GetString());
        m_recipientIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowApproverDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_receiptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiptId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiptId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyOrganizationOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyOrganizationOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyOrganizationOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyOperatorOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyOperatorOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyOperatorOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyOrganizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyOrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyOrganizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_signOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_signOrder, allocator);
    }

    if (m_approveNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveName.c_str(), allocator).Move(), allocator);
    }

    if (m_approveStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_approveMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_approveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approveTime, allocator);
    }

    if (m_approveTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveType.c_str(), allocator).Move(), allocator);
    }

    if (m_approverRoleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverRoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverRoleName.c_str(), allocator).Move(), allocator);
    }

    if (m_signIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signId.c_str(), allocator).Move(), allocator);
    }

    if (m_recipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecipientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recipientId.c_str(), allocator).Move(), allocator);
    }

}


string FlowApproverDetail::GetReceiptId() const
{
    return m_receiptId;
}

void FlowApproverDetail::SetReceiptId(const string& _receiptId)
{
    m_receiptId = _receiptId;
    m_receiptIdHasBeenSet = true;
}

bool FlowApproverDetail::ReceiptIdHasBeenSet() const
{
    return m_receiptIdHasBeenSet;
}

string FlowApproverDetail::GetProxyOrganizationOpenId() const
{
    return m_proxyOrganizationOpenId;
}

void FlowApproverDetail::SetProxyOrganizationOpenId(const string& _proxyOrganizationOpenId)
{
    m_proxyOrganizationOpenId = _proxyOrganizationOpenId;
    m_proxyOrganizationOpenIdHasBeenSet = true;
}

bool FlowApproverDetail::ProxyOrganizationOpenIdHasBeenSet() const
{
    return m_proxyOrganizationOpenIdHasBeenSet;
}

string FlowApproverDetail::GetProxyOperatorOpenId() const
{
    return m_proxyOperatorOpenId;
}

void FlowApproverDetail::SetProxyOperatorOpenId(const string& _proxyOperatorOpenId)
{
    m_proxyOperatorOpenId = _proxyOperatorOpenId;
    m_proxyOperatorOpenIdHasBeenSet = true;
}

bool FlowApproverDetail::ProxyOperatorOpenIdHasBeenSet() const
{
    return m_proxyOperatorOpenIdHasBeenSet;
}

string FlowApproverDetail::GetProxyOrganizationName() const
{
    return m_proxyOrganizationName;
}

void FlowApproverDetail::SetProxyOrganizationName(const string& _proxyOrganizationName)
{
    m_proxyOrganizationName = _proxyOrganizationName;
    m_proxyOrganizationNameHasBeenSet = true;
}

bool FlowApproverDetail::ProxyOrganizationNameHasBeenSet() const
{
    return m_proxyOrganizationNameHasBeenSet;
}

string FlowApproverDetail::GetMobile() const
{
    return m_mobile;
}

void FlowApproverDetail::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool FlowApproverDetail::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

int64_t FlowApproverDetail::GetSignOrder() const
{
    return m_signOrder;
}

void FlowApproverDetail::SetSignOrder(const int64_t& _signOrder)
{
    m_signOrder = _signOrder;
    m_signOrderHasBeenSet = true;
}

bool FlowApproverDetail::SignOrderHasBeenSet() const
{
    return m_signOrderHasBeenSet;
}

string FlowApproverDetail::GetApproveName() const
{
    return m_approveName;
}

void FlowApproverDetail::SetApproveName(const string& _approveName)
{
    m_approveName = _approveName;
    m_approveNameHasBeenSet = true;
}

bool FlowApproverDetail::ApproveNameHasBeenSet() const
{
    return m_approveNameHasBeenSet;
}

string FlowApproverDetail::GetApproveStatus() const
{
    return m_approveStatus;
}

void FlowApproverDetail::SetApproveStatus(const string& _approveStatus)
{
    m_approveStatus = _approveStatus;
    m_approveStatusHasBeenSet = true;
}

bool FlowApproverDetail::ApproveStatusHasBeenSet() const
{
    return m_approveStatusHasBeenSet;
}

string FlowApproverDetail::GetApproveMessage() const
{
    return m_approveMessage;
}

void FlowApproverDetail::SetApproveMessage(const string& _approveMessage)
{
    m_approveMessage = _approveMessage;
    m_approveMessageHasBeenSet = true;
}

bool FlowApproverDetail::ApproveMessageHasBeenSet() const
{
    return m_approveMessageHasBeenSet;
}

int64_t FlowApproverDetail::GetApproveTime() const
{
    return m_approveTime;
}

void FlowApproverDetail::SetApproveTime(const int64_t& _approveTime)
{
    m_approveTime = _approveTime;
    m_approveTimeHasBeenSet = true;
}

bool FlowApproverDetail::ApproveTimeHasBeenSet() const
{
    return m_approveTimeHasBeenSet;
}

string FlowApproverDetail::GetApproveType() const
{
    return m_approveType;
}

void FlowApproverDetail::SetApproveType(const string& _approveType)
{
    m_approveType = _approveType;
    m_approveTypeHasBeenSet = true;
}

bool FlowApproverDetail::ApproveTypeHasBeenSet() const
{
    return m_approveTypeHasBeenSet;
}

string FlowApproverDetail::GetApproverRoleName() const
{
    return m_approverRoleName;
}

void FlowApproverDetail::SetApproverRoleName(const string& _approverRoleName)
{
    m_approverRoleName = _approverRoleName;
    m_approverRoleNameHasBeenSet = true;
}

bool FlowApproverDetail::ApproverRoleNameHasBeenSet() const
{
    return m_approverRoleNameHasBeenSet;
}

string FlowApproverDetail::GetSignId() const
{
    return m_signId;
}

void FlowApproverDetail::SetSignId(const string& _signId)
{
    m_signId = _signId;
    m_signIdHasBeenSet = true;
}

bool FlowApproverDetail::SignIdHasBeenSet() const
{
    return m_signIdHasBeenSet;
}

string FlowApproverDetail::GetRecipientId() const
{
    return m_recipientId;
}

void FlowApproverDetail::SetRecipientId(const string& _recipientId)
{
    m_recipientId = _recipientId;
    m_recipientIdHasBeenSet = true;
}

bool FlowApproverDetail::RecipientIdHasBeenSet() const
{
    return m_recipientIdHasBeenSet;
}

