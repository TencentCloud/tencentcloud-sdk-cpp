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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINCREMENTALMIGRATIONREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINCREMENTALMIGRATIONREQUEST_H_

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
                * DescribeIncrementalMigration请求参数结构体
                */
                class DescribeIncrementalMigrationRequest : public AbstractModel
                {
                public:
                    DescribeIncrementalMigrationRequest();
                    ~DescribeIncrementalMigrationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取备份导入任务ID，由CreateBackupMigration接口返回
                     * @return BackupMigrationId 备份导入任务ID，由CreateBackupMigration接口返回
                     * 
                     */
                    std::string GetBackupMigrationId() const;

                    /**
                     * 设置备份导入任务ID，由CreateBackupMigration接口返回
                     * @param _backupMigrationId 备份导入任务ID，由CreateBackupMigration接口返回
                     * 
                     */
                    void SetBackupMigrationId(const std::string& _backupMigrationId);

                    /**
                     * 判断参数 BackupMigrationId 是否已赋值
                     * @return BackupMigrationId 是否已赋值
                     * 
                     */
                    bool BackupMigrationIdHasBeenSet() const;

                    /**
                     * 获取导入目标实例ID
                     * @return InstanceId 导入目标实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置导入目标实例ID
                     * @param _instanceId 导入目标实例ID
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
                     * 获取备份文件名称
                     * @return BackupFileName 备份文件名称
                     * 
                     */
                    std::string GetBackupFileName() const;

                    /**
                     * 设置备份文件名称
                     * @param _backupFileName 备份文件名称
                     * 
                     */
                    void SetBackupFileName(const std::string& _backupFileName);

                    /**
                     * 判断参数 BackupFileName 是否已赋值
                     * @return BackupFileName 是否已赋值
                     * 
                     */
                    bool BackupFileNameHasBeenSet() const;

                    /**
                     * 获取导入任务状态集合
                     * @return StatusSet 导入任务状态集合
                     * 
                     */
                    std::vector<int64_t> GetStatusSet() const;

                    /**
                     * 设置导入任务状态集合
                     * @param _statusSet 导入任务状态集合
                     * 
                     */
                    void SetStatusSet(const std::vector<int64_t>& _statusSet);

                    /**
                     * 判断参数 StatusSet 是否已赋值
                     * @return StatusSet 是否已赋值
                     * 
                     */
                    bool StatusSetHasBeenSet() const;

                    /**
                     * 获取分页，页大小，默认值：100
                     * @return Limit 分页，页大小，默认值：100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页，页大小，默认值：100
                     * @param _limit 分页，页大小，默认值：100
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
                     * 获取分页，页数，默认值：0
                     * @return Offset 分页，页数，默认值：0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页，页数，默认值：0
                     * @param _offset 分页，页数，默认值：0
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
                     * 获取排序字段，name；createTime；startTime；endTime，默认按照createTime递增排序。
                     * @return OrderBy 排序字段，name；createTime；startTime；endTime，默认按照createTime递增排序。
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，name；createTime；startTime；endTime，默认按照createTime递增排序。
                     * @param _orderBy 排序字段，name；createTime；startTime；endTime，默认按照createTime递增排序。
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取排序方式，desc-递减排序，asc-递增排序。默认按照asc排序，且在OrderBy为有效值时，本参数有效
                     * @return OrderByType 排序方式，desc-递减排序，asc-递增排序。默认按照asc排序，且在OrderBy为有效值时，本参数有效
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序方式，desc-递减排序，asc-递增排序。默认按照asc排序，且在OrderBy为有效值时，本参数有效
                     * @param _orderByType 排序方式，desc-递减排序，asc-递增排序。默认按照asc排序，且在OrderBy为有效值时，本参数有效
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取增量备份导入任务ID，由CreateIncrementalMigration接口返回
                     * @return IncrementalMigrationId 增量备份导入任务ID，由CreateIncrementalMigration接口返回
                     * 
                     */
                    std::string GetIncrementalMigrationId() const;

                    /**
                     * 设置增量备份导入任务ID，由CreateIncrementalMigration接口返回
                     * @param _incrementalMigrationId 增量备份导入任务ID，由CreateIncrementalMigration接口返回
                     * 
                     */
                    void SetIncrementalMigrationId(const std::string& _incrementalMigrationId);

                    /**
                     * 判断参数 IncrementalMigrationId 是否已赋值
                     * @return IncrementalMigrationId 是否已赋值
                     * 
                     */
                    bool IncrementalMigrationIdHasBeenSet() const;

                private:

                    /**
                     * 备份导入任务ID，由CreateBackupMigration接口返回
                     */
                    std::string m_backupMigrationId;
                    bool m_backupMigrationIdHasBeenSet;

                    /**
                     * 导入目标实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 备份文件名称
                     */
                    std::string m_backupFileName;
                    bool m_backupFileNameHasBeenSet;

                    /**
                     * 导入任务状态集合
                     */
                    std::vector<int64_t> m_statusSet;
                    bool m_statusSetHasBeenSet;

                    /**
                     * 分页，页大小，默认值：100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页，页数，默认值：0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序字段，name；createTime；startTime；endTime，默认按照createTime递增排序。
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式，desc-递减排序，asc-递增排序。默认按照asc排序，且在OrderBy为有效值时，本参数有效
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 增量备份导入任务ID，由CreateIncrementalMigration接口返回
                     */
                    std::string m_incrementalMigrationId;
                    bool m_incrementalMigrationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINCREMENTALMIGRATIONREQUEST_H_
