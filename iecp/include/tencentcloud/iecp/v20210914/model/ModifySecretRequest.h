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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_MODIFYSECRETREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_MODIFYSECRETREQUEST_H_

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
                * ModifySecret请求参数结构体
                */
                class ModifySecretRequest : public AbstractModel
                {
                public:
                    ModifySecretRequest();
                    ~ModifySecretRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取边缘单元ID
                     * @return EdgeUnitID 边缘单元ID
                     * 
                     */
                    uint64_t GetEdgeUnitID() const;

                    /**
                     * 设置边缘单元ID
                     * @param _edgeUnitID 边缘单元ID
                     * 
                     */
                    void SetEdgeUnitID(const uint64_t& _edgeUnitID);

                    /**
                     * 判断参数 EdgeUnitID 是否已赋值
                     * @return EdgeUnitID 是否已赋值
                     * 
                     */
                    bool EdgeUnitIDHasBeenSet() const;

                    /**
                     * 获取Secret名
                     * @return SecretName Secret名
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置Secret名
                     * @param _secretName Secret名
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取Secret的Yaml格式
                     * @return Yaml Secret的Yaml格式
                     * 
                     */
                    std::string GetYaml() const;

                    /**
                     * 设置Secret的Yaml格式
                     * @param _yaml Secret的Yaml格式
                     * 
                     */
                    void SetYaml(const std::string& _yaml);

                    /**
                     * 判断参数 Yaml 是否已赋值
                     * @return Yaml 是否已赋值
                     * 
                     */
                    bool YamlHasBeenSet() const;

                    /**
                     * 获取Secret命名空间（默认:default）
                     * @return SecretNamespace Secret命名空间（默认:default）
                     * 
                     */
                    std::string GetSecretNamespace() const;

                    /**
                     * 设置Secret命名空间（默认:default）
                     * @param _secretNamespace Secret命名空间（默认:default）
                     * 
                     */
                    void SetSecretNamespace(const std::string& _secretNamespace);

                    /**
                     * 判断参数 SecretNamespace 是否已赋值
                     * @return SecretNamespace 是否已赋值
                     * 
                     */
                    bool SecretNamespaceHasBeenSet() const;

                private:

                    /**
                     * 边缘单元ID
                     */
                    uint64_t m_edgeUnitID;
                    bool m_edgeUnitIDHasBeenSet;

                    /**
                     * Secret名
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * Secret的Yaml格式
                     */
                    std::string m_yaml;
                    bool m_yamlHasBeenSet;

                    /**
                     * Secret命名空间（默认:default）
                     */
                    std::string m_secretNamespace;
                    bool m_secretNamespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_MODIFYSECRETREQUEST_H_
