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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_CREATESECRETREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_CREATESECRETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/KeyValueObj.h>
#include <tencentcloud/iecp/v20210914/model/DockerConfig.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * CreateSecret请求参数结构体
                */
                class CreateSecretRequest : public AbstractModel
                {
                public:
                    CreateSecretRequest();
                    ~CreateSecretRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取单元ID
                     * @return EdgeUnitID 单元ID
                     * 
                     */
                    uint64_t GetEdgeUnitID() const;

                    /**
                     * 设置单元ID
                     * @param _edgeUnitID 单元ID
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
                     * 获取secret名
                     * @return SecretName secret名
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置secret名
                     * @param _secretName secret名
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
                     * 获取命名空间（默认:default）
                     * @return SecretNamespace 命名空间（默认:default）
                     * 
                     */
                    std::string GetSecretNamespace() const;

                    /**
                     * 设置命名空间（默认:default）
                     * @param _secretNamespace 命名空间（默认:default）
                     * 
                     */
                    void SetSecretNamespace(const std::string& _secretNamespace);

                    /**
                     * 判断参数 SecretNamespace 是否已赋值
                     * @return SecretNamespace 是否已赋值
                     * 
                     */
                    bool SecretNamespaceHasBeenSet() const;

                    /**
                     * 获取secret类型(取值范围:DockerConfigJson,Opaque 默认Opaque)
                     * @return SecretType secret类型(取值范围:DockerConfigJson,Opaque 默认Opaque)
                     * 
                     */
                    std::string GetSecretType() const;

                    /**
                     * 设置secret类型(取值范围:DockerConfigJson,Opaque 默认Opaque)
                     * @param _secretType secret类型(取值范围:DockerConfigJson,Opaque 默认Opaque)
                     * 
                     */
                    void SetSecretType(const std::string& _secretType);

                    /**
                     * 判断参数 SecretType 是否已赋值
                     * @return SecretType 是否已赋值
                     * 
                     */
                    bool SecretTypeHasBeenSet() const;

                    /**
                     * 获取DockerConfig的序列化base64编码后的字符串
                     * @return DockerConfigJson DockerConfig的序列化base64编码后的字符串
                     * 
                     */
                    std::string GetDockerConfigJson() const;

                    /**
                     * 设置DockerConfig的序列化base64编码后的字符串
                     * @param _dockerConfigJson DockerConfig的序列化base64编码后的字符串
                     * 
                     */
                    void SetDockerConfigJson(const std::string& _dockerConfigJson);

                    /**
                     * 判断参数 DockerConfigJson 是否已赋值
                     * @return DockerConfigJson 是否已赋值
                     * 
                     */
                    bool DockerConfigJsonHasBeenSet() const;

                    /**
                     * 获取Opaque类型的Secret内容
                     * @return CloudData Opaque类型的Secret内容
                     * 
                     */
                    std::vector<KeyValueObj> GetCloudData() const;

                    /**
                     * 设置Opaque类型的Secret内容
                     * @param _cloudData Opaque类型的Secret内容
                     * 
                     */
                    void SetCloudData(const std::vector<KeyValueObj>& _cloudData);

                    /**
                     * 判断参数 CloudData 是否已赋值
                     * @return CloudData 是否已赋值
                     * 
                     */
                    bool CloudDataHasBeenSet() const;

                    /**
                     * 获取DockerConfig配置
                     * @return DockerConfig DockerConfig配置
                     * 
                     */
                    DockerConfig GetDockerConfig() const;

                    /**
                     * 设置DockerConfig配置
                     * @param _dockerConfig DockerConfig配置
                     * 
                     */
                    void SetDockerConfig(const DockerConfig& _dockerConfig);

                    /**
                     * 判断参数 DockerConfig 是否已赋值
                     * @return DockerConfig 是否已赋值
                     * 
                     */
                    bool DockerConfigHasBeenSet() const;

                private:

                    /**
                     * 单元ID
                     */
                    uint64_t m_edgeUnitID;
                    bool m_edgeUnitIDHasBeenSet;

                    /**
                     * secret名
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * 命名空间（默认:default）
                     */
                    std::string m_secretNamespace;
                    bool m_secretNamespaceHasBeenSet;

                    /**
                     * secret类型(取值范围:DockerConfigJson,Opaque 默认Opaque)
                     */
                    std::string m_secretType;
                    bool m_secretTypeHasBeenSet;

                    /**
                     * DockerConfig的序列化base64编码后的字符串
                     */
                    std::string m_dockerConfigJson;
                    bool m_dockerConfigJsonHasBeenSet;

                    /**
                     * Opaque类型的Secret内容
                     */
                    std::vector<KeyValueObj> m_cloudData;
                    bool m_cloudDataHasBeenSet;

                    /**
                     * DockerConfig配置
                     */
                    DockerConfig m_dockerConfig;
                    bool m_dockerConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_CREATESECRETREQUEST_H_
