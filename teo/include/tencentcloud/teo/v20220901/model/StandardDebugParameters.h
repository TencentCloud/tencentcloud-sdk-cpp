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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_STANDARDDEBUGPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_STANDARDDEBUGPARAMETERS_H_

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
                * Debug 调试结构体。
                */
                class StandardDebugParameters : public AbstractModel
                {
                public:
                    StandardDebugParameters();
                    ~StandardDebugParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Debug 功能开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @return Switch Debug 功能开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Debug 功能开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @param _switch Debug 功能开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
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
                     * 获取允许的客户端来源。支持填写 IPv4 以及 IPv6 的 IP 网段。0.0.0.0/0 表示允许所有 IPv4 客户端进行调试；::/0 表示允许所有 IPv6 客户端进行调试；不能填写 127.0.0.1。<br>注意：当 Switch 字段为 on 时，此字段必填，且填写个数为 1～100；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * @return AllowClientIPList 允许的客户端来源。支持填写 IPv4 以及 IPv6 的 IP 网段。0.0.0.0/0 表示允许所有 IPv4 客户端进行调试；::/0 表示允许所有 IPv6 客户端进行调试；不能填写 127.0.0.1。<br>注意：当 Switch 字段为 on 时，此字段必填，且填写个数为 1～100；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * 
                     */
                    std::vector<std::string> GetAllowClientIPList() const;

                    /**
                     * 设置允许的客户端来源。支持填写 IPv4 以及 IPv6 的 IP 网段。0.0.0.0/0 表示允许所有 IPv4 客户端进行调试；::/0 表示允许所有 IPv6 客户端进行调试；不能填写 127.0.0.1。<br>注意：当 Switch 字段为 on 时，此字段必填，且填写个数为 1～100；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * @param _allowClientIPList 允许的客户端来源。支持填写 IPv4 以及 IPv6 的 IP 网段。0.0.0.0/0 表示允许所有 IPv4 客户端进行调试；::/0 表示允许所有 IPv6 客户端进行调试；不能填写 127.0.0.1。<br>注意：当 Switch 字段为 on 时，此字段必填，且填写个数为 1～100；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * 
                     */
                    void SetAllowClientIPList(const std::vector<std::string>& _allowClientIPList);

                    /**
                     * 判断参数 AllowClientIPList 是否已赋值
                     * @return AllowClientIPList 是否已赋值
                     * 
                     */
                    bool AllowClientIPListHasBeenSet() const;

                    /**
                     * 获取Debug 功能到期时间。超出设置的时间，则功能失效。<br>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * @return Expires Debug 功能到期时间。超出设置的时间，则功能失效。<br>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * 
                     */
                    std::string GetExpires() const;

                    /**
                     * 设置Debug 功能到期时间。超出设置的时间，则功能失效。<br>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * @param _expires Debug 功能到期时间。超出设置的时间，则功能失效。<br>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * 
                     */
                    void SetExpires(const std::string& _expires);

                    /**
                     * 判断参数 Expires 是否已赋值
                     * @return Expires 是否已赋值
                     * 
                     */
                    bool ExpiresHasBeenSet() const;

                private:

                    /**
                     * Debug 功能开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 允许的客户端来源。支持填写 IPv4 以及 IPv6 的 IP 网段。0.0.0.0/0 表示允许所有 IPv4 客户端进行调试；::/0 表示允许所有 IPv6 客户端进行调试；不能填写 127.0.0.1。<br>注意：当 Switch 字段为 on 时，此字段必填，且填写个数为 1～100；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     */
                    std::vector<std::string> m_allowClientIPList;
                    bool m_allowClientIPListHasBeenSet;

                    /**
                     * Debug 功能到期时间。超出设置的时间，则功能失效。<br>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     */
                    std::string m_expires;
                    bool m_expiresHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_STANDARDDEBUGPARAMETERS_H_
