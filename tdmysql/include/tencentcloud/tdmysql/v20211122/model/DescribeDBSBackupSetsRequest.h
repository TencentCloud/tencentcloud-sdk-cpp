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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBSBACKUPSETSREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBSBACKUPSETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/BackupSetsReqFilter.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DescribeDBSBackupSets请求参数结构体
                */
                class DescribeDBSBackupSetsRequest : public AbstractModel
                {
                public:
                    DescribeDBSBackupSetsRequest();
                    ~DescribeDBSBackupSetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>实例备份集ID</p>
                     * @return BackupSetId <p>实例备份集ID</p>
                     * 
                     */
                    int64_t GetBackupSetId() const;

                    /**
                     * 设置<p>实例备份集ID</p>
                     * @param _backupSetId <p>实例备份集ID</p>
                     * 
                     */
                    void SetBackupSetId(const int64_t& _backupSetId);

                    /**
                     * 判断参数 BackupSetId 是否已赋值
                     * @return BackupSetId 是否已赋值
                     * 
                     */
                    bool BackupSetIdHasBeenSet() const;

                    /**
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
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
                     * 获取<p>过滤条件</p>
                     * @return FilterBy <p>过滤条件</p>
                     * 
                     */
                    BackupSetsReqFilter GetFilterBy() const;

                    /**
                     * 设置<p>过滤条件</p>
                     * @param _filterBy <p>过滤条件</p>
                     * 
                     */
                    void SetFilterBy(const BackupSetsReqFilter& _filterBy);

                    /**
                     * 判断参数 FilterBy 是否已赋值
                     * @return FilterBy 是否已赋值
                     * 
                     */
                    bool FilterByHasBeenSet() const;

                    /**
                     * 获取<p>单次查询数量[0,200]</p>
                     * @return Limit <p>单次查询数量[0,200]</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>单次查询数量[0,200]</p>
                     * @param _limit <p>单次查询数量[0,200]</p>
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
                     * 获取<p>本次查询偏移[0,INF]</p>
                     * @return Offset <p>本次查询偏移[0,INF]</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>本次查询偏移[0,INF]</p>
                     * @param _offset <p>本次查询偏移[0,INF]</p>
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
                     * 获取<p>StartTime,EndTime,ExpiredTime,BackupSetId,BackupDuration</p>
                     * @return OrderBy <p>StartTime,EndTime,ExpiredTime,BackupSetId,BackupDuration</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>StartTime,EndTime,ExpiredTime,BackupSetId,BackupDuration</p>
                     * @param _orderBy <p>StartTime,EndTime,ExpiredTime,BackupSetId,BackupDuration</p>
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
                     * 获取<p>ASC,DESC</p>
                     * @return OrderType <p>ASC,DESC</p>
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置<p>ASC,DESC</p>
                     * @param _orderType <p>ASC,DESC</p>
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取<p>开始时间</p>
                     * @return StartTime <p>开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _startTime <p>开始时间</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例备份集ID</p>
                     */
                    int64_t m_backupSetId;
                    bool m_backupSetIdHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>过滤条件</p>
                     */
                    BackupSetsReqFilter m_filterBy;
                    bool m_filterByHasBeenSet;

                    /**
                     * <p>单次查询数量[0,200]</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>本次查询偏移[0,INF]</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>StartTime,EndTime,ExpiredTime,BackupSetId,BackupDuration</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>ASC,DESC</p>
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBSBACKUPSETSREQUEST_H_
