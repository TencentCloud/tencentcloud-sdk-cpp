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
                * 接口调用的员工信息
                */
                class UserInfo : public AbstractModel
                {
                public:
                    UserInfo();
                    ~UserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取第三方应用平台自定义，对应第三方平台子客企业员工的唯一标识。


注意:
1. OpenId在子客企业对应一个真实员工，**本应用唯一, 不可重复使用**，最大64位字符串
2. 可使用用户在贵方企业系统中的Userid或者hash值作为子客企业的员工OpenId
3. **员工加入企业后**, 可以通过<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateConsoleLoginUrl" target="_blank">生成子客登录链接</a>登录子客控制台后, 在**组织架构**模块查看员工们的OpenId, 样式如下图
![image](https://qcloudimg.tencent-cloud.cn/raw/bb67fb66c926759df3a0af5838fdafd5.png)
                     * @return OpenId 第三方应用平台自定义，对应第三方平台子客企业员工的唯一标识。


注意:
1. OpenId在子客企业对应一个真实员工，**本应用唯一, 不可重复使用**，最大64位字符串
2. 可使用用户在贵方企业系统中的Userid或者hash值作为子客企业的员工OpenId
3. **员工加入企业后**, 可以通过<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateConsoleLoginUrl" target="_blank">生成子客登录链接</a>登录子客控制台后, 在**组织架构**模块查看员工们的OpenId, 样式如下图
![image](https://qcloudimg.tencent-cloud.cn/raw/bb67fb66c926759df3a0af5838fdafd5.png)
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置第三方应用平台自定义，对应第三方平台子客企业员工的唯一标识。


注意:
1. OpenId在子客企业对应一个真实员工，**本应用唯一, 不可重复使用**，最大64位字符串
2. 可使用用户在贵方企业系统中的Userid或者hash值作为子客企业的员工OpenId
3. **员工加入企业后**, 可以通过<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateConsoleLoginUrl" target="_blank">生成子客登录链接</a>登录子客控制台后, 在**组织架构**模块查看员工们的OpenId, 样式如下图
![image](https://qcloudimg.tencent-cloud.cn/raw/bb67fb66c926759df3a0af5838fdafd5.png)
                     * @param _openId 第三方应用平台自定义，对应第三方平台子客企业员工的唯一标识。


注意:
1. OpenId在子客企业对应一个真实员工，**本应用唯一, 不可重复使用**，最大64位字符串
2. 可使用用户在贵方企业系统中的Userid或者hash值作为子客企业的员工OpenId
3. **员工加入企业后**, 可以通过<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateConsoleLoginUrl" target="_blank">生成子客登录链接</a>登录子客控制台后, 在**组织架构**模块查看员工们的OpenId, 样式如下图
![image](https://qcloudimg.tencent-cloud.cn/raw/bb67fb66c926759df3a0af5838fdafd5.png)
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取内部参数，暂未开放使用
                     * @return Channel 内部参数，暂未开放使用
                     * @deprecated
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置内部参数，暂未开放使用
                     * @param _channel 内部参数，暂未开放使用
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
                     * 获取内部参数，暂未开放使用
                     * @return CustomUserId 内部参数，暂未开放使用
                     * @deprecated
                     */
                    std::string GetCustomUserId() const;

                    /**
                     * 设置内部参数，暂未开放使用
                     * @param _customUserId 内部参数，暂未开放使用
                     * @deprecated
                     */
                    void SetCustomUserId(const std::string& _customUserId);

                    /**
                     * 判断参数 CustomUserId 是否已赋值
                     * @return CustomUserId 是否已赋值
                     * @deprecated
                     */
                    bool CustomUserIdHasBeenSet() const;

                    /**
                     * 获取内部参数，暂未开放使用
                     * @return ClientIp 内部参数，暂未开放使用
                     * @deprecated
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置内部参数，暂未开放使用
                     * @param _clientIp 内部参数，暂未开放使用
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
                     * 获取内部参数，暂未开放使用
                     * @return ProxyIp 内部参数，暂未开放使用
                     * @deprecated
                     */
                    std::string GetProxyIp() const;

                    /**
                     * 设置内部参数，暂未开放使用
                     * @param _proxyIp 内部参数，暂未开放使用
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
                     * 第三方应用平台自定义，对应第三方平台子客企业员工的唯一标识。


注意:
1. OpenId在子客企业对应一个真实员工，**本应用唯一, 不可重复使用**，最大64位字符串
2. 可使用用户在贵方企业系统中的Userid或者hash值作为子客企业的员工OpenId
3. **员工加入企业后**, 可以通过<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateConsoleLoginUrl" target="_blank">生成子客登录链接</a>登录子客控制台后, 在**组织架构**模块查看员工们的OpenId, 样式如下图
![image](https://qcloudimg.tencent-cloud.cn/raw/bb67fb66c926759df3a0af5838fdafd5.png)
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
