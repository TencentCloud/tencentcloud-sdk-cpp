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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_CREATESTRATEGYREQUEST_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_CREATESTRATEGYREQUEST_H_

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
                * CreateStrategy请求参数结构体
                */
                class CreateStrategyRequest : public AbstractModel
                {
                public:
                    CreateStrategyRequest();
                    ~CreateStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取策略名称，不允许重复
                     * @return StrategyName 策略名称，不允许重复
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置策略名称，不允许重复
                     * @param _strategyName 策略名称，不允许重复
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
                     * 获取解析线路
                     * @return Source 解析线路
                     * 
                     */
                    std::vector<Source> GetSource() const;

                    /**
                     * 设置解析线路
                     * @param _source 解析线路
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
                     * 获取主力地址池集合，最多允许配置四级
                     * @return MainAddressPoolSet 主力地址池集合，最多允许配置四级
                     * 
                     */
                    std::vector<MainAddressPool> GetMainAddressPoolSet() const;

                    /**
                     * 设置主力地址池集合，最多允许配置四级
                     * @param _mainAddressPoolSet 主力地址池集合，最多允许配置四级
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
                     * 获取兜底地址池集合，只允许配置一级，且地址池数量为1
                     * @return FallbackAddressPoolSet 兜底地址池集合，只允许配置一级，且地址池数量为1
                     * 
                     */
                    std::vector<MainAddressPool> GetFallbackAddressPoolSet() const;

                    /**
                     * 设置兜底地址池集合，只允许配置一级，且地址池数量为1
                     * @param _fallbackAddressPoolSet 兜底地址池集合，只允许配置一级，且地址池数量为1
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
                     * 获取是否开启策略强制保留默认线路 disabled, enabled，默认不开启且只有一个策略能开启
                     * @return KeepDomainRecords 是否开启策略强制保留默认线路 disabled, enabled，默认不开启且只有一个策略能开启
                     * 
                     */
                    std::string GetKeepDomainRecords() const;

                    /**
                     * 设置是否开启策略强制保留默认线路 disabled, enabled，默认不开启且只有一个策略能开启
                     * @param _keepDomainRecords 是否开启策略强制保留默认线路 disabled, enabled，默认不开启且只有一个策略能开启
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
                     * 获取策略调度模式：AUTO默认切换；STOP仅暂停不切换
                     * @return SwitchPoolType 策略调度模式：AUTO默认切换；STOP仅暂停不切换
                     * 
                     */
                    std::string GetSwitchPoolType() const;

                    /**
                     * 设置策略调度模式：AUTO默认切换；STOP仅暂停不切换
                     * @param _switchPoolType 策略调度模式：AUTO默认切换；STOP仅暂停不切换
                     * 
                     */
                    void SetSwitchPoolType(const std::string& _switchPoolType);

                    /**
                     * 判断参数 SwitchPoolType 是否已赋值
                     * @return SwitchPoolType 是否已赋值
                     * 
                     */
                    bool SwitchPoolTypeHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 策略名称，不允许重复
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * 解析线路
                     */
                    std::vector<Source> m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 主力地址池集合，最多允许配置四级
                     */
                    std::vector<MainAddressPool> m_mainAddressPoolSet;
                    bool m_mainAddressPoolSetHasBeenSet;

                    /**
                     * 兜底地址池集合，只允许配置一级，且地址池数量为1
                     */
                    std::vector<MainAddressPool> m_fallbackAddressPoolSet;
                    bool m_fallbackAddressPoolSetHasBeenSet;

                    /**
                     * 是否开启策略强制保留默认线路 disabled, enabled，默认不开启且只有一个策略能开启
                     */
                    std::string m_keepDomainRecords;
                    bool m_keepDomainRecordsHasBeenSet;

                    /**
                     * 策略调度模式：AUTO默认切换；STOP仅暂停不切换
                     */
                    std::string m_switchPoolType;
                    bool m_switchPoolTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_CREATESTRATEGYREQUEST_H_
