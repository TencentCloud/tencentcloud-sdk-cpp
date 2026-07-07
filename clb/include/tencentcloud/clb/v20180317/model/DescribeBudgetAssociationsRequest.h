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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEBUDGETASSOCIATIONSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEBUDGETASSOCIATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeBudgetAssociations请求参数结构体
                */
                class DescribeBudgetAssociationsRequest : public AbstractModel
                {
                public:
                    DescribeBudgetAssociationsRequest();
                    ~DescribeBudgetAssociationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Budget ID。</p><p>一次只允许查询一个Budget。</p>
                     * @return BudgetId <p>Budget ID。</p><p>一次只允许查询一个Budget。</p>
                     * 
                     */
                    std::string GetBudgetId() const;

                    /**
                     * 设置<p>Budget ID。</p><p>一次只允许查询一个Budget。</p>
                     * @param _budgetId <p>Budget ID。</p><p>一次只允许查询一个Budget。</p>
                     * 
                     */
                    void SetBudgetId(const std::string& _budgetId);

                    /**
                     * 判断参数 BudgetId 是否已赋值
                     * @return BudgetId 是否已赋值
                     * 
                     */
                    bool BudgetIdHasBeenSet() const;

                    /**
                     * 获取<p>本次查询限制的数量</p>
                     * @return Limit <p>本次查询限制的数量</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>本次查询限制的数量</p>
                     * @param _limit <p>本次查询限制的数量</p>
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
                     * 获取<p>本次查询偏移量</p>
                     * @return Offset <p>本次查询偏移量</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>本次查询偏移量</p>
                     * @param _offset <p>本次查询偏移量</p>
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
                     * 获取<p>资源类型。</p><p>枚举值：</p><ul><li>ModelRouter：模型路由实例</li><li>Key：模型路由Key</li></ul><p>不传时返回全部资源类型。</p>
                     * @return Type <p>资源类型。</p><p>枚举值：</p><ul><li>ModelRouter：模型路由实例</li><li>Key：模型路由Key</li></ul><p>不传时返回全部资源类型。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>资源类型。</p><p>枚举值：</p><ul><li>ModelRouter：模型路由实例</li><li>Key：模型路由Key</li></ul><p>不传时返回全部资源类型。</p>
                     * @param _type <p>资源类型。</p><p>枚举值：</p><ul><li>ModelRouter：模型路由实例</li><li>Key：模型路由Key</li></ul><p>不传时返回全部资源类型。</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>Budget ID。</p><p>一次只允许查询一个Budget。</p>
                     */
                    std::string m_budgetId;
                    bool m_budgetIdHasBeenSet;

                    /**
                     * <p>本次查询限制的数量</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>本次查询偏移量</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>资源类型。</p><p>枚举值：</p><ul><li>ModelRouter：模型路由实例</li><li>Key：模型路由Key</li></ul><p>不传时返回全部资源类型。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEBUDGETASSOCIATIONSREQUEST_H_
