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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEWORKORDERLISTREQUEST_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEWORKORDERLISTREQUEST_H_

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
                * DescribeWorkOrderList请求参数结构体
                */
                class DescribeWorkOrderListRequest : public AbstractModel
                {
                public:
                    DescribeWorkOrderListRequest();
                    ~DescribeWorkOrderListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件。支持：service-type、order-type、order-status、order-id
                     * @return Filters 过滤条件。支持：service-type、order-type、order-status、order-id
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。支持：service-type、order-type、order-status、order-id
                     * @param _filters 过滤条件。支持：service-type、order-type、order-status、order-id
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
                     * 获取通过sn过滤工单，上限10个
                     * @return SnList 通过sn过滤工单，上限10个
                     * 
                     */
                    std::vector<std::string> GetSnList() const;

                    /**
                     * 设置通过sn过滤工单，上限10个
                     * @param _snList 通过sn过滤工单，上限10个
                     * 
                     */
                    void SetSnList(const std::vector<std::string>& _snList);

                    /**
                     * 判断参数 SnList 是否已赋值
                     * @return SnList 是否已赋值
                     * 
                     */
                    bool SnListHasBeenSet() const;

                    /**
                     * 获取起始
                     * @return Offset 起始
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置起始
                     * @param _offset 起始
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
                     * 获取长度
                     * @return Limit 长度
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置长度
                     * @param _limit 长度
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
                     * 过滤条件。支持：service-type、order-type、order-status、order-id
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 通过sn过滤工单，上限10个
                     */
                    std::vector<std::string> m_snList;
                    bool m_snListHasBeenSet;

                    /**
                     * 起始
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 长度
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEWORKORDERLISTREQUEST_H_
