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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_PUTSECRETVALUEREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_PUTSECRETVALUEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * PutSecretValue请求参数结构体
                */
                class PutSecretValueRequest : public AbstractModel
                {
                public:
                    PutSecretValueRequest();
                    ~PutSecretValueRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定需要增加版本的凭据名称。
                     * @return SecretName 指定需要增加版本的凭据名称。
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置指定需要增加版本的凭据名称。
                     * @param _secretName 指定需要增加版本的凭据名称。
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
                     * 获取指定新增加的版本号，最长64 字节，使用字母、数字或者 - _ . 的组合并且以字母或数字开头。
                     * @return VersionId 指定新增加的版本号，最长64 字节，使用字母、数字或者 - _ . 的组合并且以字母或数字开头。
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置指定新增加的版本号，最长64 字节，使用字母、数字或者 - _ . 的组合并且以字母或数字开头。
                     * @param _versionId 指定新增加的版本号，最长64 字节，使用字母、数字或者 - _ . 的组合并且以字母或数字开头。
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取二进制凭据信息，使用base64编码。
SecretBinary 和 SecretString 必须且只能设置一个。
                     * @return SecretBinary 二进制凭据信息，使用base64编码。
SecretBinary 和 SecretString 必须且只能设置一个。
                     * 
                     */
                    std::string GetSecretBinary() const;

                    /**
                     * 设置二进制凭据信息，使用base64编码。
SecretBinary 和 SecretString 必须且只能设置一个。
                     * @param _secretBinary 二进制凭据信息，使用base64编码。
SecretBinary 和 SecretString 必须且只能设置一个。
                     * 
                     */
                    void SetSecretBinary(const std::string& _secretBinary);

                    /**
                     * 判断参数 SecretBinary 是否已赋值
                     * @return SecretBinary 是否已赋值
                     * 
                     */
                    bool SecretBinaryHasBeenSet() const;

                    /**
                     * 获取文本类型凭据信息明文（不需要进行base64编码），SecretBinary 和 SecretString 必须且只能设置一个。
                     * @return SecretString 文本类型凭据信息明文（不需要进行base64编码），SecretBinary 和 SecretString 必须且只能设置一个。
                     * 
                     */
                    std::string GetSecretString() const;

                    /**
                     * 设置文本类型凭据信息明文（不需要进行base64编码），SecretBinary 和 SecretString 必须且只能设置一个。
                     * @param _secretString 文本类型凭据信息明文（不需要进行base64编码），SecretBinary 和 SecretString 必须且只能设置一个。
                     * 
                     */
                    void SetSecretString(const std::string& _secretString);

                    /**
                     * 判断参数 SecretString 是否已赋值
                     * @return SecretString 是否已赋值
                     * 
                     */
                    bool SecretStringHasBeenSet() const;

                private:

                    /**
                     * 指定需要增加版本的凭据名称。
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * 指定新增加的版本号，最长64 字节，使用字母、数字或者 - _ . 的组合并且以字母或数字开头。
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * 二进制凭据信息，使用base64编码。
SecretBinary 和 SecretString 必须且只能设置一个。
                     */
                    std::string m_secretBinary;
                    bool m_secretBinaryHasBeenSet;

                    /**
                     * 文本类型凭据信息明文（不需要进行base64编码），SecretBinary 和 SecretString 必须且只能设置一个。
                     */
                    std::string m_secretString;
                    bool m_secretStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_PUTSECRETVALUEREQUEST_H_
