/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p>用户在平台中的编号（UserId）</p><p>UserId 获取方式：<a href="https://qcloudimg.tencent-cloud.cn/raw/6b054d6161b04c24855de15cb243f6bf.png" target="_blank">点击查看</a></p>
                     * @return UserId <p>用户在平台中的编号（UserId）</p><p>UserId 获取方式：<a href="https://qcloudimg.tencent-cloud.cn/raw/6b054d6161b04c24855de15cb243f6bf.png" target="_blank">点击查看</a></p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户在平台中的编号（UserId）</p><p>UserId 获取方式：<a href="https://qcloudimg.tencent-cloud.cn/raw/6b054d6161b04c24855de15cb243f6bf.png" target="_blank">点击查看</a></p>
                     * @param _userId <p>用户在平台中的编号（UserId）</p><p>UserId 获取方式：<a href="https://qcloudimg.tencent-cloud.cn/raw/6b054d6161b04c24855de15cb243f6bf.png" target="_blank">点击查看</a></p>
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
                     * 获取<p>用户的来源渠道，一般不用传，特定场景根据接口说明传值</p>
                     * @return Channel <p>用户的来源渠道，一般不用传，特定场景根据接口说明传值</p>
                     * @deprecated
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置<p>用户的来源渠道，一般不用传，特定场景根据接口说明传值</p>
                     * @param _channel <p>用户的来源渠道，一般不用传，特定场景根据接口说明传值</p>
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
                     * 获取<p>用户在渠道的编号，一般不用传，特定场景根据接口说明传值</p>
                     * @return OpenId <p>用户在渠道的编号，一般不用传，特定场景根据接口说明传值</p>
                     * @deprecated
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置<p>用户在渠道的编号，一般不用传，特定场景根据接口说明传值</p>
                     * @param _openId <p>用户在渠道的编号，一般不用传，特定场景根据接口说明传值</p>
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
                     * 获取<p>用户真实IP，内部字段，暂未开放</p>
                     * @return ClientIp <p>用户真实IP，内部字段，暂未开放</p>
                     * @deprecated
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置<p>用户真实IP，内部字段，暂未开放</p>
                     * @param _clientIp <p>用户真实IP，内部字段，暂未开放</p>
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
                     * 获取<p>用户代理IP，内部字段，暂未开放</p>
                     * @return ProxyIp <p>用户代理IP，内部字段，暂未开放</p>
                     * @deprecated
                     */
                    std::string GetProxyIp() const;

                    /**
                     * 设置<p>用户代理IP，内部字段，暂未开放</p>
                     * @param _proxyIp <p>用户代理IP，内部字段，暂未开放</p>
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
                     * <p>用户在平台中的编号（UserId）</p><p>UserId 获取方式：<a href="https://qcloudimg.tencent-cloud.cn/raw/6b054d6161b04c24855de15cb243f6bf.png" target="_blank">点击查看</a></p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>用户的来源渠道，一般不用传，特定场景根据接口说明传值</p>
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * <p>用户在渠道的编号，一般不用传，特定场景根据接口说明传值</p>
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * <p>用户真实IP，内部字段，暂未开放</p>
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * <p>用户代理IP，内部字段，暂未开放</p>
                     */
                    std::string m_proxyIp;
                    bool m_proxyIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_USERINFO_H_
