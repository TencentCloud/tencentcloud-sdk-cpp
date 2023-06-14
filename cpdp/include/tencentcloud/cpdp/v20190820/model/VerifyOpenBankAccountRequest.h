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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_VERIFYOPENBANKACCOUNTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_VERIFYOPENBANKACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankPayeeInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * VerifyOpenBankAccount请求参数结构体
                */
                class VerifyOpenBankAccountRequest : public AbstractModel
                {
                public:
                    VerifyOpenBankAccountRequest();
                    ~VerifyOpenBankAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道商户号。外部接入平台入驻云企付平台下发
                     * @return ChannelMerchantId 渠道商户号。外部接入平台入驻云企付平台下发
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置渠道商户号。外部接入平台入驻云企付平台下发
                     * @param _channelMerchantId 渠道商户号。外部接入平台入驻云企付平台下发
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
                     * 获取渠道名称。详见附录-云企付枚举类说明-ChannelName。
__TENPAY__: 商企付
                     * @return ChannelName 渠道名称。详见附录-云企付枚举类说明-ChannelName。
__TENPAY__: 商企付
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名称。详见附录-云企付枚举类说明-ChannelName。
__TENPAY__: 商企付
                     * @param _channelName 渠道名称。详见附录-云企付枚举类说明-ChannelName。
__TENPAY__: 商企付
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
                     * 获取收款方信息。
                     * @return PayeeInfo 收款方信息。
                     * 
                     */
                    OpenBankPayeeInfo GetPayeeInfo() const;

                    /**
                     * 设置收款方信息。
                     * @param _payeeInfo 收款方信息。
                     * 
                     */
                    void SetPayeeInfo(const OpenBankPayeeInfo& _payeeInfo);

                    /**
                     * 判断参数 PayeeInfo 是否已赋值
                     * @return PayeeInfo 是否已赋值
                     * 
                     */
                    bool PayeeInfoHasBeenSet() const;

                    /**
                     * 获取通知地址，如www.test.com。
                     * @return NotifyUrl 通知地址，如www.test.com。
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置通知地址，如www.test.com。
                     * @param _notifyUrl 通知地址，如www.test.com。
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
                     * 渠道商户号。外部接入平台入驻云企付平台下发
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 渠道名称。详见附录-云企付枚举类说明-ChannelName。
__TENPAY__: 商企付
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 收款方信息。
                     */
                    OpenBankPayeeInfo m_payeeInfo;
                    bool m_payeeInfoHasBeenSet;

                    /**
                     * 通知地址，如www.test.com。
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_VERIFYOPENBANKACCOUNTREQUEST_H_
