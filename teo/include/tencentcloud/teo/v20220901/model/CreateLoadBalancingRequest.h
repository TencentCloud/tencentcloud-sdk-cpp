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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATELOADBALANCINGREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATELOADBALANCINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AdvancedOriginGroup.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateLoadBalancing请求参数结构体
                */
                class CreateLoadBalancingRequest : public AbstractModel
                {
                public:
                    CreateLoadBalancingRequest();
                    ~CreateLoadBalancingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点ID。
                     * @return ZoneId 站点ID。
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID。
                     * @param ZoneId 站点ID。
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取负载均衡域名。
                     * @return Host 负载均衡域名。
                     */
                    std::string GetHost() const;

                    /**
                     * 设置负载均衡域名。
                     * @param Host 负载均衡域名。
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取代理模式，取值有：
<li>dns_only：仅DNS；</li>
<li>proxied：开启代理。</li>
                     * @return Type 代理模式，取值有：
<li>dns_only：仅DNS；</li>
<li>proxied：开启代理。</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置代理模式，取值有：
<li>dns_only：仅DNS；</li>
<li>proxied：开启代理。</li>
                     * @param Type 代理模式，取值有：
<li>dns_only：仅DNS；</li>
<li>proxied：开启代理。</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取主源站源站组ID。
                     * @return OriginGroupId 主源站源站组ID。
                     */
                    std::string GetOriginGroupId() const;

                    /**
                     * 设置主源站源站组ID。
                     * @param OriginGroupId 主源站源站组ID。
                     */
                    void SetOriginGroupId(const std::string& _originGroupId);

                    /**
                     * 判断参数 OriginGroupId 是否已赋值
                     * @return OriginGroupId 是否已赋值
                     */
                    bool OriginGroupIdHasBeenSet() const;

                    /**
                     * 获取备用源站源站组ID，当Type=proxied时可以填写，为空表示不使用备用源站。
                     * @return BackupOriginGroupId 备用源站源站组ID，当Type=proxied时可以填写，为空表示不使用备用源站。
                     */
                    std::string GetBackupOriginGroupId() const;

                    /**
                     * 设置备用源站源站组ID，当Type=proxied时可以填写，为空表示不使用备用源站。
                     * @param BackupOriginGroupId 备用源站源站组ID，当Type=proxied时可以填写，为空表示不使用备用源站。
                     */
                    void SetBackupOriginGroupId(const std::string& _backupOriginGroupId);

                    /**
                     * 判断参数 BackupOriginGroupId 是否已赋值
                     * @return BackupOriginGroupId 是否已赋值
                     */
                    bool BackupOriginGroupIdHasBeenSet() const;

                    /**
                     * 获取当Type=dns_only时，指解析记录在DNS服务器缓存的生存时间。
取值范围60-86400，单位：秒，不填写使用默认值：600。
                     * @return TTL 当Type=dns_only时，指解析记录在DNS服务器缓存的生存时间。
取值范围60-86400，单位：秒，不填写使用默认值：600。
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置当Type=dns_only时，指解析记录在DNS服务器缓存的生存时间。
取值范围60-86400，单位：秒，不填写使用默认值：600。
                     * @param TTL 当Type=dns_only时，指解析记录在DNS服务器缓存的生存时间。
取值范围60-86400，单位：秒，不填写使用默认值：600。
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取回源类型，取值有：
<li>normal：主备回源；</li>
<li>advanced：高级回源配置（仅当Type=proxied时可以使用）。</li>为空表示使用主备回源。
                     * @return OriginType 回源类型，取值有：
<li>normal：主备回源；</li>
<li>advanced：高级回源配置（仅当Type=proxied时可以使用）。</li>为空表示使用主备回源。
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置回源类型，取值有：
<li>normal：主备回源；</li>
<li>advanced：高级回源配置（仅当Type=proxied时可以使用）。</li>为空表示使用主备回源。
                     * @param OriginType 回源类型，取值有：
<li>normal：主备回源；</li>
<li>advanced：高级回源配置（仅当Type=proxied时可以使用）。</li>为空表示使用主备回源。
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取高级回源配置，当OriginType=advanced时有效。
                     * @return AdvancedOriginGroups 高级回源配置，当OriginType=advanced时有效。
                     */
                    std::vector<AdvancedOriginGroup> GetAdvancedOriginGroups() const;

                    /**
                     * 设置高级回源配置，当OriginType=advanced时有效。
                     * @param AdvancedOriginGroups 高级回源配置，当OriginType=advanced时有效。
                     */
                    void SetAdvancedOriginGroups(const std::vector<AdvancedOriginGroup>& _advancedOriginGroups);

                    /**
                     * 判断参数 AdvancedOriginGroups 是否已赋值
                     * @return AdvancedOriginGroups 是否已赋值
                     */
                    bool AdvancedOriginGroupsHasBeenSet() const;

                private:

                    /**
                     * 站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 负载均衡域名。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 代理模式，取值有：
<li>dns_only：仅DNS；</li>
<li>proxied：开启代理。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 主源站源站组ID。
                     */
                    std::string m_originGroupId;
                    bool m_originGroupIdHasBeenSet;

                    /**
                     * 备用源站源站组ID，当Type=proxied时可以填写，为空表示不使用备用源站。
                     */
                    std::string m_backupOriginGroupId;
                    bool m_backupOriginGroupIdHasBeenSet;

                    /**
                     * 当Type=dns_only时，指解析记录在DNS服务器缓存的生存时间。
取值范围60-86400，单位：秒，不填写使用默认值：600。
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * 回源类型，取值有：
<li>normal：主备回源；</li>
<li>advanced：高级回源配置（仅当Type=proxied时可以使用）。</li>为空表示使用主备回源。
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * 高级回源配置，当OriginType=advanced时有效。
                     */
                    std::vector<AdvancedOriginGroup> m_advancedOriginGroups;
                    bool m_advancedOriginGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATELOADBALANCINGREQUEST_H_
