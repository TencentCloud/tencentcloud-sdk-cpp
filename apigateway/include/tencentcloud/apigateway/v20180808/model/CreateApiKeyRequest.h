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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEAPIKEYREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEAPIKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/Tag.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * CreateApiKey请求参数结构体
                */
                class CreateApiKeyRequest : public AbstractModel
                {
                public:
                    CreateApiKeyRequest();
                    ~CreateApiKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户自定义密钥名称。
                     * @return SecretName 用户自定义密钥名称。
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置用户自定义密钥名称。
                     * @param _secretName 用户自定义密钥名称。
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
                     * 获取密钥类型，支持 auto 和 manual（自定义密钥），默认为 auto。
                     * @return AccessKeyType 密钥类型，支持 auto 和 manual（自定义密钥），默认为 auto。
                     * 
                     */
                    std::string GetAccessKeyType() const;

                    /**
                     * 设置密钥类型，支持 auto 和 manual（自定义密钥），默认为 auto。
                     * @param _accessKeyType 密钥类型，支持 auto 和 manual（自定义密钥），默认为 auto。
                     * 
                     */
                    void SetAccessKeyType(const std::string& _accessKeyType);

                    /**
                     * 判断参数 AccessKeyType 是否已赋值
                     * @return AccessKeyType 是否已赋值
                     * 
                     */
                    bool AccessKeyTypeHasBeenSet() const;

                    /**
                     * 获取用户自定义密钥 ID，AccessKeyType 为 manual 时必传。长度为5 - 50字符，由字母、数字、英文下划线组成。
                     * @return AccessKeyId 用户自定义密钥 ID，AccessKeyType 为 manual 时必传。长度为5 - 50字符，由字母、数字、英文下划线组成。
                     * 
                     */
                    std::string GetAccessKeyId() const;

                    /**
                     * 设置用户自定义密钥 ID，AccessKeyType 为 manual 时必传。长度为5 - 50字符，由字母、数字、英文下划线组成。
                     * @param _accessKeyId 用户自定义密钥 ID，AccessKeyType 为 manual 时必传。长度为5 - 50字符，由字母、数字、英文下划线组成。
                     * 
                     */
                    void SetAccessKeyId(const std::string& _accessKeyId);

                    /**
                     * 判断参数 AccessKeyId 是否已赋值
                     * @return AccessKeyId 是否已赋值
                     * 
                     */
                    bool AccessKeyIdHasBeenSet() const;

                    /**
                     * 获取用户自定义密钥 Key，AccessKeyType 为 manual 时必传。长度为10 - 50字符，由字母、数字、英文下划线。
                     * @return AccessKeySecret 用户自定义密钥 Key，AccessKeyType 为 manual 时必传。长度为10 - 50字符，由字母、数字、英文下划线。
                     * 
                     */
                    std::string GetAccessKeySecret() const;

                    /**
                     * 设置用户自定义密钥 Key，AccessKeyType 为 manual 时必传。长度为10 - 50字符，由字母、数字、英文下划线。
                     * @param _accessKeySecret 用户自定义密钥 Key，AccessKeyType 为 manual 时必传。长度为10 - 50字符，由字母、数字、英文下划线。
                     * 
                     */
                    void SetAccessKeySecret(const std::string& _accessKeySecret);

                    /**
                     * 判断参数 AccessKeySecret 是否已赋值
                     * @return AccessKeySecret 是否已赋值
                     * 
                     */
                    bool AccessKeySecretHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 用户自定义密钥名称。
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * 密钥类型，支持 auto 和 manual（自定义密钥），默认为 auto。
                     */
                    std::string m_accessKeyType;
                    bool m_accessKeyTypeHasBeenSet;

                    /**
                     * 用户自定义密钥 ID，AccessKeyType 为 manual 时必传。长度为5 - 50字符，由字母、数字、英文下划线组成。
                     */
                    std::string m_accessKeyId;
                    bool m_accessKeyIdHasBeenSet;

                    /**
                     * 用户自定义密钥 Key，AccessKeyType 为 manual 时必传。长度为10 - 50字符，由字母、数字、英文下划线。
                     */
                    std::string m_accessKeySecret;
                    bool m_accessKeySecretHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEAPIKEYREQUEST_H_
