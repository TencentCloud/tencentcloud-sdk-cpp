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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBETAGLISTREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBETAGLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeTagList请求参数结构体
                */
                class DescribeTagListRequest : public AbstractModel
                {
                public:
                    DescribeTagListRequest();
                    ~DescribeTagListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数量，最大值为1000
                     * @return Limit 数量，最大值为1000
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置数量，最大值为1000
                     * @param _limit 数量，最大值为1000
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
                     * 获取分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，依次类推
                     * @return Offset 分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，依次类推
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，依次类推
                     * @param _offset 分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，依次类推
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
                     * 获取分账标签键，用作模糊搜索
                     * @return TagKey 分账标签键，用作模糊搜索
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置分账标签键，用作模糊搜索
                     * @param _tagKey 分账标签键，用作模糊搜索
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取标签类型，枚举值：0普通标签，1分账标签，用作筛选，不传获取全部标签键
                     * @return Status 标签类型，枚举值：0普通标签，1分账标签，用作筛选，不传获取全部标签键
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置标签类型，枚举值：0普通标签，1分账标签，用作筛选，不传获取全部标签键
                     * @param _status 标签类型，枚举值：0普通标签，1分账标签，用作筛选，不传获取全部标签键
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取排序方式，枚举值：asc排升序，desc排降序
                     * @return OrderType 排序方式，枚举值：asc排升序，desc排降序
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置排序方式，枚举值：asc排升序，desc排降序
                     * @param _orderType 排序方式，枚举值：asc排升序，desc排降序
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                private:

                    /**
                     * 数量，最大值为1000
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，依次类推
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分账标签键，用作模糊搜索
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * 标签类型，枚举值：0普通标签，1分账标签，用作筛选，不传获取全部标签键
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 排序方式，枚举值：asc排升序，desc排降序
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBETAGLISTREQUEST_H_
