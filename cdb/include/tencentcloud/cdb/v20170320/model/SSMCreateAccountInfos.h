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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_SSMCREATEACCOUNTINFOS_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_SSMCREATEACCOUNTINFOS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/PrivilegeGroup.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 创建SSM账号相关信息
                */
                class SSMCreateAccountInfos : public AbstractModel
                {
                public:
                    SSMCreateAccountInfos();
                    ~SSMCreateAccountInfos() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否开启SSM托管</p><p>枚举值：</p><ul><li>true： 开启托管</li><li>false： 不开启托管</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsOpenSSM <p>是否开启SSM托管</p><p>枚举值：</p><ul><li>true： 开启托管</li><li>false： 不开启托管</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsOpenSSM() const;

                    /**
                     * 设置<p>是否开启SSM托管</p><p>枚举值：</p><ul><li>true： 开启托管</li><li>false： 不开启托管</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isOpenSSM <p>是否开启SSM托管</p><p>枚举值：</p><ul><li>true： 开启托管</li><li>false： 不开启托管</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsOpenSSM(const bool& _isOpenSSM);

                    /**
                     * 判断参数 IsOpenSSM 是否已赋值
                     * @return IsOpenSSM 是否已赋值
                     * 
                     */
                    bool IsOpenSSMHasBeenSet() const;

                    /**
                     * 获取<p>是否创建轮转账号</p><p>枚举值：</p><ul><li>true： 创建轮转账号</li><li>false： 创建非轮转账号</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsRotationAccount <p>是否创建轮转账号</p><p>枚举值：</p><ul><li>true： 创建轮转账号</li><li>false： 创建非轮转账号</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsRotationAccount() const;

                    /**
                     * 设置<p>是否创建轮转账号</p><p>枚举值：</p><ul><li>true： 创建轮转账号</li><li>false： 创建非轮转账号</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isRotationAccount <p>是否创建轮转账号</p><p>枚举值：</p><ul><li>true： 创建轮转账号</li><li>false： 创建非轮转账号</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsRotationAccount(const bool& _isRotationAccount);

                    /**
                     * 判断参数 IsRotationAccount 是否已赋值
                     * @return IsRotationAccount 是否已赋值
                     * 
                     */
                    bool IsRotationAccountHasBeenSet() const;

                    /**
                     * 获取<p>凭据名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretName <p>凭据名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置<p>凭据名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretName <p>凭据名称</p>
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
                     * 获取<p>KMS CMK ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KmsKeyId <p>KMS CMK ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置<p>KMS CMK ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kmsKeyId <p>KMS CMK ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>密钥类型</p><p>枚举值：</p><ul><li>0： KMS密码</li><li>1： 软件密钥</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EncryptType <p>密钥类型</p><p>枚举值：</p><ul><li>0： KMS密码</li><li>1： 软件密钥</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEncryptType() const;

                    /**
                     * 设置<p>密钥类型</p><p>枚举值：</p><ul><li>0： KMS密码</li><li>1： 软件密钥</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _encryptType <p>密钥类型</p><p>枚举值：</p><ul><li>0： KMS密码</li><li>1： 软件密钥</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEncryptType(const int64_t& _encryptType);

                    /**
                     * 判断参数 EncryptType 是否已赋值
                     * @return EncryptType 是否已赋值
                     * 
                     */
                    bool EncryptTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启轮转</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableRotation <p>是否开启轮转</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableRotation() const;

                    /**
                     * 设置<p>是否开启轮转</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableRotation <p>是否开启轮转</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableRotation(const bool& _enableRotation);

                    /**
                     * 判断参数 EnableRotation 是否已赋值
                     * @return EnableRotation 是否已赋值
                     * 
                     */
                    bool EnableRotationHasBeenSet() const;

                    /**
                     * 获取<p>轮转周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RotationFrequency <p>轮转周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRotationFrequency() const;

                    /**
                     * 设置<p>轮转周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rotationFrequency <p>轮转周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRotationFrequency(const int64_t& _rotationFrequency);

                    /**
                     * 判断参数 RotationFrequency 是否已赋值
                     * @return RotationFrequency 是否已赋值
                     * 
                     */
                    bool RotationFrequencyHasBeenSet() const;

                    /**
                     * 获取<p>权限列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivilegesList <p>权限列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PrivilegeGroup GetPrivilegesList() const;

                    /**
                     * 设置<p>权限列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privilegesList <p>权限列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivilegesList(const PrivilegeGroup& _privilegesList);

                    /**
                     * 判断参数 PrivilegesList 是否已赋值
                     * @return PrivilegesList 是否已赋值
                     * 
                     */
                    bool PrivilegesListHasBeenSet() const;

                    /**
                     * 获取<p>独享版 KMS 集群 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KmsHsmClusterId <p>独享版 KMS 集群 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKmsHsmClusterId() const;

                    /**
                     * 设置<p>独享版 KMS 集群 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kmsHsmClusterId <p>独享版 KMS 集群 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKmsHsmClusterId(const std::string& _kmsHsmClusterId);

                    /**
                     * 判断参数 KmsHsmClusterId 是否已赋值
                     * @return KmsHsmClusterId 是否已赋值
                     * 
                     */
                    bool KmsHsmClusterIdHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启SSM托管</p><p>枚举值：</p><ul><li>true： 开启托管</li><li>false： 不开启托管</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isOpenSSM;
                    bool m_isOpenSSMHasBeenSet;

                    /**
                     * <p>是否创建轮转账号</p><p>枚举值：</p><ul><li>true： 创建轮转账号</li><li>false： 创建非轮转账号</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isRotationAccount;
                    bool m_isRotationAccountHasBeenSet;

                    /**
                     * <p>凭据名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * <p>KMS CMK ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * <p>密钥类型</p><p>枚举值：</p><ul><li>0： KMS密码</li><li>1： 软件密钥</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_encryptType;
                    bool m_encryptTypeHasBeenSet;

                    /**
                     * <p>是否开启轮转</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableRotation;
                    bool m_enableRotationHasBeenSet;

                    /**
                     * <p>轮转周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rotationFrequency;
                    bool m_rotationFrequencyHasBeenSet;

                    /**
                     * <p>权限列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PrivilegeGroup m_privilegesList;
                    bool m_privilegesListHasBeenSet;

                    /**
                     * <p>独享版 KMS 集群 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kmsHsmClusterId;
                    bool m_kmsHsmClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_SSMCREATEACCOUNTINFOS_H_
