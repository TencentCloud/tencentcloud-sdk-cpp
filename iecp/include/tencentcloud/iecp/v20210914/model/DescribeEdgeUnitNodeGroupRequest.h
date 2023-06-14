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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITNODEGROUPREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITNODEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeEdgeUnitNodeGroup请求参数结构体
                */
                class DescribeEdgeUnitNodeGroupRequest : public AbstractModel
                {
                public:
                    DescribeEdgeUnitNodeGroupRequest();
                    ~DescribeEdgeUnitNodeGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IECP边缘单元ID
                     * @return EdgeUnitId IECP边缘单元ID
                     * 
                     */
                    uint64_t GetEdgeUnitId() const;

                    /**
                     * 设置IECP边缘单元ID
                     * @param _edgeUnitId IECP边缘单元ID
                     * 
                     */
                    void SetEdgeUnitId(const uint64_t& _edgeUnitId);

                    /**
                     * 判断参数 EdgeUnitId 是否已赋值
                     * @return EdgeUnitId 是否已赋值
                     * 
                     */
                    bool EdgeUnitIdHasBeenSet() const;

                    /**
                     * 获取命名空间，默认为default
                     * @return Namespace 命名空间，默认为default
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间，默认为default
                     * @param _namespace 命名空间，默认为default
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取分页offset，默认为0
                     * @return Offset 分页offset，默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页offset，默认为0
                     * @param _offset 分页offset，默认为0
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
                     * 获取分页limit，默认为20
                     * @return Limit 分页limit，默认为20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页limit，默认为20
                     * @param _limit 分页limit，默认为20
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
                     * 获取模糊匹配参数，精确匹配时失效
                     * @return NameFilter 模糊匹配参数，精确匹配时失效
                     * 
                     */
                    std::string GetNameFilter() const;

                    /**
                     * 设置模糊匹配参数，精确匹配时失效
                     * @param _nameFilter 模糊匹配参数，精确匹配时失效
                     * 
                     */
                    void SetNameFilter(const std::string& _nameFilter);

                    /**
                     * 判断参数 NameFilter 是否已赋值
                     * @return NameFilter 是否已赋值
                     * 
                     */
                    bool NameFilterHasBeenSet() const;

                    /**
                     * 获取精确匹配参数
                     * @return NameMatched 精确匹配参数
                     * 
                     */
                    std::string GetNameMatched() const;

                    /**
                     * 设置精确匹配参数
                     * @param _nameMatched 精确匹配参数
                     * 
                     */
                    void SetNameMatched(const std::string& _nameMatched);

                    /**
                     * 判断参数 NameMatched 是否已赋值
                     * @return NameMatched 是否已赋值
                     * 
                     */
                    bool NameMatchedHasBeenSet() const;

                    /**
                     * 获取按时间排序，ASC/DESC，默认为DESC
                     * @return Order 按时间排序，ASC/DESC，默认为DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置按时间排序，ASC/DESC，默认为DESC
                     * @param _order 按时间排序，ASC/DESC，默认为DESC
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
                     * IECP边缘单元ID
                     */
                    uint64_t m_edgeUnitId;
                    bool m_edgeUnitIdHasBeenSet;

                    /**
                     * 命名空间，默认为default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 分页offset，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页limit，默认为20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 模糊匹配参数，精确匹配时失效
                     */
                    std::string m_nameFilter;
                    bool m_nameFilterHasBeenSet;

                    /**
                     * 精确匹配参数
                     */
                    std::string m_nameMatched;
                    bool m_nameMatchedHasBeenSet;

                    /**
                     * 按时间排序，ASC/DESC，默认为DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITNODEGROUPREQUEST_H_
