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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULDEFENCESETTINGLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULDEFENCESETTINGLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulDefenceSettingList请求参数结构体
                */
                class DescribeVulDefenceSettingListRequest : public AbstractModel
                {
                public:
                    DescribeVulDefenceSettingListRequest();
                    ~DescribeVulDefenceSettingListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件：Switch、Keywords
                     * @return Filters 过滤条件：Switch、Keywords
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件：Switch、Keywords
                     * @param _filters 过滤条件：Switch、Keywords
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
                     * 获取数据偏移
                     * @return Offset 数据偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置数据偏移
                     * @param _offset 数据偏移
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
                     * 获取数据限制
                     * @return Limit 数据限制
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置数据限制
                     * @param _limit 数据限制
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
                     * 过滤条件：Switch、Keywords
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 数据偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 数据限制
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULDEFENCESETTINGLISTREQUEST_H_
