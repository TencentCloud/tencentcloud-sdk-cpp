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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBATCHCUSTOMRULELISTREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBATCHCUSTOMRULELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/FiltersItemNew.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeBatchCustomRuleList请求参数结构体
                */
                class DescribeBatchCustomRuleListRequest : public AbstractModel
                {
                public:
                    DescribeBatchCustomRuleListRequest();
                    ~DescribeBatchCustomRuleListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取页尺寸

                     * @return Limit 页尺寸

                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置页尺寸

                     * @param _limit 页尺寸

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
"update_time"-更新时间、"expire_time"-过期时间、"sort_id"-优先级、"id"-规则Id、"create_time"-创建时间
                     * @return By 排序字段
"update_time"-更新时间、"expire_time"-过期时间、"sort_id"-优先级、"id"-规则Id、"create_time"-创建时间
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段
"update_time"-更新时间、"expire_time"-过期时间、"sort_id"-优先级、"id"-规则Id、"create_time"-创建时间
                     * @param _by 排序字段
"update_time"-更新时间、"expire_time"-过期时间、"sort_id"-优先级、"id"-规则Id、"create_time"-创建时间
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
                     * 获取排序类型
desc-降序、asc-升序
                     * @return Order 排序类型
desc-降序、asc-升序
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序类型
desc-降序、asc-升序
                     * @param _order 排序类型
desc-降序、asc-升序
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
                     * 获取数据类型 "custom-rule"-自定义规则、"custom-white-rule"-精准白名单
                     * @return DataType 数据类型 "custom-rule"-自定义规则、"custom-white-rule"-精准白名单
                     * 
                     */
                    std::string GetDataType() const;

                    /**
                     * 设置数据类型 "custom-rule"-自定义规则、"custom-white-rule"-精准白名单
                     * @param _dataType 数据类型 "custom-rule"-自定义规则、"custom-white-rule"-精准白名单
                     * 
                     */
                    void SetDataType(const std::string& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     * 
                     */
                    bool DataTypeHasBeenSet() const;

                    /**
                     * 获取筛选列表
                     * @return Filters 筛选列表
                     * 
                     */
                    std::vector<FiltersItemNew> GetFilters() const;

                    /**
                     * 设置筛选列表
                     * @param _filters 筛选列表
                     * 
                     */
                    void SetFilters(const std::vector<FiltersItemNew>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 页尺寸

                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段
"update_time"-更新时间、"expire_time"-过期时间、"sort_id"-优先级、"id"-规则Id、"create_time"-创建时间
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 排序类型
desc-降序、asc-升序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 数据类型 "custom-rule"-自定义规则、"custom-white-rule"-精准白名单
                     */
                    std::string m_dataType;
                    bool m_dataTypeHasBeenSet;

                    /**
                     * 筛选列表
                     */
                    std::vector<FiltersItemNew> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBATCHCUSTOMRULELISTREQUEST_H_
