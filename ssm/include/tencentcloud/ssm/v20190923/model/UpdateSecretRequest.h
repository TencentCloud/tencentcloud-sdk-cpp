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
                     * 获取<p>指定需要更新凭据内容的名称。</p>
                     * @return SecretName <p>指定需要更新凭据内容的名称。</p>
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置<p>指定需要更新凭据内容的名称。</p>
                     * @param _secretName <p>指定需要更新凭据内容的名称。</p>
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
                     * 获取<p>指定需要更新内容或设置版本标签的已有版本号，必填。</p><p>指定 VersionStage 时，将该标签迁移到此版本。目标版本不存在返回 ResourceNotFound；凭据处于 PendingCreate 或 CreateFailed 状态时返回 FailedOperation。</p>
                     * @return VersionId <p>指定需要更新内容或设置版本标签的已有版本号，必填。</p><p>指定 VersionStage 时，将该标签迁移到此版本。目标版本不存在返回 ResourceNotFound；凭据处于 PendingCreate 或 CreateFailed 状态时返回 FailedOperation。</p>
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置<p>指定需要更新内容或设置版本标签的已有版本号，必填。</p><p>指定 VersionStage 时，将该标签迁移到此版本。目标版本不存在返回 ResourceNotFound；凭据处于 PendingCreate 或 CreateFailed 状态时返回 FailedOperation。</p>
                     * @param _versionId <p>指定需要更新内容或设置版本标签的已有版本号，必填。</p><p>指定 VersionStage 时，将该标签迁移到此版本。目标版本不存在返回 ResourceNotFound；凭据处于 PendingCreate 或 CreateFailed 状态时返回 FailedOperation。</p>
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
                     * 获取<p>新的二进制凭据内容，须使用 Base64 编码，仅自定义凭据支持通过本接口更新内容。</p><p>入参限制：未指定 VersionStage 时，SecretString 和 SecretBinary 必须且只能一个非空；指定 VersionStage 时可均不传以仅迁移标签，但不能同时非空。云产品及 Redis/MongoDB 凭据须省略两项内容。</p>
                     * @return SecretBinary <p>新的二进制凭据内容，须使用 Base64 编码，仅自定义凭据支持通过本接口更新内容。</p><p>入参限制：未指定 VersionStage 时，SecretString 和 SecretBinary 必须且只能一个非空；指定 VersionStage 时可均不传以仅迁移标签，但不能同时非空。云产品及 Redis/MongoDB 凭据须省略两项内容。</p>
                     * 
                     */
                    std::string GetSecretBinary() const;

                    /**
                     * 设置<p>新的二进制凭据内容，须使用 Base64 编码，仅自定义凭据支持通过本接口更新内容。</p><p>入参限制：未指定 VersionStage 时，SecretString 和 SecretBinary 必须且只能一个非空；指定 VersionStage 时可均不传以仅迁移标签，但不能同时非空。云产品及 Redis/MongoDB 凭据须省略两项内容。</p>
                     * @param _secretBinary <p>新的二进制凭据内容，须使用 Base64 编码，仅自定义凭据支持通过本接口更新内容。</p><p>入参限制：未指定 VersionStage 时，SecretString 和 SecretBinary 必须且只能一个非空；指定 VersionStage 时可均不传以仅迁移标签，但不能同时非空。云产品及 Redis/MongoDB 凭据须省略两项内容。</p>
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
                     * 获取<p>新的文本凭据内容，无需 Base64 编码，仅自定义凭据支持通过本接口更新内容。</p><p>入参限制：未指定 VersionStage 时，SecretString 和 SecretBinary 必须且只能一个非空；指定 VersionStage 时可均不传以仅迁移标签，但不能同时非空。云产品及 Redis/MongoDB 凭据须省略两项内容。</p>
                     * @return SecretString <p>新的文本凭据内容，无需 Base64 编码，仅自定义凭据支持通过本接口更新内容。</p><p>入参限制：未指定 VersionStage 时，SecretString 和 SecretBinary 必须且只能一个非空；指定 VersionStage 时可均不传以仅迁移标签，但不能同时非空。云产品及 Redis/MongoDB 凭据须省略两项内容。</p>
                     * 
                     */
                    std::string GetSecretString() const;

                    /**
                     * 设置<p>新的文本凭据内容，无需 Base64 编码，仅自定义凭据支持通过本接口更新内容。</p><p>入参限制：未指定 VersionStage 时，SecretString 和 SecretBinary 必须且只能一个非空；指定 VersionStage 时可均不传以仅迁移标签，但不能同时非空。云产品及 Redis/MongoDB 凭据须省略两项内容。</p>
                     * @param _secretString <p>新的文本凭据内容，无需 Base64 编码，仅自定义凭据支持通过本接口更新内容。</p><p>入参限制：未指定 VersionStage 时，SecretString 和 SecretBinary 必须且只能一个非空；指定 VersionStage 时可均不传以仅迁移标签，但不能同时非空。云产品及 Redis/MongoDB 凭据须省略两项内容。</p>
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
                     * 获取<p>将 Stage_Current 标签设置或迁移到 VersionId 指定的已有版本，大小写敏感。</p><p>入参限制：支持自定义、云产品及 Redis/MongoDB 凭据；VersionId 必填。</p><p>自定义凭据可仅设置标签，也可同时更新内容；SecretString 和 SecretBinary 不能同时非空。云产品及 Redis/MongoDB 仅支持标签操作，两项内容均须省略。标签绑定版本号，原轮转流程保持不变；绑定历史版本不保证账密仍有效。</p>
                     * @return VersionStage <p>将 Stage_Current 标签设置或迁移到 VersionId 指定的已有版本，大小写敏感。</p><p>入参限制：支持自定义、云产品及 Redis/MongoDB 凭据；VersionId 必填。</p><p>自定义凭据可仅设置标签，也可同时更新内容；SecretString 和 SecretBinary 不能同时非空。云产品及 Redis/MongoDB 仅支持标签操作，两项内容均须省略。标签绑定版本号，原轮转流程保持不变；绑定历史版本不保证账密仍有效。</p>
                     * 
                     */
                    std::string GetVersionStage() const;

                    /**
                     * 设置<p>将 Stage_Current 标签设置或迁移到 VersionId 指定的已有版本，大小写敏感。</p><p>入参限制：支持自定义、云产品及 Redis/MongoDB 凭据；VersionId 必填。</p><p>自定义凭据可仅设置标签，也可同时更新内容；SecretString 和 SecretBinary 不能同时非空。云产品及 Redis/MongoDB 仅支持标签操作，两项内容均须省略。标签绑定版本号，原轮转流程保持不变；绑定历史版本不保证账密仍有效。</p>
                     * @param _versionStage <p>将 Stage_Current 标签设置或迁移到 VersionId 指定的已有版本，大小写敏感。</p><p>入参限制：支持自定义、云产品及 Redis/MongoDB 凭据；VersionId 必填。</p><p>自定义凭据可仅设置标签，也可同时更新内容；SecretString 和 SecretBinary 不能同时非空。云产品及 Redis/MongoDB 仅支持标签操作，两项内容均须省略。标签绑定版本号，原轮转流程保持不变；绑定历史版本不保证账密仍有效。</p>
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
                     * <p>指定需要更新凭据内容的名称。</p>
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * <p>指定需要更新内容或设置版本标签的已有版本号，必填。</p><p>指定 VersionStage 时，将该标签迁移到此版本。目标版本不存在返回 ResourceNotFound；凭据处于 PendingCreate 或 CreateFailed 状态时返回 FailedOperation。</p>
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * <p>新的二进制凭据内容，须使用 Base64 编码，仅自定义凭据支持通过本接口更新内容。</p><p>入参限制：未指定 VersionStage 时，SecretString 和 SecretBinary 必须且只能一个非空；指定 VersionStage 时可均不传以仅迁移标签，但不能同时非空。云产品及 Redis/MongoDB 凭据须省略两项内容。</p>
                     */
                    std::string m_secretBinary;
                    bool m_secretBinaryHasBeenSet;

                    /**
                     * <p>新的文本凭据内容，无需 Base64 编码，仅自定义凭据支持通过本接口更新内容。</p><p>入参限制：未指定 VersionStage 时，SecretString 和 SecretBinary 必须且只能一个非空；指定 VersionStage 时可均不传以仅迁移标签，但不能同时非空。云产品及 Redis/MongoDB 凭据须省略两项内容。</p>
                     */
                    std::string m_secretString;
                    bool m_secretStringHasBeenSet;

                    /**
                     * <p>将 Stage_Current 标签设置或迁移到 VersionId 指定的已有版本，大小写敏感。</p><p>入参限制：支持自定义、云产品及 Redis/MongoDB 凭据；VersionId 必填。</p><p>自定义凭据可仅设置标签，也可同时更新内容；SecretString 和 SecretBinary 不能同时非空。云产品及 Redis/MongoDB 仅支持标签操作，两项内容均须省略。标签绑定版本号，原轮转流程保持不变；绑定历史版本不保证账密仍有效。</p>
                     */
                    std::string m_versionStage;
                    bool m_versionStageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_UPDATESECRETREQUEST_H_
