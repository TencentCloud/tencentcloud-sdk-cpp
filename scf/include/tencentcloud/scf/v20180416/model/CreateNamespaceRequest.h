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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_CREATENAMESPACEREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_CREATENAMESPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/NamespaceResourceEnv.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
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
                     * @return Namespace 命名空间名称
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间名称
                     * @param _namespace 命名空间名称
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
                     * 获取命名空间描述
                     * @return Description 命名空间描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置命名空间描述
                     * @param _description 命名空间描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取资源池配置
                     * @return ResourceEnv 资源池配置
                     * 
                     */
                    NamespaceResourceEnv GetResourceEnv() const;

                    /**
                     * 设置资源池配置
                     * @param _resourceEnv 资源池配置
                     * 
                     */
                    void SetResourceEnv(const NamespaceResourceEnv& _resourceEnv);

                    /**
                     * 判断参数 ResourceEnv 是否已赋值
                     * @return ResourceEnv 是否已赋值
                     * 
                     */
                    bool ResourceEnvHasBeenSet() const;

                private:

                    /**
                     * 命名空间名称
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 命名空间描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 资源池配置
                     */
                    NamespaceResourceEnv m_resourceEnv;
                    bool m_resourceEnvHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_CREATENAMESPACEREQUEST_H_
