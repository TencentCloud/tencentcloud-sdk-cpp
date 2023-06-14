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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYOPENBANKSUBMERCHANTSIGNONLINEREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYOPENBANKSUBMERCHANTSIGNONLINEREQUEST_H_

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
                * ApplyOpenBankSubMerchantSignOnline请求参数结构体
                */
                class ApplyOpenBankSubMerchantSignOnlineRequest : public AbstractModel
                {
                public:
                    ApplyOpenBankSubMerchantSignOnlineRequest();
                    ~ApplyOpenBankSubMerchantSignOnlineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道商户号。外部平台接入云企付平台下发。必填。
                     * @return ChannelMerchantId 渠道商户号。外部平台接入云企付平台下发。必填。
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置渠道商户号。外部平台接入云企付平台下发。必填。
                     * @param _channelMerchantId 渠道商户号。外部平台接入云企付平台下发。必填。
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
                     * 获取渠道名称。详见附录-枚举类型-ChannelName。
                     * @return ChannelName 渠道名称。详见附录-枚举类型-ChannelName。
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名称。详见附录-枚举类型-ChannelName。
                     * @param _channelName 渠道名称。详见附录-枚举类型-ChannelName。
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
                     * 获取外部子商户ID。
                     * @return OutSubMerchantId 外部子商户ID。
                     * 
                     */
                    std::string GetOutSubMerchantId() const;

                    /**
                     * 设置外部子商户ID。
                     * @param _outSubMerchantId 外部子商户ID。
                     * 
                     */
                    void SetOutSubMerchantId(const std::string& _outSubMerchantId);

                    /**
                     * 判断参数 OutSubMerchantId 是否已赋值
                     * @return OutSubMerchantId 是否已赋值
                     * 
                     */
                    bool OutSubMerchantIdHasBeenSet() const;

                    /**
                     * 获取渠道子商户ID。
                     * @return ChannelSubMerchantId 渠道子商户ID。
                     * 
                     */
                    std::string GetChannelSubMerchantId() const;

                    /**
                     * 设置渠道子商户ID。
                     * @param _channelSubMerchantId 渠道子商户ID。
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
                     * 获取签约成功回调地址。
                     * @return NotifyUrl 签约成功回调地址。
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置签约成功回调地址。
                     * @param _notifyUrl 签约成功回调地址。
                     * 
                     */
                    void SetNotifyUrl(const std::string& _notifyUrl);

                    /**
                     * 判断参数 NotifyUrl 是否已赋值
                     * @return NotifyUrl 是否已赋值
                     * 
                     */
                    bool NotifyUrlHasBeenSet() const;

                private:

                    /**
                     * 渠道商户号。外部平台接入云企付平台下发。必填。
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 渠道名称。详见附录-枚举类型-ChannelName。
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 外部子商户ID。
                     */
                    std::string m_outSubMerchantId;
                    bool m_outSubMerchantIdHasBeenSet;

                    /**
                     * 渠道子商户ID。
                     */
                    std::string m_channelSubMerchantId;
                    bool m_channelSubMerchantIdHasBeenSet;

                    /**
                     * 签约成功回调地址。
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYOPENBANKSUBMERCHANTSIGNONLINEREQUEST_H_
