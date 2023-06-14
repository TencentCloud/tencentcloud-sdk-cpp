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
                     * 获取指定凭据名称。
                     * @return SecretName 指定凭据名称。
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置指定凭据名称。
                     * @param _secretName 指定凭据名称。
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
                     * 获取指定该名称下需要删除的凭据的版本号。
                     * @return VersionId 指定该名称下需要删除的凭据的版本号。
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置指定该名称下需要删除的凭据的版本号。
                     * @param _versionId 指定该名称下需要删除的凭据的版本号。
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
                     * 指定凭据名称。
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * 指定该名称下需要删除的凭据的版本号。
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_DELETESECRETVERSIONREQUEST_H_
