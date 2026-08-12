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

#include <tencentcloud/rce/v20260130/model/EventDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

EventDetail::EventDetail() :
    m_loginHasBeenSet(false),
    m_registerHasBeenSet(false),
    m_createOrderHasBeenSet(false),
    m_transactionHasBeenSet(false),
    m_smsHasBeenSet(false),
    m_chargeBackHasBeenSet(false),
    m_logoutHasBeenSet(false),
    m_modifyAccountHasBeenSet(false),
    m_modifyPasswordHasBeenSet(false),
    m_securityVerificationHasBeenSet(false),
    m_addPromotionHasBeenSet(false),
    m_redeemHasBeenSet(false),
    m_withdrawHasBeenSet(false),
    m_custEventHasBeenSet(false),
    m_scanCodeHasBeenSet(false),
    m_luckyDrawHasBeenSet(false),
    m_taskHasBeenSet(false),
    m_invitationHasBeenSet(false),
    m_claimRedPacketHasBeenSet(false),
    m_browseHasBeenSet(false)
{
}

CoreInternalOutcome EventDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Login") && !value["Login"].IsNull())
    {
        if (!value["Login"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.Login` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_login.Deserialize(value["Login"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loginHasBeenSet = true;
    }

    if (value.HasMember("Register") && !value["Register"].IsNull())
    {
        if (!value["Register"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.Register` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_register.Deserialize(value["Register"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_registerHasBeenSet = true;
    }

    if (value.HasMember("CreateOrder") && !value["CreateOrder"].IsNull())
    {
        if (!value["CreateOrder"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.CreateOrder` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_createOrder.Deserialize(value["CreateOrder"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_createOrderHasBeenSet = true;
    }

    if (value.HasMember("Transaction") && !value["Transaction"].IsNull())
    {
        if (!value["Transaction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.Transaction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_transaction.Deserialize(value["Transaction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_transactionHasBeenSet = true;
    }

    if (value.HasMember("Sms") && !value["Sms"].IsNull())
    {
        if (!value["Sms"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.Sms` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sms.Deserialize(value["Sms"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_smsHasBeenSet = true;
    }

    if (value.HasMember("ChargeBack") && !value["ChargeBack"].IsNull())
    {
        if (!value["ChargeBack"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.ChargeBack` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_chargeBack.Deserialize(value["ChargeBack"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_chargeBackHasBeenSet = true;
    }

    if (value.HasMember("Logout") && !value["Logout"].IsNull())
    {
        if (!value["Logout"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.Logout` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_logout.Deserialize(value["Logout"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_logoutHasBeenSet = true;
    }

    if (value.HasMember("ModifyAccount") && !value["ModifyAccount"].IsNull())
    {
        if (!value["ModifyAccount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.ModifyAccount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modifyAccount.Deserialize(value["ModifyAccount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modifyAccountHasBeenSet = true;
    }

    if (value.HasMember("ModifyPassword") && !value["ModifyPassword"].IsNull())
    {
        if (!value["ModifyPassword"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.ModifyPassword` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modifyPassword.Deserialize(value["ModifyPassword"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modifyPasswordHasBeenSet = true;
    }

    if (value.HasMember("SecurityVerification") && !value["SecurityVerification"].IsNull())
    {
        if (!value["SecurityVerification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.SecurityVerification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_securityVerification.Deserialize(value["SecurityVerification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_securityVerificationHasBeenSet = true;
    }

    if (value.HasMember("AddPromotion") && !value["AddPromotion"].IsNull())
    {
        if (!value["AddPromotion"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.AddPromotion` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_addPromotion.Deserialize(value["AddPromotion"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_addPromotionHasBeenSet = true;
    }

    if (value.HasMember("Redeem") && !value["Redeem"].IsNull())
    {
        if (!value["Redeem"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.Redeem` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_redeem.Deserialize(value["Redeem"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_redeemHasBeenSet = true;
    }

    if (value.HasMember("Withdraw") && !value["Withdraw"].IsNull())
    {
        if (!value["Withdraw"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.Withdraw` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_withdraw.Deserialize(value["Withdraw"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_withdrawHasBeenSet = true;
    }

    if (value.HasMember("CustEvent") && !value["CustEvent"].IsNull())
    {
        if (!value["CustEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.CustEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_custEvent.Deserialize(value["CustEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_custEventHasBeenSet = true;
    }

    if (value.HasMember("ScanCode") && !value["ScanCode"].IsNull())
    {
        if (!value["ScanCode"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.ScanCode` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scanCode.Deserialize(value["ScanCode"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scanCodeHasBeenSet = true;
    }

    if (value.HasMember("LuckyDraw") && !value["LuckyDraw"].IsNull())
    {
        if (!value["LuckyDraw"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.LuckyDraw` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_luckyDraw.Deserialize(value["LuckyDraw"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_luckyDrawHasBeenSet = true;
    }

    if (value.HasMember("Task") && !value["Task"].IsNull())
    {
        if (!value["Task"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.Task` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_task.Deserialize(value["Task"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskHasBeenSet = true;
    }

    if (value.HasMember("Invitation") && !value["Invitation"].IsNull())
    {
        if (!value["Invitation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.Invitation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_invitation.Deserialize(value["Invitation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_invitationHasBeenSet = true;
    }

    if (value.HasMember("ClaimRedPacket") && !value["ClaimRedPacket"].IsNull())
    {
        if (!value["ClaimRedPacket"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.ClaimRedPacket` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_claimRedPacket.Deserialize(value["ClaimRedPacket"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_claimRedPacketHasBeenSet = true;
    }

    if (value.HasMember("Browse") && !value["Browse"].IsNull())
    {
        if (!value["Browse"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail.Browse` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_browse.Deserialize(value["Browse"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_browseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_loginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Login";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_login.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_registerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Register";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_register.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_createOrder.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_transactionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transaction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transaction.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_smsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sms";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sms.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_chargeBackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeBack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_chargeBack.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_logoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logout.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modifyAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modifyAccount.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modifyPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modifyPassword.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_securityVerificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityVerification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_securityVerification.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_addPromotionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddPromotion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_addPromotion.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_redeemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Redeem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_redeem.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_withdrawHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Withdraw";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_withdraw.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_custEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_custEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scanCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scanCode.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_luckyDrawHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LuckyDraw";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_luckyDraw.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Task";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_task.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_invitationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Invitation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_invitation.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_claimRedPacketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClaimRedPacket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_claimRedPacket.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_browseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Browse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_browse.ToJsonObject(value[key.c_str()], allocator);
    }

}


LoginEvent EventDetail::GetLogin() const
{
    return m_login;
}

void EventDetail::SetLogin(const LoginEvent& _login)
{
    m_login = _login;
    m_loginHasBeenSet = true;
}

bool EventDetail::LoginHasBeenSet() const
{
    return m_loginHasBeenSet;
}

RegisterEvent EventDetail::GetRegister() const
{
    return m_register;
}

void EventDetail::SetRegister(const RegisterEvent& _register)
{
    m_register = _register;
    m_registerHasBeenSet = true;
}

bool EventDetail::RegisterHasBeenSet() const
{
    return m_registerHasBeenSet;
}

CreateOrderEvent EventDetail::GetCreateOrder() const
{
    return m_createOrder;
}

void EventDetail::SetCreateOrder(const CreateOrderEvent& _createOrder)
{
    m_createOrder = _createOrder;
    m_createOrderHasBeenSet = true;
}

bool EventDetail::CreateOrderHasBeenSet() const
{
    return m_createOrderHasBeenSet;
}

TransactionEvent EventDetail::GetTransaction() const
{
    return m_transaction;
}

void EventDetail::SetTransaction(const TransactionEvent& _transaction)
{
    m_transaction = _transaction;
    m_transactionHasBeenSet = true;
}

bool EventDetail::TransactionHasBeenSet() const
{
    return m_transactionHasBeenSet;
}

SMSEvent EventDetail::GetSms() const
{
    return m_sms;
}

void EventDetail::SetSms(const SMSEvent& _sms)
{
    m_sms = _sms;
    m_smsHasBeenSet = true;
}

bool EventDetail::SmsHasBeenSet() const
{
    return m_smsHasBeenSet;
}

ChargeBackEvent EventDetail::GetChargeBack() const
{
    return m_chargeBack;
}

void EventDetail::SetChargeBack(const ChargeBackEvent& _chargeBack)
{
    m_chargeBack = _chargeBack;
    m_chargeBackHasBeenSet = true;
}

bool EventDetail::ChargeBackHasBeenSet() const
{
    return m_chargeBackHasBeenSet;
}

LogoutEvent EventDetail::GetLogout() const
{
    return m_logout;
}

void EventDetail::SetLogout(const LogoutEvent& _logout)
{
    m_logout = _logout;
    m_logoutHasBeenSet = true;
}

bool EventDetail::LogoutHasBeenSet() const
{
    return m_logoutHasBeenSet;
}

ModifyAccountEvent EventDetail::GetModifyAccount() const
{
    return m_modifyAccount;
}

void EventDetail::SetModifyAccount(const ModifyAccountEvent& _modifyAccount)
{
    m_modifyAccount = _modifyAccount;
    m_modifyAccountHasBeenSet = true;
}

bool EventDetail::ModifyAccountHasBeenSet() const
{
    return m_modifyAccountHasBeenSet;
}

ModifyPasswordEvent EventDetail::GetModifyPassword() const
{
    return m_modifyPassword;
}

void EventDetail::SetModifyPassword(const ModifyPasswordEvent& _modifyPassword)
{
    m_modifyPassword = _modifyPassword;
    m_modifyPasswordHasBeenSet = true;
}

bool EventDetail::ModifyPasswordHasBeenSet() const
{
    return m_modifyPasswordHasBeenSet;
}

SecurityVerificationEvent EventDetail::GetSecurityVerification() const
{
    return m_securityVerification;
}

void EventDetail::SetSecurityVerification(const SecurityVerificationEvent& _securityVerification)
{
    m_securityVerification = _securityVerification;
    m_securityVerificationHasBeenSet = true;
}

bool EventDetail::SecurityVerificationHasBeenSet() const
{
    return m_securityVerificationHasBeenSet;
}

AddPromotionEvent EventDetail::GetAddPromotion() const
{
    return m_addPromotion;
}

void EventDetail::SetAddPromotion(const AddPromotionEvent& _addPromotion)
{
    m_addPromotion = _addPromotion;
    m_addPromotionHasBeenSet = true;
}

bool EventDetail::AddPromotionHasBeenSet() const
{
    return m_addPromotionHasBeenSet;
}

RedeemEvent EventDetail::GetRedeem() const
{
    return m_redeem;
}

void EventDetail::SetRedeem(const RedeemEvent& _redeem)
{
    m_redeem = _redeem;
    m_redeemHasBeenSet = true;
}

bool EventDetail::RedeemHasBeenSet() const
{
    return m_redeemHasBeenSet;
}

WithdrawEvent EventDetail::GetWithdraw() const
{
    return m_withdraw;
}

void EventDetail::SetWithdraw(const WithdrawEvent& _withdraw)
{
    m_withdraw = _withdraw;
    m_withdrawHasBeenSet = true;
}

bool EventDetail::WithdrawHasBeenSet() const
{
    return m_withdrawHasBeenSet;
}

CustEvent EventDetail::GetCustEvent() const
{
    return m_custEvent;
}

void EventDetail::SetCustEvent(const CustEvent& _custEvent)
{
    m_custEvent = _custEvent;
    m_custEventHasBeenSet = true;
}

bool EventDetail::CustEventHasBeenSet() const
{
    return m_custEventHasBeenSet;
}

ScanCodeEvent EventDetail::GetScanCode() const
{
    return m_scanCode;
}

void EventDetail::SetScanCode(const ScanCodeEvent& _scanCode)
{
    m_scanCode = _scanCode;
    m_scanCodeHasBeenSet = true;
}

bool EventDetail::ScanCodeHasBeenSet() const
{
    return m_scanCodeHasBeenSet;
}

LuckyDrawEvent EventDetail::GetLuckyDraw() const
{
    return m_luckyDraw;
}

void EventDetail::SetLuckyDraw(const LuckyDrawEvent& _luckyDraw)
{
    m_luckyDraw = _luckyDraw;
    m_luckyDrawHasBeenSet = true;
}

bool EventDetail::LuckyDrawHasBeenSet() const
{
    return m_luckyDrawHasBeenSet;
}

TaskEvent EventDetail::GetTask() const
{
    return m_task;
}

void EventDetail::SetTask(const TaskEvent& _task)
{
    m_task = _task;
    m_taskHasBeenSet = true;
}

bool EventDetail::TaskHasBeenSet() const
{
    return m_taskHasBeenSet;
}

InvitationEvent EventDetail::GetInvitation() const
{
    return m_invitation;
}

void EventDetail::SetInvitation(const InvitationEvent& _invitation)
{
    m_invitation = _invitation;
    m_invitationHasBeenSet = true;
}

bool EventDetail::InvitationHasBeenSet() const
{
    return m_invitationHasBeenSet;
}

ClaimRedPacketEvent EventDetail::GetClaimRedPacket() const
{
    return m_claimRedPacket;
}

void EventDetail::SetClaimRedPacket(const ClaimRedPacketEvent& _claimRedPacket)
{
    m_claimRedPacket = _claimRedPacket;
    m_claimRedPacketHasBeenSet = true;
}

bool EventDetail::ClaimRedPacketHasBeenSet() const
{
    return m_claimRedPacketHasBeenSet;
}

BrowseEvent EventDetail::GetBrowse() const
{
    return m_browse;
}

void EventDetail::SetBrowse(const BrowseEvent& _browse)
{
    m_browse = _browse;
    m_browseHasBeenSet = true;
}

bool EventDetail::BrowseHasBeenSet() const
{
    return m_browseHasBeenSet;
}

