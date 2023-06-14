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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKORDERDETAILRECEIPTINFOREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKORDERDETAILRECEIPTINFOREQUEST_H_

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
                * QueryOpenBankOrderDetailReceiptInfo请求参数结构体
                */
                class QueryOpenBankOrderDetailReceiptInfoRequest : public AbstractModel
                {
                public:
                    QueryOpenBankOrderDetailReceiptInfoRequest();
                    ~QueryOpenBankOrderDetailReceiptInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道商户ID
                     * @return ChannelMerchantId 渠道商户ID
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置渠道商户ID
                     * @param _channelMerchantId 渠道商户ID
                     * 
                     */
                    void SetChannelMerchantId(const std::string& _channelMerchantId);

                    /**
                     * 判断参数 ChannelMerchantId 是否已赋值
                     * @return ChannelMerchantId 是否已赋值
                     * 
                     */
                    bool ChannelMerchantIdHasBeenSet() const;

                    /**
                     * 获取渠道子商户ID
                     * @return ChannelSubMerchantId 渠道子商户ID
                     * 
                     */
                    std::string GetChannelSubMerchantId() const;

                    /**
                     * 设置渠道子商户ID
                     * @param _channelSubMerchantId 渠道子商户ID
                     * 
                     */
                    void SetChannelSubMerchantId(const std::string& _channelSubMerchantId);

                    /**
                     * 判断参数 ChannelSubMerchantId 是否已赋值
                     * @return ChannelSubMerchantId 是否已赋值
                     * 
                     */
                    bool ChannelSubMerchantIdHasBeenSet() const;

                    /**
                     * 获取渠道名称，目前只支持ALIPAY
                     * @return ChannelName 渠道名称，目前只支持ALIPAY
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名称，目前只支持ALIPAY
                     * @param _channelName 渠道名称，目前只支持ALIPAY
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取支付方式，目前只支持SAFT_ISV
                     * @return PaymentMethod 支付方式，目前只支持SAFT_ISV
                     * 
                     */
                    std::string GetPaymentMethod() const;

                    /**
                     * 设置支付方式，目前只支持SAFT_ISV
                     * @param _paymentMethod 支付方式，目前只支持SAFT_ISV
                     * 
                     */
                    void SetPaymentMethod(const std::string& _paymentMethod);

                    /**
                     * 判断参数 PaymentMethod 是否已赋值
                     * @return PaymentMethod 是否已赋值
                     * 
                     */
                    bool PaymentMethodHasBeenSet() const;

                    /**
                     * 获取外部回单申请ID，与渠道回单申请ID二者选填其一
                     * @return OutApplyId 外部回单申请ID，与渠道回单申请ID二者选填其一
                     * 
                     */
                    std::string GetOutApplyId() const;

                    /**
                     * 设置外部回单申请ID，与渠道回单申请ID二者选填其一
                     * @param _outApplyId 外部回单申请ID，与渠道回单申请ID二者选填其一
                     * 
                     */
                    void SetOutApplyId(const std::string& _outApplyId);

                    /**
                     * 判断参数 OutApplyId 是否已赋值
                     * @return OutApplyId 是否已赋值
                     * 
                     */
                    bool OutApplyIdHasBeenSet() const;

                    /**
                     * 获取渠道回单申请ID，与外部回单申请ID二者选填其一
                     * @return ChannelApplyId 渠道回单申请ID，与外部回单申请ID二者选填其一
                     * 
                     */
                    std::string GetChannelApplyId() const;

                    /**
                     * 设置渠道回单申请ID，与外部回单申请ID二者选填其一
                     * @param _channelApplyId 渠道回单申请ID，与外部回单申请ID二者选填其一
                     * 
                     */
                    void SetChannelApplyId(const std::string& _channelApplyId);

                    /**
                     * 判断参数 ChannelApplyId 是否已赋值
                     * @return ChannelApplyId 是否已赋值
                     * 
                     */
                    bool ChannelApplyIdHasBeenSet() const;

                    /**
                     * 获取环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @return Environment 环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @param _environment 环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                private:

                    /**
                     * 渠道商户ID
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 渠道子商户ID
                     */
                    std::string m_channelSubMerchantId;
                    bool m_channelSubMerchantIdHasBeenSet;

                    /**
                     * 渠道名称，目前只支持ALIPAY
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 支付方式，目前只支持SAFT_ISV
                     */
                    std::string m_paymentMethod;
                    bool m_paymentMethodHasBeenSet;

                    /**
                     * 外部回单申请ID，与渠道回单申请ID二者选填其一
                     */
                    std::string m_outApplyId;
                    bool m_outApplyIdHasBeenSet;

                    /**
                     * 渠道回单申请ID，与外部回单申请ID二者选填其一
                     */
                    std::string m_channelApplyId;
                    bool m_channelApplyIdHasBeenSet;

                    /**
                     * 环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKORDERDETAILRECEIPTINFOREQUEST_H_
