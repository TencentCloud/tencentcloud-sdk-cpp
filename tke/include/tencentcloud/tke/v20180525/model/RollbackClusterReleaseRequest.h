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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ROLLBACKCLUSTERRELEASEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ROLLBACKCLUSTERRELEASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * RollbackClusterRelease请求参数结构体
                */
                class RollbackClusterReleaseRequest : public AbstractModel
                {
                public:
                    RollbackClusterReleaseRequest();
                    ~RollbackClusterReleaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取应用名称
                     * @return Name 应用名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置应用名称
                     * @param _name 应用名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取应用命名空间
                     * @return Namespace 应用命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置应用命名空间
                     * @param _namespace 应用命名空间
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
                     * 获取回滚版本号
                     * @return Revision 回滚版本号
                     * 
                     */
                    int64_t GetRevision() const;

                    /**
                     * 设置回滚版本号
                     * @param _revision 回滚版本号
                     * 
                     */
                    void SetRevision(const int64_t& _revision);

                    /**
                     * 判断参数 Revision 是否已赋值
                     * @return Revision 是否已赋值
                     * 
                     */
                    bool RevisionHasBeenSet() const;

                    /**
                     * 获取集群类型
                     * @return ClusterType 集群类型
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型
                     * @param _clusterType 集群类型
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 应用名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 应用命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 回滚版本号
                     */
                    int64_t m_revision;
                    bool m_revisionHasBeenSet;

                    /**
                     * 集群类型
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ROLLBACKCLUSTERRELEASEREQUEST_H_
