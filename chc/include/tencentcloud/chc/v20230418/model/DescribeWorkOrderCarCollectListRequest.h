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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEWORKORDERCARCOLLECTLISTREQUEST_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEWORKORDERCARCOLLECTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/Filter.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeWorkOrderCarCollectList请求参数结构体
                */
                class DescribeWorkOrderCarCollectListRequest : public AbstractModel
                {
                public:
                    DescribeWorkOrderCarCollectListRequest();
                    ~DescribeWorkOrderCarCollectListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>过滤条件，支持 car-number（车牌号模糊匹配）、driver-name（驾驶员姓名模糊匹配）</p>
                     * @return Filters <p>过滤条件，支持 car-number（车牌号模糊匹配）、driver-name（驾驶员姓名模糊匹配）</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件，支持 car-number（车牌号模糊匹配）、driver-name（驾驶员姓名模糊匹配）</p>
                     * @param _filters <p>过滤条件，支持 car-number（车牌号模糊匹配）、driver-name（驾驶员姓名模糊匹配）</p>
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
                     * 获取<p>偏移量，默认为0</p>
                     * @return Offset <p>偏移量，默认为0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为0</p>
                     * @param _offset <p>偏移量，默认为0</p>
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
                     * 获取<p>返回数量，默认为20，最大值为100</p>
                     * @return Limit <p>返回数量，默认为20，最大值为100</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为20，最大值为100</p>
                     * @param _limit <p>返回数量，默认为20，最大值为100</p>
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
                     * <p>过滤条件，支持 car-number（车牌号模糊匹配）、driver-name（驾驶员姓名模糊匹配）</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>偏移量，默认为0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，默认为20，最大值为100</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEWORKORDERCARCOLLECTLISTREQUEST_H_
