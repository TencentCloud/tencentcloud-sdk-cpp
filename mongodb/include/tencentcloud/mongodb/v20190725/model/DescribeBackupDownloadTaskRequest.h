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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEBACKUPDOWNLOADTASKREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEBACKUPDOWNLOADTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeBackupDownloadTask请求参数结构体
                */
                class DescribeBackupDownloadTaskRequest : public AbstractModel
                {
                public:
                    DescribeBackupDownloadTaskRequest();
                    ~DescribeBackupDownloadTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     * @return InstanceId 实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     * @param _instanceId 实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
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
                     * 获取备份文件名，用来过滤指定文件的下载任务
                     * @return BackupName 备份文件名，用来过滤指定文件的下载任务
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置备份文件名，用来过滤指定文件的下载任务
                     * @param _backupName 备份文件名，用来过滤指定文件的下载任务
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
                     * 获取指定查询时间范围内的任务，StartTime指定开始时间，不填默认不限制开始时间
                     * @return StartTime 指定查询时间范围内的任务，StartTime指定开始时间，不填默认不限制开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置指定查询时间范围内的任务，StartTime指定开始时间，不填默认不限制开始时间
                     * @param _startTime 指定查询时间范围内的任务，StartTime指定开始时间，不填默认不限制开始时间
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
                     * 获取指定查询时间范围内的任务，EndTime指定截止时间，不填默认不限制截止时间
                     * @return EndTime 指定查询时间范围内的任务，EndTime指定截止时间，不填默认不限制截止时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置指定查询时间范围内的任务，EndTime指定截止时间，不填默认不限制截止时间
                     * @param _endTime 指定查询时间范围内的任务，EndTime指定截止时间，不填默认不限制截止时间
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
                     * 获取此次查询返回的条数，取值范围为1-100，默认为20
                     * @return Limit 此次查询返回的条数，取值范围为1-100，默认为20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置此次查询返回的条数，取值范围为1-100，默认为20
                     * @param _limit 此次查询返回的条数，取值范围为1-100，默认为20
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
                     * 获取指定此次查询返回的页数，默认为0
                     * @return Offset 指定此次查询返回的页数，默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置指定此次查询返回的页数，默认为0
                     * @param _offset 指定此次查询返回的页数，默认为0
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
                     * 获取排序字段，取值为createTime，finishTime两种，默认为createTime
                     * @return OrderBy 排序字段，取值为createTime，finishTime两种，默认为createTime
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，取值为createTime，finishTime两种，默认为createTime
                     * @param _orderBy 排序字段，取值为createTime，finishTime两种，默认为createTime
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
                     * 获取排序方式，取值为asc，desc两种，默认desc
                     * @return OrderByType 排序方式，取值为asc，desc两种，默认desc
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序方式，取值为asc，desc两种，默认desc
                     * @param _orderByType 排序方式，取值为asc，desc两种，默认desc
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
                     * 获取根据任务状态过滤。0-等待执行，1-正在下载，2-下载完成，3-下载失败，4-等待重试。不填默认返回所有类型
                     * @return Status 根据任务状态过滤。0-等待执行，1-正在下载，2-下载完成，3-下载失败，4-等待重试。不填默认返回所有类型
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置根据任务状态过滤。0-等待执行，1-正在下载，2-下载完成，3-下载失败，4-等待重试。不填默认返回所有类型
                     * @param _status 根据任务状态过滤。0-等待执行，1-正在下载，2-下载完成，3-下载失败，4-等待重试。不填默认返回所有类型
                     * 
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 备份文件名，用来过滤指定文件的下载任务
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * 指定查询时间范围内的任务，StartTime指定开始时间，不填默认不限制开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 指定查询时间范围内的任务，EndTime指定截止时间，不填默认不限制截止时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 此次查询返回的条数，取值范围为1-100，默认为20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 指定此次查询返回的页数，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序字段，取值为createTime，finishTime两种，默认为createTime
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式，取值为asc，desc两种，默认desc
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 根据任务状态过滤。0-等待执行，1-正在下载，2-下载完成，3-下载失败，4-等待重试。不填默认返回所有类型
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEBACKUPDOWNLOADTASKREQUEST_H_
