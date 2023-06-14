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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGENODESREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGENODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/Sort.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeEdgeNodes请求参数结构体
                */
                class DescribeEdgeNodesRequest : public AbstractModel
                {
                public:
                    DescribeEdgeNodesRequest();
                    ~DescribeEdgeNodesRequest() = default;
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
                     * 获取边缘节点名称模糊搜索串
                     * @return NamePattern 边缘节点名称模糊搜索串
                     * 
                     */
                    std::string GetNamePattern() const;

                    /**
                     * 设置边缘节点名称模糊搜索串
                     * @param _namePattern 边缘节点名称模糊搜索串
                     * 
                     */
                    void SetNamePattern(const std::string& _namePattern);

                    /**
                     * 判断参数 NamePattern 是否已赋值
                     * @return NamePattern 是否已赋值
                     * 
                     */
                    bool NamePatternHasBeenSet() const;

                    /**
                     * 获取边缘节点名称列表，支持批量查询 ，优先于模糊查询
                     * @return NameMatchedList 边缘节点名称列表，支持批量查询 ，优先于模糊查询
                     * 
                     */
                    std::vector<std::string> GetNameMatchedList() const;

                    /**
                     * 设置边缘节点名称列表，支持批量查询 ，优先于模糊查询
                     * @param _nameMatchedList 边缘节点名称列表，支持批量查询 ，优先于模糊查询
                     * 
                     */
                    void SetNameMatchedList(const std::vector<std::string>& _nameMatchedList);

                    /**
                     * 判断参数 NameMatchedList 是否已赋值
                     * @return NameMatchedList 是否已赋值
                     * 
                     */
                    bool NameMatchedListHasBeenSet() const;

                    /**
                     * 获取排序信息列表
                     * @return Sort 排序信息列表
                     * 
                     */
                    std::vector<Sort> GetSort() const;

                    /**
                     * 设置排序信息列表
                     * @param _sort 排序信息列表
                     * 
                     */
                    void SetSort(const std::vector<Sort>& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取页面大小Limit
                     * @return Limit 页面大小Limit
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置页面大小Limit
                     * @param _limit 页面大小Limit
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
                     * 获取节点类型
                     * @return NodeType 节点类型
                     * 
                     */
                    int64_t GetNodeType() const;

                    /**
                     * 设置节点类型
                     * @param _nodeType 节点类型
                     * 
                     */
                    void SetNodeType(const int64_t& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                private:

                    /**
                     * IECP边缘单元ID
                     */
                    uint64_t m_edgeUnitId;
                    bool m_edgeUnitIdHasBeenSet;

                    /**
                     * 边缘节点名称模糊搜索串
                     */
                    std::string m_namePattern;
                    bool m_namePatternHasBeenSet;

                    /**
                     * 边缘节点名称列表，支持批量查询 ，优先于模糊查询
                     */
                    std::vector<std::string> m_nameMatchedList;
                    bool m_nameMatchedListHasBeenSet;

                    /**
                     * 排序信息列表
                     */
                    std::vector<Sort> m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 页面大小Limit
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 节点类型
                     */
                    int64_t m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGENODESREQUEST_H_
