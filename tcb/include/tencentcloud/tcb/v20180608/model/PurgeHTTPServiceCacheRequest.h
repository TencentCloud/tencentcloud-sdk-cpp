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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_PURGEHTTPSERVICECACHEREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_PURGEHTTPSERVICECACHEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * PurgeHTTPServiceCache请求参数结构体
                */
                class PurgeHTTPServiceCacheRequest : public AbstractModel
                {
                public:
                    PurgeHTTPServiceCacheRequest();
                    ~PurgeHTTPServiceCacheRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境ID</p>
                     * @return EnvId <p>环境ID</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境ID</p>
                     * @param _envId <p>环境ID</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取<p>HTTPService域名</p>
                     * @return Domain <p>HTTPService域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>HTTPService域名</p>
                     * @param _domain <p>HTTPService域名</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>Targets</p><p>参数格式：Targets 刷新目标列表，语义随 PurgeType 变化</p><p>入参限制：单次请求最多传 20 个 Target，单条 URL/prefix/host 最长 2048</p>
                     * @return Targets <p>Targets</p><p>参数格式：Targets 刷新目标列表，语义随 PurgeType 变化</p><p>入参限制：单次请求最多传 20 个 Target，单条 URL/prefix/host 最长 2048</p>
                     * 
                     */
                    std::vector<std::string> GetTargets() const;

                    /**
                     * 设置<p>Targets</p><p>参数格式：Targets 刷新目标列表，语义随 PurgeType 变化</p><p>入参限制：单次请求最多传 20 个 Target，单条 URL/prefix/host 最长 2048</p>
                     * @param _targets <p>Targets</p><p>参数格式：Targets 刷新目标列表，语义随 PurgeType 变化</p><p>入参限制：单次请求最多传 20 个 Target，单条 URL/prefix/host 最长 2048</p>
                     * 
                     */
                    void SetTargets(const std::vector<std::string>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取<p>需要刷新的缓存类型：CDN 或 EO</p><p>枚举值：</p><ul><li>EO： EO缓存</li><li>CDN： CDN缓存</li></ul><p>默认值：EO</p>
                     * @return CacheType <p>需要刷新的缓存类型：CDN 或 EO</p><p>枚举值：</p><ul><li>EO： EO缓存</li><li>CDN： CDN缓存</li></ul><p>默认值：EO</p>
                     * 
                     */
                    std::string GetCacheType() const;

                    /**
                     * 设置<p>需要刷新的缓存类型：CDN 或 EO</p><p>枚举值：</p><ul><li>EO： EO缓存</li><li>CDN： CDN缓存</li></ul><p>默认值：EO</p>
                     * @param _cacheType <p>需要刷新的缓存类型：CDN 或 EO</p><p>枚举值：</p><ul><li>EO： EO缓存</li><li>CDN： CDN缓存</li></ul><p>默认值：EO</p>
                     * 
                     */
                    void SetCacheType(const std::string& _cacheType);

                    /**
                     * 判断参数 CacheType 是否已赋值
                     * @return CacheType 是否已赋值
                     * 
                     */
                    bool CacheTypeHasBeenSet() const;

                    /**
                     * 获取<p>PurgeType 刷新方式（purge 粒度），TCBCDN仅支持purge_url</p><p>枚举值：</p><ul><li>PURGE_URL： URL 列表（需含协议，如 https://a.com/b.jpg）</li><li>PURGE_PREFIX： URL 前缀列表（需含协议，如 https://a.com/dir/），仅EO支持</li><li>PURGE_HOST： Hostname 列表（可为 host 或 http(s)://host），仅EO支持</li></ul><p>默认值：PURGE_URL</p>
                     * @return PurgeType <p>PurgeType 刷新方式（purge 粒度），TCBCDN仅支持purge_url</p><p>枚举值：</p><ul><li>PURGE_URL： URL 列表（需含协议，如 https://a.com/b.jpg）</li><li>PURGE_PREFIX： URL 前缀列表（需含协议，如 https://a.com/dir/），仅EO支持</li><li>PURGE_HOST： Hostname 列表（可为 host 或 http(s)://host），仅EO支持</li></ul><p>默认值：PURGE_URL</p>
                     * 
                     */
                    std::string GetPurgeType() const;

                    /**
                     * 设置<p>PurgeType 刷新方式（purge 粒度），TCBCDN仅支持purge_url</p><p>枚举值：</p><ul><li>PURGE_URL： URL 列表（需含协议，如 https://a.com/b.jpg）</li><li>PURGE_PREFIX： URL 前缀列表（需含协议，如 https://a.com/dir/），仅EO支持</li><li>PURGE_HOST： Hostname 列表（可为 host 或 http(s)://host），仅EO支持</li></ul><p>默认值：PURGE_URL</p>
                     * @param _purgeType <p>PurgeType 刷新方式（purge 粒度），TCBCDN仅支持purge_url</p><p>枚举值：</p><ul><li>PURGE_URL： URL 列表（需含协议，如 https://a.com/b.jpg）</li><li>PURGE_PREFIX： URL 前缀列表（需含协议，如 https://a.com/dir/），仅EO支持</li><li>PURGE_HOST： Hostname 列表（可为 host 或 http(s)://host），仅EO支持</li></ul><p>默认值：PURGE_URL</p>
                     * 
                     */
                    void SetPurgeType(const std::string& _purgeType);

                    /**
                     * 判断参数 PurgeType 是否已赋值
                     * @return PurgeType 是否已赋值
                     * 
                     */
                    bool PurgeTypeHasBeenSet() const;

                private:

                    /**
                     * <p>环境ID</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>HTTPService域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>Targets</p><p>参数格式：Targets 刷新目标列表，语义随 PurgeType 变化</p><p>入参限制：单次请求最多传 20 个 Target，单条 URL/prefix/host 最长 2048</p>
                     */
                    std::vector<std::string> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * <p>需要刷新的缓存类型：CDN 或 EO</p><p>枚举值：</p><ul><li>EO： EO缓存</li><li>CDN： CDN缓存</li></ul><p>默认值：EO</p>
                     */
                    std::string m_cacheType;
                    bool m_cacheTypeHasBeenSet;

                    /**
                     * <p>PurgeType 刷新方式（purge 粒度），TCBCDN仅支持purge_url</p><p>枚举值：</p><ul><li>PURGE_URL： URL 列表（需含协议，如 https://a.com/b.jpg）</li><li>PURGE_PREFIX： URL 前缀列表（需含协议，如 https://a.com/dir/），仅EO支持</li><li>PURGE_HOST： Hostname 列表（可为 host 或 http(s)://host），仅EO支持</li></ul><p>默认值：PURGE_URL</p>
                     */
                    std::string m_purgeType;
                    bool m_purgeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_PURGEHTTPSERVICECACHEREQUEST_H_
