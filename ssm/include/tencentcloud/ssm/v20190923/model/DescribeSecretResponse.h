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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBESECRETRESPONSE_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBESECRETRESPONSE_H_

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
                * DescribeSecret返回参数结构体
                */
                class DescribeSecretResponse : public AbstractModel
                {
                public:
                    DescribeSecretResponse();
                    ~DescribeSecretResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>凭据名称。</p>
                     * @return SecretName <p>凭据名称。</p>
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取<p>凭据描述信息。</p>
                     * @return Description <p>凭据描述信息。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>用于加密的KMS CMK ID。</p>
                     * @return KmsKeyId <p>用于加密的KMS CMK ID。</p>
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>创建者UIN。</p>
                     * @return CreateUin <p>创建者UIN。</p>
                     * 
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     * 
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取<p>凭据状态：Enabled、Disabled、PendingDelete, Creating, Failed。</p>
                     * @return Status <p>凭据状态：Enabled、Disabled、PendingDelete, Creating, Failed。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>删除日期，uinx 时间戳，非计划删除状态的凭据为0。</p>
                     * @return DeleteTime <p>删除日期，uinx 时间戳，非计划删除状态的凭据为0。</p>
                     * 
                     */
                    uint64_t GetDeleteTime() const;

                    /**
                     * 判断参数 DeleteTime 是否已赋值
                     * @return DeleteTime 是否已赋值
                     * 
                     */
                    bool DeleteTimeHasBeenSet() const;

                    /**
                     * 获取<p>创建日期。</p>
                     * @return CreateTime <p>创建日期。</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>0 --  用户自定义凭据类型；1 -- 数据库凭据类型；2 -- SSH密钥对凭据类型；3 -- 云API密钥（AKSK）凭据类型（使用此功能需要联系云助手单独开启白名单）；4 -- Redis类型凭据。</p>
                     * @return SecretType <p>0 --  用户自定义凭据类型；1 -- 数据库凭据类型；2 -- SSH密钥对凭据类型；3 -- 云API密钥（AKSK）凭据类型（使用此功能需要联系云助手单独开启白名单）；4 -- Redis类型凭据。</p>
                     * 
                     */
                    int64_t GetSecretType() const;

                    /**
                     * 判断参数 SecretType 是否已赋值
                     * @return SecretType 是否已赋值
                     * 
                     */
                    bool SecretTypeHasBeenSet() const;

                    /**
                     * 获取<p>云产品名称。</p>
                     * @return ProductName <p>云产品名称。</p>
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取<p>云产品实例ID。</p>
                     * @return ResourceID <p>云产品实例ID。</p>
                     * 
                     */
                    std::string GetResourceID() const;

                    /**
                     * 判断参数 ResourceID 是否已赋值
                     * @return ResourceID 是否已赋值
                     * 
                     */
                    bool ResourceIDHasBeenSet() const;

                    /**
                     * 获取<p>是否开启轮转：True -- 开启轮转；False -- 关闭轮转。</p>
                     * @return RotationStatus <p>是否开启轮转：True -- 开启轮转；False -- 关闭轮转。</p>
                     * 
                     */
                    bool GetRotationStatus() const;

                    /**
                     * 判断参数 RotationStatus 是否已赋值
                     * @return RotationStatus 是否已赋值
                     * 
                     */
                    bool RotationStatusHasBeenSet() const;

                    /**
                     * 获取<p>轮转周期，默认以天为单位。</p>
                     * @return RotationFrequency <p>轮转周期，默认以天为单位。</p>
                     * 
                     */
                    int64_t GetRotationFrequency() const;

                    /**
                     * 判断参数 RotationFrequency 是否已赋值
                     * @return RotationFrequency 是否已赋值
                     * 
                     */
                    bool RotationFrequencyHasBeenSet() const;

                    /**
                     * 获取<p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对凭据的名称。</p>
                     * @return ResourceName <p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对凭据的名称。</p>
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取<p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所属的项目ID。</p>
                     * @return ProjectID <p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所属的项目ID。</p>
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     * 
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取<p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所关联的CVM实例ID。</p>
                     * @return AssociatedInstanceIDs <p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所关联的CVM实例ID。</p>
                     * 
                     */
                    std::vector<std::string> GetAssociatedInstanceIDs() const;

                    /**
                     * 判断参数 AssociatedInstanceIDs 是否已赋值
                     * @return AssociatedInstanceIDs 是否已赋值
                     * 
                     */
                    bool AssociatedInstanceIDsHasBeenSet() const;

                    /**
                     * 获取<p>当凭据类型为云API密钥对凭据时，此字段有效，用于表示此云API密钥对所属的用户UIN。</p>
                     * @return TargetUin <p>当凭据类型为云API密钥对凭据时，此字段有效，用于表示此云API密钥对所属的用户UIN。</p>
                     * 
                     */
                    uint64_t GetTargetUin() const;

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                    /**
                     * 获取<p>凭据额外配置</p>
                     * @return AdditionalConfig <p>凭据额外配置</p>
                     * 
                     */
                    std::string GetAdditionalConfig() const;

                    /**
                     * 判断参数 AdditionalConfig 是否已赋值
                     * @return AdditionalConfig 是否已赋值
                     * 
                     */
                    bool AdditionalConfigHasBeenSet() const;

                    /**
                     * 获取<p>凭据加密类型</p><p>枚举值：</p><ul><li>0： KMS 密钥加密</li><li>1： 软密钥加密</li></ul><p>默认值：0</p>
                     * @return EncryptType <p>凭据加密类型</p><p>枚举值：</p><ul><li>0： KMS 密钥加密</li><li>1： 软密钥加密</li></ul><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetEncryptType() const;

                    /**
                     * 判断参数 EncryptType 是否已赋值
                     * @return EncryptType 是否已赋值
                     * 
                     */
                    bool EncryptTypeHasBeenSet() const;

                    /**
                     * 获取<p>凭据更新状态</p>
                     * @return EncryptSwitching <p>凭据更新状态</p>
                     * 
                     */
                    bool GetEncryptSwitching() const;

                    /**
                     * 判断参数 EncryptSwitching 是否已赋值
                     * @return EncryptSwitching 是否已赋值
                     * 
                     */
                    bool EncryptSwitchingHasBeenSet() const;

                private:

                    /**
                     * <p>凭据名称。</p>
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * <p>凭据描述信息。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>用于加密的KMS CMK ID。</p>
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * <p>创建者UIN。</p>
                     */
                    uint64_t m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * <p>凭据状态：Enabled、Disabled、PendingDelete, Creating, Failed。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>删除日期，uinx 时间戳，非计划删除状态的凭据为0。</p>
                     */
                    uint64_t m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                    /**
                     * <p>创建日期。</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>0 --  用户自定义凭据类型；1 -- 数据库凭据类型；2 -- SSH密钥对凭据类型；3 -- 云API密钥（AKSK）凭据类型（使用此功能需要联系云助手单独开启白名单）；4 -- Redis类型凭据。</p>
                     */
                    int64_t m_secretType;
                    bool m_secretTypeHasBeenSet;

                    /**
                     * <p>云产品名称。</p>
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * <p>云产品实例ID。</p>
                     */
                    std::string m_resourceID;
                    bool m_resourceIDHasBeenSet;

                    /**
                     * <p>是否开启轮转：True -- 开启轮转；False -- 关闭轮转。</p>
                     */
                    bool m_rotationStatus;
                    bool m_rotationStatusHasBeenSet;

                    /**
                     * <p>轮转周期，默认以天为单位。</p>
                     */
                    int64_t m_rotationFrequency;
                    bool m_rotationFrequencyHasBeenSet;

                    /**
                     * <p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对凭据的名称。</p>
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * <p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所属的项目ID。</p>
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * <p>当凭据类型为SSH密钥对凭据时，此字段有效，用于表示SSH密钥对所关联的CVM实例ID。</p>
                     */
                    std::vector<std::string> m_associatedInstanceIDs;
                    bool m_associatedInstanceIDsHasBeenSet;

                    /**
                     * <p>当凭据类型为云API密钥对凭据时，此字段有效，用于表示此云API密钥对所属的用户UIN。</p>
                     */
                    uint64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * <p>凭据额外配置</p>
                     */
                    std::string m_additionalConfig;
                    bool m_additionalConfigHasBeenSet;

                    /**
                     * <p>凭据加密类型</p><p>枚举值：</p><ul><li>0： KMS 密钥加密</li><li>1： 软密钥加密</li></ul><p>默认值：0</p>
                     */
                    uint64_t m_encryptType;
                    bool m_encryptTypeHasBeenSet;

                    /**
                     * <p>凭据更新状态</p>
                     */
                    bool m_encryptSwitching;
                    bool m_encryptSwitchingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBESECRETRESPONSE_H_
