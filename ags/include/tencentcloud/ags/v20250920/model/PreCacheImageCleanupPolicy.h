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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_PRECACHEIMAGECLEANUPPOLICY_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_PRECACHEIMAGECLEANUPPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 预热镜像自动清理策略
                */
                class PreCacheImageCleanupPolicy : public AbstractModel
                {
                public:
                    PreCacheImageCleanupPolicy();
                    ~PreCacheImageCleanupPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>自动清理策略ID</p>
                     * @return CleanupPolicyId <p>自动清理策略ID</p>
                     * 
                     */
                    std::string GetCleanupPolicyId() const;

                    /**
                     * 设置<p>自动清理策略ID</p>
                     * @param _cleanupPolicyId <p>自动清理策略ID</p>
                     * 
                     */
                    void SetCleanupPolicyId(const std::string& _cleanupPolicyId);

                    /**
                     * 判断参数 CleanupPolicyId 是否已赋值
                     * @return CleanupPolicyId 是否已赋值
                     * 
                     */
                    bool CleanupPolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>自动清理策略名</p>
                     * @return Name <p>自动清理策略名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>自动清理策略名</p>
                     * @param _name <p>自动清理策略名</p>
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
                     * 获取<p>策略启用配置</p>
                     * @return Enabled <p>策略启用配置</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>策略启用配置</p>
                     * @param _enabled <p>策略启用配置</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>镜像仓库地址</p><p>精准匹配，空串表示不限域名</p>
                     * @return RegistryHost <p>镜像仓库地址</p><p>精准匹配，空串表示不限域名</p>
                     * 
                     */
                    std::string GetRegistryHost() const;

                    /**
                     * 设置<p>镜像仓库地址</p><p>精准匹配，空串表示不限域名</p>
                     * @param _registryHost <p>镜像仓库地址</p><p>精准匹配，空串表示不限域名</p>
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
                     * 获取<p>镜像仓库名</p><p>正则匹配，匹配 命名空间/仓库 完整路径，非锚定子串匹配，语法与 TCR 预热触发器一致；空串表示全部 Repo</p>
                     * @return RepoPattern <p>镜像仓库名</p><p>正则匹配，匹配 命名空间/仓库 完整路径，非锚定子串匹配，语法与 TCR 预热触发器一致；空串表示全部 Repo</p>
                     * 
                     */
                    std::string GetRepoPattern() const;

                    /**
                     * 设置<p>镜像仓库名</p><p>正则匹配，匹配 命名空间/仓库 完整路径，非锚定子串匹配，语法与 TCR 预热触发器一致；空串表示全部 Repo</p>
                     * @param _repoPattern <p>镜像仓库名</p><p>正则匹配，匹配 命名空间/仓库 完整路径，非锚定子串匹配，语法与 TCR 预热触发器一致；空串表示全部 Repo</p>
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
                     * 获取<p>闲置过期清理时间</p><p>规范化正数时长，例如 7d</p>
                     * @return IdleTTL <p>闲置过期清理时间</p><p>规范化正数时长，例如 7d</p>
                     * 
                     */
                    std::string GetIdleTTL() const;

                    /**
                     * 设置<p>闲置过期清理时间</p><p>规范化正数时长，例如 7d</p>
                     * @param _idleTTL <p>闲置过期清理时间</p><p>规范化正数时长，例如 7d</p>
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
                     * 获取<p>策略创建时间</p>
                     * @return CreateTime <p>策略创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>策略创建时间</p>
                     * @param _createTime <p>策略创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>策略最近更新时间</p>
                     * @return UpdateTime <p>策略最近更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>策略最近更新时间</p>
                     * @param _updateTime <p>策略最近更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>自动清理策略ID</p>
                     */
                    std::string m_cleanupPolicyId;
                    bool m_cleanupPolicyIdHasBeenSet;

                    /**
                     * <p>自动清理策略名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>策略启用配置</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>镜像仓库地址</p><p>精准匹配，空串表示不限域名</p>
                     */
                    std::string m_registryHost;
                    bool m_registryHostHasBeenSet;

                    /**
                     * <p>镜像仓库名</p><p>正则匹配，匹配 命名空间/仓库 完整路径，非锚定子串匹配，语法与 TCR 预热触发器一致；空串表示全部 Repo</p>
                     */
                    std::string m_repoPattern;
                    bool m_repoPatternHasBeenSet;

                    /**
                     * <p>闲置过期清理时间</p><p>规范化正数时长，例如 7d</p>
                     */
                    std::string m_idleTTL;
                    bool m_idleTTLHasBeenSet;

                    /**
                     * <p>策略创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>策略最近更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_PRECACHEIMAGECLEANUPPOLICY_H_
