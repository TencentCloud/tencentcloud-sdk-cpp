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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_REFUNDTLINXORDERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_REFUNDTLINXORDERREQUEST_H_

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
                * RefundTlinxOrder请求参数结构体
                */
                class RefundTlinxOrderRequest : public AbstractModel
                {
                public:
                    RefundTlinxOrderRequest();
                    ~RefundTlinxOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取使用门店OpenId
                     * @return OpenId 使用门店OpenId
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置使用门店OpenId
                     * @param _openId 使用门店OpenId
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取使用门店OpenKey
                     * @return OpenKey 使用门店OpenKey
                     * 
                     */
                    std::string GetOpenKey() const;

                    /**
                     * 设置使用门店OpenKey
                     * @param _openKey 使用门店OpenKey
                     * 
                     */
                    void SetOpenKey(const std::string& _openKey);

                    /**
                     * 判断参数 OpenKey 是否已赋值
                     * @return OpenKey 是否已赋值
                     * 
                     */
                    bool OpenKeyHasBeenSet() const;

                    /**
                     * 获取原始订单的开发者交易流水号
                     * @return DeveloperNo 原始订单的开发者交易流水号
                     * 
                     */
                    std::string GetDeveloperNo() const;

                    /**
                     * 设置原始订单的开发者交易流水号
                     * @param _developerNo 原始订单的开发者交易流水号
                     * 
                     */
                    void SetDeveloperNo(const std::string& _developerNo);

                    /**
                     * 判断参数 DeveloperNo 是否已赋值
                     * @return DeveloperNo 是否已赋值
                     * 
                     */
                    bool DeveloperNoHasBeenSet() const;

                    /**
                     * 获取新退款订单的开发者流水号，同一门店内唯一
                     * @return RefundOutNo 新退款订单的开发者流水号，同一门店内唯一
                     * 
                     */
                    std::string GetRefundOutNo() const;

                    /**
                     * 设置新退款订单的开发者流水号，同一门店内唯一
                     * @param _refundOutNo 新退款订单的开发者流水号，同一门店内唯一
                     * 
                     */
                    void SetRefundOutNo(const std::string& _refundOutNo);

                    /**
                     * 判断参数 RefundOutNo 是否已赋值
                     * @return RefundOutNo 是否已赋值
                     * 
                     */
                    bool RefundOutNoHasBeenSet() const;

                    /**
                     * 获取退款订单名称，可以为空
                     * @return RefundOrderName 退款订单名称，可以为空
                     * 
                     */
                    std::string GetRefundOrderName() const;

                    /**
                     * 设置退款订单名称，可以为空
                     * @param _refundOrderName 退款订单名称，可以为空
                     * 
                     */
                    void SetRefundOrderName(const std::string& _refundOrderName);

                    /**
                     * 判断参数 RefundOrderName 是否已赋值
                     * @return RefundOrderName 是否已赋值
                     * 
                     */
                    bool RefundOrderNameHasBeenSet() const;

                    /**
                     * 获取退款金额（以分为单位，没有小数点）
                     * @return RefundAmount 退款金额（以分为单位，没有小数点）
                     * 
                     */
                    std::string GetRefundAmount() const;

                    /**
                     * 设置退款金额（以分为单位，没有小数点）
                     * @param _refundAmount 退款金额（以分为单位，没有小数点）
                     * 
                     */
                    void SetRefundAmount(const std::string& _refundAmount);

                    /**
                     * 判断参数 RefundAmount 是否已赋值
                     * @return RefundAmount 是否已赋值
                     * 
                     */
                    bool RefundAmountHasBeenSet() const;

                    /**
                     * 获取主管密码，对密码进行SHA-1加密，默认为123456
                     * @return ShopPassword 主管密码，对密码进行SHA-1加密，默认为123456
                     * 
                     */
                    std::string GetShopPassword() const;

                    /**
                     * 设置主管密码，对密码进行SHA-1加密，默认为123456
                     * @param _shopPassword 主管密码，对密码进行SHA-1加密，默认为123456
                     * 
                     */
                    void SetShopPassword(const std::string& _shopPassword);

                    /**
                     * 判断参数 ShopPassword 是否已赋值
                     * @return ShopPassword 是否已赋值
                     * 
                     */
                    bool ShopPasswordHasBeenSet() const;

                    /**
                     * 获取退款备注
                     * @return Remark 退款备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置退款备注
                     * @param _remark 退款备注
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
                     * 获取沙箱环境填sandbox，正式环境不填
                     * @return Profile 沙箱环境填sandbox，正式环境不填
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置沙箱环境填sandbox，正式环境不填
                     * @param _profile 沙箱环境填sandbox，正式环境不填
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
                     * 使用门店OpenId
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 使用门店OpenKey
                     */
                    std::string m_openKey;
                    bool m_openKeyHasBeenSet;

                    /**
                     * 原始订单的开发者交易流水号
                     */
                    std::string m_developerNo;
                    bool m_developerNoHasBeenSet;

                    /**
                     * 新退款订单的开发者流水号，同一门店内唯一
                     */
                    std::string m_refundOutNo;
                    bool m_refundOutNoHasBeenSet;

                    /**
                     * 退款订单名称，可以为空
                     */
                    std::string m_refundOrderName;
                    bool m_refundOrderNameHasBeenSet;

                    /**
                     * 退款金额（以分为单位，没有小数点）
                     */
                    std::string m_refundAmount;
                    bool m_refundAmountHasBeenSet;

                    /**
                     * 主管密码，对密码进行SHA-1加密，默认为123456
                     */
                    std::string m_shopPassword;
                    bool m_shopPasswordHasBeenSet;

                    /**
                     * 退款备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 沙箱环境填sandbox，正式环境不填
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_REFUNDTLINXORDERREQUEST_H_
