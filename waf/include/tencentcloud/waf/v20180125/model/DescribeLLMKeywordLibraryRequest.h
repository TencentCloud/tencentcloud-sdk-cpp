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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMKEYWORDLIBRARYREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMKEYWORDLIBRARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeLLMKeywordLibrary请求参数结构体
                */
                class DescribeLLMKeywordLibraryRequest : public AbstractModel
                {
                public:
                    DescribeLLMKeywordLibraryRequest();
                    ~DescribeLLMKeywordLibraryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取词库类型筛选
枚举值：
custom：自定义黑库
builtin：内置词库
all：全部词库
white：自定义白库
                     * @return Type 词库类型筛选
枚举值：
custom：自定义黑库
builtin：内置词库
all：全部词库
white：自定义白库
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置词库类型筛选
枚举值：
custom：自定义黑库
builtin：内置词库
all：全部词库
white：自定义白库
                     * @param _type 词库类型筛选
枚举值：
custom：自定义黑库
builtin：内置词库
all：全部词库
white：自定义白库
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

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
取值范围：[1, 1000]
默认值：10
                     * @return Limit 每页返回数量
取值范围：[1, 1000]
默认值：10
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页返回数量
取值范围：[1, 1000]
默认值：10
                     * @param _limit 每页返回数量
取值范围：[1, 1000]
默认值：10
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
                     * 获取排序字段
枚举值：
UpdateTime：按更新时间排序
CreateTime：按创建时间排序
Name：按名称排序
默认值：UpdateTime
                     * @return By 排序字段
枚举值：
UpdateTime：按更新时间排序
CreateTime：按创建时间排序
Name：按名称排序
默认值：UpdateTime
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段
枚举值：
UpdateTime：按更新时间排序
CreateTime：按创建时间排序
Name：按名称排序
默认值：UpdateTime
                     * @param _by 排序字段
枚举值：
UpdateTime：按更新时间排序
CreateTime：按创建时间排序
Name：按名称排序
默认值：UpdateTime
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取排序方向
枚举值：
ASC：升序
DESC：降序
默认值：DESC
                     * @return Order 排序方向
枚举值：
ASC：升序
DESC：降序
默认值：DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方向
枚举值：
ASC：升序
DESC：降序
默认值：DESC
                     * @param _order 排序方向
枚举值：
ASC：升序
DESC：降序
默认值：DESC
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 词库类型筛选
枚举值：
custom：自定义黑库
builtin：内置词库
all：全部词库
white：自定义白库
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 分页偏移量
取值范围：[0, +∞)
默认值：0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页返回数量
取值范围：[1, 1000]
默认值：10
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段
枚举值：
UpdateTime：按更新时间排序
CreateTime：按创建时间排序
Name：按名称排序
默认值：UpdateTime
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 排序方向
枚举值：
ASC：升序
DESC：降序
默认值：DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMKEYWORDLIBRARYREQUEST_H_
