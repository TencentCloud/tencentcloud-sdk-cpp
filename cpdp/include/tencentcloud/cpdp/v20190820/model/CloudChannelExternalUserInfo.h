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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDCHANNELEXTERNALUSERINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDCHANNELEXTERNALUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 渠道方用户信息
                */
                class CloudChannelExternalUserInfo : public AbstractModel
                {
                public:
                    CloudChannelExternalUserInfo();
                    ~CloudChannelExternalUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取渠道方用户类型，枚举值:
WX_OPENID 微信支付类型
ALIPAY_BUYERID 支付宝支付类型
                     * @return ChannelExternalUserType 渠道方用户类型，枚举值:
WX_OPENID 微信支付类型
ALIPAY_BUYERID 支付宝支付类型
                     * 
                     */
                    std::string GetChannelExternalUserType() const;

                    /**
                     * 设置渠道方用户类型，枚举值:
WX_OPENID 微信支付类型
ALIPAY_BUYERID 支付宝支付类型
                     * @param _channelExternalUserType 渠道方用户类型，枚举值:
WX_OPENID 微信支付类型
ALIPAY_BUYERID 支付宝支付类型
                     * 
                     */
                    void SetChannelExternalUserType(const std::string& _channelExternalUserType);

                    /**
                     * 判断参数 ChannelExternalUserType 是否已赋值
                     * @return ChannelExternalUserType 是否已赋值
                     * 
                     */
                    bool ChannelExternalUserTypeHasBeenSet() const;

                    /**
                     * 获取渠道方用户Id
                     * @return ChannelExternalUserId 渠道方用户Id
                     * 
                     */
                    std::string GetChannelExternalUserId() const;

                    /**
                     * 设置渠道方用户Id
                     * @param _channelExternalUserId 渠道方用户Id
                     * 
                     */
                    void SetChannelExternalUserId(const std::string& _channelExternalUserId);

                    /**
                     * 判断参数 ChannelExternalUserId 是否已赋值
                     * @return ChannelExternalUserId 是否已赋值
                     * 
                     */
                    bool ChannelExternalUserIdHasBeenSet() const;

                private:

                    /**
                     * 渠道方用户类型，枚举值:
WX_OPENID 微信支付类型
ALIPAY_BUYERID 支付宝支付类型
                     */
                    std::string m_channelExternalUserType;
                    bool m_channelExternalUserTypeHasBeenSet;

                    /**
                     * 渠道方用户Id
                     */
                    std::string m_channelExternalUserId;
                    bool m_channelExternalUserIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDCHANNELEXTERNALUSERINFO_H_
