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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATEREPOSITORYREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATEREPOSITORYREQUEST_H_

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
                * CreateRepository请求参数结构体
                */
                class CreateRepositoryRequest : public AbstractModel
                {
                public:
                    CreateRepositoryRequest();
                    ~CreateRepositoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return RegistryId 实例ID
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例ID
                     * @param _registryId 实例ID
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
                     * 获取仓库名称，需满足以下规则：
1. 长度需 ​大于2且小于245个字符 
2. 仅允许小写字母、数字及符号 . _ -
                     * @return RepositoryName 仓库名称，需满足以下规则：
1. 长度需 ​大于2且小于245个字符 
2. 仅允许小写字母、数字及符号 . _ -
                     * 
                     */
                    std::string GetRepositoryName() const;

                    /**
                     * 设置仓库名称，需满足以下规则：
1. 长度需 ​大于2且小于245个字符 
2. 仅允许小写字母、数字及符号 . _ -
                     * @param _repositoryName 仓库名称，需满足以下规则：
1. 长度需 ​大于2且小于245个字符 
2. 仅允许小写字母、数字及符号 . _ -
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
                     * 获取仓库简短描述
                     * @return BriefDescription 仓库简短描述
                     * 
                     */
                    std::string GetBriefDescription() const;

                    /**
                     * 设置仓库简短描述
                     * @param _briefDescription 仓库简短描述
                     * 
                     */
                    void SetBriefDescription(const std::string& _briefDescription);

                    /**
                     * 判断参数 BriefDescription 是否已赋值
                     * @return BriefDescription 是否已赋值
                     * 
                     */
                    bool BriefDescriptionHasBeenSet() const;

                    /**
                     * 获取仓库详细描述
                     * @return Description 仓库详细描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置仓库详细描述
                     * @param _description 仓库详细描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 命名空间名称
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 仓库名称，需满足以下规则：
1. 长度需 ​大于2且小于245个字符 
2. 仅允许小写字母、数字及符号 . _ -
                     */
                    std::string m_repositoryName;
                    bool m_repositoryNameHasBeenSet;

                    /**
                     * 仓库简短描述
                     */
                    std::string m_briefDescription;
                    bool m_briefDescriptionHasBeenSet;

                    /**
                     * 仓库详细描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATEREPOSITORYREQUEST_H_
