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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RECOVERBACKUPJOBREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RECOVERBACKUPJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/CosSourceInfo.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * RecoverBackUpJob请求参数结构体
                */
                class RecoverBackUpJobRequest : public AbstractModel
                {
                public:
                    RecoverBackUpJobRequest();
                    ~RecoverBackUpJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return InstanceId 集群id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群id
                     * @param _instanceId 集群id
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
                     * 获取任务id
                     * @return BackUpJobId 任务id
                     * 
                     */
                    int64_t GetBackUpJobId() const;

                    /**
                     * 设置任务id
                     * @param _backUpJobId 任务id
                     * 
                     */
                    void SetBackUpJobId(const int64_t& _backUpJobId);

                    /**
                     * 判断参数 BackUpJobId 是否已赋值
                     * @return BackUpJobId 是否已赋值
                     * 
                     */
                    bool BackUpJobIdHasBeenSet() const;

                    /**
                     * 获取恢复出来的新表副本数
                     * @return ReplicationNum 恢复出来的新表副本数
                     * 
                     */
                    int64_t GetReplicationNum() const;

                    /**
                     * 设置恢复出来的新表副本数
                     * @param _replicationNum 恢复出来的新表副本数
                     * 
                     */
                    void SetReplicationNum(const int64_t& _replicationNum);

                    /**
                     * 判断参数 ReplicationNum 是否已赋值
                     * @return ReplicationNum 是否已赋值
                     * 
                     */
                    bool ReplicationNumHasBeenSet() const;

                    /**
                     * 获取恢复是否保持源表中的配置，1时表示保留源表中的配置
                     * @return ReserveSourceConfig 恢复是否保持源表中的配置，1时表示保留源表中的配置
                     * 
                     */
                    int64_t GetReserveSourceConfig() const;

                    /**
                     * 设置恢复是否保持源表中的配置，1时表示保留源表中的配置
                     * @param _reserveSourceConfig 恢复是否保持源表中的配置，1时表示保留源表中的配置
                     * 
                     */
                    void SetReserveSourceConfig(const int64_t& _reserveSourceConfig);

                    /**
                     * 判断参数 ReserveSourceConfig 是否已赋值
                     * @return ReserveSourceConfig 是否已赋值
                     * 
                     */
                    bool ReserveSourceConfigHasBeenSet() const;

                    /**
                     * 获取0默认 1cos恢复
                     * @return RecoverType 0默认 1cos恢复
                     * @deprecated
                     */
                    int64_t GetRecoverType() const;

                    /**
                     * 设置0默认 1cos恢复
                     * @param _recoverType 0默认 1cos恢复
                     * @deprecated
                     */
                    void SetRecoverType(const int64_t& _recoverType);

                    /**
                     * 判断参数 RecoverType 是否已赋值
                     * @return RecoverType 是否已赋值
                     * @deprecated
                     */
                    bool RecoverTypeHasBeenSet() const;

                    /**
                     * 获取CosSourceInfo对象
                     * @return CosSourceInfo CosSourceInfo对象
                     * @deprecated
                     */
                    CosSourceInfo GetCosSourceInfo() const;

                    /**
                     * 设置CosSourceInfo对象
                     * @param _cosSourceInfo CosSourceInfo对象
                     * @deprecated
                     */
                    void SetCosSourceInfo(const CosSourceInfo& _cosSourceInfo);

                    /**
                     * 判断参数 CosSourceInfo 是否已赋值
                     * @return CosSourceInfo 是否已赋值
                     * @deprecated
                     */
                    bool CosSourceInfoHasBeenSet() const;

                    /**
                     * 获取0默认 1定期执行
                     * @return ScheduleType 0默认 1定期执行
                     * @deprecated
                     */
                    int64_t GetScheduleType() const;

                    /**
                     * 设置0默认 1定期执行
                     * @param _scheduleType 0默认 1定期执行
                     * @deprecated
                     */
                    void SetScheduleType(const int64_t& _scheduleType);

                    /**
                     * 判断参数 ScheduleType 是否已赋值
                     * @return ScheduleType 是否已赋值
                     * @deprecated
                     */
                    bool ScheduleTypeHasBeenSet() const;

                    /**
                     * 获取年-月-日 时:分:秒
                     * @return NextTime 年-月-日 时:分:秒
                     * @deprecated
                     */
                    std::string GetNextTime() const;

                    /**
                     * 设置年-月-日 时:分:秒
                     * @param _nextTime 年-月-日 时:分:秒
                     * @deprecated
                     */
                    void SetNextTime(const std::string& _nextTime);

                    /**
                     * 判断参数 NextTime 是否已赋值
                     * @return NextTime 是否已赋值
                     * @deprecated
                     */
                    bool NextTimeHasBeenSet() const;

                    /**
                     * 获取调度名称
                     * @return ScheduleName 调度名称
                     * @deprecated
                     */
                    std::string GetScheduleName() const;

                    /**
                     * 设置调度名称
                     * @param _scheduleName 调度名称
                     * @deprecated
                     */
                    void SetScheduleName(const std::string& _scheduleName);

                    /**
                     * 判断参数 ScheduleName 是否已赋值
                     * @return ScheduleName 是否已赋值
                     * @deprecated
                     */
                    bool ScheduleNameHasBeenSet() const;

                    /**
                     * 获取create update
                     * @return OperationType create update
                     * @deprecated
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置create update
                     * @param _operationType create update
                     * @deprecated
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * @deprecated
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取恢复粒度：All全量、Database按库、Table按表
                     * @return RecoverScope 恢复粒度：All全量、Database按库、Table按表
                     * 
                     */
                    std::string GetRecoverScope() const;

                    /**
                     * 设置恢复粒度：All全量、Database按库、Table按表
                     * @param _recoverScope 恢复粒度：All全量、Database按库、Table按表
                     * 
                     */
                    void SetRecoverScope(const std::string& _recoverScope);

                    /**
                     * 判断参数 RecoverScope 是否已赋值
                     * @return RecoverScope 是否已赋值
                     * 
                     */
                    bool RecoverScopeHasBeenSet() const;

                    /**
                     * 获取恢复库：如果是按库备份，则需要该字段，库之间用","分割
                     * @return RecoverDatabase 恢复库：如果是按库备份，则需要该字段，库之间用","分割
                     * 
                     */
                    std::string GetRecoverDatabase() const;

                    /**
                     * 设置恢复库：如果是按库备份，则需要该字段，库之间用","分割
                     * @param _recoverDatabase 恢复库：如果是按库备份，则需要该字段，库之间用","分割
                     * 
                     */
                    void SetRecoverDatabase(const std::string& _recoverDatabase);

                    /**
                     * 判断参数 RecoverDatabase 是否已赋值
                     * @return RecoverDatabase 是否已赋值
                     * 
                     */
                    bool RecoverDatabaseHasBeenSet() const;

                    /**
                     * 获取1:恢复后，不保留降冷策略，数据变为热数据；
2:恢复后，沿用备份表的降冷策略；
0:默认值，该版本没有这个配置（2.1版本2.1.8之前；2.0版本2.0.16之前）
                     * @return ReserveStoragePolicy 1:恢复后，不保留降冷策略，数据变为热数据；
2:恢复后，沿用备份表的降冷策略；
0:默认值，该版本没有这个配置（2.1版本2.1.8之前；2.0版本2.0.16之前）
                     * 
                     */
                    int64_t GetReserveStoragePolicy() const;

                    /**
                     * 设置1:恢复后，不保留降冷策略，数据变为热数据；
2:恢复后，沿用备份表的降冷策略；
0:默认值，该版本没有这个配置（2.1版本2.1.8之前；2.0版本2.0.16之前）
                     * @param _reserveStoragePolicy 1:恢复后，不保留降冷策略，数据变为热数据；
2:恢复后，沿用备份表的降冷策略；
0:默认值，该版本没有这个配置（2.1版本2.1.8之前；2.0版本2.0.16之前）
                     * 
                     */
                    void SetReserveStoragePolicy(const int64_t& _reserveStoragePolicy);

                    /**
                     * 判断参数 ReserveStoragePolicy 是否已赋值
                     * @return ReserveStoragePolicy 是否已赋值
                     * 
                     */
                    bool ReserveStoragePolicyHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 任务id
                     */
                    int64_t m_backUpJobId;
                    bool m_backUpJobIdHasBeenSet;

                    /**
                     * 恢复出来的新表副本数
                     */
                    int64_t m_replicationNum;
                    bool m_replicationNumHasBeenSet;

                    /**
                     * 恢复是否保持源表中的配置，1时表示保留源表中的配置
                     */
                    int64_t m_reserveSourceConfig;
                    bool m_reserveSourceConfigHasBeenSet;

                    /**
                     * 0默认 1cos恢复
                     */
                    int64_t m_recoverType;
                    bool m_recoverTypeHasBeenSet;

                    /**
                     * CosSourceInfo对象
                     */
                    CosSourceInfo m_cosSourceInfo;
                    bool m_cosSourceInfoHasBeenSet;

                    /**
                     * 0默认 1定期执行
                     */
                    int64_t m_scheduleType;
                    bool m_scheduleTypeHasBeenSet;

                    /**
                     * 年-月-日 时:分:秒
                     */
                    std::string m_nextTime;
                    bool m_nextTimeHasBeenSet;

                    /**
                     * 调度名称
                     */
                    std::string m_scheduleName;
                    bool m_scheduleNameHasBeenSet;

                    /**
                     * create update
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * 恢复粒度：All全量、Database按库、Table按表
                     */
                    std::string m_recoverScope;
                    bool m_recoverScopeHasBeenSet;

                    /**
                     * 恢复库：如果是按库备份，则需要该字段，库之间用","分割
                     */
                    std::string m_recoverDatabase;
                    bool m_recoverDatabaseHasBeenSet;

                    /**
                     * 1:恢复后，不保留降冷策略，数据变为热数据；
2:恢复后，沿用备份表的降冷策略；
0:默认值，该版本没有这个配置（2.1版本2.1.8之前；2.0版本2.0.16之前）
                     */
                    int64_t m_reserveStoragePolicy;
                    bool m_reserveStoragePolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RECOVERBACKUPJOBREQUEST_H_
