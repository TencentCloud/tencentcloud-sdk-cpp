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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPLICENSEBINDSCHEDULEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPLICENSEBINDSCHEDULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCWPLicenseBindSchedule请求参数结构体
                */
                class DescribeCWPLicenseBindScheduleRequest : public AbstractModel
                {
                public:
                    DescribeCWPLicenseBindScheduleRequest();
                    ~DescribeCWPLicenseBindScheduleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务ID</p>
                     * @return TaskId <p>任务ID</p>
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置<p>任务ID</p>
                     * @param _taskId <p>任务ID</p>
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>限制条数,默认10.</p>
                     * @return Limit <p>限制条数,默认10.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>限制条数,默认10.</p>
                     * @param _limit <p>限制条数,默认10.</p>
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
                     * 获取<p>偏移量,默认0</p>
                     * @return Offset <p>偏移量,默认0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量,默认0</p>
                     * @param _offset <p>偏移量,默认0</p>
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
                     * 获取<p>过滤参数<br>Status 绑定进度状态 0 进行中 1 已完成 2 失败</p>
                     * @return Filters <p>过滤参数<br>Status 绑定进度状态 0 进行中 1 已完成 2 失败</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>过滤参数<br>Status 绑定进度状态 0 进行中 1 已完成 2 失败</p>
                     * @param _filters <p>过滤参数<br>Status 绑定进度状态 0 进行中 1 已完成 2 失败</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p>
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>限制条数,默认10.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量,默认0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>过滤参数<br>Status 绑定进度状态 0 进行中 1 已完成 2 失败</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPLICENSEBINDSCHEDULEREQUEST_H_
