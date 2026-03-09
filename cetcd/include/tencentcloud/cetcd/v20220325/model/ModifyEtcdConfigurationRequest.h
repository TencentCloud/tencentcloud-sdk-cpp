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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_MODIFYETCDCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_MODIFYETCDCONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cetcd/v20220325/model/EtcdAutoCompactionSettings.h>
#include <tencentcloud/cetcd/v20220325/model/EtcdMonitorSettings.h>
#include <tencentcloud/cetcd/v20220325/model/InstanceConfig.h>
#include <tencentcloud/cetcd/v20220325/model/ChargePrepaidConfig.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * ModifyEtcdConfiguration请求参数结构体
                */
                class ModifyEtcdConfigurationRequest : public AbstractModel
                {
                public:
                    ModifyEtcdConfigurationRequest();
                    ~ModifyEtcdConfigurationRequest() = default;
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
                     * 获取自动压缩设置
                     * @return AutoCompactionSettings 自动压缩设置
                     * 
                     */
                    EtcdAutoCompactionSettings GetAutoCompactionSettings() const;

                    /**
                     * 设置自动压缩设置
                     * @param _autoCompactionSettings 自动压缩设置
                     * 
                     */
                    void SetAutoCompactionSettings(const EtcdAutoCompactionSettings& _autoCompactionSettings);

                    /**
                     * 判断参数 AutoCompactionSettings 是否已赋值
                     * @return AutoCompactionSettings 是否已赋值
                     * 
                     */
                    bool AutoCompactionSettingsHasBeenSet() const;

                    /**
                     * 获取监控设置
                     * @return MonitorSettings 监控设置
                     * 
                     */
                    EtcdMonitorSettings GetMonitorSettings() const;

                    /**
                     * 设置监控设置
                     * @param _monitorSettings 监控设置
                     * 
                     */
                    void SetMonitorSettings(const EtcdMonitorSettings& _monitorSettings);

                    /**
                     * 判断参数 MonitorSettings 是否已赋值
                     * @return MonitorSettings 是否已赋值
                     * 
                     */
                    bool MonitorSettingsHasBeenSet() const;

                    /**
                     * 获取计费类型
PREPAID：预付费
POSTPAID_BY_HOUR：后付费
                     * @return ChargeType 计费类型
PREPAID：预付费
POSTPAID_BY_HOUR：后付费
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置计费类型
PREPAID：预付费
POSTPAID_BY_HOUR：后付费
                     * @param _chargeType 计费类型
PREPAID：预付费
POSTPAID_BY_HOUR：后付费
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取实例配置信息
                     * @return InstanceConfig 实例配置信息
                     * 
                     */
                    InstanceConfig GetInstanceConfig() const;

                    /**
                     * 设置实例配置信息
                     * @param _instanceConfig 实例配置信息
                     * 
                     */
                    void SetInstanceConfig(const InstanceConfig& _instanceConfig);

                    /**
                     * 判断参数 InstanceConfig 是否已赋值
                     * @return InstanceConfig 是否已赋值
                     * 
                     */
                    bool InstanceConfigHasBeenSet() const;

                    /**
                     * 获取预付费配置信息
                     * @return PrepaidConfig 预付费配置信息
                     * 
                     */
                    ChargePrepaidConfig GetPrepaidConfig() const;

                    /**
                     * 设置预付费配置信息
                     * @param _prepaidConfig 预付费配置信息
                     * 
                     */
                    void SetPrepaidConfig(const ChargePrepaidConfig& _prepaidConfig);

                    /**
                     * 判断参数 PrepaidConfig 是否已赋值
                     * @return PrepaidConfig 是否已赋值
                     * 
                     */
                    bool PrepaidConfigHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 自动压缩设置
                     */
                    EtcdAutoCompactionSettings m_autoCompactionSettings;
                    bool m_autoCompactionSettingsHasBeenSet;

                    /**
                     * 监控设置
                     */
                    EtcdMonitorSettings m_monitorSettings;
                    bool m_monitorSettingsHasBeenSet;

                    /**
                     * 计费类型
PREPAID：预付费
POSTPAID_BY_HOUR：后付费
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 实例配置信息
                     */
                    InstanceConfig m_instanceConfig;
                    bool m_instanceConfigHasBeenSet;

                    /**
                     * 预付费配置信息
                     */
                    ChargePrepaidConfig m_prepaidConfig;
                    bool m_prepaidConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_MODIFYETCDCONFIGURATIONREQUEST_H_
