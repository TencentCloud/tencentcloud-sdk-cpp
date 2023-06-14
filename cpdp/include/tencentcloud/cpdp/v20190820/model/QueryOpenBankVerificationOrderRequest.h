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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKVERIFICATIONORDERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKVERIFICATIONORDERREQUEST_H_

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
                * QueryOpenBankVerificationOrder请求参数结构体
                */
                class QueryOpenBankVerificationOrderRequest : public AbstractModel
                {
                public:
                    QueryOpenBankVerificationOrderRequest();
                    ~QueryOpenBankVerificationOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云企付渠道商户号。外部接入平台入驻云企付平台后下发。
                     * @return ChannelMerchantId 云企付渠道商户号。外部接入平台入驻云企付平台后下发。
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置云企付渠道商户号。外部接入平台入驻云企付平台后下发。
                     * @param _channelMerchantId 云企付渠道商户号。外部接入平台入驻云企付平台后下发。
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
                     * 获取云企付渠道核销订单号。与OutVerificationId不能同时为空。
                     * @return ChannelVerificationId 云企付渠道核销订单号。与OutVerificationId不能同时为空。
                     * 
                     */
                    std::string GetChannelVerificationId() const;

                    /**
                     * 设置云企付渠道核销订单号。与OutVerificationId不能同时为空。
                     * @param _channelVerificationId 云企付渠道核销订单号。与OutVerificationId不能同时为空。
                     * 
                     */
                    void SetChannelVerificationId(const std::string& _channelVerificationId);

                    /**
                     * 判断参数 ChannelVerificationId 是否已赋值
                     * @return ChannelVerificationId 是否已赋值
                     * 
                     */
                    bool ChannelVerificationIdHasBeenSet() const;

                    /**
                     * 获取外部核销申请订单号。与ChannelVerificationId不能同时为空。
                     * @return OutVerificationId 外部核销申请订单号。与ChannelVerificationId不能同时为空。
                     * 
                     */
                    std::string GetOutVerificationId() const;

                    /**
                     * 设置外部核销申请订单号。与ChannelVerificationId不能同时为空。
                     * @param _outVerificationId 外部核销申请订单号。与ChannelVerificationId不能同时为空。
                     * 
                     */
                    void SetOutVerificationId(const std::string& _outVerificationId);

                    /**
                     * 判断参数 OutVerificationId 是否已赋值
                     * @return OutVerificationId 是否已赋值
                     * 
                     */
                    bool OutVerificationIdHasBeenSet() const;

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
                     * 云企付渠道商户号。外部接入平台入驻云企付平台后下发。
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 云企付渠道核销订单号。与OutVerificationId不能同时为空。
                     */
                    std::string m_channelVerificationId;
                    bool m_channelVerificationIdHasBeenSet;

                    /**
                     * 外部核销申请订单号。与ChannelVerificationId不能同时为空。
                     */
                    std::string m_outVerificationId;
                    bool m_outVerificationIdHasBeenSet;

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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKVERIFICATIONORDERREQUEST_H_
