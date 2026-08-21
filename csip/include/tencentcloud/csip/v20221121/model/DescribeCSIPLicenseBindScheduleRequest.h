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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSIPLICENSEBINDSCHEDULEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSIPLICENSEBINDSCHEDULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/LicenseBindFilter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCSIPLicenseBindSchedule请求参数结构体
                */
                class DescribeCSIPLicenseBindScheduleRequest : public AbstractModel
                {
                public:
                    DescribeCSIPLicenseBindScheduleRequest();
                    ~DescribeCSIPLicenseBindScheduleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ModifyCSIPLicenseBinds返回的任务ID</p>
                     * @return TaskId <p>ModifyCSIPLicenseBinds返回的任务ID</p>
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置<p>ModifyCSIPLicenseBinds返回的任务ID</p>
                     * @param _taskId <p>ModifyCSIPLicenseBinds返回的任务ID</p>
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
                     * 获取<p>分页大小，默认10</p>
                     * @return Limit <p>分页大小，默认10</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页大小，默认10</p>
                     * @param _limit <p>分页大小，默认10</p>
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
                     * 获取<p>分页偏移</p>
                     * @return Offset <p>分页偏移</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移</p>
                     * @param _offset <p>分页偏移</p>
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
                     * 获取<p>过滤条件，支持按 Status 过滤（0-初始化 1-成功 2-失败 3-跳过）</p>
                     * @return Filters <p>过滤条件，支持按 Status 过滤（0-初始化 1-成功 2-失败 3-跳过）</p>
                     * 
                     */
                    std::vector<LicenseBindFilter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件，支持按 Status 过滤（0-初始化 1-成功 2-失败 3-跳过）</p>
                     * @param _filters <p>过滤条件，支持按 Status 过滤（0-初始化 1-成功 2-失败 3-跳过）</p>
                     * 
                     */
                    void SetFilters(const std::vector<LicenseBindFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>ModifyCSIPLicenseBinds返回的任务ID</p>
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>分页大小，默认10</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>过滤条件，支持按 Status 过滤（0-初始化 1-成功 2-失败 3-跳过）</p>
                     */
                    std::vector<LicenseBindFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSIPLICENSEBINDSCHEDULEREQUEST_H_
