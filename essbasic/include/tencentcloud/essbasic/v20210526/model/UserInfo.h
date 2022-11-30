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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_USERINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_USERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 接口调用者信息
                */
                class UserInfo : public AbstractModel
                {
                public:
                    UserInfo();
                    ~UserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取渠道平台自定义，对渠道子客企业员的唯一标识。一个OpenId在一个子客企业内唯一对应一个真实员工，不可在其他子客企业内重复使用。（例如，可以使用经办人企业名+员工身份证的hash值，需要渠道平台保存），最大64位字符串
                     * @return OpenId 渠道平台自定义，对渠道子客企业员的唯一标识。一个OpenId在一个子客企业内唯一对应一个真实员工，不可在其他子客企业内重复使用。（例如，可以使用经办人企业名+员工身份证的hash值，需要渠道平台保存），最大64位字符串
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置渠道平台自定义，对渠道子客企业员的唯一标识。一个OpenId在一个子客企业内唯一对应一个真实员工，不可在其他子客企业内重复使用。（例如，可以使用经办人企业名+员工身份证的hash值，需要渠道平台保存），最大64位字符串
                     * @param OpenId 渠道平台自定义，对渠道子客企业员的唯一标识。一个OpenId在一个子客企业内唯一对应一个真实员工，不可在其他子客企业内重复使用。（例如，可以使用经办人企业名+员工身份证的hash值，需要渠道平台保存），最大64位字符串
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取内部参数，暂未开放使用
                     * @return Channel 内部参数，暂未开放使用
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置内部参数，暂未开放使用
                     * @param Channel 内部参数，暂未开放使用
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取内部参数，暂未开放使用
                     * @return CustomUserId 内部参数，暂未开放使用
                     */
                    std::string GetCustomUserId() const;

                    /**
                     * 设置内部参数，暂未开放使用
                     * @param CustomUserId 内部参数，暂未开放使用
                     */
                    void SetCustomUserId(const std::string& _customUserId);

                    /**
                     * 判断参数 CustomUserId 是否已赋值
                     * @return CustomUserId 是否已赋值
                     */
                    bool CustomUserIdHasBeenSet() const;

                    /**
                     * 获取内部参数，暂未开放使用
                     * @return ClientIp 内部参数，暂未开放使用
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置内部参数，暂未开放使用
                     * @param ClientIp 内部参数，暂未开放使用
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取内部参数，暂未开放使用
                     * @return ProxyIp 内部参数，暂未开放使用
                     */
                    std::string GetProxyIp() const;

                    /**
                     * 设置内部参数，暂未开放使用
                     * @param ProxyIp 内部参数，暂未开放使用
                     */
                    void SetProxyIp(const std::string& _proxyIp);

                    /**
                     * 判断参数 ProxyIp 是否已赋值
                     * @return ProxyIp 是否已赋值
                     */
                    bool ProxyIpHasBeenSet() const;

                private:

                    /**
                     * 渠道平台自定义，对渠道子客企业员的唯一标识。一个OpenId在一个子客企业内唯一对应一个真实员工，不可在其他子客企业内重复使用。（例如，可以使用经办人企业名+员工身份证的hash值，需要渠道平台保存），最大64位字符串
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 内部参数，暂未开放使用
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 内部参数，暂未开放使用
                     */
                    std::string m_customUserId;
                    bool m_customUserIdHasBeenSet;

                    /**
                     * 内部参数，暂未开放使用
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * 内部参数，暂未开放使用
                     */
                    std::string m_proxyIp;
                    bool m_proxyIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_USERINFO_H_
