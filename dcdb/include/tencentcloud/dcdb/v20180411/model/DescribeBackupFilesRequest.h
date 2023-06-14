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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEBACKUPFILESREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEBACKUPFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeBackupFiles请求参数结构体
                */
                class DescribeBackupFilesRequest : public AbstractModel
                {
                public:
                    DescribeBackupFilesRequest();
                    ~DescribeBackupFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取按实例ID查询
                     * @return InstanceId 按实例ID查询
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置按实例ID查询
                     * @param _instanceId 按实例ID查询
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
                     * 获取按分片ID查询
                     * @return ShardId 按分片ID查询
                     * 
                     */
                    std::string GetShardId() const;

                    /**
                     * 设置按分片ID查询
                     * @param _shardId 按分片ID查询
                     * 
                     */
                    void SetShardId(const std::string& _shardId);

                    /**
                     * 判断参数 ShardId 是否已赋值
                     * @return ShardId 是否已赋值
                     * 
                     */
                    bool ShardIdHasBeenSet() const;

                    /**
                     * 获取备份类型，Data:数据备份，Binlog:Binlog备份，Errlog:错误日志，Slowlog:慢日志
                     * @return BackupType 备份类型，Data:数据备份，Binlog:Binlog备份，Errlog:错误日志，Slowlog:慢日志
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置备份类型，Data:数据备份，Binlog:Binlog备份，Errlog:错误日志，Slowlog:慢日志
                     * @param _backupType 备份类型，Data:数据备份，Binlog:Binlog备份，Errlog:错误日志，Slowlog:慢日志
                     * 
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取按开始时间查询
                     * @return StartTime 按开始时间查询
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置按开始时间查询
                     * @param _startTime 按开始时间查询
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
                     * 获取按结束时间查询
                     * @return EndTime 按结束时间查询
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置按结束时间查询
                     * @param _endTime 按结束时间查询
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
                     * 获取分页参数
                     * @return Limit 分页参数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页参数
                     * @param _limit 分页参数
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
                     * 获取分页参数
                     * @return Offset 分页参数
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页参数
                     * @param _offset 分页参数
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
                     * 获取排序参数，可选值：Time,Size
                     * @return OrderBy 排序参数，可选值：Time,Size
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序参数，可选值：Time,Size
                     * @param _orderBy 排序参数，可选值：Time,Size
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
                     * 获取排序参数，可选值：DESC,ASC
                     * @return OrderType 排序参数，可选值：DESC,ASC
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置排序参数，可选值：DESC,ASC
                     * @param _orderType 排序参数，可选值：DESC,ASC
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                private:

                    /**
                     * 按实例ID查询
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 按分片ID查询
                     */
                    std::string m_shardId;
                    bool m_shardIdHasBeenSet;

                    /**
                     * 备份类型，Data:数据备份，Binlog:Binlog备份，Errlog:错误日志，Slowlog:慢日志
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 按开始时间查询
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 按结束时间查询
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分页参数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页参数
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序参数，可选值：Time,Size
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序参数，可选值：DESC,ASC
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEBACKUPFILESREQUEST_H_
