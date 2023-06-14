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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBENODEUNITTEMPLATEONNODEGROUPREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBENODEUNITTEMPLATEONNODEGROUPREQUEST_H_

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
                * DescribeNodeUnitTemplateOnNodeGroup请求参数结构体
                */
                class DescribeNodeUnitTemplateOnNodeGroupRequest : public AbstractModel
                {
                public:
                    DescribeNodeUnitTemplateOnNodeGroupRequest();
                    ~DescribeNodeUnitTemplateOnNodeGroupRequest() = default;
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
                     * 获取NodeGroup名称
                     * @return NodeGroupName NodeGroup名称
                     * 
                     */
                    std::string GetNodeGroupName() const;

                    /**
                     * 设置NodeGroup名称
                     * @param _nodeGroupName NodeGroup名称
                     * 
                     */
                    void SetNodeGroupName(const std::string& _nodeGroupName);

                    /**
                     * 判断参数 NodeGroupName 是否已赋值
                     * @return NodeGroupName 是否已赋值
                     * 
                     */
                    bool NodeGroupNameHasBeenSet() const;

                    /**
                     * 获取命名空间，默认default
                     * @return Namespace 命名空间，默认default
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间，默认default
                     * @param _namespace 命名空间，默认default
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
                     * 获取名称模糊匹配
                     * @return NodeUnitNamePattern 名称模糊匹配
                     * 
                     */
                    std::string GetNodeUnitNamePattern() const;

                    /**
                     * 设置名称模糊匹配
                     * @param _nodeUnitNamePattern 名称模糊匹配
                     * 
                     */
                    void SetNodeUnitNamePattern(const std::string& _nodeUnitNamePattern);

                    /**
                     * 判断参数 NodeUnitNamePattern 是否已赋值
                     * @return NodeUnitNamePattern 是否已赋值
                     * 
                     */
                    bool NodeUnitNamePatternHasBeenSet() const;

                    /**
                     * 获取分页查询offset，默认0
                     * @return Offset 分页查询offset，默认0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页查询offset，默认0
                     * @param _offset 分页查询offset，默认0
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
                     * 获取分页查询limit，默认20
                     * @return Limit 分页查询limit，默认20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页查询limit，默认20
                     * @param _limit 分页查询limit，默认20
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
                     * 获取排序，默认DESC
                     * @return Order 排序，默认DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序，默认DESC
                     * @param _order 排序，默认DESC
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
                     * NodeGroup名称
                     */
                    std::string m_nodeGroupName;
                    bool m_nodeGroupNameHasBeenSet;

                    /**
                     * 命名空间，默认default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 名称模糊匹配
                     */
                    std::string m_nodeUnitNamePattern;
                    bool m_nodeUnitNamePatternHasBeenSet;

                    /**
                     * 分页查询offset，默认0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询limit，默认20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序，默认DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBENODEUNITTEMPLATEONNODEGROUPREQUEST_H_
