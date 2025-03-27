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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCESATTRIBUTERESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCESATTRIBUTERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/TDEConfigAttribute.h>
#include <tencentcloud/sqlserver/v20180328/model/SSLConfig.h>
#include <tencentcloud/sqlserver/v20180328/model/DrReadableInfo.h>
#include <tencentcloud/sqlserver/v20180328/model/OldVip.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeDBInstancesAttribute返回参数结构体
                */
                class DescribeDBInstancesAttributeResponse : public AbstractModel
                {
                public:
                    DescribeDBInstancesAttributeResponse();
                    ~DescribeDBInstancesAttributeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取定期备份状态 enable-开启，disable-关闭
                     * @return RegularBackupEnable 定期备份状态 enable-开启，disable-关闭
                     * 
                     */
                    std::string GetRegularBackupEnable() const;

                    /**
                     * 判断参数 RegularBackupEnable 是否已赋值
                     * @return RegularBackupEnable 是否已赋值
                     * 
                     */
                    bool RegularBackupEnableHasBeenSet() const;

                    /**
                     * 获取定期备份保留天数 [90 - 3650]天
                     * @return RegularBackupSaveDays 定期备份保留天数 [90 - 3650]天
                     * 
                     */
                    uint64_t GetRegularBackupSaveDays() const;

                    /**
                     * 判断参数 RegularBackupSaveDays 是否已赋值
                     * @return RegularBackupSaveDays 是否已赋值
                     * 
                     */
                    bool RegularBackupSaveDaysHasBeenSet() const;

                    /**
                     * 获取定期备份策略 years-每年，quarters-每季度，months-每月
                     * @return RegularBackupStrategy 定期备份策略 years-每年，quarters-每季度，months-每月
                     * 
                     */
                    std::string GetRegularBackupStrategy() const;

                    /**
                     * 判断参数 RegularBackupStrategy 是否已赋值
                     * @return RegularBackupStrategy 是否已赋值
                     * 
                     */
                    bool RegularBackupStrategyHasBeenSet() const;

                    /**
                     * 获取定期备份保留个数
                     * @return RegularBackupCounts 定期备份保留个数
                     * 
                     */
                    uint64_t GetRegularBackupCounts() const;

                    /**
                     * 判断参数 RegularBackupCounts 是否已赋值
                     * @return RegularBackupCounts 是否已赋值
                     * 
                     */
                    bool RegularBackupCountsHasBeenSet() const;

                    /**
                     * 获取定期备份开始日期，格式-YYYY-MM-DD 默认当前日期
                     * @return RegularBackupStartTime 定期备份开始日期，格式-YYYY-MM-DD 默认当前日期
                     * 
                     */
                    std::string GetRegularBackupStartTime() const;

                    /**
                     * 判断参数 RegularBackupStartTime 是否已赋值
                     * @return RegularBackupStartTime 是否已赋值
                     * 
                     */
                    bool RegularBackupStartTimeHasBeenSet() const;

                    /**
                     * 获取阻塞进程阈值，单位毫秒
                     * @return BlockedThreshold 阻塞进程阈值，单位毫秒
                     * 
                     */
                    int64_t GetBlockedThreshold() const;

                    /**
                     * 判断参数 BlockedThreshold 是否已赋值
                     * @return BlockedThreshold 是否已赋值
                     * 
                     */
                    bool BlockedThresholdHasBeenSet() const;

                    /**
                     * 获取慢SQL、阻塞、死锁扩展事件文件保留时长
                     * @return EventSaveDays 慢SQL、阻塞、死锁扩展事件文件保留时长
                     * 
                     */
                    int64_t GetEventSaveDays() const;

                    /**
                     * 判断参数 EventSaveDays 是否已赋值
                     * @return EventSaveDays 是否已赋值
                     * 
                     */
                    bool EventSaveDaysHasBeenSet() const;

                    /**
                     * 获取TDE透明数据加密配置
                     * @return TDEConfig TDE透明数据加密配置
                     * 
                     */
                    TDEConfigAttribute GetTDEConfig() const;

                    /**
                     * 判断参数 TDEConfig 是否已赋值
                     * @return TDEConfig 是否已赋值
                     * 
                     */
                    bool TDEConfigHasBeenSet() const;

                    /**
                     * 获取SSL加密
                     * @return SSLConfig SSL加密
                     * 
                     */
                    SSLConfig GetSSLConfig() const;

                    /**
                     * 判断参数 SSLConfig 是否已赋值
                     * @return SSLConfig 是否已赋值
                     * 
                     */
                    bool SSLConfigHasBeenSet() const;

                    /**
                     * 获取双节点备机只读信息
                     * @return DrReadableInfo 双节点备机只读信息
                     * 
                     */
                    DrReadableInfo GetDrReadableInfo() const;

                    /**
                     * 判断参数 DrReadableInfo 是否已赋值
                     * @return DrReadableInfo 是否已赋值
                     * 
                     */
                    bool DrReadableInfoHasBeenSet() const;

                    /**
                     * 获取等待回收的IP列表
                     * @return OldVipList 等待回收的IP列表
                     * 
                     */
                    std::vector<OldVip> GetOldVipList() const;

                    /**
                     * 判断参数 OldVipList 是否已赋值
                     * @return OldVipList 是否已赋值
                     * 
                     */
                    bool OldVipListHasBeenSet() const;

                    /**
                     * 获取操作日志采集状态，enable-采集中，disable-不可用，renew_doing-配置开启或关闭中
                     * @return XEventStatus 操作日志采集状态，enable-采集中，disable-不可用，renew_doing-配置开启或关闭中
                     * 
                     */
                    std::string GetXEventStatus() const;

                    /**
                     * 判断参数 XEventStatus 是否已赋值
                     * @return XEventStatus 是否已赋值
                     * 
                     */
                    bool XEventStatusHasBeenSet() const;

                    /**
                     * 获取多节点备机只读信息
                     * @return MultiDrReadableInfo 多节点备机只读信息
                     * 
                     */
                    std::vector<DrReadableInfo> GetMultiDrReadableInfo() const;

                    /**
                     * 判断参数 MultiDrReadableInfo 是否已赋值
                     * @return MultiDrReadableInfo 是否已赋值
                     * 
                     */
                    bool MultiDrReadableInfoHasBeenSet() const;

                    /**
                     * 获取是否开启磁盘加密，1-开启，0-未开启
                     * @return IsDiskEncryptFlag 是否开启磁盘加密，1-开启，0-未开启
                     * 
                     */
                    int64_t GetIsDiskEncryptFlag() const;

                    /**
                     * 判断参数 IsDiskEncryptFlag 是否已赋值
                     * @return IsDiskEncryptFlag 是否已赋值
                     * 
                     */
                    bool IsDiskEncryptFlagHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 定期备份状态 enable-开启，disable-关闭
                     */
                    std::string m_regularBackupEnable;
                    bool m_regularBackupEnableHasBeenSet;

                    /**
                     * 定期备份保留天数 [90 - 3650]天
                     */
                    uint64_t m_regularBackupSaveDays;
                    bool m_regularBackupSaveDaysHasBeenSet;

                    /**
                     * 定期备份策略 years-每年，quarters-每季度，months-每月
                     */
                    std::string m_regularBackupStrategy;
                    bool m_regularBackupStrategyHasBeenSet;

                    /**
                     * 定期备份保留个数
                     */
                    uint64_t m_regularBackupCounts;
                    bool m_regularBackupCountsHasBeenSet;

                    /**
                     * 定期备份开始日期，格式-YYYY-MM-DD 默认当前日期
                     */
                    std::string m_regularBackupStartTime;
                    bool m_regularBackupStartTimeHasBeenSet;

                    /**
                     * 阻塞进程阈值，单位毫秒
                     */
                    int64_t m_blockedThreshold;
                    bool m_blockedThresholdHasBeenSet;

                    /**
                     * 慢SQL、阻塞、死锁扩展事件文件保留时长
                     */
                    int64_t m_eventSaveDays;
                    bool m_eventSaveDaysHasBeenSet;

                    /**
                     * TDE透明数据加密配置
                     */
                    TDEConfigAttribute m_tDEConfig;
                    bool m_tDEConfigHasBeenSet;

                    /**
                     * SSL加密
                     */
                    SSLConfig m_sSLConfig;
                    bool m_sSLConfigHasBeenSet;

                    /**
                     * 双节点备机只读信息
                     */
                    DrReadableInfo m_drReadableInfo;
                    bool m_drReadableInfoHasBeenSet;

                    /**
                     * 等待回收的IP列表
                     */
                    std::vector<OldVip> m_oldVipList;
                    bool m_oldVipListHasBeenSet;

                    /**
                     * 操作日志采集状态，enable-采集中，disable-不可用，renew_doing-配置开启或关闭中
                     */
                    std::string m_xEventStatus;
                    bool m_xEventStatusHasBeenSet;

                    /**
                     * 多节点备机只读信息
                     */
                    std::vector<DrReadableInfo> m_multiDrReadableInfo;
                    bool m_multiDrReadableInfoHasBeenSet;

                    /**
                     * 是否开启磁盘加密，1-开启，0-未开启
                     */
                    int64_t m_isDiskEncryptFlag;
                    bool m_isDiskEncryptFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCESATTRIBUTERESPONSE_H_
