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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETGROUPINSTANCESREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETGROUPINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Filter.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeTargetGroupInstances请求参数结构体
                */
                class DescribeTargetGroupInstancesRequest : public AbstractModel
                {
                public:
                    DescribeTargetGroupInstancesRequest();
                    ~DescribeTargetGroupInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件，当前支持按照 TargetGroupId，BindIP，InstanceId 多个条件组合过滤。
                     * @return Filters 过滤条件，当前支持按照 TargetGroupId，BindIP，InstanceId 多个条件组合过滤。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，当前支持按照 TargetGroupId，BindIP，InstanceId 多个条件组合过滤。
                     * @param _filters 过滤条件，当前支持按照 TargetGroupId，BindIP，InstanceId 多个条件组合过滤。
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取显示数量限制，默认20。
                     * @return Limit 显示数量限制，默认20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置显示数量限制，默认20。
                     * @param _limit 显示数量限制，默认20。
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
                     * 获取显示的偏移量，默认为0。
                     * @return Offset 显示的偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置显示的偏移量，默认为0。
                     * @param _offset 显示的偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 过滤条件，当前支持按照 TargetGroupId，BindIP，InstanceId 多个条件组合过滤。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 显示数量限制，默认20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 显示的偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETGROUPINSTANCESREQUEST_H_
