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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_UPGRADEINSTANCEREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_UPGRADEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/EnableScheduleOperationDuration.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * UpgradeInstance请求参数结构体
                */
                class UpgradeInstanceRequest : public AbstractModel
                {
                public:
                    UpgradeInstanceRequest();
                    ~UpgradeInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取目标ES版本，支持：”6.4.3“, "6.8.2"，"7.5.1", "7.10.1", "7.14.2"
                     * @return EsVersion 目标ES版本，支持：”6.4.3“, "6.8.2"，"7.5.1", "7.10.1", "7.14.2"
                     * 
                     */
                    std::string GetEsVersion() const;

                    /**
                     * 设置目标ES版本，支持：”6.4.3“, "6.8.2"，"7.5.1", "7.10.1", "7.14.2"
                     * @param _esVersion 目标ES版本，支持：”6.4.3“, "6.8.2"，"7.5.1", "7.10.1", "7.14.2"
                     * 
                     */
                    void SetEsVersion(const std::string& _esVersion);

                    /**
                     * 判断参数 EsVersion 是否已赋值
                     * @return EsVersion 是否已赋值
                     * 
                     */
                    bool EsVersionHasBeenSet() const;

                    /**
                     * 获取是否只做升级检查，默认值为false
                     * @return CheckOnly 是否只做升级检查，默认值为false
                     * 
                     */
                    bool GetCheckOnly() const;

                    /**
                     * 设置是否只做升级检查，默认值为false
                     * @param _checkOnly 是否只做升级检查，默认值为false
                     * 
                     */
                    void SetCheckOnly(const bool& _checkOnly);

                    /**
                     * 判断参数 CheckOnly 是否已赋值
                     * @return CheckOnly 是否已赋值
                     * 
                     */
                    bool CheckOnlyHasBeenSet() const;

                    /**
                     * 获取目标商业特性版本：<li>oss 开源版</li><li>basic 基础版</li>当前仅在5.6.4升级6.x版本时使用，默认值为basic
                     * @return LicenseType 目标商业特性版本：<li>oss 开源版</li><li>basic 基础版</li>当前仅在5.6.4升级6.x版本时使用，默认值为basic
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置目标商业特性版本：<li>oss 开源版</li><li>basic 基础版</li>当前仅在5.6.4升级6.x版本时使用，默认值为basic
                     * @param _licenseType 目标商业特性版本：<li>oss 开源版</li><li>basic 基础版</li>当前仅在5.6.4升级6.x版本时使用，默认值为basic
                     * 
                     */
                    void SetLicenseType(const std::string& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li>
                     * @return BasicSecurityType 6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li>
                     * 
                     */
                    uint64_t GetBasicSecurityType() const;

                    /**
                     * 设置6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li>
                     * @param _basicSecurityType 6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li>
                     * 
                     */
                    void SetBasicSecurityType(const uint64_t& _basicSecurityType);

                    /**
                     * 判断参数 BasicSecurityType 是否已赋值
                     * @return BasicSecurityType 是否已赋值
                     * 
                     */
                    bool BasicSecurityTypeHasBeenSet() const;

                    /**
                     * 获取升级方式：<li>scale 蓝绿变更</li><li>restart 滚动重启</li>默认值为scale
                     * @return UpgradeMode 升级方式：<li>scale 蓝绿变更</li><li>restart 滚动重启</li>默认值为scale
                     * 
                     */
                    std::string GetUpgradeMode() const;

                    /**
                     * 设置升级方式：<li>scale 蓝绿变更</li><li>restart 滚动重启</li>默认值为scale
                     * @param _upgradeMode 升级方式：<li>scale 蓝绿变更</li><li>restart 滚动重启</li>默认值为scale
                     * 
                     */
                    void SetUpgradeMode(const std::string& _upgradeMode);

                    /**
                     * 判断参数 UpgradeMode 是否已赋值
                     * @return UpgradeMode 是否已赋值
                     * 
                     */
                    bool UpgradeModeHasBeenSet() const;

                    /**
                     * 获取升级版本前是否对集群进行备份，默认不备份
                     * @return CosBackup 升级版本前是否对集群进行备份，默认不备份
                     * 
                     */
                    bool GetCosBackup() const;

                    /**
                     * 设置升级版本前是否对集群进行备份，默认不备份
                     * @param _cosBackup 升级版本前是否对集群进行备份，默认不备份
                     * 
                     */
                    void SetCosBackup(const bool& _cosBackup);

                    /**
                     * 判断参数 CosBackup 是否已赋值
                     * @return CosBackup 是否已赋值
                     * 
                     */
                    bool CosBackupHasBeenSet() const;

                    /**
                     * 获取滚动模式时，是否跳过检查，进行强制重启。默认值为false
                     * @return SkipCheckForceRestart 滚动模式时，是否跳过检查，进行强制重启。默认值为false
                     * 
                     */
                    bool GetSkipCheckForceRestart() const;

                    /**
                     * 设置滚动模式时，是否跳过检查，进行强制重启。默认值为false
                     * @param _skipCheckForceRestart 滚动模式时，是否跳过检查，进行强制重启。默认值为false
                     * 
                     */
                    void SetSkipCheckForceRestart(const bool& _skipCheckForceRestart);

                    /**
                     * 判断参数 SkipCheckForceRestart 是否已赋值
                     * @return SkipCheckForceRestart 是否已赋值
                     * 
                     */
                    bool SkipCheckForceRestartHasBeenSet() const;

                    /**
                     * 获取cvm延迟上架参数
                     * @return CvmDelayOnlineTime cvm延迟上架参数
                     * 
                     */
                    uint64_t GetCvmDelayOnlineTime() const;

                    /**
                     * 设置cvm延迟上架参数
                     * @param _cvmDelayOnlineTime cvm延迟上架参数
                     * 
                     */
                    void SetCvmDelayOnlineTime(const uint64_t& _cvmDelayOnlineTime);

                    /**
                     * 判断参数 CvmDelayOnlineTime 是否已赋值
                     * @return CvmDelayOnlineTime 是否已赋值
                     * 
                     */
                    bool CvmDelayOnlineTimeHasBeenSet() const;

                    /**
                     * 获取分片迁移并发数
                     * @return ShardAllocationConcurrents 分片迁移并发数
                     * 
                     */
                    uint64_t GetShardAllocationConcurrents() const;

                    /**
                     * 设置分片迁移并发数
                     * @param _shardAllocationConcurrents 分片迁移并发数
                     * 
                     */
                    void SetShardAllocationConcurrents(const uint64_t& _shardAllocationConcurrents);

                    /**
                     * 判断参数 ShardAllocationConcurrents 是否已赋值
                     * @return ShardAllocationConcurrents 是否已赋值
                     * 
                     */
                    bool ShardAllocationConcurrentsHasBeenSet() const;

                    /**
                     * 获取分片迁移并发速度
                     * @return ShardAllocationBytes 分片迁移并发速度
                     * 
                     */
                    uint64_t GetShardAllocationBytes() const;

                    /**
                     * 设置分片迁移并发速度
                     * @param _shardAllocationBytes 分片迁移并发速度
                     * 
                     */
                    void SetShardAllocationBytes(const uint64_t& _shardAllocationBytes);

                    /**
                     * 判断参数 ShardAllocationBytes 是否已赋值
                     * @return ShardAllocationBytes 是否已赋值
                     * 
                     */
                    bool ShardAllocationBytesHasBeenSet() const;

                    /**
                     * 获取是否开启置放群组异步任务
                     * @return EnableScheduleRecoverGroup 是否开启置放群组异步任务
                     * 
                     */
                    bool GetEnableScheduleRecoverGroup() const;

                    /**
                     * 设置是否开启置放群组异步任务
                     * @param _enableScheduleRecoverGroup 是否开启置放群组异步任务
                     * 
                     */
                    void SetEnableScheduleRecoverGroup(const bool& _enableScheduleRecoverGroup);

                    /**
                     * 判断参数 EnableScheduleRecoverGroup 是否已赋值
                     * @return EnableScheduleRecoverGroup 是否已赋值
                     * 
                     */
                    bool EnableScheduleRecoverGroupHasBeenSet() const;

                    /**
                     * 获取置放群组异步任务时间段
                     * @return EnableScheduleOperationDuration 置放群组异步任务时间段
                     * 
                     */
                    EnableScheduleOperationDuration GetEnableScheduleOperationDuration() const;

                    /**
                     * 设置置放群组异步任务时间段
                     * @param _enableScheduleOperationDuration 置放群组异步任务时间段
                     * 
                     */
                    void SetEnableScheduleOperationDuration(const EnableScheduleOperationDuration& _enableScheduleOperationDuration);

                    /**
                     * 判断参数 EnableScheduleOperationDuration 是否已赋值
                     * @return EnableScheduleOperationDuration 是否已赋值
                     * 
                     */
                    bool EnableScheduleOperationDurationHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 目标ES版本，支持：”6.4.3“, "6.8.2"，"7.5.1", "7.10.1", "7.14.2"
                     */
                    std::string m_esVersion;
                    bool m_esVersionHasBeenSet;

                    /**
                     * 是否只做升级检查，默认值为false
                     */
                    bool m_checkOnly;
                    bool m_checkOnlyHasBeenSet;

                    /**
                     * 目标商业特性版本：<li>oss 开源版</li><li>basic 基础版</li>当前仅在5.6.4升级6.x版本时使用，默认值为basic
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * 6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li>
                     */
                    uint64_t m_basicSecurityType;
                    bool m_basicSecurityTypeHasBeenSet;

                    /**
                     * 升级方式：<li>scale 蓝绿变更</li><li>restart 滚动重启</li>默认值为scale
                     */
                    std::string m_upgradeMode;
                    bool m_upgradeModeHasBeenSet;

                    /**
                     * 升级版本前是否对集群进行备份，默认不备份
                     */
                    bool m_cosBackup;
                    bool m_cosBackupHasBeenSet;

                    /**
                     * 滚动模式时，是否跳过检查，进行强制重启。默认值为false
                     */
                    bool m_skipCheckForceRestart;
                    bool m_skipCheckForceRestartHasBeenSet;

                    /**
                     * cvm延迟上架参数
                     */
                    uint64_t m_cvmDelayOnlineTime;
                    bool m_cvmDelayOnlineTimeHasBeenSet;

                    /**
                     * 分片迁移并发数
                     */
                    uint64_t m_shardAllocationConcurrents;
                    bool m_shardAllocationConcurrentsHasBeenSet;

                    /**
                     * 分片迁移并发速度
                     */
                    uint64_t m_shardAllocationBytes;
                    bool m_shardAllocationBytesHasBeenSet;

                    /**
                     * 是否开启置放群组异步任务
                     */
                    bool m_enableScheduleRecoverGroup;
                    bool m_enableScheduleRecoverGroupHasBeenSet;

                    /**
                     * 置放群组异步任务时间段
                     */
                    EnableScheduleOperationDuration m_enableScheduleOperationDuration;
                    bool m_enableScheduleOperationDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPGRADEINSTANCEREQUEST_H_
