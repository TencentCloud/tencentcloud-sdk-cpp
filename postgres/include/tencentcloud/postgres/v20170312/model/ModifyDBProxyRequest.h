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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBPROXYREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/ProxyNodeCustom.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyDBProxy请求参数结构体
                */
                class ModifyDBProxyRequest : public AbstractModel
                {
                public:
                    ModifyDBProxyRequest();
                    ~ModifyDBProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID，格式形如：postgres-xxxxxxxx</p>
                     * @return DBInstanceId <p>实例 ID，格式形如：postgres-xxxxxxxx</p>
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置<p>实例 ID，格式形如：postgres-xxxxxxxx</p>
                     * @param _dBInstanceId <p>实例 ID，格式形如：postgres-xxxxxxxx</p>
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Proxy 实例 ID，格式形如：proxy-xxxxxxxx；不传时若实例下仅有一个 Proxy 则修改该 Proxy</p>
                     * @return ProxyGroupId <p>Proxy 实例 ID，格式形如：proxy-xxxxxxxx；不传时若实例下仅有一个 Proxy 则修改该 Proxy</p>
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置<p>Proxy 实例 ID，格式形如：proxy-xxxxxxxx；不传时若实例下仅有一个 Proxy 则修改该 Proxy</p>
                     * @param _proxyGroupId <p>Proxy 实例 ID，格式形如：proxy-xxxxxxxx；不传时若实例下仅有一个 Proxy 则修改该 Proxy</p>
                     * 
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     * 
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>Proxy 描述信息，长度范围 [0, 256]</p>
                     * @return Description <p>Proxy 描述信息，长度范围 [0, 256]</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Proxy 描述信息，长度范围 [0, 256]</p>
                     * @param _description <p>Proxy 描述信息，长度范围 [0, 256]</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Proxy 节点变配规格列表，按可用区分组；变配时必填</p>
                     * @return ProxyNodeCustom <p>Proxy 节点变配规格列表，按可用区分组；变配时必填</p>
                     * 
                     */
                    std::vector<ProxyNodeCustom> GetProxyNodeCustom() const;

                    /**
                     * 设置<p>Proxy 节点变配规格列表，按可用区分组；变配时必填</p>
                     * @param _proxyNodeCustom <p>Proxy 节点变配规格列表，按可用区分组；变配时必填</p>
                     * 
                     */
                    void SetProxyNodeCustom(const std::vector<ProxyNodeCustom>& _proxyNodeCustom);

                    /**
                     * 判断参数 ProxyNodeCustom 是否已赋值
                     * @return ProxyNodeCustom 是否已赋值
                     * 
                     */
                    bool ProxyNodeCustomHasBeenSet() const;

                    /**
                     * 获取<p>负载均衡刷新策略：auto-自动；manual-手动；默认 auto</p>
                     * @return ReloadBalance <p>负载均衡刷新策略：auto-自动；manual-手动；默认 auto</p>
                     * 
                     */
                    std::string GetReloadBalance() const;

                    /**
                     * 设置<p>负载均衡刷新策略：auto-自动；manual-手动；默认 auto</p>
                     * @param _reloadBalance <p>负载均衡刷新策略：auto-自动；manual-手动；默认 auto</p>
                     * 
                     */
                    void SetReloadBalance(const std::string& _reloadBalance);

                    /**
                     * 判断参数 ReloadBalance 是否已赋值
                     * @return ReloadBalance 是否已赋值
                     * 
                     */
                    bool ReloadBalanceHasBeenSet() const;

                    /**
                     * 获取<p>变配执行时机：0-立即执行（默认），1-维护时间窗内执行，2-指定时间窗执行（需配合 SwitchStartTime/SwitchEndTime）</p>
                     * @return SwitchTag <p>变配执行时机：0-立即执行（默认），1-维护时间窗内执行，2-指定时间窗执行（需配合 SwitchStartTime/SwitchEndTime）</p>
                     * 
                     */
                    int64_t GetSwitchTag() const;

                    /**
                     * 设置<p>变配执行时机：0-立即执行（默认），1-维护时间窗内执行，2-指定时间窗执行（需配合 SwitchStartTime/SwitchEndTime）</p>
                     * @param _switchTag <p>变配执行时机：0-立即执行（默认），1-维护时间窗内执行，2-指定时间窗执行（需配合 SwitchStartTime/SwitchEndTime）</p>
                     * 
                     */
                    void SetSwitchTag(const int64_t& _switchTag);

                    /**
                     * 判断参数 SwitchTag 是否已赋值
                     * @return SwitchTag 是否已赋值
                     * 
                     */
                    bool SwitchTagHasBeenSet() const;

                    /**
                     * 获取<p>指定时间窗执行的开始时间，格式 HH:MM:SS，仅 SwitchTag=2 时生效</p>
                     * @return SwitchStartTime <p>指定时间窗执行的开始时间，格式 HH:MM:SS，仅 SwitchTag=2 时生效</p>
                     * 
                     */
                    std::string GetSwitchStartTime() const;

                    /**
                     * 设置<p>指定时间窗执行的开始时间，格式 HH:MM:SS，仅 SwitchTag=2 时生效</p>
                     * @param _switchStartTime <p>指定时间窗执行的开始时间，格式 HH:MM:SS，仅 SwitchTag=2 时生效</p>
                     * 
                     */
                    void SetSwitchStartTime(const std::string& _switchStartTime);

                    /**
                     * 判断参数 SwitchStartTime 是否已赋值
                     * @return SwitchStartTime 是否已赋值
                     * 
                     */
                    bool SwitchStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>指定时间窗执行的结束时间，格式 HH:MM:SS，仅 SwitchTag=2 时生效</p>
                     * @return SwitchEndTime <p>指定时间窗执行的结束时间，格式 HH:MM:SS，仅 SwitchTag=2 时生效</p>
                     * 
                     */
                    std::string GetSwitchEndTime() const;

                    /**
                     * 设置<p>指定时间窗执行的结束时间，格式 HH:MM:SS，仅 SwitchTag=2 时生效</p>
                     * @param _switchEndTime <p>指定时间窗执行的结束时间，格式 HH:MM:SS，仅 SwitchTag=2 时生效</p>
                     * 
                     */
                    void SetSwitchEndTime(const std::string& _switchEndTime);

                    /**
                     * 判断参数 SwitchEndTime 是否已赋值
                     * @return SwitchEndTime 是否已赋值
                     * 
                     */
                    bool SwitchEndTimeHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID，格式形如：postgres-xxxxxxxx</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>Proxy 实例 ID，格式形如：proxy-xxxxxxxx；不传时若实例下仅有一个 Proxy 则修改该 Proxy</p>
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * <p>Proxy 描述信息，长度范围 [0, 256]</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Proxy 节点变配规格列表，按可用区分组；变配时必填</p>
                     */
                    std::vector<ProxyNodeCustom> m_proxyNodeCustom;
                    bool m_proxyNodeCustomHasBeenSet;

                    /**
                     * <p>负载均衡刷新策略：auto-自动；manual-手动；默认 auto</p>
                     */
                    std::string m_reloadBalance;
                    bool m_reloadBalanceHasBeenSet;

                    /**
                     * <p>变配执行时机：0-立即执行（默认），1-维护时间窗内执行，2-指定时间窗执行（需配合 SwitchStartTime/SwitchEndTime）</p>
                     */
                    int64_t m_switchTag;
                    bool m_switchTagHasBeenSet;

                    /**
                     * <p>指定时间窗执行的开始时间，格式 HH:MM:SS，仅 SwitchTag=2 时生效</p>
                     */
                    std::string m_switchStartTime;
                    bool m_switchStartTimeHasBeenSet;

                    /**
                     * <p>指定时间窗执行的结束时间，格式 HH:MM:SS，仅 SwitchTag=2 时生效</p>
                     */
                    std::string m_switchEndTime;
                    bool m_switchEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBPROXYREQUEST_H_
