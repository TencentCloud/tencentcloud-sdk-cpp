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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBEMIGRATEJOBSREQUEST_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBEMIGRATEJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/TagFilter.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * DescribeMigrateJobs请求参数结构体
                */
                class DescribeMigrateJobsRequest : public AbstractModel
                {
                public:
                    DescribeMigrateJobsRequest();
                    ~DescribeMigrateJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据迁移任务ID
                     * @return JobId 数据迁移任务ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置数据迁移任务ID
                     * @param _jobId 数据迁移任务ID
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
                     * 获取数据迁移任务名称
                     * @return JobName 数据迁移任务名称
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置数据迁移任务名称
                     * @param _jobName 数据迁移任务名称
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
                     * 获取排序字段，可以取值为JobId、Status、JobName、MigrateType、RunMode、CreateTime
                     * @return Order 排序字段，可以取值为JobId、Status、JobName、MigrateType、RunMode、CreateTime
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序字段，可以取值为JobId、Status、JobName、MigrateType、RunMode、CreateTime
                     * @param _order 排序字段，可以取值为JobId、Status、JobName、MigrateType、RunMode、CreateTime
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
                     * 获取排序方式，升序为ASC，降序为DESC
                     * @return OrderSeq 排序方式，升序为ASC，降序为DESC
                     * 
                     */
                    std::string GetOrderSeq() const;

                    /**
                     * 设置排序方式，升序为ASC，降序为DESC
                     * @param _orderSeq 排序方式，升序为ASC，降序为DESC
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
                     * 获取返回实例数量，默认20，有效区间[1,100]
                     * @return Limit 返回实例数量，默认20，有效区间[1,100]
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回实例数量，默认20，有效区间[1,100]
                     * @param _limit 返回实例数量，默认20，有效区间[1,100]
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
                     * 获取标签过滤条件
                     * @return TagFilters 标签过滤条件
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置标签过滤条件
                     * @param _tagFilters 标签过滤条件
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                private:

                    /**
                     * 数据迁移任务ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 数据迁移任务名称
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 排序字段，可以取值为JobId、Status、JobName、MigrateType、RunMode、CreateTime
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序方式，升序为ASC，降序为DESC
                     */
                    std::string m_orderSeq;
                    bool m_orderSeqHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回实例数量，默认20，有效区间[1,100]
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 标签过滤条件
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBEMIGRATEJOBSREQUEST_H_
