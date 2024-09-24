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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_L4PROXYREMOTEAUTH_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_L4PROXYREMOTEAUTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 四层远程鉴权信息
                */
                class L4ProxyRemoteAuth : public AbstractModel
                {
                public:
                    L4ProxyRemoteAuth();
                    ~L4ProxyRemoteAuth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取四层远程鉴权开关，取值有：
<li>on：表示开启;</li>
<li>off：表示关闭。</li>
                     * @return Switch 四层远程鉴权开关，取值有：
<li>on：表示开启;</li>
<li>off：表示关闭。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置四层远程鉴权开关，取值有：
<li>on：表示开启;</li>
<li>off：表示关闭。</li>
                     * @param _switch 四层远程鉴权开关，取值有：
<li>on：表示开启;</li>
<li>off：表示关闭。</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取远程鉴权服务地址，格式为: domain/ip:port。例：example.auth.com:8888

                     * @return Address 远程鉴权服务地址，格式为: domain/ip:port。例：example.auth.com:8888

                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置远程鉴权服务地址，格式为: domain/ip:port。例：example.auth.com:8888

                     * @param _address 远程鉴权服务地址，格式为: domain/ip:port。例：example.auth.com:8888

                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取远程鉴权服务不可访问后，经过四层转发规则默认回源行为，取值有：
<li>reject：表示进行拦截，拒绝访问;</li>
<li>allow：表示允许通过。</li>
                     * @return ServerFaultyBehavior 远程鉴权服务不可访问后，经过四层转发规则默认回源行为，取值有：
<li>reject：表示进行拦截，拒绝访问;</li>
<li>allow：表示允许通过。</li>
                     * 
                     */
                    std::string GetServerFaultyBehavior() const;

                    /**
                     * 设置远程鉴权服务不可访问后，经过四层转发规则默认回源行为，取值有：
<li>reject：表示进行拦截，拒绝访问;</li>
<li>allow：表示允许通过。</li>
                     * @param _serverFaultyBehavior 远程鉴权服务不可访问后，经过四层转发规则默认回源行为，取值有：
<li>reject：表示进行拦截，拒绝访问;</li>
<li>allow：表示允许通过。</li>
                     * 
                     */
                    void SetServerFaultyBehavior(const std::string& _serverFaultyBehavior);

                    /**
                     * 判断参数 ServerFaultyBehavior 是否已赋值
                     * @return ServerFaultyBehavior 是否已赋值
                     * 
                     */
                    bool ServerFaultyBehaviorHasBeenSet() const;

                private:

                    /**
                     * 四层远程鉴权开关，取值有：
<li>on：表示开启;</li>
<li>off：表示关闭。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 远程鉴权服务地址，格式为: domain/ip:port。例：example.auth.com:8888

                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 远程鉴权服务不可访问后，经过四层转发规则默认回源行为，取值有：
<li>reject：表示进行拦截，拒绝访问;</li>
<li>allow：表示允许通过。</li>
                     */
                    std::string m_serverFaultyBehavior;
                    bool m_serverFaultyBehaviorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_L4PROXYREMOTEAUTH_H_
