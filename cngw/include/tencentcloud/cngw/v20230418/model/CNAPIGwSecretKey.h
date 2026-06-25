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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWSECRETKEY_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWSECRETKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
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
                     * 获取<p>密钥id</p>
                     * @return SecretKeyId <p>密钥id</p>
                     * 
                     */
                    std::string GetSecretKeyId() const;

                    /**
                     * 设置<p>密钥id</p>
                     * @param _secretKeyId <p>密钥id</p>
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
                     * 获取<p>密钥名字</p>
                     * @return Name <p>密钥名字</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>密钥名字</p>
                     * @param _name <p>密钥名字</p>
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
                     * 获取<p>密钥协议类型。</p>
                     * @return SecretType <p>密钥协议类型。</p>
                     * 
                     */
                    std::string GetSecretType() const;

                    /**
                     * 设置<p>密钥协议类型。</p>
                     * @param _secretType <p>密钥协议类型。</p>
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
                     * 获取<p>状态。</p><p>枚举值：</p><ul><li>Enable： 启用</li><li>Disable： 禁用</li></ul>
                     * @return Status <p>状态。</p><p>枚举值：</p><ul><li>Enable： 启用</li><li>Disable： 禁用</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态。</p><p>枚举值：</p><ul><li>Enable： 启用</li><li>Disable： 禁用</li></ul>
                     * @param _status <p>状态。</p><p>枚举值：</p><ul><li>Enable： 启用</li><li>Disable： 禁用</li></ul>
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
                     * 获取<p>密钥生成方式。</p><p>枚举值：</p><ul><li>System： 系统自动生成</li><li>Custom： 用户自定义</li><li>KMS： 使用 KMS 密钥</li></ul>
                     * @return GenerateType <p>密钥生成方式。</p><p>枚举值：</p><ul><li>System： 系统自动生成</li><li>Custom： 用户自定义</li><li>KMS： 使用 KMS 密钥</li></ul>
                     * 
                     */
                    std::string GetGenerateType() const;

                    /**
                     * 设置<p>密钥生成方式。</p><p>枚举值：</p><ul><li>System： 系统自动生成</li><li>Custom： 用户自定义</li><li>KMS： 使用 KMS 密钥</li></ul>
                     * @param _generateType <p>密钥生成方式。</p><p>枚举值：</p><ul><li>System： 系统自动生成</li><li>Custom： 用户自定义</li><li>KMS： 使用 KMS 密钥</li></ul>
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
                     * 获取<p>密钥明文</p>
                     * @return SecretValue <p>密钥明文</p>
                     * 
                     */
                    std::string GetSecretValue() const;

                    /**
                     * 设置<p>密钥明文</p>
                     * @param _secretValue <p>密钥明文</p>
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
                     * 获取<p>KMS凭证名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KmsKeyName <p>KMS凭证名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKmsKeyName() const;

                    /**
                     * 设置<p>KMS凭证名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kmsKeyName <p>KMS凭证名字</p>
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
                     * 获取<p>KMS凭证版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KmsKeyVersion <p>KMS凭证版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKmsKeyVersion() const;

                    /**
                     * 设置<p>KMS凭证版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kmsKeyVersion <p>KMS凭证版本</p>
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
                     * 获取<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>描述</p>
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
                     * 获取<p>是否可以绑定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanBind <p>是否可以绑定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCanBind() const;

                    /**
                     * 设置<p>是否可以绑定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _canBind <p>是否可以绑定</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>修改时间</p>
                     * @return ModifyTime <p>修改时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>修改时间</p>
                     * @param _modifyTime <p>修改时间</p>
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
                     * 获取<p>绑定数</p>
                     * @return BindCount <p>绑定数</p>
                     * 
                     */
                    uint64_t GetBindCount() const;

                    /**
                     * 设置<p>绑定数</p>
                     * @param _bindCount <p>绑定数</p>
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
                     * 获取<p>密钥归属资源类型。</p><p>枚举值：</p><ul><li>Consumer： 消费者</li><li>ModelService： 模型服务</li></ul>
                     * @return ResourceType <p>密钥归属资源类型。</p><p>枚举值：</p><ul><li>Consumer： 消费者</li><li>ModelService： 模型服务</li></ul>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>密钥归属资源类型。</p><p>枚举值：</p><ul><li>Consumer： 消费者</li><li>ModelService： 模型服务</li></ul>
                     * @param _resourceType <p>密钥归属资源类型。</p><p>枚举值：</p><ul><li>Consumer： 消费者</li><li>ModelService： 模型服务</li></ul>
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
                     * <p>密钥id</p>
                     */
                    std::string m_secretKeyId;
                    bool m_secretKeyIdHasBeenSet;

                    /**
                     * <p>密钥名字</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>密钥协议类型。</p>
                     */
                    std::string m_secretType;
                    bool m_secretTypeHasBeenSet;

                    /**
                     * <p>状态。</p><p>枚举值：</p><ul><li>Enable： 启用</li><li>Disable： 禁用</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>密钥生成方式。</p><p>枚举值：</p><ul><li>System： 系统自动生成</li><li>Custom： 用户自定义</li><li>KMS： 使用 KMS 密钥</li></ul>
                     */
                    std::string m_generateType;
                    bool m_generateTypeHasBeenSet;

                    /**
                     * <p>密钥明文</p>
                     */
                    std::string m_secretValue;
                    bool m_secretValueHasBeenSet;

                    /**
                     * <p>KMS凭证名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kmsKeyName;
                    bool m_kmsKeyNameHasBeenSet;

                    /**
                     * <p>KMS凭证版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kmsKeyVersion;
                    bool m_kmsKeyVersionHasBeenSet;

                    /**
                     * <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>是否可以绑定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_canBind;
                    bool m_canBindHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>修改时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>绑定数</p>
                     */
                    uint64_t m_bindCount;
                    bool m_bindCountHasBeenSet;

                    /**
                     * <p>密钥归属资源类型。</p><p>枚举值：</p><ul><li>Consumer： 消费者</li><li>ModelService： 模型服务</li></ul>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWSECRETKEY_H_
