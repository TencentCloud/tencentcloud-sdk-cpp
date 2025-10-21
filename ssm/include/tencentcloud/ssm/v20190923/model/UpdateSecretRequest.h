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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_UPDATESECRETREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_UPDATESECRETREQUEST_H_

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
                * UpdateSecret请求参数结构体
                */
                class UpdateSecretRequest : public AbstractModel
                {
                public:
                    UpdateSecretRequest();
                    ~UpdateSecretRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定需要更新凭据内容的名称。
                     * @return SecretName 指定需要更新凭据内容的名称。
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置指定需要更新凭据内容的名称。
                     * @param _secretName 指定需要更新凭据内容的名称。
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
                     * 获取指定需要更新凭据内容的版本号。
                     * @return VersionId 指定需要更新凭据内容的版本号。
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置指定需要更新凭据内容的版本号。
                     * @param _versionId 指定需要更新凭据内容的版本号。
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
                     * 获取新的凭据内容为二进制的场景使用该字段，并使用base64进行编码。
SecretBinary 和 SecretString 只能一个不为空。
                     * @return SecretBinary 新的凭据内容为二进制的场景使用该字段，并使用base64进行编码。
SecretBinary 和 SecretString 只能一个不为空。
                     * 
                     */
                    std::string GetSecretBinary() const;

                    /**
                     * 设置新的凭据内容为二进制的场景使用该字段，并使用base64进行编码。
SecretBinary 和 SecretString 只能一个不为空。
                     * @param _secretBinary 新的凭据内容为二进制的场景使用该字段，并使用base64进行编码。
SecretBinary 和 SecretString 只能一个不为空。
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
                     * 获取新的凭据内容为文本的场景使用该字段，不需要base64编码SecretBinary 和 SecretString 只能一个不为空。
                     * @return SecretString 新的凭据内容为文本的场景使用该字段，不需要base64编码SecretBinary 和 SecretString 只能一个不为空。
                     * 
                     */
                    std::string GetSecretString() const;

                    /**
                     * 设置新的凭据内容为文本的场景使用该字段，不需要base64编码SecretBinary 和 SecretString 只能一个不为空。
                     * @param _secretString 新的凭据内容为文本的场景使用该字段，不需要base64编码SecretBinary 和 SecretString 只能一个不为空。
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
                     * 指定需要更新凭据内容的名称。
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * 指定需要更新凭据内容的版本号。
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * 新的凭据内容为二进制的场景使用该字段，并使用base64进行编码。
SecretBinary 和 SecretString 只能一个不为空。
                     */
                    std::string m_secretBinary;
                    bool m_secretBinaryHasBeenSet;

                    /**
                     * 新的凭据内容为文本的场景使用该字段，不需要base64编码SecretBinary 和 SecretString 只能一个不为空。
                     */
                    std::string m_secretString;
                    bool m_secretStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_UPDATESECRETREQUEST_H_
