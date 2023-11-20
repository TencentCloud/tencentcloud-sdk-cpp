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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBRESTORETIMEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBRESTORETIMEREQUEST_H_

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
                * DescribeDBRestoreTime请求参数结构体
                */
                class DescribeDBRestoreTimeRequest : public AbstractModel
                {
                public:
                    DescribeDBRestoreTimeRequest();
                    ~DescribeDBRestoreTimeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取原实例ID
                     * @return InstanceId 原实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置原实例ID
                     * @param _instanceId 原实例ID
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
                     * 获取回档的目标实例ID，不填则回档到原实例ID
                     * @return TargetInstanceId 回档的目标实例ID，不填则回档到原实例ID
                     * 
                     */
                    std::string GetTargetInstanceId() const;

                    /**
                     * 设置回档的目标实例ID，不填则回档到原实例ID
                     * @param _targetInstanceId 回档的目标实例ID，不填则回档到原实例ID
                     * 
                     */
                    void SetTargetInstanceId(const std::string& _targetInstanceId);

                    /**
                     * 判断参数 TargetInstanceId 是否已赋值
                     * @return TargetInstanceId 是否已赋值
                     * 
                     */
                    bool TargetInstanceIdHasBeenSet() const;

                    /**
                     * 获取按时间点查询可回档数据库，时间格式 YYYY-MM-DD HH:MM:SS。BackupId，Time二选一，不能同时为空
                     * @return Time 按时间点查询可回档数据库，时间格式 YYYY-MM-DD HH:MM:SS。BackupId，Time二选一，不能同时为空
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置按时间点查询可回档数据库，时间格式 YYYY-MM-DD HH:MM:SS。BackupId，Time二选一，不能同时为空
                     * @param _time 按时间点查询可回档数据库，时间格式 YYYY-MM-DD HH:MM:SS。BackupId，Time二选一，不能同时为空
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取按备份集ID查询可回档数据库，可通过DescribeBackups接口获取。BackupId，Time二选一不能同时为空
                     * @return BackupId 按备份集ID查询可回档数据库，可通过DescribeBackups接口获取。BackupId，Time二选一不能同时为空
                     * 
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置按备份集ID查询可回档数据库，可通过DescribeBackups接口获取。BackupId，Time二选一不能同时为空
                     * @param _backupId 按备份集ID查询可回档数据库，可通过DescribeBackups接口获取。BackupId，Time二选一不能同时为空
                     * 
                     */
                    void SetBackupId(const int64_t& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取数据库名称
                     * @return DBName 数据库名称
                     * 
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置数据库名称
                     * @param _dBName 数据库名称
                     * 
                     */
                    void SetDBName(const std::string& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     * 
                     */
                    bool DBNameHasBeenSet() const;

                private:

                    /**
                     * 原实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 回档的目标实例ID，不填则回档到原实例ID
                     */
                    std::string m_targetInstanceId;
                    bool m_targetInstanceIdHasBeenSet;

                    /**
                     * 按时间点查询可回档数据库，时间格式 YYYY-MM-DD HH:MM:SS。BackupId，Time二选一，不能同时为空
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 按备份集ID查询可回档数据库，可通过DescribeBackups接口获取。BackupId，Time二选一不能同时为空
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBRESTORETIMEREQUEST_H_
