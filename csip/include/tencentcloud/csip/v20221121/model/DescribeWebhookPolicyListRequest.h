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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEWEBHOOKPOLICYLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEWEBHOOKPOLICYLISTREQUEST_H_

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
                * DescribeWebhookPolicyList请求参数结构体
                */
                class DescribeWebhookPolicyListRequest : public AbstractModel
                {
                public:
                    DescribeWebhookPolicyListRequest();
                    ~DescribeWebhookPolicyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分页偏移量<br>取值范围：[0, +∞)<br>默认值：0</p>
                     * @return Offset <p>分页偏移量<br>取值范围：[0, +∞)<br>默认值：0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量<br>取值范围：[0, +∞)<br>默认值：0</p>
                     * @param _offset <p>分页偏移量<br>取值范围：[0, +∞)<br>默认值：0</p>
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
                     * 获取<p>每页返回数量<br>取值范围：[1, 200]<br>默认值：20</p>
                     * @return Limit <p>每页返回数量<br>取值范围：[1, 200]<br>默认值：20</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页返回数量<br>取值范围：[1, 200]<br>默认值：20</p>
                     * @param _limit <p>每页返回数量<br>取值范围：[1, 200]<br>默认值：20</p>
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
                     * 获取<p>过滤条件<br>支持的过滤项：<br>Name：按策略名称模糊搜索<br>Status：启用状态，可选值：ON / OFF<br>ReceiveFormat：接收格式，可选值：TEXT / JSON<br>Module：通知项模块，可选值：Vul / Alert / AkSk / Agent / LogAnalysis<br>ReceiverID：关联的接收机器人 ID</p>
                     * @return Filters <p>过滤条件<br>支持的过滤项：<br>Name：按策略名称模糊搜索<br>Status：启用状态，可选值：ON / OFF<br>ReceiveFormat：接收格式，可选值：TEXT / JSON<br>Module：通知项模块，可选值：Vul / Alert / AkSk / Agent / LogAnalysis<br>ReceiverID：关联的接收机器人 ID</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>过滤条件<br>支持的过滤项：<br>Name：按策略名称模糊搜索<br>Status：启用状态，可选值：ON / OFF<br>ReceiveFormat：接收格式，可选值：TEXT / JSON<br>Module：通知项模块，可选值：Vul / Alert / AkSk / Agent / LogAnalysis<br>ReceiverID：关联的接收机器人 ID</p>
                     * @param _filters <p>过滤条件<br>支持的过滤项：<br>Name：按策略名称模糊搜索<br>Status：启用状态，可选值：ON / OFF<br>ReceiveFormat：接收格式，可选值：TEXT / JSON<br>Module：通知项模块，可选值：Vul / Alert / AkSk / Agent / LogAnalysis<br>ReceiverID：关联的接收机器人 ID</p>
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
                     * 获取<p>排序字段<br>枚举值：<br>InsertTime：创建时间<br>UpdateTime：更新时间<br>默认值：UpdateTime</p>
                     * @return Order <p>排序字段<br>枚举值：<br>InsertTime：创建时间<br>UpdateTime：更新时间<br>默认值：UpdateTime</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序字段<br>枚举值：<br>InsertTime：创建时间<br>UpdateTime：更新时间<br>默认值：UpdateTime</p>
                     * @param _order <p>排序字段<br>枚举值：<br>InsertTime：创建时间<br>UpdateTime：更新时间<br>默认值：UpdateTime</p>
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
                     * 获取<p>排序方式<br>枚举值：<br>asc：升序<br>desc：降序<br>默认值：desc</p>
                     * @return By <p>排序方式<br>枚举值：<br>asc：升序<br>desc：降序<br>默认值：desc</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>排序方式<br>枚举值：<br>asc：升序<br>desc：降序<br>默认值：desc</p>
                     * @param _by <p>排序方式<br>枚举值：<br>asc：升序<br>desc：降序<br>默认值：desc</p>
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
                     * <p>分页偏移量<br>取值范围：[0, +∞)<br>默认值：0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页返回数量<br>取值范围：[1, 200]<br>默认值：20</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>过滤条件<br>支持的过滤项：<br>Name：按策略名称模糊搜索<br>Status：启用状态，可选值：ON / OFF<br>ReceiveFormat：接收格式，可选值：TEXT / JSON<br>Module：通知项模块，可选值：Vul / Alert / AkSk / Agent / LogAnalysis<br>ReceiverID：关联的接收机器人 ID</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>排序字段<br>枚举值：<br>InsertTime：创建时间<br>UpdateTime：更新时间<br>默认值：UpdateTime</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>排序方式<br>枚举值：<br>asc：升序<br>desc：降序<br>默认值：desc</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEWEBHOOKPOLICYLISTREQUEST_H_
