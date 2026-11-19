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
                     * 获取<p>指定需要增加版本的凭据名称。</p>
                     * @return SecretName <p>指定需要增加版本的凭据名称。</p>
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置<p>指定需要增加版本的凭据名称。</p>
                     * @param _secretName <p>指定需要增加版本的凭据名称。</p>
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
                     * 获取<p>指定新增凭据版本的版本号。可选，未指定时由系统生成 UUID v4，并通过响应 VersionId 返回。</p><p>参数格式：最长64字节，使用字母、数字或 - _ . 的组合，并以字母或数字开头。</p><p>省略 VersionId 的每次调用都会生成新版本。需要识别同一版本或处理重试时，由调用方生成并复用 VersionId；已有版本号返回 ResourceInUse.VersionIdExists。</p>
                     * @return VersionId <p>指定新增凭据版本的版本号。可选，未指定时由系统生成 UUID v4，并通过响应 VersionId 返回。</p><p>参数格式：最长64字节，使用字母、数字或 - _ . 的组合，并以字母或数字开头。</p><p>省略 VersionId 的每次调用都会生成新版本。需要识别同一版本或处理重试时，由调用方生成并复用 VersionId；已有版本号返回 ResourceInUse.VersionIdExists。</p>
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置<p>指定新增凭据版本的版本号。可选，未指定时由系统生成 UUID v4，并通过响应 VersionId 返回。</p><p>参数格式：最长64字节，使用字母、数字或 - _ . 的组合，并以字母或数字开头。</p><p>省略 VersionId 的每次调用都会生成新版本。需要识别同一版本或处理重试时，由调用方生成并复用 VersionId；已有版本号返回 ResourceInUse.VersionIdExists。</p>
                     * @param _versionId <p>指定新增凭据版本的版本号。可选，未指定时由系统生成 UUID v4，并通过响应 VersionId 返回。</p><p>参数格式：最长64字节，使用字母、数字或 - _ . 的组合，并以字母或数字开头。</p><p>省略 VersionId 的每次调用都会生成新版本。需要识别同一版本或处理重试时，由调用方生成并复用 VersionId；已有版本号返回 ResourceInUse.VersionIdExists。</p>
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
                     * 获取<p>二进制凭据信息，使用base64编码。<br>SecretBinary 和 SecretString 必须且只能设置一个。</p>
                     * @return SecretBinary <p>二进制凭据信息，使用base64编码。<br>SecretBinary 和 SecretString 必须且只能设置一个。</p>
                     * 
                     */
                    std::string GetSecretBinary() const;

                    /**
                     * 设置<p>二进制凭据信息，使用base64编码。<br>SecretBinary 和 SecretString 必须且只能设置一个。</p>
                     * @param _secretBinary <p>二进制凭据信息，使用base64编码。<br>SecretBinary 和 SecretString 必须且只能设置一个。</p>
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
                     * 获取<p>文本类型凭据信息明文（不需要进行base64编码），SecretBinary 和 SecretString 必须且只能设置一个。</p>
                     * @return SecretString <p>文本类型凭据信息明文（不需要进行base64编码），SecretBinary 和 SecretString 必须且只能设置一个。</p>
                     * 
                     */
                    std::string GetSecretString() const;

                    /**
                     * 设置<p>文本类型凭据信息明文（不需要进行base64编码），SecretBinary 和 SecretString 必须且只能设置一个。</p>
                     * @param _secretString <p>文本类型凭据信息明文（不需要进行base64编码），SecretBinary 和 SecretString 必须且只能设置一个。</p>
                     * 
                     */
                    void SetSecretString(const std::string& _secretString);

                    /**
                     * 判断参数 SecretString 是否已赋值
                     * @return SecretString 是否已赋值
                     * 
                     */
                    bool SecretStringHasBeenSet() const;

                    /**
                     * 获取<p>为新增版本设置版本标签，仅支持 Stage_Current，大小写敏感。本接口仅支持自定义凭据。</p><p>入参限制：SecretString 和 SecretBinary 必须且只能指定一个非空值。</p>
                     * @return VersionStage <p>为新增版本设置版本标签，仅支持 Stage_Current，大小写敏感。本接口仅支持自定义凭据。</p><p>入参限制：SecretString 和 SecretBinary 必须且只能指定一个非空值。</p>
                     * 
                     */
                    std::string GetVersionStage() const;

                    /**
                     * 设置<p>为新增版本设置版本标签，仅支持 Stage_Current，大小写敏感。本接口仅支持自定义凭据。</p><p>入参限制：SecretString 和 SecretBinary 必须且只能指定一个非空值。</p>
                     * @param _versionStage <p>为新增版本设置版本标签，仅支持 Stage_Current，大小写敏感。本接口仅支持自定义凭据。</p><p>入参限制：SecretString 和 SecretBinary 必须且只能指定一个非空值。</p>
                     * 
                     */
                    void SetVersionStage(const std::string& _versionStage);

                    /**
                     * 判断参数 VersionStage 是否已赋值
                     * @return VersionStage 是否已赋值
                     * 
                     */
                    bool VersionStageHasBeenSet() const;

                private:

                    /**
                     * <p>指定需要增加版本的凭据名称。</p>
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * <p>指定新增凭据版本的版本号。可选，未指定时由系统生成 UUID v4，并通过响应 VersionId 返回。</p><p>参数格式：最长64字节，使用字母、数字或 - _ . 的组合，并以字母或数字开头。</p><p>省略 VersionId 的每次调用都会生成新版本。需要识别同一版本或处理重试时，由调用方生成并复用 VersionId；已有版本号返回 ResourceInUse.VersionIdExists。</p>
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * <p>二进制凭据信息，使用base64编码。<br>SecretBinary 和 SecretString 必须且只能设置一个。</p>
                     */
                    std::string m_secretBinary;
                    bool m_secretBinaryHasBeenSet;

                    /**
                     * <p>文本类型凭据信息明文（不需要进行base64编码），SecretBinary 和 SecretString 必须且只能设置一个。</p>
                     */
                    std::string m_secretString;
                    bool m_secretStringHasBeenSet;

                    /**
                     * <p>为新增版本设置版本标签，仅支持 Stage_Current，大小写敏感。本接口仅支持自定义凭据。</p><p>入参限制：SecretString 和 SecretBinary 必须且只能指定一个非空值。</p>
                     */
                    std::string m_versionStage;
                    bool m_versionStageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_PUTSECRETVALUEREQUEST_H_
