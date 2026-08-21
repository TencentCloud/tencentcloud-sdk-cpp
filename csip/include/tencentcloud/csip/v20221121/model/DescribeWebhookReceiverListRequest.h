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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEWEBHOOKRECEIVERLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEWEBHOOKRECEIVERLISTREQUEST_H_

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
                * DescribeWebhookReceiverList请求参数结构体
                */
                class DescribeWebhookReceiverListRequest : public AbstractModel
                {
                public:
                    DescribeWebhookReceiverListRequest();
                    ~DescribeWebhookReceiverListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页偏移量
取值范围：[0, +∞)
默认值：0
                     * @return Offset 分页偏移量
取值范围：[0, +∞)
默认值：0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量
取值范围：[0, +∞)
默认值：0
                     * @param _offset 分页偏移量
取值范围：[0, +∞)
默认值：0
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
                     * 获取每页返回数量
取值范围：[1, 200]
默认值：20
                     * @return Limit 每页返回数量
取值范围：[1, 200]
默认值：20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页返回数量
取值范围：[1, 200]
默认值：20
                     * @param _limit 每页返回数量
取值范围：[1, 200]
默认值：20
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
                     * 获取过滤条件
支持的过滤项：
Name：按机器人名称模糊搜索
Type：机器人类型，可选值：WEBHOOK（webhook） / SCF（云函数）
                     * @return Filters 过滤条件
支持的过滤项：
Name：按机器人名称模糊搜索
Type：机器人类型，可选值：WEBHOOK（webhook） / SCF（云函数）
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤条件
支持的过滤项：
Name：按机器人名称模糊搜索
Type：机器人类型，可选值：WEBHOOK（webhook） / SCF（云函数）
                     * @param _filters 过滤条件
支持的过滤项：
Name：按机器人名称模糊搜索
Type：机器人类型，可选值：WEBHOOK（webhook） / SCF（云函数）
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序字段
枚举值：
InsertTime：创建时间
UpdateTime：更新时间
默认值：UpdateTime
                     * @return Order 排序字段
枚举值：
InsertTime：创建时间
UpdateTime：更新时间
默认值：UpdateTime
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序字段
枚举值：
InsertTime：创建时间
UpdateTime：更新时间
默认值：UpdateTime
                     * @param _order 排序字段
枚举值：
InsertTime：创建时间
UpdateTime：更新时间
默认值：UpdateTime
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
                     * 获取排序方式
枚举值：
asc：升序
desc：降序
默认值：desc
                     * @return By 排序方式
枚举值：
asc：升序
desc：降序
默认值：desc
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序方式
枚举值：
asc：升序
desc：降序
默认值：desc
                     * @param _by 排序方式
枚举值：
asc：升序
desc：降序
默认值：desc
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * 分页偏移量
取值范围：[0, +∞)
默认值：0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页返回数量
取值范围：[1, 200]
默认值：20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件
支持的过滤项：
Name：按机器人名称模糊搜索
Type：机器人类型，可选值：WEBHOOK（webhook） / SCF（云函数）
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段
枚举值：
InsertTime：创建时间
UpdateTime：更新时间
默认值：UpdateTime
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序方式
枚举值：
asc：升序
desc：降序
默认值：desc
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEWEBHOOKRECEIVERLISTREQUEST_H_
