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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_TRANSFERSINGLEPAYREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_TRANSFERSINGLEPAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * TransferSinglePay请求参数结构体
                */
                class TransferSinglePayRequest : public AbstractModel
                {
                public:
                    TransferSinglePayRequest();
                    ~TransferSinglePayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取商户号
                     * @return MerchantId 商户号
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置商户号
                     * @param _merchantId 商户号
                     * 
                     */
                    void SetMerchantId(const std::string& _merchantId);

                    /**
                     * 判断参数 MerchantId 是否已赋值
                     * @return MerchantId 是否已赋值
                     * 
                     */
                    bool MerchantIdHasBeenSet() const;

                    /**
                     * 获取微信申请商户号的appid或者商户号绑定的appid
支付宝、平安填入MerchantId
                     * @return MerchantAppId 微信申请商户号的appid或者商户号绑定的appid
支付宝、平安填入MerchantId
                     * 
                     */
                    std::string GetMerchantAppId() const;

                    /**
                     * 设置微信申请商户号的appid或者商户号绑定的appid
支付宝、平安填入MerchantId
                     * @param _merchantAppId 微信申请商户号的appid或者商户号绑定的appid
支付宝、平安填入MerchantId
                     * 
                     */
                    void SetMerchantAppId(const std::string& _merchantAppId);

                    /**
                     * 判断参数 MerchantAppId 是否已赋值
                     * @return MerchantAppId 是否已赋值
                     * 
                     */
                    bool MerchantAppIdHasBeenSet() const;

                    /**
                     * 获取1、 微信企业付款 
2、 支付宝转账 
3、 平安银企直联代发转账
                     * @return TransferType 1、 微信企业付款 
2、 支付宝转账 
3、 平安银企直联代发转账
                     * 
                     */
                    int64_t GetTransferType() const;

                    /**
                     * 设置1、 微信企业付款 
2、 支付宝转账 
3、 平安银企直联代发转账
                     * @param _transferType 1、 微信企业付款 
2、 支付宝转账 
3、 平安银企直联代发转账
                     * 
                     */
                    void SetTransferType(const int64_t& _transferType);

                    /**
                     * 判断参数 TransferType 是否已赋值
                     * @return TransferType 是否已赋值
                     * 
                     */
                    bool TransferTypeHasBeenSet() const;

                    /**
                     * 获取订单流水号，唯一，不能包含特殊字符，长度最大限制64位，推荐使用字母，数字组合，"_","-"组合
                     * @return OrderId 订单流水号，唯一，不能包含特殊字符，长度最大限制64位，推荐使用字母，数字组合，"_","-"组合
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单流水号，唯一，不能包含特殊字符，长度最大限制64位，推荐使用字母，数字组合，"_","-"组合
                     * @param _orderId 订单流水号，唯一，不能包含特殊字符，长度最大限制64位，推荐使用字母，数字组合，"_","-"组合
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取转账金额，单位分
                     * @return TransferAmount 转账金额，单位分
                     * 
                     */
                    int64_t GetTransferAmount() const;

                    /**
                     * 设置转账金额，单位分
                     * @param _transferAmount 转账金额，单位分
                     * 
                     */
                    void SetTransferAmount(const int64_t& _transferAmount);

                    /**
                     * 判断参数 TransferAmount 是否已赋值
                     * @return TransferAmount 是否已赋值
                     * 
                     */
                    bool TransferAmountHasBeenSet() const;

                    /**
                     * 获取收款方标识。
微信为open_id；
支付宝为会员alipay_user_id;
平安为收款方银行账号
                     * @return PayeeId 收款方标识。
微信为open_id；
支付宝为会员alipay_user_id;
平安为收款方银行账号
                     * 
                     */
                    std::string GetPayeeId() const;

                    /**
                     * 设置收款方标识。
微信为open_id；
支付宝为会员alipay_user_id;
平安为收款方银行账号
                     * @param _payeeId 收款方标识。
微信为open_id；
支付宝为会员alipay_user_id;
平安为收款方银行账号
                     * 
                     */
                    void SetPayeeId(const std::string& _payeeId);

                    /**
                     * 判断参数 PayeeId 是否已赋值
                     * @return PayeeId 是否已赋值
                     * 
                     */
                    bool PayeeIdHasBeenSet() const;

                    /**
                     * 获取收款方姓名。支付宝可选；微信，平安模式下必传
                     * @return PayeeName 收款方姓名。支付宝可选；微信，平安模式下必传
                     * 
                     */
                    std::string GetPayeeName() const;

                    /**
                     * 设置收款方姓名。支付宝可选；微信，平安模式下必传
                     * @param _payeeName 收款方姓名。支付宝可选；微信，平安模式下必传
                     * 
                     */
                    void SetPayeeName(const std::string& _payeeName);

                    /**
                     * 判断参数 PayeeName 是否已赋值
                     * @return PayeeName 是否已赋值
                     * 
                     */
                    bool PayeeNameHasBeenSet() const;

                    /**
                     * 获取收款方附加信息，平安接入使用。需要以JSON格式提供以下字段：
PayeeBankName：收款人开户行名称
 CcyCode：货币类型（RMB-人民币）
 UnionFlag：行内跨行标志（1：行内转账，0：跨行转账）。
                     * @return PayeeExtends 收款方附加信息，平安接入使用。需要以JSON格式提供以下字段：
PayeeBankName：收款人开户行名称
 CcyCode：货币类型（RMB-人民币）
 UnionFlag：行内跨行标志（1：行内转账，0：跨行转账）。
                     * 
                     */
                    std::string GetPayeeExtends() const;

                    /**
                     * 设置收款方附加信息，平安接入使用。需要以JSON格式提供以下字段：
PayeeBankName：收款人开户行名称
 CcyCode：货币类型（RMB-人民币）
 UnionFlag：行内跨行标志（1：行内转账，0：跨行转账）。
                     * @param _payeeExtends 收款方附加信息，平安接入使用。需要以JSON格式提供以下字段：
PayeeBankName：收款人开户行名称
 CcyCode：货币类型（RMB-人民币）
 UnionFlag：行内跨行标志（1：行内转账，0：跨行转账）。
                     * 
                     */
                    void SetPayeeExtends(const std::string& _payeeExtends);

                    /**
                     * 判断参数 PayeeExtends 是否已赋值
                     * @return PayeeExtends 是否已赋值
                     * 
                     */
                    bool PayeeExtendsHasBeenSet() const;

                    /**
                     * 获取请求预留字段，原样透传返回
                     * @return ReqReserved 请求预留字段，原样透传返回
                     * 
                     */
                    std::string GetReqReserved() const;

                    /**
                     * 设置请求预留字段，原样透传返回
                     * @param _reqReserved 请求预留字段，原样透传返回
                     * 
                     */
                    void SetReqReserved(const std::string& _reqReserved);

                    /**
                     * 判断参数 ReqReserved 是否已赋值
                     * @return ReqReserved 是否已赋值
                     * 
                     */
                    bool ReqReservedHasBeenSet() const;

                    /**
                     * 获取业务备注
                     * @return Remark 业务备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置业务备注
                     * @param _remark 业务备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取转账结果回调通知URL。若不填，则不进行回调。
                     * @return NotifyUrl 转账结果回调通知URL。若不填，则不进行回调。
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置转账结果回调通知URL。若不填，则不进行回调。
                     * @param _notifyUrl 转账结果回调通知URL。若不填，则不进行回调。
                     * 
                     */
                    void SetNotifyUrl(const std::string& _notifyUrl);

                    /**
                     * 判断参数 NotifyUrl 是否已赋值
                     * @return NotifyUrl 是否已赋值
                     * 
                     */
                    bool NotifyUrlHasBeenSet() const;

                    /**
                     * 获取接入环境。沙箱环境填sandbox。
                     * @return Profile 接入环境。沙箱环境填sandbox。
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置接入环境。沙箱环境填sandbox。
                     * @param _profile 接入环境。沙箱环境填sandbox。
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * 商户号
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 微信申请商户号的appid或者商户号绑定的appid
支付宝、平安填入MerchantId
                     */
                    std::string m_merchantAppId;
                    bool m_merchantAppIdHasBeenSet;

                    /**
                     * 1、 微信企业付款 
2、 支付宝转账 
3、 平安银企直联代发转账
                     */
                    int64_t m_transferType;
                    bool m_transferTypeHasBeenSet;

                    /**
                     * 订单流水号，唯一，不能包含特殊字符，长度最大限制64位，推荐使用字母，数字组合，"_","-"组合
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 转账金额，单位分
                     */
                    int64_t m_transferAmount;
                    bool m_transferAmountHasBeenSet;

                    /**
                     * 收款方标识。
微信为open_id；
支付宝为会员alipay_user_id;
平安为收款方银行账号
                     */
                    std::string m_payeeId;
                    bool m_payeeIdHasBeenSet;

                    /**
                     * 收款方姓名。支付宝可选；微信，平安模式下必传
                     */
                    std::string m_payeeName;
                    bool m_payeeNameHasBeenSet;

                    /**
                     * 收款方附加信息，平安接入使用。需要以JSON格式提供以下字段：
PayeeBankName：收款人开户行名称
 CcyCode：货币类型（RMB-人民币）
 UnionFlag：行内跨行标志（1：行内转账，0：跨行转账）。
                     */
                    std::string m_payeeExtends;
                    bool m_payeeExtendsHasBeenSet;

                    /**
                     * 请求预留字段，原样透传返回
                     */
                    std::string m_reqReserved;
                    bool m_reqReservedHasBeenSet;

                    /**
                     * 业务备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 转账结果回调通知URL。若不填，则不进行回调。
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * 接入环境。沙箱环境填sandbox。
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_TRANSFERSINGLEPAYREQUEST_H_
