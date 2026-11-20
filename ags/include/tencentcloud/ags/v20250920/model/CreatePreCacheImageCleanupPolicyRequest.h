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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_CREATEPRECACHEIMAGECLEANUPPOLICYREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_CREATEPRECACHEIMAGECLEANUPPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * CreatePreCacheImageCleanupPolicy请求参数结构体
                */
                class CreatePreCacheImageCleanupPolicyRequest : public AbstractModel
                {
                public:
                    CreatePreCacheImageCleanupPolicyRequest();
                    ~CreatePreCacheImageCleanupPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>策略名</p>
                     * @return Name <p>策略名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>策略名</p>
                     * @param _name <p>策略名</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>闲置过期时间</p><p>参数格式：正数 m/h/d</p>
                     * @return IdleTTL <p>闲置过期时间</p><p>参数格式：正数 m/h/d</p>
                     * 
                     */
                    std::string GetIdleTTL() const;

                    /**
                     * 设置<p>闲置过期时间</p><p>参数格式：正数 m/h/d</p>
                     * @param _idleTTL <p>闲置过期时间</p><p>参数格式：正数 m/h/d</p>
                     * 
                     */
                    void SetIdleTTL(const std::string& _idleTTL);

                    /**
                     * 判断参数 IdleTTL 是否已赋值
                     * @return IdleTTL 是否已赋值
                     * 
                     */
                    bool IdleTTLHasBeenSet() const;

                    /**
                     * 获取<p>镜像仓库地址</p><p>入参限制：精准匹配，不传或空串表示不限，最多 255 字符</p>
                     * @return RegistryHost <p>镜像仓库地址</p><p>入参限制：精准匹配，不传或空串表示不限，最多 255 字符</p>
                     * 
                     */
                    std::string GetRegistryHost() const;

                    /**
                     * 设置<p>镜像仓库地址</p><p>入参限制：精准匹配，不传或空串表示不限，最多 255 字符</p>
                     * @param _registryHost <p>镜像仓库地址</p><p>入参限制：精准匹配，不传或空串表示不限，最多 255 字符</p>
                     * 
                     */
                    void SetRegistryHost(const std::string& _registryHost);

                    /**
                     * 判断参数 RegistryHost 是否已赋值
                     * @return RegistryHost 是否已赋值
                     * 
                     */
                    bool RegistryHostHasBeenSet() const;

                    /**
                     * 获取<p>镜像仓库名</p><p>入参限制：正则匹配，最多 256 字符，编译后指令数不超过 128，账号全部启用策略合计不超过 1280；不传或空串表示全部 Repo</p>
                     * @return RepoPattern <p>镜像仓库名</p><p>入参限制：正则匹配，最多 256 字符，编译后指令数不超过 128，账号全部启用策略合计不超过 1280；不传或空串表示全部 Repo</p>
                     * 
                     */
                    std::string GetRepoPattern() const;

                    /**
                     * 设置<p>镜像仓库名</p><p>入参限制：正则匹配，最多 256 字符，编译后指令数不超过 128，账号全部启用策略合计不超过 1280；不传或空串表示全部 Repo</p>
                     * @param _repoPattern <p>镜像仓库名</p><p>入参限制：正则匹配，最多 256 字符，编译后指令数不超过 128，账号全部启用策略合计不超过 1280；不传或空串表示全部 Repo</p>
                     * 
                     */
                    void SetRepoPattern(const std::string& _repoPattern);

                    /**
                     * 判断参数 RepoPattern 是否已赋值
                     * @return RepoPattern 是否已赋值
                     * 
                     */
                    bool RepoPatternHasBeenSet() const;

                    /**
                     * 获取<p>策略启用配置</p><p>枚举值：</p><ul><li>true： 启用策略</li><li>false： 禁用策略</li></ul><p>默认值：true</p>
                     * @return Enabled <p>策略启用配置</p><p>枚举值：</p><ul><li>true： 启用策略</li><li>false： 禁用策略</li></ul><p>默认值：true</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>策略启用配置</p><p>枚举值：</p><ul><li>true： 启用策略</li><li>false： 禁用策略</li></ul><p>默认值：true</p>
                     * @param _enabled <p>策略启用配置</p><p>枚举值：</p><ul><li>true： 启用策略</li><li>false： 禁用策略</li></ul><p>默认值：true</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * <p>策略名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>闲置过期时间</p><p>参数格式：正数 m/h/d</p>
                     */
                    std::string m_idleTTL;
                    bool m_idleTTLHasBeenSet;

                    /**
                     * <p>镜像仓库地址</p><p>入参限制：精准匹配，不传或空串表示不限，最多 255 字符</p>
                     */
                    std::string m_registryHost;
                    bool m_registryHostHasBeenSet;

                    /**
                     * <p>镜像仓库名</p><p>入参限制：正则匹配，最多 256 字符，编译后指令数不超过 128，账号全部启用策略合计不超过 1280；不传或空串表示全部 Repo</p>
                     */
                    std::string m_repoPattern;
                    bool m_repoPatternHasBeenSet;

                    /**
                     * <p>策略启用配置</p><p>枚举值：</p><ul><li>true： 启用策略</li><li>false： 禁用策略</li></ul><p>默认值：true</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CREATEPRECACHEIMAGECLEANUPPOLICYREQUEST_H_
