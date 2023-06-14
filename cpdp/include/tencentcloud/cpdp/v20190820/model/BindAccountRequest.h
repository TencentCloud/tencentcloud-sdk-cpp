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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_BINDACCOUNTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_BINDACCOUNTREQUEST_H_

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
                * BindAccount请求参数结构体
                */
                class BindAccountRequest : public AbstractModel
                {
                public:
                    BindAccountRequest();
                    ~BindAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主播Id
                     * @return AnchorId 主播Id
                     * 
                     */
                    std::string GetAnchorId() const;

                    /**
                     * 设置主播Id
                     * @param _anchorId 主播Id
                     * 
                     */
                    void SetAnchorId(const std::string& _anchorId);

                    /**
                     * 判断参数 AnchorId 是否已赋值
                     * @return AnchorId 是否已赋值
                     * 
                     */
                    bool AnchorIdHasBeenSet() const;

                    /**
                     * 获取1 微信企业付款 
2 支付宝转账 
3 平安银企直连代发转账
                     * @return TransferType 1 微信企业付款 
2 支付宝转账 
3 平安银企直连代发转账
                     * 
                     */
                    int64_t GetTransferType() const;

                    /**
                     * 设置1 微信企业付款 
2 支付宝转账 
3 平安银企直连代发转账
                     * @param _transferType 1 微信企业付款 
2 支付宝转账 
3 平安银企直连代发转账
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
                     * 获取收款方标识。
微信为open_id；
支付宝为会员alipay_user_id;
平安为收款方银行账号;
                     * @return AccountNo 收款方标识。
微信为open_id；
支付宝为会员alipay_user_id;
平安为收款方银行账号;
                     * 
                     */
                    std::string GetAccountNo() const;

                    /**
                     * 设置收款方标识。
微信为open_id；
支付宝为会员alipay_user_id;
平安为收款方银行账号;
                     * @param _accountNo 收款方标识。
微信为open_id；
支付宝为会员alipay_user_id;
平安为收款方银行账号;
                     * 
                     */
                    void SetAccountNo(const std::string& _accountNo);

                    /**
                     * 判断参数 AccountNo 是否已赋值
                     * @return AccountNo 是否已赋值
                     * 
                     */
                    bool AccountNoHasBeenSet() const;

                    /**
                     * 获取手机号
                     * @return PhoneNum 手机号
                     * 
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 设置手机号
                     * @param _phoneNum 手机号
                     * 
                     */
                    void SetPhoneNum(const std::string& _phoneNum);

                    /**
                     * 判断参数 PhoneNum 是否已赋值
                     * @return PhoneNum 是否已赋值
                     * 
                     */
                    bool PhoneNumHasBeenSet() const;

                private:

                    /**
                     * 主播Id
                     */
                    std::string m_anchorId;
                    bool m_anchorIdHasBeenSet;

                    /**
                     * 1 微信企业付款 
2 支付宝转账 
3 平安银企直连代发转账
                     */
                    int64_t m_transferType;
                    bool m_transferTypeHasBeenSet;

                    /**
                     * 收款方标识。
微信为open_id；
支付宝为会员alipay_user_id;
平安为收款方银行账号;
                     */
                    std::string m_accountNo;
                    bool m_accountNoHasBeenSet;

                    /**
                     * 手机号
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_BINDACCOUNTREQUEST_H_
