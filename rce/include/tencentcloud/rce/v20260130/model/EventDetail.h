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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_EVENTDETAIL_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_EVENTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/LoginEvent.h>
#include <tencentcloud/rce/v20260130/model/RegisterEvent.h>
#include <tencentcloud/rce/v20260130/model/CreateOrderEvent.h>
#include <tencentcloud/rce/v20260130/model/TransactionEvent.h>
#include <tencentcloud/rce/v20260130/model/SMSEvent.h>
#include <tencentcloud/rce/v20260130/model/ChargeBackEvent.h>
#include <tencentcloud/rce/v20260130/model/LogoutEvent.h>
#include <tencentcloud/rce/v20260130/model/ModifyAccountEvent.h>
#include <tencentcloud/rce/v20260130/model/ModifyPasswordEvent.h>
#include <tencentcloud/rce/v20260130/model/SecurityVerificationEvent.h>
#include <tencentcloud/rce/v20260130/model/AddPromotionEvent.h>
#include <tencentcloud/rce/v20260130/model/RedeemEvent.h>
#include <tencentcloud/rce/v20260130/model/WithdrawEvent.h>
#include <tencentcloud/rce/v20260130/model/CustEvent.h>
#include <tencentcloud/rce/v20260130/model/ScanCodeEvent.h>
#include <tencentcloud/rce/v20260130/model/LuckyDrawEvent.h>
#include <tencentcloud/rce/v20260130/model/TaskEvent.h>
#include <tencentcloud/rce/v20260130/model/InvitationEvent.h>
#include <tencentcloud/rce/v20260130/model/ClaimRedPacketEvent.h>
#include <tencentcloud/rce/v20260130/model/BrowseEvent.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 事件详情
                */
                class EventDetail : public AbstractModel
                {
                public:
                    EventDetail();
                    ~EventDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>登录</p>
                     * @return Login <p>登录</p>
                     * 
                     */
                    LoginEvent GetLogin() const;

                    /**
                     * 设置<p>登录</p>
                     * @param _login <p>登录</p>
                     * 
                     */
                    void SetLogin(const LoginEvent& _login);

                    /**
                     * 判断参数 Login 是否已赋值
                     * @return Login 是否已赋值
                     * 
                     */
                    bool LoginHasBeenSet() const;

                    /**
                     * 获取<p>注册（变更用户信息）</p>
                     * @return Register <p>注册（变更用户信息）</p>
                     * 
                     */
                    RegisterEvent GetRegister() const;

                    /**
                     * 设置<p>注册（变更用户信息）</p>
                     * @param _register <p>注册（变更用户信息）</p>
                     * 
                     */
                    void SetRegister(const RegisterEvent& _register);

                    /**
                     * 判断参数 Register 是否已赋值
                     * @return Register 是否已赋值
                     * 
                     */
                    bool RegisterHasBeenSet() const;

                    /**
                     * 获取<p>创建订单</p>
                     * @return CreateOrder <p>创建订单</p>
                     * 
                     */
                    CreateOrderEvent GetCreateOrder() const;

                    /**
                     * 设置<p>创建订单</p>
                     * @param _createOrder <p>创建订单</p>
                     * 
                     */
                    void SetCreateOrder(const CreateOrderEvent& _createOrder);

                    /**
                     * 判断参数 CreateOrder 是否已赋值
                     * @return CreateOrder 是否已赋值
                     * 
                     */
                    bool CreateOrderHasBeenSet() const;

                    /**
                     * 获取<p>交易支付</p>
                     * @return Transaction <p>交易支付</p>
                     * 
                     */
                    TransactionEvent GetTransaction() const;

                    /**
                     * 设置<p>交易支付</p>
                     * @param _transaction <p>交易支付</p>
                     * 
                     */
                    void SetTransaction(const TransactionEvent& _transaction);

                    /**
                     * 判断参数 Transaction 是否已赋值
                     * @return Transaction 是否已赋值
                     * 
                     */
                    bool TransactionHasBeenSet() const;

                    /**
                     * 获取<p>短信</p>
                     * @return Sms <p>短信</p>
                     * 
                     */
                    SMSEvent GetSms() const;

                    /**
                     * 设置<p>短信</p>
                     * @param _sms <p>短信</p>
                     * 
                     */
                    void SetSms(const SMSEvent& _sms);

                    /**
                     * 判断参数 Sms 是否已赋值
                     * @return Sms 是否已赋值
                     * 
                     */
                    bool SmsHasBeenSet() const;

                    /**
                     * 获取<p>拒付</p>
                     * @return ChargeBack <p>拒付</p>
                     * 
                     */
                    ChargeBackEvent GetChargeBack() const;

                    /**
                     * 设置<p>拒付</p>
                     * @param _chargeBack <p>拒付</p>
                     * 
                     */
                    void SetChargeBack(const ChargeBackEvent& _chargeBack);

                    /**
                     * 判断参数 ChargeBack 是否已赋值
                     * @return ChargeBack 是否已赋值
                     * 
                     */
                    bool ChargeBackHasBeenSet() const;

                    /**
                     * 获取<p>登出</p>
                     * @return Logout <p>登出</p>
                     * 
                     */
                    LogoutEvent GetLogout() const;

                    /**
                     * 设置<p>登出</p>
                     * @param _logout <p>登出</p>
                     * 
                     */
                    void SetLogout(const LogoutEvent& _logout);

                    /**
                     * 判断参数 Logout 是否已赋值
                     * @return Logout 是否已赋值
                     * 
                     */
                    bool LogoutHasBeenSet() const;

                    /**
                     * 获取<p>修改账号</p>
                     * @return ModifyAccount <p>修改账号</p>
                     * 
                     */
                    ModifyAccountEvent GetModifyAccount() const;

                    /**
                     * 设置<p>修改账号</p>
                     * @param _modifyAccount <p>修改账号</p>
                     * 
                     */
                    void SetModifyAccount(const ModifyAccountEvent& _modifyAccount);

                    /**
                     * 判断参数 ModifyAccount 是否已赋值
                     * @return ModifyAccount 是否已赋值
                     * 
                     */
                    bool ModifyAccountHasBeenSet() const;

                    /**
                     * 获取<p>修改密码</p>
                     * @return ModifyPassword <p>修改密码</p>
                     * 
                     */
                    ModifyPasswordEvent GetModifyPassword() const;

                    /**
                     * 设置<p>修改密码</p>
                     * @param _modifyPassword <p>修改密码</p>
                     * 
                     */
                    void SetModifyPassword(const ModifyPasswordEvent& _modifyPassword);

                    /**
                     * 判断参数 ModifyPassword 是否已赋值
                     * @return ModifyPassword 是否已赋值
                     * 
                     */
                    bool ModifyPasswordHasBeenSet() const;

                    /**
                     * 获取<p>安全验证</p>
                     * @return SecurityVerification <p>安全验证</p>
                     * 
                     */
                    SecurityVerificationEvent GetSecurityVerification() const;

                    /**
                     * 设置<p>安全验证</p>
                     * @param _securityVerification <p>安全验证</p>
                     * 
                     */
                    void SetSecurityVerification(const SecurityVerificationEvent& _securityVerification);

                    /**
                     * 判断参数 SecurityVerification 是否已赋值
                     * @return SecurityVerification 是否已赋值
                     * 
                     */
                    bool SecurityVerificationHasBeenSet() const;

                    /**
                     * 获取<p>参加营销活动</p>
                     * @return AddPromotion <p>参加营销活动</p>
                     * 
                     */
                    AddPromotionEvent GetAddPromotion() const;

                    /**
                     * 设置<p>参加营销活动</p>
                     * @param _addPromotion <p>参加营销活动</p>
                     * 
                     */
                    void SetAddPromotion(const AddPromotionEvent& _addPromotion);

                    /**
                     * 判断参数 AddPromotion 是否已赋值
                     * @return AddPromotion 是否已赋值
                     * 
                     */
                    bool AddPromotionHasBeenSet() const;

                    /**
                     * 获取<p>兑奖</p>
                     * @return Redeem <p>兑奖</p>
                     * 
                     */
                    RedeemEvent GetRedeem() const;

                    /**
                     * 设置<p>兑奖</p>
                     * @param _redeem <p>兑奖</p>
                     * 
                     */
                    void SetRedeem(const RedeemEvent& _redeem);

                    /**
                     * 判断参数 Redeem 是否已赋值
                     * @return Redeem 是否已赋值
                     * 
                     */
                    bool RedeemHasBeenSet() const;

                    /**
                     * 获取<p>提现</p>
                     * @return Withdraw <p>提现</p>
                     * 
                     */
                    WithdrawEvent GetWithdraw() const;

                    /**
                     * 设置<p>提现</p>
                     * @param _withdraw <p>提现</p>
                     * 
                     */
                    void SetWithdraw(const WithdrawEvent& _withdraw);

                    /**
                     * 判断参数 Withdraw 是否已赋值
                     * @return Withdraw 是否已赋值
                     * 
                     */
                    bool WithdrawHasBeenSet() const;

                    /**
                     * 获取<p>自定义事件</p>
                     * @return CustEvent <p>自定义事件</p>
                     * 
                     */
                    CustEvent GetCustEvent() const;

                    /**
                     * 设置<p>自定义事件</p>
                     * @param _custEvent <p>自定义事件</p>
                     * 
                     */
                    void SetCustEvent(const CustEvent& _custEvent);

                    /**
                     * 判断参数 CustEvent 是否已赋值
                     * @return CustEvent 是否已赋值
                     * 
                     */
                    bool CustEventHasBeenSet() const;

                    /**
                     * 获取<p>扫码</p>
                     * @return ScanCode <p>扫码</p>
                     * 
                     */
                    ScanCodeEvent GetScanCode() const;

                    /**
                     * 设置<p>扫码</p>
                     * @param _scanCode <p>扫码</p>
                     * 
                     */
                    void SetScanCode(const ScanCodeEvent& _scanCode);

                    /**
                     * 判断参数 ScanCode 是否已赋值
                     * @return ScanCode 是否已赋值
                     * 
                     */
                    bool ScanCodeHasBeenSet() const;

                    /**
                     * 获取<p>抽奖</p>
                     * @return LuckyDraw <p>抽奖</p>
                     * 
                     */
                    LuckyDrawEvent GetLuckyDraw() const;

                    /**
                     * 设置<p>抽奖</p>
                     * @param _luckyDraw <p>抽奖</p>
                     * 
                     */
                    void SetLuckyDraw(const LuckyDrawEvent& _luckyDraw);

                    /**
                     * 判断参数 LuckyDraw 是否已赋值
                     * @return LuckyDraw 是否已赋值
                     * 
                     */
                    bool LuckyDrawHasBeenSet() const;

                    /**
                     * 获取<p>做任务</p>
                     * @return Task <p>做任务</p>
                     * 
                     */
                    TaskEvent GetTask() const;

                    /**
                     * 设置<p>做任务</p>
                     * @param _task <p>做任务</p>
                     * 
                     */
                    void SetTask(const TaskEvent& _task);

                    /**
                     * 判断参数 Task 是否已赋值
                     * @return Task 是否已赋值
                     * 
                     */
                    bool TaskHasBeenSet() const;

                    /**
                     * 获取<p>邀请</p>
                     * @return Invitation <p>邀请</p>
                     * 
                     */
                    InvitationEvent GetInvitation() const;

                    /**
                     * 设置<p>邀请</p>
                     * @param _invitation <p>邀请</p>
                     * 
                     */
                    void SetInvitation(const InvitationEvent& _invitation);

                    /**
                     * 判断参数 Invitation 是否已赋值
                     * @return Invitation 是否已赋值
                     * 
                     */
                    bool InvitationHasBeenSet() const;

                    /**
                     * 获取<p>领红包</p>
                     * @return ClaimRedPacket <p>领红包</p>
                     * 
                     */
                    ClaimRedPacketEvent GetClaimRedPacket() const;

                    /**
                     * 设置<p>领红包</p>
                     * @param _claimRedPacket <p>领红包</p>
                     * 
                     */
                    void SetClaimRedPacket(const ClaimRedPacketEvent& _claimRedPacket);

                    /**
                     * 判断参数 ClaimRedPacket 是否已赋值
                     * @return ClaimRedPacket 是否已赋值
                     * 
                     */
                    bool ClaimRedPacketHasBeenSet() const;

                    /**
                     * 获取<p>浏览</p>
                     * @return Browse <p>浏览</p>
                     * 
                     */
                    BrowseEvent GetBrowse() const;

                    /**
                     * 设置<p>浏览</p>
                     * @param _browse <p>浏览</p>
                     * 
                     */
                    void SetBrowse(const BrowseEvent& _browse);

                    /**
                     * 判断参数 Browse 是否已赋值
                     * @return Browse 是否已赋值
                     * 
                     */
                    bool BrowseHasBeenSet() const;

                private:

                    /**
                     * <p>登录</p>
                     */
                    LoginEvent m_login;
                    bool m_loginHasBeenSet;

                    /**
                     * <p>注册（变更用户信息）</p>
                     */
                    RegisterEvent m_register;
                    bool m_registerHasBeenSet;

                    /**
                     * <p>创建订单</p>
                     */
                    CreateOrderEvent m_createOrder;
                    bool m_createOrderHasBeenSet;

                    /**
                     * <p>交易支付</p>
                     */
                    TransactionEvent m_transaction;
                    bool m_transactionHasBeenSet;

                    /**
                     * <p>短信</p>
                     */
                    SMSEvent m_sms;
                    bool m_smsHasBeenSet;

                    /**
                     * <p>拒付</p>
                     */
                    ChargeBackEvent m_chargeBack;
                    bool m_chargeBackHasBeenSet;

                    /**
                     * <p>登出</p>
                     */
                    LogoutEvent m_logout;
                    bool m_logoutHasBeenSet;

                    /**
                     * <p>修改账号</p>
                     */
                    ModifyAccountEvent m_modifyAccount;
                    bool m_modifyAccountHasBeenSet;

                    /**
                     * <p>修改密码</p>
                     */
                    ModifyPasswordEvent m_modifyPassword;
                    bool m_modifyPasswordHasBeenSet;

                    /**
                     * <p>安全验证</p>
                     */
                    SecurityVerificationEvent m_securityVerification;
                    bool m_securityVerificationHasBeenSet;

                    /**
                     * <p>参加营销活动</p>
                     */
                    AddPromotionEvent m_addPromotion;
                    bool m_addPromotionHasBeenSet;

                    /**
                     * <p>兑奖</p>
                     */
                    RedeemEvent m_redeem;
                    bool m_redeemHasBeenSet;

                    /**
                     * <p>提现</p>
                     */
                    WithdrawEvent m_withdraw;
                    bool m_withdrawHasBeenSet;

                    /**
                     * <p>自定义事件</p>
                     */
                    CustEvent m_custEvent;
                    bool m_custEventHasBeenSet;

                    /**
                     * <p>扫码</p>
                     */
                    ScanCodeEvent m_scanCode;
                    bool m_scanCodeHasBeenSet;

                    /**
                     * <p>抽奖</p>
                     */
                    LuckyDrawEvent m_luckyDraw;
                    bool m_luckyDrawHasBeenSet;

                    /**
                     * <p>做任务</p>
                     */
                    TaskEvent m_task;
                    bool m_taskHasBeenSet;

                    /**
                     * <p>邀请</p>
                     */
                    InvitationEvent m_invitation;
                    bool m_invitationHasBeenSet;

                    /**
                     * <p>领红包</p>
                     */
                    ClaimRedPacketEvent m_claimRedPacket;
                    bool m_claimRedPacketHasBeenSet;

                    /**
                     * <p>浏览</p>
                     */
                    BrowseEvent m_browse;
                    bool m_browseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_EVENTDETAIL_H_
