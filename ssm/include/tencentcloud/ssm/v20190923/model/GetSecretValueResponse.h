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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_GETSECRETVALUERESPONSE_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_GETSECRETVALUERESPONSE_H_

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
                * GetSecretValue返回参数结构体
                */
                class GetSecretValueResponse : public AbstractModel
                {
                public:
                    GetSecretValueResponse();
                    ~GetSecretValueResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>凭据的名称。</p>
                     * @return SecretName <p>凭据的名称。</p>
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取<p>该凭据对应的版本号。</p>
                     * @return VersionId <p>该凭据对应的版本号。</p>
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取<p>在创建凭据(CreateSecret)时，如果指定的是二进制数据，则该字段为返回结果，并且使用base64进行编码，应用方需要进行base64解码后获取原始数据。<br>SecretBinary和SecretString只有一个不为空。</p>
                     * @return SecretBinary <p>在创建凭据(CreateSecret)时，如果指定的是二进制数据，则该字段为返回结果，并且使用base64进行编码，应用方需要进行base64解码后获取原始数据。<br>SecretBinary和SecretString只有一个不为空。</p>
                     * 
                     */
                    std::string GetSecretBinary() const;

                    /**
                     * 判断参数 SecretBinary 是否已赋值
                     * @return SecretBinary 是否已赋值
                     * 
                     */
                    bool SecretBinaryHasBeenSet() const;

                    /**
                     * 获取<p>在创建凭据(CreateSecret)时，如果指定的是普通文本数据，则该字段为返回结果。<br>SecretBinary和SecretString只有一个不为空。</p>
                     * @return SecretString <p>在创建凭据(CreateSecret)时，如果指定的是普通文本数据，则该字段为返回结果。<br>SecretBinary和SecretString只有一个不为空。</p>
                     * 
                     */
                    std::string GetSecretString() const;

                    /**
                     * 判断参数 SecretString 是否已赋值
                     * @return SecretString 是否已赋值
                     * 
                     */
                    bool SecretStringHasBeenSet() const;

                private:

                    /**
                     * <p>凭据的名称。</p>
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * <p>该凭据对应的版本号。</p>
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * <p>在创建凭据(CreateSecret)时，如果指定的是二进制数据，则该字段为返回结果，并且使用base64进行编码，应用方需要进行base64解码后获取原始数据。<br>SecretBinary和SecretString只有一个不为空。</p>
                     */
                    std::string m_secretBinary;
                    bool m_secretBinaryHasBeenSet;

                    /**
                     * <p>在创建凭据(CreateSecret)时，如果指定的是普通文本数据，则该字段为返回结果。<br>SecretBinary和SecretString只有一个不为空。</p>
                     */
                    std::string m_secretString;
                    bool m_secretStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_GETSECRETVALUERESPONSE_H_
