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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEADDRESSTEMPLATELISTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEADDRESSTEMPLATELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeAddressTemplateList请求参数结构体
                */
                class DescribeAddressTemplateListRequest : public AbstractModel
                {
                public:
                    DescribeAddressTemplateListRequest();
                    ~DescribeAddressTemplateListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，分页用
                     * @return Offset 偏移量，分页用
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，分页用
                     * @param _offset 偏移量，分页用
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
                     * 获取条数，分页用
                     * @return Limit 条数，分页用
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置条数，分页用
                     * @param _limit 条数，分页用
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
                     * 获取排序字段，取值 'UpdateTime' | 'RulesNum'
                     * @return By 排序字段，取值 'UpdateTime' | 'RulesNum'
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段，取值 'UpdateTime' | 'RulesNum'
                     * @param _by 排序字段，取值 'UpdateTime' | 'RulesNum'
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
                     * 获取排序，取值 'asc'|'desc'
                     * @return Order 排序，取值 'asc'|'desc'
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序，取值 'asc'|'desc'
                     * @param _order 排序，取值 'asc'|'desc'
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
                     * 获取搜索值
                     * @return SearchValue 搜索值
                     * 
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置搜索值
                     * @param _searchValue 搜索值
                     * 
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     * 
                     */
                    bool SearchValueHasBeenSet() const;

                    /**
                     * 获取检索地址模板唯一id
                     * @return Uuid 检索地址模板唯一id
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置检索地址模板唯一id
                     * @param _uuid 检索地址模板唯一id
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                private:

                    /**
                     * 偏移量，分页用
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 条数，分页用
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段，取值 'UpdateTime' | 'RulesNum'
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 排序，取值 'asc'|'desc'
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 搜索值
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                    /**
                     * 检索地址模板唯一id
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEADDRESSTEMPLATELISTREQUEST_H_
