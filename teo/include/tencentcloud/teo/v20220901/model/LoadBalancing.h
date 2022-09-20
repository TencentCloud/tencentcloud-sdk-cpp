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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_LOADBALANCING_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_LOADBALANCING_H_

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
                * 负载均衡信息
                */
                class LoadBalancing : public AbstractModel
                {
                public:
                    LoadBalancing();
                    ~LoadBalancing() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取负载均衡ID。
                     * @return LoadBalancingId 负载均衡ID。
                     */
                    std::string GetLoadBalancingId() const;

                    /**
                     * 设置负载均衡ID。
                     * @param LoadBalancingId 负载均衡ID。
                     */
                    void SetLoadBalancingId(const std::string& _loadBalancingId);

                    /**
                     * 判断参数 LoadBalancingId 是否已赋值
                     * @return LoadBalancingId 是否已赋值
                     */
                    bool LoadBalancingIdHasBeenSet() const;

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
                     * 获取子域名，填写@表示根域。
                     * @return Host 子域名，填写@表示根域。
                     */
                    std::string GetHost() const;

                    /**
                     * 设置子域名，填写@表示根域。
                     * @param Host 子域名，填写@表示根域。
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
                     * 获取当Type=dns_only表示DNS记录的缓存时间。
                     * @return TTL 当Type=dns_only表示DNS记录的缓存时间。
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置当Type=dns_only表示DNS记录的缓存时间。
                     * @param TTL 当Type=dns_only表示DNS记录的缓存时间。
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取状态，取值有：
<li>online：部署成功；</li>
<li>process：部署中。</li>
                     * @return Status 状态，取值有：
<li>online：部署成功；</li>
<li>process：部署中。</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态，取值有：
<li>online：部署成功；</li>
<li>process：部署中。</li>
                     * @param Status 状态，取值有：
<li>online：部署成功；</li>
<li>process：部署中。</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取调度域名。
                     * @return Cname 调度域名。
                     */
                    std::string GetCname() const;

                    /**
                     * 设置调度域名。
                     * @param Cname 调度域名。
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取主源源站组ID。
                     * @return OriginGroupId 主源源站组ID。
                     */
                    std::string GetOriginGroupId() const;

                    /**
                     * 设置主源源站组ID。
                     * @param OriginGroupId 主源源站组ID。
                     */
                    void SetOriginGroupId(const std::string& _originGroupId);

                    /**
                     * 判断参数 OriginGroupId 是否已赋值
                     * @return OriginGroupId 是否已赋值
                     */
                    bool OriginGroupIdHasBeenSet() const;

                    /**
                     * 获取备用源站源站组ID。为空表示不适用备用源站。
                     * @return BackupOriginGroupId 备用源站源站组ID。为空表示不适用备用源站。
                     */
                    std::string GetBackupOriginGroupId() const;

                    /**
                     * 设置备用源站源站组ID。为空表示不适用备用源站。
                     * @param BackupOriginGroupId 备用源站源站组ID。为空表示不适用备用源站。
                     */
                    void SetBackupOriginGroupId(const std::string& _backupOriginGroupId);

                    /**
                     * 判断参数 BackupOriginGroupId 是否已赋值
                     * @return BackupOriginGroupId 是否已赋值
                     */
                    bool BackupOriginGroupIdHasBeenSet() const;

                    /**
                     * 获取更新时间。
                     * @return UpdateTime 更新时间。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间。
                     * @param UpdateTime 更新时间。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 负载均衡ID。
                     */
                    std::string m_loadBalancingId;
                    bool m_loadBalancingIdHasBeenSet;

                    /**
                     * 站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 子域名，填写@表示根域。
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
                     * 当Type=dns_only表示DNS记录的缓存时间。
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * 状态，取值有：
<li>online：部署成功；</li>
<li>process：部署中。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 调度域名。
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * 主源源站组ID。
                     */
                    std::string m_originGroupId;
                    bool m_originGroupIdHasBeenSet;

                    /**
                     * 备用源站源站组ID。为空表示不适用备用源站。
                     */
                    std::string m_backupOriginGroupId;
                    bool m_backupOriginGroupIdHasBeenSet;

                    /**
                     * 更新时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_LOADBALANCING_H_
