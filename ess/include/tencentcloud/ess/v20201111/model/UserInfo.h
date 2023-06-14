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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_USERINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_USERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 用户信息
                */
                class UserInfo : public AbstractModel
                {
                public:
                    UserInfo();
                    ~UserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户在平台的编号
                     * @return UserId 用户在平台的编号
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户在平台的编号
                     * @param _userId 用户在平台的编号
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取用户的来源渠道，一般不用传，特定场景根据接口说明传值
                     * @return Channel 用户的来源渠道，一般不用传，特定场景根据接口说明传值
                     * @deprecated
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置用户的来源渠道，一般不用传，特定场景根据接口说明传值
                     * @param _channel 用户的来源渠道，一般不用传，特定场景根据接口说明传值
                     * @deprecated
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * @deprecated
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取用户在渠道的编号，一般不用传，特定场景根据接口说明传值
                     * @return OpenId 用户在渠道的编号，一般不用传，特定场景根据接口说明传值
                     * @deprecated
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置用户在渠道的编号，一般不用传，特定场景根据接口说明传值
                     * @param _openId 用户在渠道的编号，一般不用传，特定场景根据接口说明传值
                     * @deprecated
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * @deprecated
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取用户真实IP，内部字段，暂未开放
                     * @return ClientIp 用户真实IP，内部字段，暂未开放
                     * @deprecated
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置用户真实IP，内部字段，暂未开放
                     * @param _clientIp 用户真实IP，内部字段，暂未开放
                     * @deprecated
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * @deprecated
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取用户代理IP，内部字段，暂未开放
                     * @return ProxyIp 用户代理IP，内部字段，暂未开放
                     * @deprecated
                     */
                    std::string GetProxyIp() const;

                    /**
                     * 设置用户代理IP，内部字段，暂未开放
                     * @param _proxyIp 用户代理IP，内部字段，暂未开放
                     * @deprecated
                     */
                    void SetProxyIp(const std::string& _proxyIp);

                    /**
                     * 判断参数 ProxyIp 是否已赋值
                     * @return ProxyIp 是否已赋值
                     * @deprecated
                     */
                    bool ProxyIpHasBeenSet() const;

                private:

                    /**
                     * 用户在平台的编号
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户的来源渠道，一般不用传，特定场景根据接口说明传值
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 用户在渠道的编号，一般不用传，特定场景根据接口说明传值
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 用户真实IP，内部字段，暂未开放
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * 用户代理IP，内部字段，暂未开放
                     */
                    std::string m_proxyIp;
                    bool m_proxyIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_USERINFO_H_
