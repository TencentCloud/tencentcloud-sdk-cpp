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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEAIMODELVERSIONDETAILREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEAIMODELVERSIONDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeAIModelVersionDetail请求参数结构体
                */
                class DescribeAIModelVersionDetailRequest : public AbstractModel
                {
                public:
                    DescribeAIModelVersionDetailRequest();
                    ~DescribeAIModelVersionDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>TCR实例ID</p>
                     * @return RegistryId <p>TCR实例ID</p>
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置<p>TCR实例ID</p>
                     * @param _registryId <p>TCR实例ID</p>
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取<p>命名空间</p>
                     * @return NamespaceName <p>命名空间</p>
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置<p>命名空间</p>
                     * @param _namespaceName <p>命名空间</p>
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
                     * 获取<p>仓库名</p>
                     * @return RepositoryName <p>仓库名</p>
                     * 
                     */
                    std::string GetRepositoryName() const;

                    /**
                     * 设置<p>仓库名</p>
                     * @param _repositoryName <p>仓库名</p>
                     * 
                     */
                    void SetRepositoryName(const std::string& _repositoryName);

                    /**
                     * 判断参数 RepositoryName 是否已赋值
                     * @return RepositoryName 是否已赋值
                     * 
                     */
                    bool RepositoryNameHasBeenSet() const;

                    /**
                     * 获取<p>版本</p>
                     * @return Reference <p>版本</p>
                     * 
                     */
                    std::string GetReference() const;

                    /**
                     * 设置<p>版本</p>
                     * @param _reference <p>版本</p>
                     * 
                     */
                    void SetReference(const std::string& _reference);

                    /**
                     * 判断参数 Reference 是否已赋值
                     * @return Reference 是否已赋值
                     * 
                     */
                    bool ReferenceHasBeenSet() const;

                private:

                    /**
                     * <p>TCR实例ID</p>
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>命名空间</p>
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * <p>仓库名</p>
                     */
                    std::string m_repositoryName;
                    bool m_repositoryNameHasBeenSet;

                    /**
                     * <p>版本</p>
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEAIMODELVERSIONDETAILREQUEST_H_
