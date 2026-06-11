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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_MODIFYSTRATEGYREQUEST_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_MODIFYSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/igtm/v20231024/model/Source.h>
#include <tencentcloud/igtm/v20231024/model/MainAddressPool.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * ModifyStrategy请求参数结构体
                */
                class ModifyStrategyRequest : public AbstractModel
                {
                public:
                    ModifyStrategyRequest();
                    ~ModifyStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例id</p>
                     * @return InstanceId <p>实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例id</p>
                     * @param _instanceId <p>实例id</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>策略id</p>
                     * @return StrategyId <p>策略id</p>
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置<p>策略id</p>
                     * @param _strategyId <p>策略id</p>
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取<p>解析线路，需要全量传参</p>
                     * @return Source <p>解析线路，需要全量传参</p>
                     * 
                     */
                    std::vector<Source> GetSource() const;

                    /**
                     * 设置<p>解析线路，需要全量传参</p>
                     * @param _source <p>解析线路，需要全量传参</p>
                     * 
                     */
                    void SetSource(const std::vector<Source>& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>主力地址池集合，需要全量传参</p>
                     * @return MainAddressPoolSet <p>主力地址池集合，需要全量传参</p>
                     * 
                     */
                    std::vector<MainAddressPool> GetMainAddressPoolSet() const;

                    /**
                     * 设置<p>主力地址池集合，需要全量传参</p>
                     * @param _mainAddressPoolSet <p>主力地址池集合，需要全量传参</p>
                     * 
                     */
                    void SetMainAddressPoolSet(const std::vector<MainAddressPool>& _mainAddressPoolSet);

                    /**
                     * 判断参数 MainAddressPoolSet 是否已赋值
                     * @return MainAddressPoolSet 是否已赋值
                     * 
                     */
                    bool MainAddressPoolSetHasBeenSet() const;

                    /**
                     * 获取<p>兜底地址池集合，需要全量传参</p>
                     * @return FallbackAddressPoolSet <p>兜底地址池集合，需要全量传参</p>
                     * 
                     */
                    std::vector<MainAddressPool> GetFallbackAddressPoolSet() const;

                    /**
                     * 设置<p>兜底地址池集合，需要全量传参</p>
                     * @param _fallbackAddressPoolSet <p>兜底地址池集合，需要全量传参</p>
                     * 
                     */
                    void SetFallbackAddressPoolSet(const std::vector<MainAddressPool>& _fallbackAddressPoolSet);

                    /**
                     * 判断参数 FallbackAddressPoolSet 是否已赋值
                     * @return FallbackAddressPoolSet 是否已赋值
                     * 
                     */
                    bool FallbackAddressPoolSetHasBeenSet() const;

                    /**
                     * 获取<p>策略名称，不允许重复</p>
                     * @return StrategyName <p>策略名称，不允许重复</p>
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置<p>策略名称，不允许重复</p>
                     * @param _strategyName <p>策略名称，不允许重复</p>
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取<p>策略开启状态：ENABLED开启；DISABLED关闭</p>
                     * @return IsEnabled <p>策略开启状态：ENABLED开启；DISABLED关闭</p>
                     * 
                     */
                    std::string GetIsEnabled() const;

                    /**
                     * 设置<p>策略开启状态：ENABLED开启；DISABLED关闭</p>
                     * @param _isEnabled <p>策略开启状态：ENABLED开启；DISABLED关闭</p>
                     * 
                     */
                    void SetIsEnabled(const std::string& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取<p>是否开启策略强制保留默认线路 disabled, enabled，默认不开启且只有一个策略能开启</p>
                     * @return KeepDomainRecords <p>是否开启策略强制保留默认线路 disabled, enabled，默认不开启且只有一个策略能开启</p>
                     * 
                     */
                    std::string GetKeepDomainRecords() const;

                    /**
                     * 设置<p>是否开启策略强制保留默认线路 disabled, enabled，默认不开启且只有一个策略能开启</p>
                     * @param _keepDomainRecords <p>是否开启策略强制保留默认线路 disabled, enabled，默认不开启且只有一个策略能开启</p>
                     * 
                     */
                    void SetKeepDomainRecords(const std::string& _keepDomainRecords);

                    /**
                     * 判断参数 KeepDomainRecords 是否已赋值
                     * @return KeepDomainRecords 是否已赋值
                     * 
                     */
                    bool KeepDomainRecordsHasBeenSet() const;

                    /**
                     * 获取<p>调度模式：AUTO默认；STOP仅暂停不切换</p>
                     * @return SwitchPoolType <p>调度模式：AUTO默认；STOP仅暂停不切换</p>
                     * 
                     */
                    std::string GetSwitchPoolType() const;

                    /**
                     * 设置<p>调度模式：AUTO默认；STOP仅暂停不切换</p>
                     * @param _switchPoolType <p>调度模式：AUTO默认；STOP仅暂停不切换</p>
                     * 
                     */
                    void SetSwitchPoolType(const std::string& _switchPoolType);

                    /**
                     * 判断参数 SwitchPoolType 是否已赋值
                     * @return SwitchPoolType 是否已赋值
                     * 
                     */
                    bool SwitchPoolTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否保留资源</p><p>枚举值：</p><ul><li>false： 全量操作，会有删除逻辑</li><li>true： 不会删除原有资源</li></ul>
                     * @return KeepResource <p>是否保留资源</p><p>枚举值：</p><ul><li>false： 全量操作，会有删除逻辑</li><li>true： 不会删除原有资源</li></ul>
                     * 
                     */
                    bool GetKeepResource() const;

                    /**
                     * 设置<p>是否保留资源</p><p>枚举值：</p><ul><li>false： 全量操作，会有删除逻辑</li><li>true： 不会删除原有资源</li></ul>
                     * @param _keepResource <p>是否保留资源</p><p>枚举值：</p><ul><li>false： 全量操作，会有删除逻辑</li><li>true： 不会删除原有资源</li></ul>
                     * 
                     */
                    void SetKeepResource(const bool& _keepResource);

                    /**
                     * 判断参数 KeepResource 是否已赋值
                     * @return KeepResource 是否已赋值
                     * 
                     */
                    bool KeepResourceHasBeenSet() const;

                private:

                    /**
                     * <p>实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>策略id</p>
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * <p>解析线路，需要全量传参</p>
                     */
                    std::vector<Source> m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>主力地址池集合，需要全量传参</p>
                     */
                    std::vector<MainAddressPool> m_mainAddressPoolSet;
                    bool m_mainAddressPoolSetHasBeenSet;

                    /**
                     * <p>兜底地址池集合，需要全量传参</p>
                     */
                    std::vector<MainAddressPool> m_fallbackAddressPoolSet;
                    bool m_fallbackAddressPoolSetHasBeenSet;

                    /**
                     * <p>策略名称，不允许重复</p>
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * <p>策略开启状态：ENABLED开启；DISABLED关闭</p>
                     */
                    std::string m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * <p>是否开启策略强制保留默认线路 disabled, enabled，默认不开启且只有一个策略能开启</p>
                     */
                    std::string m_keepDomainRecords;
                    bool m_keepDomainRecordsHasBeenSet;

                    /**
                     * <p>调度模式：AUTO默认；STOP仅暂停不切换</p>
                     */
                    std::string m_switchPoolType;
                    bool m_switchPoolTypeHasBeenSet;

                    /**
                     * <p>是否保留资源</p><p>枚举值：</p><ul><li>false： 全量操作，会有删除逻辑</li><li>true： 不会删除原有资源</li></ul>
                     */
                    bool m_keepResource;
                    bool m_keepResourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_MODIFYSTRATEGYREQUEST_H_
