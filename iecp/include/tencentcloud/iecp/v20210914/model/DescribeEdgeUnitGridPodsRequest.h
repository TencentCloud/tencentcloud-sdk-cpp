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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITGRIDPODSREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITGRIDPODSREQUEST_H_

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
                * DescribeEdgeUnitGridPods请求参数结构体
                */
                class DescribeEdgeUnitGridPodsRequest : public AbstractModel
                {
                public:
                    DescribeEdgeUnitGridPodsRequest();
                    ~DescribeEdgeUnitGridPodsRequest() = default;
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
                     * 获取Grid名称
                     * @return GridName Grid名称
                     * 
                     */
                    std::string GetGridName() const;

                    /**
                     * 设置Grid名称
                     * @param _gridName Grid名称
                     * 
                     */
                    void SetGridName(const std::string& _gridName);

                    /**
                     * 判断参数 GridName 是否已赋值
                     * @return GridName 是否已赋值
                     * 
                     */
                    bool GridNameHasBeenSet() const;

                    /**
                     * 获取负载类型（StatefulSetGrid｜DeploymentGrid）
                     * @return WorkloadKind 负载类型（StatefulSetGrid｜DeploymentGrid）
                     * 
                     */
                    std::string GetWorkloadKind() const;

                    /**
                     * 设置负载类型（StatefulSetGrid｜DeploymentGrid）
                     * @param _workloadKind 负载类型（StatefulSetGrid｜DeploymentGrid）
                     * 
                     */
                    void SetWorkloadKind(const std::string& _workloadKind);

                    /**
                     * 判断参数 WorkloadKind 是否已赋值
                     * @return WorkloadKind 是否已赋值
                     * 
                     */
                    bool WorkloadKindHasBeenSet() const;

                    /**
                     * 获取NodeUnit名
                     * @return NodeUnit NodeUnit名
                     * 
                     */
                    std::string GetNodeUnit() const;

                    /**
                     * 设置NodeUnit名
                     * @param _nodeUnit NodeUnit名
                     * 
                     */
                    void SetNodeUnit(const std::string& _nodeUnit);

                    /**
                     * 判断参数 NodeUnit 是否已赋值
                     * @return NodeUnit 是否已赋值
                     * 
                     */
                    bool NodeUnitHasBeenSet() const;

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

                private:

                    /**
                     * IECP边缘单元ID
                     */
                    uint64_t m_edgeUnitId;
                    bool m_edgeUnitIdHasBeenSet;

                    /**
                     * Grid名称
                     */
                    std::string m_gridName;
                    bool m_gridNameHasBeenSet;

                    /**
                     * 负载类型（StatefulSetGrid｜DeploymentGrid）
                     */
                    std::string m_workloadKind;
                    bool m_workloadKindHasBeenSet;

                    /**
                     * NodeUnit名
                     */
                    std::string m_nodeUnit;
                    bool m_nodeUnitHasBeenSet;

                    /**
                     * 命名空间，默认default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITGRIDPODSREQUEST_H_
