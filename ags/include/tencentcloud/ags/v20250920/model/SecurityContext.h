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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_SECURITYCONTEXT_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_SECURITYCONTEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/Capabilities.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * SecurityContext 包含将应用于容器的安全配置。
                */
                class SecurityContext : public AbstractModel
                {
                public:
                    SecurityContext();
                    ~SecurityContext() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否开启特权</p><p>默认值：true</p>
                     * @return Privileged <p>是否开启特权</p><p>默认值：true</p>
                     * 
                     */
                    bool GetPrivileged() const;

                    /**
                     * 设置<p>是否开启特权</p><p>默认值：true</p>
                     * @param _privileged <p>是否开启特权</p><p>默认值：true</p>
                     * 
                     */
                    void SetPrivileged(const bool& _privileged);

                    /**
                     * 判断参数 Privileged 是否已赋值
                     * @return Privileged 是否已赋值
                     * 
                     */
                    bool PrivilegedHasBeenSet() const;

                    /**
                     * 获取<p>Capabilities 指的是可以添加到正在运行的容器中或从中移除的 POSIX capabilities。</p>
                     * @return Capabilities <p>Capabilities 指的是可以添加到正在运行的容器中或从中移除的 POSIX capabilities。</p>
                     * 
                     */
                    Capabilities GetCapabilities() const;

                    /**
                     * 设置<p>Capabilities 指的是可以添加到正在运行的容器中或从中移除的 POSIX capabilities。</p>
                     * @param _capabilities <p>Capabilities 指的是可以添加到正在运行的容器中或从中移除的 POSIX capabilities。</p>
                     * 
                     */
                    void SetCapabilities(const Capabilities& _capabilities);

                    /**
                     * 判断参数 Capabilities 是否已赋值
                     * @return Capabilities 是否已赋值
                     * 
                     */
                    bool CapabilitiesHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启特权</p><p>默认值：true</p>
                     */
                    bool m_privileged;
                    bool m_privilegedHasBeenSet;

                    /**
                     * <p>Capabilities 指的是可以添加到正在运行的容器中或从中移除的 POSIX capabilities。</p>
                     */
                    Capabilities m_capabilities;
                    bool m_capabilitiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_SECURITYCONTEXT_H_
