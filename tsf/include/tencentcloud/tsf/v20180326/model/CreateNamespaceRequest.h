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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CREATENAMESPACEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CREATENAMESPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * CreateNamespace请求参数结构体
                */
                class CreateNamespaceRequest : public AbstractModel
                {
                public:
                    CreateNamespaceRequest();
                    ~CreateNamespaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取命名空间名称
                     * @return NamespaceName 命名空间名称
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间名称
                     * @param _namespaceName 命名空间名称
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取集群ID，按照【集群ID】进行过滤，可通过调用[DescribeClusters](https://cloud.tencent.com/document/product/649/85857)查询已创建的集群列表或登录控制台进行查看；也可以调用[CreateCluster](https://cloud.tencent.com/document/product/649/36049)创建新的集群。仅在集群下无部署组、命名空间、云主机时可以删除。
                     * @return ClusterId 集群ID，按照【集群ID】进行过滤，可通过调用[DescribeClusters](https://cloud.tencent.com/document/product/649/85857)查询已创建的集群列表或登录控制台进行查看；也可以调用[CreateCluster](https://cloud.tencent.com/document/product/649/36049)创建新的集群。仅在集群下无部署组、命名空间、云主机时可以删除。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID，按照【集群ID】进行过滤，可通过调用[DescribeClusters](https://cloud.tencent.com/document/product/649/85857)查询已创建的集群列表或登录控制台进行查看；也可以调用[CreateCluster](https://cloud.tencent.com/document/product/649/36049)创建新的集群。仅在集群下无部署组、命名空间、云主机时可以删除。
                     * @param _clusterId 集群ID，按照【集群ID】进行过滤，可通过调用[DescribeClusters](https://cloud.tencent.com/document/product/649/85857)查询已创建的集群列表或登录控制台进行查看；也可以调用[CreateCluster](https://cloud.tencent.com/document/product/649/36049)创建新的集群。仅在集群下无部署组、命名空间、云主机时可以删除。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取命名空间描述
                     * @return NamespaceDesc 命名空间描述
                     * 
                     */
                    std::string GetNamespaceDesc() const;

                    /**
                     * 设置命名空间描述
                     * @param _namespaceDesc 命名空间描述
                     * 
                     */
                    void SetNamespaceDesc(const std::string& _namespaceDesc);

                    /**
                     * 判断参数 NamespaceDesc 是否已赋值
                     * @return NamespaceDesc 是否已赋值
                     * 
                     */
                    bool NamespaceDescHasBeenSet() const;

                    /**
                     * 获取命名空间资源类型；DEF：表示默认资源类型；GW：表示网关资源类型
                     * @return NamespaceResourceType 命名空间资源类型；DEF：表示默认资源类型；GW：表示网关资源类型
                     * 
                     */
                    std::string GetNamespaceResourceType() const;

                    /**
                     * 设置命名空间资源类型；DEF：表示默认资源类型；GW：表示网关资源类型
                     * @param _namespaceResourceType 命名空间资源类型；DEF：表示默认资源类型；GW：表示网关资源类型
                     * 
                     */
                    void SetNamespaceResourceType(const std::string& _namespaceResourceType);

                    /**
                     * 判断参数 NamespaceResourceType 是否已赋值
                     * @return NamespaceResourceType 是否已赋值
                     * 
                     */
                    bool NamespaceResourceTypeHasBeenSet() const;

                    /**
                     * 获取命名空间类型；DEF 表示默认普通命名空间；GLOBAL 表示全局命名空间
                     * @return NamespaceType 命名空间类型；DEF 表示默认普通命名空间；GLOBAL 表示全局命名空间
                     * 
                     */
                    std::string GetNamespaceType() const;

                    /**
                     * 设置命名空间类型；DEF 表示默认普通命名空间；GLOBAL 表示全局命名空间
                     * @param _namespaceType 命名空间类型；DEF 表示默认普通命名空间；GLOBAL 表示全局命名空间
                     * 
                     */
                    void SetNamespaceType(const std::string& _namespaceType);

                    /**
                     * 判断参数 NamespaceType 是否已赋值
                     * @return NamespaceType 是否已赋值
                     * 
                     */
                    bool NamespaceTypeHasBeenSet() const;

                    /**
                     * 获取命名空间ID，按照【命名空间ID】进行过滤，可通过调用[DescribeNamespaces](https://cloud.tencent.com/document/product/649/36096)查询已创建的命名空间列表或登录控制台进行查看；也可以调用[CreateNamespace](https://cloud.tencent.com/document/product/649/36098)创建新命名空间。
                     * @return NamespaceId 命名空间ID，按照【命名空间ID】进行过滤，可通过调用[DescribeNamespaces](https://cloud.tencent.com/document/product/649/36096)查询已创建的命名空间列表或登录控制台进行查看；也可以调用[CreateNamespace](https://cloud.tencent.com/document/product/649/36098)创建新命名空间。
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID，按照【命名空间ID】进行过滤，可通过调用[DescribeNamespaces](https://cloud.tencent.com/document/product/649/36096)查询已创建的命名空间列表或登录控制台进行查看；也可以调用[CreateNamespace](https://cloud.tencent.com/document/product/649/36098)创建新命名空间。
                     * @param _namespaceId 命名空间ID，按照【命名空间ID】进行过滤，可通过调用[DescribeNamespaces](https://cloud.tencent.com/document/product/649/36096)查询已创建的命名空间列表或登录控制台进行查看；也可以调用[CreateNamespace](https://cloud.tencent.com/document/product/649/36098)创建新命名空间。
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取是否开启高可用，1 表示开启，0 表示不开启
                     * @return IsHaEnable 是否开启高可用，1 表示开启，0 表示不开启
                     * 
                     */
                    std::string GetIsHaEnable() const;

                    /**
                     * 设置是否开启高可用，1 表示开启，0 表示不开启
                     * @param _isHaEnable 是否开启高可用，1 表示开启，0 表示不开启
                     * 
                     */
                    void SetIsHaEnable(const std::string& _isHaEnable);

                    /**
                     * 判断参数 IsHaEnable 是否已赋值
                     * @return IsHaEnable 是否已赋值
                     * 
                     */
                    bool IsHaEnableHasBeenSet() const;

                    /**
                     * 获取需要绑定的数据集ID，可通过调用[DescribePrograms](https://cloud.tencent.com/document/api/649/73477)查询已创建的数据集列表或登录控制台进行查看；也可以调用[CreateProgram](https://cloud.tencent.com/document/api/649/108544)创建新的数据集。
                     * @return ProgramId 需要绑定的数据集ID，可通过调用[DescribePrograms](https://cloud.tencent.com/document/api/649/73477)查询已创建的数据集列表或登录控制台进行查看；也可以调用[CreateProgram](https://cloud.tencent.com/document/api/649/108544)创建新的数据集。
                     * 
                     */
                    std::string GetProgramId() const;

                    /**
                     * 设置需要绑定的数据集ID，可通过调用[DescribePrograms](https://cloud.tencent.com/document/api/649/73477)查询已创建的数据集列表或登录控制台进行查看；也可以调用[CreateProgram](https://cloud.tencent.com/document/api/649/108544)创建新的数据集。
                     * @param _programId 需要绑定的数据集ID，可通过调用[DescribePrograms](https://cloud.tencent.com/document/api/649/73477)查询已创建的数据集列表或登录控制台进行查看；也可以调用[CreateProgram](https://cloud.tencent.com/document/api/649/108544)创建新的数据集。
                     * 
                     */
                    void SetProgramId(const std::string& _programId);

                    /**
                     * 判断参数 ProgramId 是否已赋值
                     * @return ProgramId 是否已赋值
                     * 
                     */
                    bool ProgramIdHasBeenSet() const;

                    /**
                     * 获取需要绑定的数据集ID列表，可通过调用[DescribePrograms](https://cloud.tencent.com/document/api/649/73477)查询已创建的数据集列表或登录控制台进行查看；也可以调用[CreateProgram](https://cloud.tencent.com/document/api/649/108544)创建新的数据集。
                     * @return ProgramIdList 需要绑定的数据集ID列表，可通过调用[DescribePrograms](https://cloud.tencent.com/document/api/649/73477)查询已创建的数据集列表或登录控制台进行查看；也可以调用[CreateProgram](https://cloud.tencent.com/document/api/649/108544)创建新的数据集。
                     * 
                     */
                    std::vector<std::string> GetProgramIdList() const;

                    /**
                     * 设置需要绑定的数据集ID列表，可通过调用[DescribePrograms](https://cloud.tencent.com/document/api/649/73477)查询已创建的数据集列表或登录控制台进行查看；也可以调用[CreateProgram](https://cloud.tencent.com/document/api/649/108544)创建新的数据集。
                     * @param _programIdList 需要绑定的数据集ID列表，可通过调用[DescribePrograms](https://cloud.tencent.com/document/api/649/73477)查询已创建的数据集列表或登录控制台进行查看；也可以调用[CreateProgram](https://cloud.tencent.com/document/api/649/108544)创建新的数据集。
                     * 
                     */
                    void SetProgramIdList(const std::vector<std::string>& _programIdList);

                    /**
                     * 判断参数 ProgramIdList 是否已赋值
                     * @return ProgramIdList 是否已赋值
                     * 
                     */
                    bool ProgramIdListHasBeenSet() const;

                    /**
                     * 获取是否创建k8s命名空间标识
                     * @return CreateK8sNamespaceFlag 是否创建k8s命名空间标识
                     * 
                     */
                    bool GetCreateK8sNamespaceFlag() const;

                    /**
                     * 设置是否创建k8s命名空间标识
                     * @param _createK8sNamespaceFlag 是否创建k8s命名空间标识
                     * 
                     */
                    void SetCreateK8sNamespaceFlag(const bool& _createK8sNamespaceFlag);

                    /**
                     * 判断参数 CreateK8sNamespaceFlag 是否已赋值
                     * @return CreateK8sNamespaceFlag 是否已赋值
                     * 
                     */
                    bool CreateK8sNamespaceFlagHasBeenSet() const;

                private:

                    /**
                     * 命名空间名称
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 集群ID，按照【集群ID】进行过滤，可通过调用[DescribeClusters](https://cloud.tencent.com/document/product/649/85857)查询已创建的集群列表或登录控制台进行查看；也可以调用[CreateCluster](https://cloud.tencent.com/document/product/649/36049)创建新的集群。仅在集群下无部署组、命名空间、云主机时可以删除。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 命名空间描述
                     */
                    std::string m_namespaceDesc;
                    bool m_namespaceDescHasBeenSet;

                    /**
                     * 命名空间资源类型；DEF：表示默认资源类型；GW：表示网关资源类型
                     */
                    std::string m_namespaceResourceType;
                    bool m_namespaceResourceTypeHasBeenSet;

                    /**
                     * 命名空间类型；DEF 表示默认普通命名空间；GLOBAL 表示全局命名空间
                     */
                    std::string m_namespaceType;
                    bool m_namespaceTypeHasBeenSet;

                    /**
                     * 命名空间ID，按照【命名空间ID】进行过滤，可通过调用[DescribeNamespaces](https://cloud.tencent.com/document/product/649/36096)查询已创建的命名空间列表或登录控制台进行查看；也可以调用[CreateNamespace](https://cloud.tencent.com/document/product/649/36098)创建新命名空间。
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 是否开启高可用，1 表示开启，0 表示不开启
                     */
                    std::string m_isHaEnable;
                    bool m_isHaEnableHasBeenSet;

                    /**
                     * 需要绑定的数据集ID，可通过调用[DescribePrograms](https://cloud.tencent.com/document/api/649/73477)查询已创建的数据集列表或登录控制台进行查看；也可以调用[CreateProgram](https://cloud.tencent.com/document/api/649/108544)创建新的数据集。
                     */
                    std::string m_programId;
                    bool m_programIdHasBeenSet;

                    /**
                     * 需要绑定的数据集ID列表，可通过调用[DescribePrograms](https://cloud.tencent.com/document/api/649/73477)查询已创建的数据集列表或登录控制台进行查看；也可以调用[CreateProgram](https://cloud.tencent.com/document/api/649/108544)创建新的数据集。
                     */
                    std::vector<std::string> m_programIdList;
                    bool m_programIdListHasBeenSet;

                    /**
                     * 是否创建k8s命名空间标识
                     */
                    bool m_createK8sNamespaceFlag;
                    bool m_createK8sNamespaceFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATENAMESPACEREQUEST_H_
