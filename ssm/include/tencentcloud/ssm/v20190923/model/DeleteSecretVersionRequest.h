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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_DELETESECRETVERSIONREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_DELETESECRETVERSIONREQUEST_H_

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
                * DeleteSecretVersion请求参数结构体
                */
                class DeleteSecretVersionRequest : public AbstractModel
                {
                public:
                    DeleteSecretVersionRequest();
                    ~DeleteSecretVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>指定凭据名称。</p>
                     * @return SecretName <p>指定凭据名称。</p>
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置<p>指定凭据名称。</p>
                     * @param _secretName <p>指定凭据名称。</p>
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
                     * 获取<p>指定该名称下需要删除的凭据的版本号。</p><p>仅支持删除自定义凭据版本。目标版本持有 Stage_Current 标签时返回 FailedOperation，须先通过 UpdateSecret 将标签迁移到其他已有版本。存在并发写入或轮转等操作、未取得共享写锁时返回 OperationDenied。</p>
                     * @return VersionId <p>指定该名称下需要删除的凭据的版本号。</p><p>仅支持删除自定义凭据版本。目标版本持有 Stage_Current 标签时返回 FailedOperation，须先通过 UpdateSecret 将标签迁移到其他已有版本。存在并发写入或轮转等操作、未取得共享写锁时返回 OperationDenied。</p>
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置<p>指定该名称下需要删除的凭据的版本号。</p><p>仅支持删除自定义凭据版本。目标版本持有 Stage_Current 标签时返回 FailedOperation，须先通过 UpdateSecret 将标签迁移到其他已有版本。存在并发写入或轮转等操作、未取得共享写锁时返回 OperationDenied。</p>
                     * @param _versionId <p>指定该名称下需要删除的凭据的版本号。</p><p>仅支持删除自定义凭据版本。目标版本持有 Stage_Current 标签时返回 FailedOperation，须先通过 UpdateSecret 将标签迁移到其他已有版本。存在并发写入或轮转等操作、未取得共享写锁时返回 OperationDenied。</p>
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                private:

                    /**
                     * <p>指定凭据名称。</p>
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * <p>指定该名称下需要删除的凭据的版本号。</p><p>仅支持删除自定义凭据版本。目标版本持有 Stage_Current 标签时返回 FailedOperation，须先通过 UpdateSecret 将标签迁移到其他已有版本。存在并发写入或轮转等操作、未取得共享写锁时返回 OperationDenied。</p>
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_DELETESECRETVERSIONREQUEST_H_
