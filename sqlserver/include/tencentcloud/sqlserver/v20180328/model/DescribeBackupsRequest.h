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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPSREQUEST_H_

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
                * DescribeBackups请求参数结构体
                */
                class DescribeBackupsRequest : public AbstractModel
                {
                public:
                    DescribeBackupsRequest();
                    ~DescribeBackupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间(yyyy-MM-dd HH:mm:ss)
                     * @return StartTime 开始时间(yyyy-MM-dd HH:mm:ss)
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间(yyyy-MM-dd HH:mm:ss)
                     * @param StartTime 开始时间(yyyy-MM-dd HH:mm:ss)
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间(yyyy-MM-dd HH:mm:ss)
                     * @return EndTime 结束时间(yyyy-MM-dd HH:mm:ss)
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间(yyyy-MM-dd HH:mm:ss)
                     * @param EndTime 结束时间(yyyy-MM-dd HH:mm:ss)
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取实例ID，形如mssql-njj2mtpl
                     * @return InstanceId 实例ID，形如mssql-njj2mtpl
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，形如mssql-njj2mtpl
                     * @param InstanceId 实例ID，形如mssql-njj2mtpl
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取分页返回，每页返回的数目，取值为1-100，默认值为20
                     * @return Limit 分页返回，每页返回的数目，取值为1-100，默认值为20
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页返回，每页返回的数目，取值为1-100，默认值为20
                     * @param Limit 分页返回，每页返回的数目，取值为1-100，默认值为20
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页返回，页编号，默认值为第0页
                     * @return Offset 分页返回，页编号，默认值为第0页
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页返回，页编号，默认值为第0页
                     * @param Offset 分页返回，页编号，默认值为第0页
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取按照备份名称筛选，不填则不筛选此项
                     * @return BackupName 按照备份名称筛选，不填则不筛选此项
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置按照备份名称筛选，不填则不筛选此项
                     * @param BackupName 按照备份名称筛选，不填则不筛选此项
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     */
                    bool BackupNameHasBeenSet() const;

                    /**
                     * 获取按照备份策略筛选，0-实例备份，1-多库备份，不填则不筛选此项
                     * @return Strategy 按照备份策略筛选，0-实例备份，1-多库备份，不填则不筛选此项
                     */
                    int64_t GetStrategy() const;

                    /**
                     * 设置按照备份策略筛选，0-实例备份，1-多库备份，不填则不筛选此项
                     * @param Strategy 按照备份策略筛选，0-实例备份，1-多库备份，不填则不筛选此项
                     */
                    void SetStrategy(const int64_t& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取按照备份方式筛选，0-后台自动定时备份，1-用户手动临时备份，不填则不筛选此项
                     * @return BackupWay 按照备份方式筛选，0-后台自动定时备份，1-用户手动临时备份，不填则不筛选此项
                     */
                    int64_t GetBackupWay() const;

                    /**
                     * 设置按照备份方式筛选，0-后台自动定时备份，1-用户手动临时备份，不填则不筛选此项
                     * @param BackupWay 按照备份方式筛选，0-后台自动定时备份，1-用户手动临时备份，不填则不筛选此项
                     */
                    void SetBackupWay(const int64_t& _backupWay);

                    /**
                     * 判断参数 BackupWay 是否已赋值
                     * @return BackupWay 是否已赋值
                     */
                    bool BackupWayHasBeenSet() const;

                private:

                    /**
                     * 开始时间(yyyy-MM-dd HH:mm:ss)
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间(yyyy-MM-dd HH:mm:ss)
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 实例ID，形如mssql-njj2mtpl
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 分页返回，每页返回的数目，取值为1-100，默认值为20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页返回，页编号，默认值为第0页
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 按照备份名称筛选，不填则不筛选此项
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * 按照备份策略筛选，0-实例备份，1-多库备份，不填则不筛选此项
                     */
                    int64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * 按照备份方式筛选，0-后台自动定时备份，1-用户手动临时备份，不填则不筛选此项
                     */
                    int64_t m_backupWay;
                    bool m_backupWayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPSREQUEST_H_
