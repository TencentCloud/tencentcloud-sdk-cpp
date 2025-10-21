/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取实例ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * @return InstanceId 实例ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * @param _instanceId 实例ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
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
                     * 获取指定备份文件名，用于过滤指定文件的下载任务。请通过接口 [DescribeDBBackups](https://cloud.tencent.com/document/product/240/38574) 获取备份文件名。
                     * @return BackupName 指定备份文件名，用于过滤指定文件的下载任务。请通过接口 [DescribeDBBackups](https://cloud.tencent.com/document/product/240/38574) 获取备份文件名。
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置指定备份文件名，用于过滤指定文件的下载任务。请通过接口 [DescribeDBBackups](https://cloud.tencent.com/document/product/240/38574) 获取备份文件名。
                     * @param _backupName 指定备份文件名，用于过滤指定文件的下载任务。请通过接口 [DescribeDBBackups](https://cloud.tencent.com/document/product/240/38574) 获取备份文件名。
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
                     * 获取指定查询时间范围内的任务，StartTime 指定开始时间。若不指定开始时间，则默认不限制开始时间。
                     * @return StartTime 指定查询时间范围内的任务，StartTime 指定开始时间。若不指定开始时间，则默认不限制开始时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置指定查询时间范围内的任务，StartTime 指定开始时间。若不指定开始时间，则默认不限制开始时间。
                     * @param _startTime 指定查询时间范围内的任务，StartTime 指定开始时间。若不指定开始时间，则默认不限制开始时间。
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
                     * 获取指定查询时间范围内的任务，EndTime 指定截止时间。若不指定截止时间，则默认不限制截止时间。
                     * @return EndTime 指定查询时间范围内的任务，EndTime 指定截止时间。若不指定截止时间，则默认不限制截止时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置指定查询时间范围内的任务，EndTime 指定截止时间。若不指定截止时间，则默认不限制截止时间。
                     * @param _endTime 指定查询时间范围内的任务，EndTime 指定截止时间。若不指定截止时间，则默认不限制截止时间。
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
                     * 获取此次查询返回的条数，取值范围为1-100，默认为20。
                     * @return Limit 此次查询返回的条数，取值范围为1-100，默认为20。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置此次查询返回的条数，取值范围为1-100，默认为20。
                     * @param _limit 此次查询返回的条数，取值范围为1-100，默认为20。
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
                     * 获取指定此次查询返回的页数，默认为0。
                     * @return Offset 指定此次查询返回的页数，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置指定此次查询返回的页数，默认为0。
                     * @param _offset 指定此次查询返回的页数，默认为0。
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
                     * 获取排序字段。
- createTime：按照备份下载任务的创建时间排序。默认为 createTime。
- finishTime：按照备份下载任务的完成时间排序。
                     * @return OrderBy 排序字段。
- createTime：按照备份下载任务的创建时间排序。默认为 createTime。
- finishTime：按照备份下载任务的完成时间排序。
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段。
- createTime：按照备份下载任务的创建时间排序。默认为 createTime。
- finishTime：按照备份下载任务的完成时间排序。
                     * @param _orderBy 排序字段。
- createTime：按照备份下载任务的创建时间排序。默认为 createTime。
- finishTime：按照备份下载任务的完成时间排序。
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
                     * 获取排序方式。
- asc：升序排列。
- desc：降序排列。默认为 desc。
                     * @return OrderByType 排序方式。
- asc：升序排列。
- desc：降序排列。默认为 desc。
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序方式。
- asc：升序排列。
- desc：降序排列。默认为 desc。
                     * @param _orderByType 排序方式。
- asc：升序排列。
- desc：降序排列。默认为 desc。
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
                     * 获取指定任务状态，用于过滤下载任务。若不配置该参数，则返回所有状态类型的任务。
- 0：等待执行。
- 1：正在下载。
- 2：下载完成。
- 3：下载失败。
- 4：等待重试。
                     * @return Status 指定任务状态，用于过滤下载任务。若不配置该参数，则返回所有状态类型的任务。
- 0：等待执行。
- 1：正在下载。
- 2：下载完成。
- 3：下载失败。
- 4：等待重试。
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置指定任务状态，用于过滤下载任务。若不配置该参数，则返回所有状态类型的任务。
- 0：等待执行。
- 1：正在下载。
- 2：下载完成。
- 3：下载失败。
- 4：等待重试。
                     * @param _status 指定任务状态，用于过滤下载任务。若不配置该参数，则返回所有状态类型的任务。
- 0：等待执行。
- 1：正在下载。
- 2：下载完成。
- 3：下载失败。
- 4：等待重试。
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
                     * 实例ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 指定备份文件名，用于过滤指定文件的下载任务。请通过接口 [DescribeDBBackups](https://cloud.tencent.com/document/product/240/38574) 获取备份文件名。
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * 指定查询时间范围内的任务，StartTime 指定开始时间。若不指定开始时间，则默认不限制开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 指定查询时间范围内的任务，EndTime 指定截止时间。若不指定截止时间，则默认不限制截止时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 此次查询返回的条数，取值范围为1-100，默认为20。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 指定此次查询返回的页数，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序字段。
- createTime：按照备份下载任务的创建时间排序。默认为 createTime。
- finishTime：按照备份下载任务的完成时间排序。
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式。
- asc：升序排列。
- desc：降序排列。默认为 desc。
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 指定任务状态，用于过滤下载任务。若不配置该参数，则返回所有状态类型的任务。
- 0：等待执行。
- 1：正在下载。
- 2：下载完成。
- 3：下载失败。
- 4：等待重试。
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEBACKUPDOWNLOADTASKREQUEST_H_
