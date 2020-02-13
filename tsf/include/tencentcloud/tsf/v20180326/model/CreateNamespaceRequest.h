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
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间名称
                     * @param NamespaceName 命名空间名称
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param ClusterId 集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取命名空间描述
                     * @return NamespaceDesc 命名空间描述
                     */
                    std::string GetNamespaceDesc() const;

                    /**
                     * 设置命名空间描述
                     * @param NamespaceDesc 命名空间描述
                     */
                    void SetNamespaceDesc(const std::string& _namespaceDesc);

                    /**
                     * 判断参数 NamespaceDesc 是否已赋值
                     * @return NamespaceDesc 是否已赋值
                     */
                    bool NamespaceDescHasBeenSet() const;

                    /**
                     * 获取命名空间资源类型(默认值为DEF)
                     * @return NamespaceResourceType 命名空间资源类型(默认值为DEF)
                     */
                    std::string GetNamespaceResourceType() const;

                    /**
                     * 设置命名空间资源类型(默认值为DEF)
                     * @param NamespaceResourceType 命名空间资源类型(默认值为DEF)
                     */
                    void SetNamespaceResourceType(const std::string& _namespaceResourceType);

                    /**
                     * 判断参数 NamespaceResourceType 是否已赋值
                     * @return NamespaceResourceType 是否已赋值
                     */
                    bool NamespaceResourceTypeHasBeenSet() const;

                    /**
                     * 获取是否是全局命名空间(默认是DEF，表示普通命名空间；GLOBAL表示全局命名空间)
                     * @return NamespaceType 是否是全局命名空间(默认是DEF，表示普通命名空间；GLOBAL表示全局命名空间)
                     */
                    std::string GetNamespaceType() const;

                    /**
                     * 设置是否是全局命名空间(默认是DEF，表示普通命名空间；GLOBAL表示全局命名空间)
                     * @param NamespaceType 是否是全局命名空间(默认是DEF，表示普通命名空间；GLOBAL表示全局命名空间)
                     */
                    void SetNamespaceType(const std::string& _namespaceType);

                    /**
                     * 判断参数 NamespaceType 是否已赋值
                     * @return NamespaceType 是否已赋值
                     */
                    bool NamespaceTypeHasBeenSet() const;

                    /**
                     * 获取命名空间ID
                     * @return NamespaceId 命名空间ID
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID
                     * @param NamespaceId 命名空间ID
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     */
                    bool NamespaceIdHasBeenSet() const;

                private:

                    /**
                     * 命名空间名称
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 命名空间描述
                     */
                    std::string m_namespaceDesc;
                    bool m_namespaceDescHasBeenSet;

                    /**
                     * 命名空间资源类型(默认值为DEF)
                     */
                    std::string m_namespaceResourceType;
                    bool m_namespaceResourceTypeHasBeenSet;

                    /**
                     * 是否是全局命名空间(默认是DEF，表示普通命名空间；GLOBAL表示全局命名空间)
                     */
                    std::string m_namespaceType;
                    bool m_namespaceTypeHasBeenSet;

                    /**
                     * 命名空间ID
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATENAMESPACEREQUEST_H_
