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
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间(yyyy-MM-dd HH:mm:ss)
                     * @param _startTime 开始时间(yyyy-MM-dd HH:mm:ss)
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间(yyyy-MM-dd HH:mm:ss)
                     * @return EndTime 结束时间(yyyy-MM-dd HH:mm:ss)
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间(yyyy-MM-dd HH:mm:ss)
                     * @param _endTime 结束时间(yyyy-MM-dd HH:mm:ss)
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取实例ID，形如mssql-njj2mtpl
                     * @return InstanceId 实例ID，形如mssql-njj2mtpl
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，形如mssql-njj2mtpl
                     * @param _instanceId 实例ID，形如mssql-njj2mtpl
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
                     * 获取分页返回，每页返回的数目，取值为1-100，默认值为20
                     * @return Limit 分页返回，每页返回的数目，取值为1-100，默认值为20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页返回，每页返回的数目，取值为1-100，默认值为20
                     * @param _limit 分页返回，每页返回的数目，取值为1-100，默认值为20
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页返回，页编号，默认值为第0页
                     * @return Offset 分页返回，页编号，默认值为第0页
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页返回，页编号，默认值为第0页
                     * @param _offset 分页返回，页编号，默认值为第0页
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取按照备份名称筛选，不填则不筛选此项
                     * @return BackupName 按照备份名称筛选，不填则不筛选此项
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置按照备份名称筛选，不填则不筛选此项
                     * @param _backupName 按照备份名称筛选，不填则不筛选此项
                     * 
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     * 
                     */
                    bool BackupNameHasBeenSet() const;

                    /**
                     * 获取按照备份策略筛选，0-实例备份，1-多库备份，不填则不筛选此项
                     * @return Strategy 按照备份策略筛选，0-实例备份，1-多库备份，不填则不筛选此项
                     * 
                     */
                    int64_t GetStrategy() const;

                    /**
                     * 设置按照备份策略筛选，0-实例备份，1-多库备份，不填则不筛选此项
                     * @param _strategy 按照备份策略筛选，0-实例备份，1-多库备份，不填则不筛选此项
                     * 
                     */
                    void SetStrategy(const int64_t& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取按照备份方式筛选，0-后台自动定时备份，1-用户手动临时备份，2-定期备份，不填则不筛选此项
                     * @return BackupWay 按照备份方式筛选，0-后台自动定时备份，1-用户手动临时备份，2-定期备份，不填则不筛选此项
                     * 
                     */
                    int64_t GetBackupWay() const;

                    /**
                     * 设置按照备份方式筛选，0-后台自动定时备份，1-用户手动临时备份，2-定期备份，不填则不筛选此项
                     * @param _backupWay 按照备份方式筛选，0-后台自动定时备份，1-用户手动临时备份，2-定期备份，不填则不筛选此项
                     * 
                     */
                    void SetBackupWay(const int64_t& _backupWay);

                    /**
                     * 判断参数 BackupWay 是否已赋值
                     * @return BackupWay 是否已赋值
                     * 
                     */
                    bool BackupWayHasBeenSet() const;

                    /**
                     * 获取按照备份ID筛选，不填则不筛选此项
                     * @return BackupId 按照备份ID筛选，不填则不筛选此项
                     * 
                     */
                    uint64_t GetBackupId() const;

                    /**
                     * 设置按照备份ID筛选，不填则不筛选此项
                     * @param _backupId 按照备份ID筛选，不填则不筛选此项
                     * 
                     */
                    void SetBackupId(const uint64_t& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取按照备份的库名称筛选，不填则不筛选此项
                     * @return DatabaseName 按照备份的库名称筛选，不填则不筛选此项
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置按照备份的库名称筛选，不填则不筛选此项
                     * @param _databaseName 按照备份的库名称筛选，不填则不筛选此项
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取是否分组查询，默认是0，单库备份情况下 0-兼容老方式不分组，1-单库备份分组后展示
                     * @return Group 是否分组查询，默认是0，单库备份情况下 0-兼容老方式不分组，1-单库备份分组后展示
                     * 
                     */
                    int64_t GetGroup() const;

                    /**
                     * 设置是否分组查询，默认是0，单库备份情况下 0-兼容老方式不分组，1-单库备份分组后展示
                     * @param _group 是否分组查询，默认是0，单库备份情况下 0-兼容老方式不分组，1-单库备份分组后展示
                     * 
                     */
                    void SetGroup(const int64_t& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取备份类型，1-数据备份，2-日志备份，默认值为1
                     * @return Type 备份类型，1-数据备份，2-日志备份，默认值为1
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置备份类型，1-数据备份，2-日志备份，默认值为1
                     * @param _type 备份类型，1-数据备份，2-日志备份，默认值为1
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取按照备份文件形式筛选，pkg-打包备份文件，single-单库备份文件
                     * @return BackupFormat 按照备份文件形式筛选，pkg-打包备份文件，single-单库备份文件
                     * 
                     */
                    std::string GetBackupFormat() const;

                    /**
                     * 设置按照备份文件形式筛选，pkg-打包备份文件，single-单库备份文件
                     * @param _backupFormat 按照备份文件形式筛选，pkg-打包备份文件，single-单库备份文件
                     * 
                     */
                    void SetBackupFormat(const std::string& _backupFormat);

                    /**
                     * 判断参数 BackupFormat 是否已赋值
                     * @return BackupFormat 是否已赋值
                     * 
                     */
                    bool BackupFormatHasBeenSet() const;

                    /**
                     * 获取备份存储策略 0-跟随自定义备份保留策略 1-跟随实例生命周期直到实例下线，默认取值0
                     * @return StorageStrategy 备份存储策略 0-跟随自定义备份保留策略 1-跟随实例生命周期直到实例下线，默认取值0
                     * 
                     */
                    int64_t GetStorageStrategy() const;

                    /**
                     * 设置备份存储策略 0-跟随自定义备份保留策略 1-跟随实例生命周期直到实例下线，默认取值0
                     * @param _storageStrategy 备份存储策略 0-跟随自定义备份保留策略 1-跟随实例生命周期直到实例下线，默认取值0
                     * 
                     */
                    void SetStorageStrategy(const int64_t& _storageStrategy);

                    /**
                     * 判断参数 StorageStrategy 是否已赋值
                     * @return StorageStrategy 是否已赋值
                     * 
                     */
                    bool StorageStrategyHasBeenSet() const;

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
                     * 按照备份方式筛选，0-后台自动定时备份，1-用户手动临时备份，2-定期备份，不填则不筛选此项
                     */
                    int64_t m_backupWay;
                    bool m_backupWayHasBeenSet;

                    /**
                     * 按照备份ID筛选，不填则不筛选此项
                     */
                    uint64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * 按照备份的库名称筛选，不填则不筛选此项
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 是否分组查询，默认是0，单库备份情况下 0-兼容老方式不分组，1-单库备份分组后展示
                     */
                    int64_t m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * 备份类型，1-数据备份，2-日志备份，默认值为1
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 按照备份文件形式筛选，pkg-打包备份文件，single-单库备份文件
                     */
                    std::string m_backupFormat;
                    bool m_backupFormatHasBeenSet;

                    /**
                     * 备份存储策略 0-跟随自定义备份保留策略 1-跟随实例生命周期直到实例下线，默认取值0
                     */
                    int64_t m_storageStrategy;
                    bool m_storageStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPSREQUEST_H_
