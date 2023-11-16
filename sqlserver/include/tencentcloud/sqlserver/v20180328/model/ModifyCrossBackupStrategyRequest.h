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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYCROSSBACKUPSTRATEGYREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYCROSSBACKUPSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyCrossBackupStrategy请求参数结构体
                */
                class ModifyCrossBackupStrategyRequest : public AbstractModel
                {
                public:
                    ModifyCrossBackupStrategyRequest();
                    ~ModifyCrossBackupStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取跨地域备份开关(数据备份&日志备份) enable-开启，disable-关闭
                     * @return CrossBackupEnabled 跨地域备份开关(数据备份&日志备份) enable-开启，disable-关闭
                     * 
                     */
                    std::string GetCrossBackupEnabled() const;

                    /**
                     * 设置跨地域备份开关(数据备份&日志备份) enable-开启，disable-关闭
                     * @param _crossBackupEnabled 跨地域备份开关(数据备份&日志备份) enable-开启，disable-关闭
                     * 
                     */
                    void SetCrossBackupEnabled(const std::string& _crossBackupEnabled);

                    /**
                     * 判断参数 CrossBackupEnabled 是否已赋值
                     * @return CrossBackupEnabled 是否已赋值
                     * 
                     */
                    bool CrossBackupEnabledHasBeenSet() const;

                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
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
                     * 获取实例ID列表
                     * @return InstanceIdSet 实例ID列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置实例ID列表
                     * @param _instanceIdSet 实例ID列表
                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取跨地域备份保留天数，取值：7~1830，默认7天
                     * @return CrossBackupSaveDays 跨地域备份保留天数，取值：7~1830，默认7天
                     * 
                     */
                    uint64_t GetCrossBackupSaveDays() const;

                    /**
                     * 设置跨地域备份保留天数，取值：7~1830，默认7天
                     * @param _crossBackupSaveDays 跨地域备份保留天数，取值：7~1830，默认7天
                     * 
                     */
                    void SetCrossBackupSaveDays(const uint64_t& _crossBackupSaveDays);

                    /**
                     * 判断参数 CrossBackupSaveDays 是否已赋值
                     * @return CrossBackupSaveDays 是否已赋值
                     * 
                     */
                    bool CrossBackupSaveDaysHasBeenSet() const;

                    /**
                     * 获取跨地域备份的目标地域ID，最多两个，最少一个
                     * @return CrossBackupRegion 跨地域备份的目标地域ID，最多两个，最少一个
                     * 
                     */
                    std::vector<std::string> GetCrossBackupRegion() const;

                    /**
                     * 设置跨地域备份的目标地域ID，最多两个，最少一个
                     * @param _crossBackupRegion 跨地域备份的目标地域ID，最多两个，最少一个
                     * 
                     */
                    void SetCrossBackupRegion(const std::vector<std::string>& _crossBackupRegion);

                    /**
                     * 判断参数 CrossBackupRegion 是否已赋值
                     * @return CrossBackupRegion 是否已赋值
                     * 
                     */
                    bool CrossBackupRegionHasBeenSet() const;

                    /**
                     * 获取是否立即清理跨地域备份(数据备份&日志备份) ，只有在BackupEnabled = disable时有效。1-是，0-否，默认：0
                     * @return CleanUpCrossBackup 是否立即清理跨地域备份(数据备份&日志备份) ，只有在BackupEnabled = disable时有效。1-是，0-否，默认：0
                     * 
                     */
                    uint64_t GetCleanUpCrossBackup() const;

                    /**
                     * 设置是否立即清理跨地域备份(数据备份&日志备份) ，只有在BackupEnabled = disable时有效。1-是，0-否，默认：0
                     * @param _cleanUpCrossBackup 是否立即清理跨地域备份(数据备份&日志备份) ，只有在BackupEnabled = disable时有效。1-是，0-否，默认：0
                     * 
                     */
                    void SetCleanUpCrossBackup(const uint64_t& _cleanUpCrossBackup);

                    /**
                     * 判断参数 CleanUpCrossBackup 是否已赋值
                     * @return CleanUpCrossBackup 是否已赋值
                     * 
                     */
                    bool CleanUpCrossBackupHasBeenSet() const;

                private:

                    /**
                     * 跨地域备份开关(数据备份&日志备份) enable-开启，disable-关闭
                     */
                    std::string m_crossBackupEnabled;
                    bool m_crossBackupEnabledHasBeenSet;

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例ID列表
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * 跨地域备份保留天数，取值：7~1830，默认7天
                     */
                    uint64_t m_crossBackupSaveDays;
                    bool m_crossBackupSaveDaysHasBeenSet;

                    /**
                     * 跨地域备份的目标地域ID，最多两个，最少一个
                     */
                    std::vector<std::string> m_crossBackupRegion;
                    bool m_crossBackupRegionHasBeenSet;

                    /**
                     * 是否立即清理跨地域备份(数据备份&日志备份) ，只有在BackupEnabled = disable时有效。1-是，0-否，默认：0
                     */
                    uint64_t m_cleanUpCrossBackup;
                    bool m_cleanUpCrossBackupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYCROSSBACKUPSTRATEGYREQUEST_H_
