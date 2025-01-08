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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCJOBSREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/TagFilter.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeSyncJobs请求参数结构体
                */
                class DescribeSyncJobsRequest : public AbstractModel
                {
                public:
                    DescribeSyncJobsRequest();
                    ~DescribeSyncJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取同步任务id，如sync-werwfs23
                     * @return JobId 同步任务id，如sync-werwfs23
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置同步任务id，如sync-werwfs23
                     * @param _jobId 同步任务id，如sync-werwfs23
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取同步任务id列表，如sync-werwfs23
                     * @return JobIds 同步任务id列表，如sync-werwfs23
                     * 
                     */
                    std::vector<std::string> GetJobIds() const;

                    /**
                     * 设置同步任务id列表，如sync-werwfs23
                     * @param _jobIds 同步任务id列表，如sync-werwfs23
                     * 
                     */
                    void SetJobIds(const std::vector<std::string>& _jobIds);

                    /**
                     * 判断参数 JobIds 是否已赋值
                     * @return JobIds 是否已赋值
                     * 
                     */
                    bool JobIdsHasBeenSet() const;

                    /**
                     * 获取同步任务名
                     * @return JobName 同步任务名
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置同步任务名
                     * @param _jobName 同步任务名
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取排序字段，可以取值为CreateTime
                     * @return Order 排序字段，可以取值为CreateTime
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序字段，可以取值为CreateTime
                     * @param _order 排序字段，可以取值为CreateTime
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取排序方式，升序为ASC，降序为DESC，默认为CreateTime降序
                     * @return OrderSeq 排序方式，升序为ASC，降序为DESC，默认为CreateTime降序
                     * 
                     */
                    std::string GetOrderSeq() const;

                    /**
                     * 设置排序方式，升序为ASC，降序为DESC，默认为CreateTime降序
                     * @param _orderSeq 排序方式，升序为ASC，降序为DESC，默认为CreateTime降序
                     * 
                     */
                    void SetOrderSeq(const std::string& _orderSeq);

                    /**
                     * 判断参数 OrderSeq 是否已赋值
                     * @return OrderSeq 是否已赋值
                     * 
                     */
                    bool OrderSeqHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回同步任务实例数量，默认20，有效区间[1,100]
                     * @return Limit 返回同步任务实例数量，默认20，有效区间[1,100]
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回同步任务实例数量，默认20，有效区间[1,100]
                     * @param _limit 返回同步任务实例数量，默认20，有效区间[1,100]
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取状态集合，如Initialized,CheckPass,Running,ResumableErr,Stopped
                     * @return Status 状态集合，如Initialized,CheckPass,Running,ResumableErr,Stopped
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置状态集合，如Initialized,CheckPass,Running,ResumableErr,Stopped
                     * @param _status 状态集合，如Initialized,CheckPass,Running,ResumableErr,Stopped
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取运行模式，如Immediate:立即运行，Timed:定时运行
                     * @return RunMode 运行模式，如Immediate:立即运行，Timed:定时运行
                     * 
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置运行模式，如Immediate:立即运行，Timed:定时运行
                     * @param _runMode 运行模式，如Immediate:立即运行，Timed:定时运行
                     * 
                     */
                    void SetRunMode(const std::string& _runMode);

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     * 
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取任务类型，如mysql2mysql：msyql同步到mysql
                     * @return JobType 任务类型，如mysql2mysql：msyql同步到mysql
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置任务类型，如mysql2mysql：msyql同步到mysql
                     * @param _jobType 任务类型，如mysql2mysql：msyql同步到mysql
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取付费类型，PrePay：预付费，PostPay：后付费
                     * @return PayMode 付费类型，PrePay：预付费，PostPay：后付费
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置付费类型，PrePay：预付费，PostPay：后付费
                     * @param _payMode 付费类型，PrePay：预付费，PostPay：后付费
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取tag
                     * @return TagFilters tag
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置tag
                     * @param _tagFilters tag
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                    /**
                     * 获取源端数据库连接信息，可以输入实例ID或者IP等
                     * @return SrcInfoPattern 源端数据库连接信息，可以输入实例ID或者IP等
                     * 
                     */
                    std::string GetSrcInfoPattern() const;

                    /**
                     * 设置源端数据库连接信息，可以输入实例ID或者IP等
                     * @param _srcInfoPattern 源端数据库连接信息，可以输入实例ID或者IP等
                     * 
                     */
                    void SetSrcInfoPattern(const std::string& _srcInfoPattern);

                    /**
                     * 判断参数 SrcInfoPattern 是否已赋值
                     * @return SrcInfoPattern 是否已赋值
                     * 
                     */
                    bool SrcInfoPatternHasBeenSet() const;

                    /**
                     * 获取目标端数据库连接信息，可以输入实例ID或者IP等
                     * @return DstInfoPattern 目标端数据库连接信息，可以输入实例ID或者IP等
                     * 
                     */
                    std::string GetDstInfoPattern() const;

                    /**
                     * 设置目标端数据库连接信息，可以输入实例ID或者IP等
                     * @param _dstInfoPattern 目标端数据库连接信息，可以输入实例ID或者IP等
                     * 
                     */
                    void SetDstInfoPattern(const std::string& _dstInfoPattern);

                    /**
                     * 判断参数 DstInfoPattern 是否已赋值
                     * @return DstInfoPattern 是否已赋值
                     * 
                     */
                    bool DstInfoPatternHasBeenSet() const;

                private:

                    /**
                     * 同步任务id，如sync-werwfs23
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 同步任务id列表，如sync-werwfs23
                     */
                    std::vector<std::string> m_jobIds;
                    bool m_jobIdsHasBeenSet;

                    /**
                     * 同步任务名
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 排序字段，可以取值为CreateTime
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序方式，升序为ASC，降序为DESC，默认为CreateTime降序
                     */
                    std::string m_orderSeq;
                    bool m_orderSeqHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回同步任务实例数量，默认20，有效区间[1,100]
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 状态集合，如Initialized,CheckPass,Running,ResumableErr,Stopped
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 运行模式，如Immediate:立即运行，Timed:定时运行
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * 任务类型，如mysql2mysql：msyql同步到mysql
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 付费类型，PrePay：预付费，PostPay：后付费
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * tag
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * 源端数据库连接信息，可以输入实例ID或者IP等
                     */
                    std::string m_srcInfoPattern;
                    bool m_srcInfoPatternHasBeenSet;

                    /**
                     * 目标端数据库连接信息，可以输入实例ID或者IP等
                     */
                    std::string m_dstInfoPattern;
                    bool m_dstInfoPatternHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCJOBSREQUEST_H_
