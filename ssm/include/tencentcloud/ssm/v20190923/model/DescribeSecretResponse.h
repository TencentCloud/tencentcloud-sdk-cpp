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


                    /**
                     * 获取凭据名称。
                     * @return SecretName 凭据名称。
                     */
                    std::string GetSecretName() const;

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取凭据描述信息。
                     * @return Description 凭据描述信息。
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取用于加密的KMS CMK ID。
                     * @return KmsKeyId 用于加密的KMS CMK ID。
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     */
                    bool KmsKeyIdHasBeenSet() const;

                    /**
                     * 获取创建者UIN。
                     * @return CreateUin 创建者UIN。
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取凭据状态：Enabled、Disabled、PendingDelete, Creating, Failed。
                     * @return Status 凭据状态：Enabled、Disabled、PendingDelete, Creating, Failed。
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取删除日期，uinx 时间戳，非计划删除状态的凭据为0。
                     * @return DeleteTime 删除日期，uinx 时间戳，非计划删除状态的凭据为0。
                     */
                    uint64_t GetDeleteTime() const;

                    /**
                     * 判断参数 DeleteTime 是否已赋值
                     * @return DeleteTime 是否已赋值
                     */
                    bool DeleteTimeHasBeenSet() const;

                    /**
                     * 获取创建日期。
                     * @return CreateTime 创建日期。
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取0 --  用户自定义凭据类型；1 -- 云产品凭据类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretType 0 --  用户自定义凭据类型；1 -- 云产品凭据类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSecretType() const;

                    /**
                     * 判断参数 SecretType 是否已赋值
                     * @return SecretType 是否已赋值
                     */
                    bool SecretTypeHasBeenSet() const;

                    /**
                     * 获取云产品名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductName 云产品名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProductName() const;

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取云产品实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceID 云产品实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResourceID() const;

                    /**
                     * 判断参数 ResourceID 是否已赋值
                     * @return ResourceID 是否已赋值
                     */
                    bool ResourceIDHasBeenSet() const;

                    /**
                     * 获取是否开启轮转：True -- 开启轮转；False -- 禁止轮转。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RotationStatus 是否开启轮转：True -- 开启轮转；False -- 禁止轮转。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetRotationStatus() const;

                    /**
                     * 判断参数 RotationStatus 是否已赋值
                     * @return RotationStatus 是否已赋值
                     */
                    bool RotationStatusHasBeenSet() const;

                    /**
                     * 获取轮转周期，默认以天为单位。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RotationFrequency 轮转周期，默认以天为单位。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRotationFrequency() const;

                    /**
                     * 判断参数 RotationFrequency 是否已赋值
                     * @return RotationFrequency 是否已赋值
                     */
                    bool RotationFrequencyHasBeenSet() const;

                private:

                    /**
                     * 凭据名称。
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * 凭据描述信息。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 用于加密的KMS CMK ID。
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * 创建者UIN。
                     */
                    uint64_t m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * 凭据状态：Enabled、Disabled、PendingDelete, Creating, Failed。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 删除日期，uinx 时间戳，非计划删除状态的凭据为0。
                     */
                    uint64_t m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                    /**
                     * 创建日期。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 0 --  用户自定义凭据类型；1 -- 云产品凭据类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_secretType;
                    bool m_secretTypeHasBeenSet;

                    /**
                     * 云产品名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 云产品实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceID;
                    bool m_resourceIDHasBeenSet;

                    /**
                     * 是否开启轮转：True -- 开启轮转；False -- 禁止轮转。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_rotationStatus;
                    bool m_rotationStatusHasBeenSet;

                    /**
                     * 轮转周期，默认以天为单位。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rotationFrequency;
                    bool m_rotationFrequencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBESECRETRESPONSE_H_
