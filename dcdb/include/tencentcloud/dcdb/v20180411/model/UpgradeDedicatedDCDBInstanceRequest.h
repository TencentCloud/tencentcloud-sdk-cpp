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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_UPGRADEDEDICATEDDCDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_UPGRADEDEDICATEDDCDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/AddShardConfig.h>
#include <tencentcloud/dcdb/v20180411/model/ExpandShardConfig.h>
#include <tencentcloud/dcdb/v20180411/model/SplitShardConfig.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * UpgradeDedicatedDCDBInstance请求参数结构体
                */
                class UpgradeDedicatedDCDBInstanceRequest : public AbstractModel
                {
                public:
                    UpgradeDedicatedDCDBInstanceRequest();
                    ~UpgradeDedicatedDCDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取升级类型，取值为ADD，SPLIT和EXPAND。ADD-添加分片；SPLIT-切分某个分片；EXPAND-垂直扩容某个分片
                     * @return UpgradeType 升级类型，取值为ADD，SPLIT和EXPAND。ADD-添加分片；SPLIT-切分某个分片；EXPAND-垂直扩容某个分片
                     * 
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置升级类型，取值为ADD，SPLIT和EXPAND。ADD-添加分片；SPLIT-切分某个分片；EXPAND-垂直扩容某个分片
                     * @param _upgradeType 升级类型，取值为ADD，SPLIT和EXPAND。ADD-添加分片；SPLIT-切分某个分片；EXPAND-垂直扩容某个分片
                     * 
                     */
                    void SetUpgradeType(const std::string& _upgradeType);

                    /**
                     * 判断参数 UpgradeType 是否已赋值
                     * @return UpgradeType 是否已赋值
                     * 
                     */
                    bool UpgradeTypeHasBeenSet() const;

                    /**
                     * 获取实例ID，形如 dcdbt-mlfjm74h
                     * @return InstanceId 实例ID，形如 dcdbt-mlfjm74h
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，形如 dcdbt-mlfjm74h
                     * @param _instanceId 实例ID，形如 dcdbt-mlfjm74h
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
                     * 获取当UpgradeType取值为ADD时，添加分片的配置参数
                     * @return AddShardConfig 当UpgradeType取值为ADD时，添加分片的配置参数
                     * 
                     */
                    AddShardConfig GetAddShardConfig() const;

                    /**
                     * 设置当UpgradeType取值为ADD时，添加分片的配置参数
                     * @param _addShardConfig 当UpgradeType取值为ADD时，添加分片的配置参数
                     * 
                     */
                    void SetAddShardConfig(const AddShardConfig& _addShardConfig);

                    /**
                     * 判断参数 AddShardConfig 是否已赋值
                     * @return AddShardConfig 是否已赋值
                     * 
                     */
                    bool AddShardConfigHasBeenSet() const;

                    /**
                     * 获取当UpgradeType取值为EXPAND时，垂直扩容分片的配置参数
                     * @return ExpandShardConfig 当UpgradeType取值为EXPAND时，垂直扩容分片的配置参数
                     * 
                     */
                    ExpandShardConfig GetExpandShardConfig() const;

                    /**
                     * 设置当UpgradeType取值为EXPAND时，垂直扩容分片的配置参数
                     * @param _expandShardConfig 当UpgradeType取值为EXPAND时，垂直扩容分片的配置参数
                     * 
                     */
                    void SetExpandShardConfig(const ExpandShardConfig& _expandShardConfig);

                    /**
                     * 判断参数 ExpandShardConfig 是否已赋值
                     * @return ExpandShardConfig 是否已赋值
                     * 
                     */
                    bool ExpandShardConfigHasBeenSet() const;

                    /**
                     * 获取当UpgradeType取值为SPLIT时，切分分片的配置参数
                     * @return SplitShardConfig 当UpgradeType取值为SPLIT时，切分分片的配置参数
                     * 
                     */
                    SplitShardConfig GetSplitShardConfig() const;

                    /**
                     * 设置当UpgradeType取值为SPLIT时，切分分片的配置参数
                     * @param _splitShardConfig 当UpgradeType取值为SPLIT时，切分分片的配置参数
                     * 
                     */
                    void SetSplitShardConfig(const SplitShardConfig& _splitShardConfig);

                    /**
                     * 判断参数 SplitShardConfig 是否已赋值
                     * @return SplitShardConfig 是否已赋值
                     * 
                     */
                    bool SplitShardConfigHasBeenSet() const;

                    /**
                     * 获取错过切换时间窗口时，是否自动重试一次，0-否，1-是
                     * @return SwitchAutoRetry 错过切换时间窗口时，是否自动重试一次，0-否，1-是
                     * 
                     */
                    int64_t GetSwitchAutoRetry() const;

                    /**
                     * 设置错过切换时间窗口时，是否自动重试一次，0-否，1-是
                     * @param _switchAutoRetry 错过切换时间窗口时，是否自动重试一次，0-否，1-是
                     * 
                     */
                    void SetSwitchAutoRetry(const int64_t& _switchAutoRetry);

                    /**
                     * 判断参数 SwitchAutoRetry 是否已赋值
                     * @return SwitchAutoRetry 是否已赋值
                     * 
                     */
                    bool SwitchAutoRetryHasBeenSet() const;

                    /**
                     * 获取切换时间窗口开始时间
                     * @return SwitchStartTime 切换时间窗口开始时间
                     * 
                     */
                    std::string GetSwitchStartTime() const;

                    /**
                     * 设置切换时间窗口开始时间
                     * @param _switchStartTime 切换时间窗口开始时间
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
                     * 获取切换时间窗口结束时间
                     * @return SwitchEndTime 切换时间窗口结束时间
                     * 
                     */
                    std::string GetSwitchEndTime() const;

                    /**
                     * 设置切换时间窗口结束时间
                     * @param _switchEndTime 切换时间窗口结束时间
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
                     * 升级类型，取值为ADD，SPLIT和EXPAND。ADD-添加分片；SPLIT-切分某个分片；EXPAND-垂直扩容某个分片
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                    /**
                     * 实例ID，形如 dcdbt-mlfjm74h
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 当UpgradeType取值为ADD时，添加分片的配置参数
                     */
                    AddShardConfig m_addShardConfig;
                    bool m_addShardConfigHasBeenSet;

                    /**
                     * 当UpgradeType取值为EXPAND时，垂直扩容分片的配置参数
                     */
                    ExpandShardConfig m_expandShardConfig;
                    bool m_expandShardConfigHasBeenSet;

                    /**
                     * 当UpgradeType取值为SPLIT时，切分分片的配置参数
                     */
                    SplitShardConfig m_splitShardConfig;
                    bool m_splitShardConfigHasBeenSet;

                    /**
                     * 错过切换时间窗口时，是否自动重试一次，0-否，1-是
                     */
                    int64_t m_switchAutoRetry;
                    bool m_switchAutoRetryHasBeenSet;

                    /**
                     * 切换时间窗口开始时间
                     */
                    std::string m_switchStartTime;
                    bool m_switchStartTimeHasBeenSet;

                    /**
                     * 切换时间窗口结束时间
                     */
                    std::string m_switchEndTime;
                    bool m_switchEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_UPGRADEDEDICATEDDCDBINSTANCEREQUEST_H_
