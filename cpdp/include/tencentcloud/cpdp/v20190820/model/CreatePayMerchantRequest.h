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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEPAYMERCHANTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEPAYMERCHANTREQUEST_H_

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
                * CreatePayMerchant请求参数结构体
                */
                class CreatePayMerchantRequest : public AbstractModel
                {
                public:
                    CreatePayMerchantRequest();
                    ~CreatePayMerchantRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台编号
                     * @return PlatformCode 平台编号
                     * 
                     */
                    std::string GetPlatformCode() const;

                    /**
                     * 设置平台编号
                     * @param _platformCode 平台编号
                     * 
                     */
                    void SetPlatformCode(const std::string& _platformCode);

                    /**
                     * 判断参数 PlatformCode 是否已赋值
                     * @return PlatformCode 是否已赋值
                     * 
                     */
                    bool PlatformCodeHasBeenSet() const;

                    /**
                     * 获取渠道方收款商户编号，由渠道方(银行)提 供。
                     * @return ChannelMerchantNo 渠道方收款商户编号，由渠道方(银行)提 供。
                     * 
                     */
                    std::string GetChannelMerchantNo() const;

                    /**
                     * 设置渠道方收款商户编号，由渠道方(银行)提 供。
                     * @param _channelMerchantNo 渠道方收款商户编号，由渠道方(银行)提 供。
                     * 
                     */
                    void SetChannelMerchantNo(const std::string& _channelMerchantNo);

                    /**
                     * 判断参数 ChannelMerchantNo 是否已赋值
                     * @return ChannelMerchantNo 是否已赋值
                     * 
                     */
                    bool ChannelMerchantNoHasBeenSet() const;

                    /**
                     * 获取是否需要向渠道进行 商户信息验证 1:验证
0:不验证
                     * @return ChannelCheckFlag 是否需要向渠道进行 商户信息验证 1:验证
0:不验证
                     * 
                     */
                    std::string GetChannelCheckFlag() const;

                    /**
                     * 设置是否需要向渠道进行 商户信息验证 1:验证
0:不验证
                     * @param _channelCheckFlag 是否需要向渠道进行 商户信息验证 1:验证
0:不验证
                     * 
                     */
                    void SetChannelCheckFlag(const std::string& _channelCheckFlag);

                    /**
                     * 判断参数 ChannelCheckFlag 是否已赋值
                     * @return ChannelCheckFlag 是否已赋值
                     * 
                     */
                    bool ChannelCheckFlagHasBeenSet() const;

                    /**
                     * 获取收款商户名称
                     * @return MerchantName 收款商户名称
                     * 
                     */
                    std::string GetMerchantName() const;

                    /**
                     * 设置收款商户名称
                     * @param _merchantName 收款商户名称
                     * 
                     */
                    void SetMerchantName(const std::string& _merchantName);

                    /**
                     * 判断参数 MerchantName 是否已赋值
                     * @return MerchantName 是否已赋值
                     * 
                     */
                    bool MerchantNameHasBeenSet() const;

                    /**
                     * 获取是否开通 B2B 支付 1:开通 0:不开通 缺省:1
                     * @return BusinessPayFlag 是否开通 B2B 支付 1:开通 0:不开通 缺省:1
                     * 
                     */
                    std::string GetBusinessPayFlag() const;

                    /**
                     * 设置是否开通 B2B 支付 1:开通 0:不开通 缺省:1
                     * @param _businessPayFlag 是否开通 B2B 支付 1:开通 0:不开通 缺省:1
                     * 
                     */
                    void SetBusinessPayFlag(const std::string& _businessPayFlag);

                    /**
                     * 判断参数 BusinessPayFlag 是否已赋值
                     * @return BusinessPayFlag 是否已赋值
                     * 
                     */
                    bool BusinessPayFlagHasBeenSet() const;

                private:

                    /**
                     * 平台编号
                     */
                    std::string m_platformCode;
                    bool m_platformCodeHasBeenSet;

                    /**
                     * 渠道方收款商户编号，由渠道方(银行)提 供。
                     */
                    std::string m_channelMerchantNo;
                    bool m_channelMerchantNoHasBeenSet;

                    /**
                     * 是否需要向渠道进行 商户信息验证 1:验证
0:不验证
                     */
                    std::string m_channelCheckFlag;
                    bool m_channelCheckFlagHasBeenSet;

                    /**
                     * 收款商户名称
                     */
                    std::string m_merchantName;
                    bool m_merchantNameHasBeenSet;

                    /**
                     * 是否开通 B2B 支付 1:开通 0:不开通 缺省:1
                     */
                    std::string m_businessPayFlag;
                    bool m_businessPayFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEPAYMERCHANTREQUEST_H_
