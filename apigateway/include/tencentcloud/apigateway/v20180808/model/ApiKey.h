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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIKEY_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 密钥详情
                */
                class ApiKey : public AbstractModel
                {
                public:
                    ApiKey();
                    ~ApiKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建的 API 密钥 ID 。
                     * @return AccessKeyId 创建的 API 密钥 ID 。
                     * 
                     */
                    std::string GetAccessKeyId() const;

                    /**
                     * 设置创建的 API 密钥 ID 。
                     * @param _accessKeyId 创建的 API 密钥 ID 。
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
                     * 获取创建的 API 密钥 Key。
                     * @return AccessKeySecret 创建的 API 密钥 Key。
                     * 
                     */
                    std::string GetAccessKeySecret() const;

                    /**
                     * 设置创建的 API 密钥 Key。
                     * @param _accessKeySecret 创建的 API 密钥 Key。
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
                     * 获取密钥类型，auto 或者 manual。
                     * @return AccessKeyType 密钥类型，auto 或者 manual。
                     * 
                     */
                    std::string GetAccessKeyType() const;

                    /**
                     * 设置密钥类型，auto 或者 manual。
                     * @param _accessKeyType 密钥类型，auto 或者 manual。
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
                     * 获取最后一次修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * @return ModifiedTime 最后一次修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置最后一次修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * @param _modifiedTime 最后一次修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取密钥状态。0表示禁用，1表示启用。
                     * @return Status 密钥状态。0表示禁用，1表示启用。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置密钥状态。0表示禁用，1表示启用。
                     * @param _status 密钥状态。0表示禁用，1表示启用。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * @return CreatedTime 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * @param _createdTime 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 创建的 API 密钥 ID 。
                     */
                    std::string m_accessKeyId;
                    bool m_accessKeyIdHasBeenSet;

                    /**
                     * 创建的 API 密钥 Key。
                     */
                    std::string m_accessKeySecret;
                    bool m_accessKeySecretHasBeenSet;

                    /**
                     * 密钥类型，auto 或者 manual。
                     */
                    std::string m_accessKeyType;
                    bool m_accessKeyTypeHasBeenSet;

                    /**
                     * 用户自定义密钥名称。
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * 最后一次修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 密钥状态。0表示禁用，1表示启用。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIKEY_H_
