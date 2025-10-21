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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETGROUPLISTREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETGROUPLISTREQUEST_H_

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
                * DescribeTargetGroupList请求参数结构体
                */
                class DescribeTargetGroupListRequest : public AbstractModel
                {
                public:
                    DescribeTargetGroupListRequest();
                    ~DescribeTargetGroupListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标组ID数组。
                     * @return TargetGroupIds 目标组ID数组。
                     * 
                     */
                    std::vector<std::string> GetTargetGroupIds() const;

                    /**
                     * 设置目标组ID数组。
                     * @param _targetGroupIds 目标组ID数组。
                     * 
                     */
                    void SetTargetGroupIds(const std::vector<std::string>& _targetGroupIds);

                    /**
                     * 判断参数 TargetGroupIds 是否已赋值
                     * @return TargetGroupIds 是否已赋值
                     * 
                     */
                    bool TargetGroupIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件数组，支持TargetGroupVpcId和TargetGroupName。与TargetGroupIds互斥，优先使用目标组ID。
                     * @return Filters 过滤条件数组，支持TargetGroupVpcId和TargetGroupName。与TargetGroupIds互斥，优先使用目标组ID。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件数组，支持TargetGroupVpcId和TargetGroupName。与TargetGroupIds互斥，优先使用目标组ID。
                     * @param _filters 过滤条件数组，支持TargetGroupVpcId和TargetGroupName。与TargetGroupIds互斥，优先使用目标组ID。
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
                     * 获取显示的偏移起始量。
                     * @return Offset 显示的偏移起始量。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置显示的偏移起始量。
                     * @param _offset 显示的偏移起始量。
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
                     * 获取显示条数限制，默认为20。
                     * @return Limit 显示条数限制，默认为20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置显示条数限制，默认为20。
                     * @param _limit 显示条数限制，默认为20。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 目标组ID数组。
                     */
                    std::vector<std::string> m_targetGroupIds;
                    bool m_targetGroupIdsHasBeenSet;

                    /**
                     * 过滤条件数组，支持TargetGroupVpcId和TargetGroupName。与TargetGroupIds互斥，优先使用目标组ID。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 显示的偏移起始量。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 显示条数限制，默认为20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETGROUPLISTREQUEST_H_
