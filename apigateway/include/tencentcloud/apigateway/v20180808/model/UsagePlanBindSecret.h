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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANBINDSECRET_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANBINDSECRET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 使用计划绑定密钥
                */
                class UsagePlanBindSecret : public AbstractModel
                {
                public:
                    UsagePlanBindSecret();
                    ~UsagePlanBindSecret() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取密钥ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessKeyId 密钥ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccessKeyId() const;

                    /**
                     * 设置密钥ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessKeyId 密钥ID。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取密钥名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretName 密钥名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置密钥名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretName 密钥名称。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取密钥状态，0表示已禁用，1表示启用中。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 密钥状态，0表示已禁用，1表示启用中。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置密钥状态，0表示已禁用，1表示启用中。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 密钥状态，0表示已禁用，1表示启用中。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 密钥ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accessKeyId;
                    bool m_accessKeyIdHasBeenSet;

                    /**
                     * 密钥名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * 密钥状态，0表示已禁用，1表示启用中。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANBINDSECRET_H_
