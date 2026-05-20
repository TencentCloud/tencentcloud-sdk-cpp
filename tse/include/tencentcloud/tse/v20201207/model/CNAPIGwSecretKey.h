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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CNAPIGWSECRETKEY_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CNAPIGWSECRETKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 密钥信息
                */
                class CNAPIGwSecretKey : public AbstractModel
                {
                public:
                    CNAPIGwSecretKey();
                    ~CNAPIGwSecretKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取密钥id
                     * @return SecretKeyId 密钥id
                     * 
                     */
                    std::string GetSecretKeyId() const;

                    /**
                     * 设置密钥id
                     * @param _secretKeyId 密钥id
                     * 
                     */
                    void SetSecretKeyId(const std::string& _secretKeyId);

                    /**
                     * 判断参数 SecretKeyId 是否已赋值
                     * @return SecretKeyId 是否已赋值
                     * 
                     */
                    bool SecretKeyIdHasBeenSet() const;

                    /**
                     * 获取密钥名字
                     * @return Name 密钥名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置密钥名字
                     * @param _name 密钥名字
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取密钥类型：ApiKey/JWT
                     * @return SecretType 密钥类型：ApiKey/JWT
                     * 
                     */
                    std::string GetSecretType() const;

                    /**
                     * 设置密钥类型：ApiKey/JWT
                     * @param _secretType 密钥类型：ApiKey/JWT
                     * 
                     */
                    void SetSecretType(const std::string& _secretType);

                    /**
                     * 判断参数 SecretType 是否已赋值
                     * @return SecretType 是否已赋值
                     * 
                     */
                    bool SecretTypeHasBeenSet() const;

                    /**
                     * 获取状态:
- Enable: 启用
- Disable: 禁用
                     * @return Status 状态:
- Enable: 启用
- Disable: 禁用
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态:
- Enable: 启用
- Disable: 禁用
                     * @param _status 状态:
- Enable: 启用
- Disable: 禁用
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取生成方式:KMS/System/Custom
                     * @return GenerateType 生成方式:KMS/System/Custom
                     * 
                     */
                    std::string GetGenerateType() const;

                    /**
                     * 设置生成方式:KMS/System/Custom
                     * @param _generateType 生成方式:KMS/System/Custom
                     * 
                     */
                    void SetGenerateType(const std::string& _generateType);

                    /**
                     * 判断参数 GenerateType 是否已赋值
                     * @return GenerateType 是否已赋值
                     * 
                     */
                    bool GenerateTypeHasBeenSet() const;

                    /**
                     * 获取密钥值
                     * @return SecretValue 密钥值
                     * 
                     */
                    std::string GetSecretValue() const;

                    /**
                     * 设置密钥值
                     * @param _secretValue 密钥值
                     * 
                     */
                    void SetSecretValue(const std::string& _secretValue);

                    /**
                     * 判断参数 SecretValue 是否已赋值
                     * @return SecretValue 是否已赋值
                     * 
                     */
                    bool SecretValueHasBeenSet() const;

                    /**
                     * 获取KMS凭证名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KmsKeyName KMS凭证名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKmsKeyName() const;

                    /**
                     * 设置KMS凭证名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kmsKeyName KMS凭证名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKmsKeyName(const std::string& _kmsKeyName);

                    /**
                     * 判断参数 KmsKeyName 是否已赋值
                     * @return KmsKeyName 是否已赋值
                     * 
                     */
                    bool KmsKeyNameHasBeenSet() const;

                    /**
                     * 获取KMS凭证版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KmsKeyVersion KMS凭证版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKmsKeyVersion() const;

                    /**
                     * 设置KMS凭证版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kmsKeyVersion KMS凭证版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKmsKeyVersion(const std::string& _kmsKeyVersion);

                    /**
                     * 判断参数 KmsKeyVersion 是否已赋值
                     * @return KmsKeyVersion 是否已赋值
                     * 
                     */
                    bool KmsKeyVersionHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取是否可以绑定
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanBind 是否可以绑定
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCanBind() const;

                    /**
                     * 设置是否可以绑定
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _canBind 是否可以绑定
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCanBind(const bool& _canBind);

                    /**
                     * 判断参数 CanBind 是否已赋值
                     * @return CanBind 是否已赋值
                     * 
                     */
                    bool CanBindHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取绑定数
                     * @return BindCount 绑定数
                     * 
                     */
                    uint64_t GetBindCount() const;

                    /**
                     * 设置绑定数
                     * @param _bindCount 绑定数
                     * 
                     */
                    void SetBindCount(const uint64_t& _bindCount);

                    /**
                     * 判断参数 BindCount 是否已赋值
                     * @return BindCount 是否已赋值
                     * 
                     */
                    bool BindCountHasBeenSet() const;

                    /**
                     * 获取资源类型：
- Consumer 消费者
- LLM 模型服务
                     * @return ResourceType 资源类型：
- Consumer 消费者
- LLM 模型服务
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型：
- Consumer 消费者
- LLM 模型服务
                     * @param _resourceType 资源类型：
- Consumer 消费者
- LLM 模型服务
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                private:

                    /**
                     * 密钥id
                     */
                    std::string m_secretKeyId;
                    bool m_secretKeyIdHasBeenSet;

                    /**
                     * 密钥名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 密钥类型：ApiKey/JWT
                     */
                    std::string m_secretType;
                    bool m_secretTypeHasBeenSet;

                    /**
                     * 状态:
- Enable: 启用
- Disable: 禁用
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 生成方式:KMS/System/Custom
                     */
                    std::string m_generateType;
                    bool m_generateTypeHasBeenSet;

                    /**
                     * 密钥值
                     */
                    std::string m_secretValue;
                    bool m_secretValueHasBeenSet;

                    /**
                     * KMS凭证名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kmsKeyName;
                    bool m_kmsKeyNameHasBeenSet;

                    /**
                     * KMS凭证版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kmsKeyVersion;
                    bool m_kmsKeyVersionHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 是否可以绑定
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_canBind;
                    bool m_canBindHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 绑定数
                     */
                    uint64_t m_bindCount;
                    bool m_bindCountHasBeenSet;

                    /**
                     * 资源类型：
- Consumer 消费者
- LLM 模型服务
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CNAPIGWSECRETKEY_H_
