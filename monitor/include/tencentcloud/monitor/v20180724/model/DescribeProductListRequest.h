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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTLISTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeProductList请求参数结构体
                */
                class DescribeProductListRequest : public AbstractModel
                {
                public:
                    DescribeProductListRequest();
                    ~DescribeProductListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取固定传值monitor
                     * @return Module 固定传值monitor
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置固定传值monitor
                     * @param _module 固定传值monitor
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取排序方式：DESC/ASC（区分大小写），默认值DESC
                     * @return Order 排序方式：DESC/ASC（区分大小写），默认值DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式：DESC/ASC（区分大小写），默认值DESC
                     * @param _order 排序方式：DESC/ASC（区分大小写），默认值DESC
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
                     * 获取分页查询的偏移量，默认值0
                     * @return Offset 分页查询的偏移量，默认值0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页查询的偏移量，默认值0
                     * @param _offset 分页查询的偏移量，默认值0
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
                     * 获取分页查询的每页数据量，默认值20
                     * @return Limit 分页查询的每页数据量，默认值20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页查询的每页数据量，默认值20
                     * @param _limit 分页查询的每页数据量，默认值20
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
                     * 固定传值monitor
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 排序方式：DESC/ASC（区分大小写），默认值DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 分页查询的偏移量，默认值0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询的每页数据量，默认值20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTLISTREQUEST_H_
