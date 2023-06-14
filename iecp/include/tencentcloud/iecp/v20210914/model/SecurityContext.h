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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_SECURITYCONTEXT_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_SECURITYCONTEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/SecurityCapabilities.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 安全上下文
                */
                class SecurityContext : public AbstractModel
                {
                public:
                    SecurityContext();
                    ~SecurityContext() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启特权模式
                     * @return Privilege 是否开启特权模式
                     * 
                     */
                    bool GetPrivilege() const;

                    /**
                     * 设置是否开启特权模式
                     * @param _privilege 是否开启特权模式
                     * 
                     */
                    void SetPrivilege(const bool& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     * 
                     */
                    bool PrivilegeHasBeenSet() const;

                    /**
                     * 获取目录/Proc挂载方式
                     * @return ProcMount 目录/Proc挂载方式
                     * 
                     */
                    std::string GetProcMount() const;

                    /**
                     * 设置目录/Proc挂载方式
                     * @param _procMount 目录/Proc挂载方式
                     * 
                     */
                    void SetProcMount(const std::string& _procMount);

                    /**
                     * 判断参数 ProcMount 是否已赋值
                     * @return ProcMount 是否已赋值
                     * 
                     */
                    bool ProcMountHasBeenSet() const;

                    /**
                     * 获取安全配置
                     * @return Capabilities 安全配置
                     * 
                     */
                    SecurityCapabilities GetCapabilities() const;

                    /**
                     * 设置安全配置
                     * @param _capabilities 安全配置
                     * 
                     */
                    void SetCapabilities(const SecurityCapabilities& _capabilities);

                    /**
                     * 判断参数 Capabilities 是否已赋值
                     * @return Capabilities 是否已赋值
                     * 
                     */
                    bool CapabilitiesHasBeenSet() const;

                private:

                    /**
                     * 是否开启特权模式
                     */
                    bool m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * 目录/Proc挂载方式
                     */
                    std::string m_procMount;
                    bool m_procMountHasBeenSet;

                    /**
                     * 安全配置
                     */
                    SecurityCapabilities m_capabilities;
                    bool m_capabilitiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_SECURITYCONTEXT_H_
