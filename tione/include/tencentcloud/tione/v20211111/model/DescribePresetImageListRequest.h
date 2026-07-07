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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEPRESETIMAGELISTREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEPRESETIMAGELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Filter.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribePresetImageList请求参数结构体
                */
                class DescribePresetImageListRequest : public AbstractModel
                {
                public:
                    DescribePresetImageListRequest();
                    ~DescribePresetImageListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * @return TiProjectId <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * 
                     */
                    std::string GetTiProjectId() const;

                    /**
                     * 设置<p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * @param _tiProjectId <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * 
                     */
                    void SetTiProjectId(const std::string& _tiProjectId);

                    /**
                     * 判断参数 TiProjectId 是否已赋值
                     * @return TiProjectId 是否已赋值
                     * 
                     */
                    bool TiProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>业务过滤表达式</p>
                     * @return Filters <p>业务过滤表达式</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>业务过滤表达式</p>
                     * @param _filters <p>业务过滤表达式</p>
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
                     * 获取<p>分页排序</p>
                     * @return Offset <p>分页排序</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页排序</p>
                     * @param _offset <p>分页排序</p>
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
                     * 获取<p>单页大小</p>
                     * @return Limit <p>单页大小</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>单页大小</p>
                     * @param _limit <p>单页大小</p>
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
                     * 获取<p>排序字段</p>
                     * @return OrderField <p>排序字段</p>
                     * 
                     */
                    std::vector<std::string> GetOrderField() const;

                    /**
                     * 设置<p>排序字段</p>
                     * @param _orderField <p>排序字段</p>
                     * 
                     */
                    void SetOrderField(const std::vector<std::string>& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取<p>对应字段的排序方式</p>
                     * @return Order <p>对应字段的排序方式</p>
                     * 
                     */
                    std::vector<std::string> GetOrder() const;

                    /**
                     * 设置<p>对应字段的排序方式</p>
                     * @param _order <p>对应字段的排序方式</p>
                     * 
                     */
                    void SetOrder(const std::vector<std::string>& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     */
                    std::string m_tiProjectId;
                    bool m_tiProjectIdHasBeenSet;

                    /**
                     * <p>业务过滤表达式</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>分页排序</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>单页大小</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>排序字段</p>
                     */
                    std::vector<std::string> m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * <p>对应字段的排序方式</p>
                     */
                    std::vector<std::string> m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEPRESETIMAGELISTREQUEST_H_
