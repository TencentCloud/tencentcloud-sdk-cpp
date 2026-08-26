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
                     * 获取<p>升级类型，取值为ADD，SPLIT和EXPAND。ADD-添加分片；SPLIT-切分某个分片；EXPAND-垂直扩容某个分片</p>
                     * @return UpgradeType <p>升级类型，取值为ADD，SPLIT和EXPAND。ADD-添加分片；SPLIT-切分某个分片；EXPAND-垂直扩容某个分片</p>
                     * 
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置<p>升级类型，取值为ADD，SPLIT和EXPAND。ADD-添加分片；SPLIT-切分某个分片；EXPAND-垂直扩容某个分片</p>
                     * @param _upgradeType <p>升级类型，取值为ADD，SPLIT和EXPAND。ADD-添加分片；SPLIT-切分某个分片；EXPAND-垂直扩容某个分片</p>
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
                     * 获取<p>实例ID，形如 dcdbt-mlfjm74h</p>
                     * @return InstanceId <p>实例ID，形如 dcdbt-mlfjm74h</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID，形如 dcdbt-mlfjm74h</p>
                     * @param _instanceId <p>实例ID，形如 dcdbt-mlfjm74h</p>
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
                     * 获取<p>当UpgradeType取值为ADD时，添加分片的配置参数</p>
                     * @return AddShardConfig <p>当UpgradeType取值为ADD时，添加分片的配置参数</p>
                     * 
                     */
                    AddShardConfig GetAddShardConfig() const;

                    /**
                     * 设置<p>当UpgradeType取值为ADD时，添加分片的配置参数</p>
                     * @param _addShardConfig <p>当UpgradeType取值为ADD时，添加分片的配置参数</p>
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
                     * 获取<p>当UpgradeType取值为EXPAND时，垂直扩容分片的配置参数</p>
                     * @return ExpandShardConfig <p>当UpgradeType取值为EXPAND时，垂直扩容分片的配置参数</p>
                     * 
                     */
                    ExpandShardConfig GetExpandShardConfig() const;

                    /**
                     * 设置<p>当UpgradeType取值为EXPAND时，垂直扩容分片的配置参数</p>
                     * @param _expandShardConfig <p>当UpgradeType取值为EXPAND时，垂直扩容分片的配置参数</p>
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
                     * 获取<p>当UpgradeType取值为SPLIT时，切分分片的配置参数</p>
                     * @return SplitShardConfig <p>当UpgradeType取值为SPLIT时，切分分片的配置参数</p>
                     * 
                     */
                    SplitShardConfig GetSplitShardConfig() const;

                    /**
                     * 设置<p>当UpgradeType取值为SPLIT时，切分分片的配置参数</p>
                     * @param _splitShardConfig <p>当UpgradeType取值为SPLIT时，切分分片的配置参数</p>
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
                     * 获取<p>错过切换时间窗口时，是否自动重试一次，0-否，1-是</p>
                     * @return SwitchAutoRetry <p>错过切换时间窗口时，是否自动重试一次，0-否，1-是</p>
                     * 
                     */
                    int64_t GetSwitchAutoRetry() const;

                    /**
                     * 设置<p>错过切换时间窗口时，是否自动重试一次，0-否，1-是</p>
                     * @param _switchAutoRetry <p>错过切换时间窗口时，是否自动重试一次，0-否，1-是</p>
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
                     * 获取<p>切换时间窗口开始时间</p>
                     * @return SwitchStartTime <p>切换时间窗口开始时间</p>
                     * 
                     */
                    std::string GetSwitchStartTime() const;

                    /**
                     * 设置<p>切换时间窗口开始时间</p>
                     * @param _switchStartTime <p>切换时间窗口开始时间</p>
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
                     * 获取<p>切换时间窗口结束时间</p>
                     * @return SwitchEndTime <p>切换时间窗口结束时间</p>
                     * 
                     */
                    std::string GetSwitchEndTime() const;

                    /**
                     * 设置<p>切换时间窗口结束时间</p>
                     * @param _switchEndTime <p>切换时间窗口结束时间</p>
                     * 
                     */
                    void SetSwitchEndTime(const std::string& _switchEndTime);

                    /**
                     * 判断参数 SwitchEndTime 是否已赋值
                     * @return SwitchEndTime 是否已赋值
                     * 
                     */
                    bool SwitchEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>多个分片同时发起扩容，并发切换中的切换时间间隔，即当前分片切换开始时间和下一个分片的切换开始时间间隔，不传默认为1。</p><p>取值范围：[1, 180]</p><p>单位：秒</p>
                     * @return SwitchInterval <p>多个分片同时发起扩容，并发切换中的切换时间间隔，即当前分片切换开始时间和下一个分片的切换开始时间间隔，不传默认为1。</p><p>取值范围：[1, 180]</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetSwitchInterval() const;

                    /**
                     * 设置<p>多个分片同时发起扩容，并发切换中的切换时间间隔，即当前分片切换开始时间和下一个分片的切换开始时间间隔，不传默认为1。</p><p>取值范围：[1, 180]</p><p>单位：秒</p>
                     * @param _switchInterval <p>多个分片同时发起扩容，并发切换中的切换时间间隔，即当前分片切换开始时间和下一个分片的切换开始时间间隔，不传默认为1。</p><p>取值范围：[1, 180]</p><p>单位：秒</p>
                     * 
                     */
                    void SetSwitchInterval(const int64_t& _switchInterval);

                    /**
                     * 判断参数 SwitchInterval 是否已赋值
                     * @return SwitchInterval 是否已赋值
                     * 
                     */
                    bool SwitchIntervalHasBeenSet() const;

                private:

                    /**
                     * <p>升级类型，取值为ADD，SPLIT和EXPAND。ADD-添加分片；SPLIT-切分某个分片；EXPAND-垂直扩容某个分片</p>
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                    /**
                     * <p>实例ID，形如 dcdbt-mlfjm74h</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>当UpgradeType取值为ADD时，添加分片的配置参数</p>
                     */
                    AddShardConfig m_addShardConfig;
                    bool m_addShardConfigHasBeenSet;

                    /**
                     * <p>当UpgradeType取值为EXPAND时，垂直扩容分片的配置参数</p>
                     */
                    ExpandShardConfig m_expandShardConfig;
                    bool m_expandShardConfigHasBeenSet;

                    /**
                     * <p>当UpgradeType取值为SPLIT时，切分分片的配置参数</p>
                     */
                    SplitShardConfig m_splitShardConfig;
                    bool m_splitShardConfigHasBeenSet;

                    /**
                     * <p>错过切换时间窗口时，是否自动重试一次，0-否，1-是</p>
                     */
                    int64_t m_switchAutoRetry;
                    bool m_switchAutoRetryHasBeenSet;

                    /**
                     * <p>切换时间窗口开始时间</p>
                     */
                    std::string m_switchStartTime;
                    bool m_switchStartTimeHasBeenSet;

                    /**
                     * <p>切换时间窗口结束时间</p>
                     */
                    std::string m_switchEndTime;
                    bool m_switchEndTimeHasBeenSet;

                    /**
                     * <p>多个分片同时发起扩容，并发切换中的切换时间间隔，即当前分片切换开始时间和下一个分片的切换开始时间间隔，不传默认为1。</p><p>取值范围：[1, 180]</p><p>单位：秒</p>
                     */
                    int64_t m_switchInterval;
                    bool m_switchIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_UPGRADEDEDICATEDDCDBINSTANCEREQUEST_H_
