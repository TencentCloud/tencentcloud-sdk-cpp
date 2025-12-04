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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_IMPORTDATAKEYREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_IMPORTDATAKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/kms/v20190118/model/Tag.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * ImportDataKey请求参数结构体
                */
                class ImportDataKeyRequest : public AbstractModel
                {
                public:
                    ImportDataKeyRequest();
                    ~ImportDataKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据密钥的名称
                     * @return DataKeyName 数据密钥的名称
                     * 
                     */
                    std::string GetDataKeyName() const;

                    /**
                     * 设置数据密钥的名称
                     * @param _dataKeyName 数据密钥的名称
                     * 
                     */
                    void SetDataKeyName(const std::string& _dataKeyName);

                    /**
                     * 判断参数 DataKeyName 是否已赋值
                     * @return DataKeyName 是否已赋值
                     * 
                     */
                    bool DataKeyNameHasBeenSet() const;

                    /**
                     * 获取如果导入的是明文数据密钥，则是base64 转换后的明文数据密钥，  如果导入的是密文数据密钥，则是由KMS GenerateDataKey接口生成的密文数据密钥。
                     * @return ImportKeyMaterial 如果导入的是明文数据密钥，则是base64 转换后的明文数据密钥，  如果导入的是密文数据密钥，则是由KMS GenerateDataKey接口生成的密文数据密钥。
                     * 
                     */
                    std::string GetImportKeyMaterial() const;

                    /**
                     * 设置如果导入的是明文数据密钥，则是base64 转换后的明文数据密钥，  如果导入的是密文数据密钥，则是由KMS GenerateDataKey接口生成的密文数据密钥。
                     * @param _importKeyMaterial 如果导入的是明文数据密钥，则是base64 转换后的明文数据密钥，  如果导入的是密文数据密钥，则是由KMS GenerateDataKey接口生成的密文数据密钥。
                     * 
                     */
                    void SetImportKeyMaterial(const std::string& _importKeyMaterial);

                    /**
                     * 判断参数 ImportKeyMaterial 是否已赋值
                     * @return ImportKeyMaterial 是否已赋值
                     * 
                     */
                    bool ImportKeyMaterialHasBeenSet() const;

                    /**
                     * 获取1:密文导入(由KMS接口生成的密文数据密钥)，2:明文导入。
                     * @return ImportType 1:密文导入(由KMS接口生成的密文数据密钥)，2:明文导入。
                     * 
                     */
                    uint64_t GetImportType() const;

                    /**
                     * 设置1:密文导入(由KMS接口生成的密文数据密钥)，2:明文导入。
                     * @param _importType 1:密文导入(由KMS接口生成的密文数据密钥)，2:明文导入。
                     * 
                     */
                    void SetImportType(const uint64_t& _importType);

                    /**
                     * 判断参数 ImportType 是否已赋值
                     * @return ImportType 是否已赋值
                     * 
                     */
                    bool ImportTypeHasBeenSet() const;

                    /**
                     * 获取数据密钥 的描述，最大100字节
                     * @return Description 数据密钥 的描述，最大100字节
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置数据密钥 的描述，最大100字节
                     * @param _description 数据密钥 的描述，最大100字节
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
                     * 获取当导入密文数据密钥时，无需传入根密钥,如果传入会校验此KeyId是否和密文中一致。
当导入明文数据密钥，KeyId 不能为空，会根据指定的根密钥加密数据密钥。
                     * @return KeyId 当导入密文数据密钥时，无需传入根密钥,如果传入会校验此KeyId是否和密文中一致。
当导入明文数据密钥，KeyId 不能为空，会根据指定的根密钥加密数据密钥。
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置当导入密文数据密钥时，无需传入根密钥,如果传入会校验此KeyId是否和密文中一致。
当导入明文数据密钥，KeyId 不能为空，会根据指定的根密钥加密数据密钥。
                     * @param _keyId 当导入密文数据密钥时，无需传入根密钥,如果传入会校验此KeyId是否和密文中一致。
当导入明文数据密钥，KeyId 不能为空，会根据指定的根密钥加密数据密钥。
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取KMS 独享版对应的 HSM 集群 ID。如果指定HsmClusterId，表明根密钥在此集群里，会校验KeyId是否和HsmClusterId对应。
                     * @return HsmClusterId KMS 独享版对应的 HSM 集群 ID。如果指定HsmClusterId，表明根密钥在此集群里，会校验KeyId是否和HsmClusterId对应。
                     * 
                     */
                    std::string GetHsmClusterId() const;

                    /**
                     * 设置KMS 独享版对应的 HSM 集群 ID。如果指定HsmClusterId，表明根密钥在此集群里，会校验KeyId是否和HsmClusterId对应。
                     * @param _hsmClusterId KMS 独享版对应的 HSM 集群 ID。如果指定HsmClusterId，表明根密钥在此集群里，会校验KeyId是否和HsmClusterId对应。
                     * 
                     */
                    void SetHsmClusterId(const std::string& _hsmClusterId);

                    /**
                     * 判断参数 HsmClusterId 是否已赋值
                     * @return HsmClusterId 是否已赋值
                     * 
                     */
                    bool HsmClusterIdHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return Tags 标签列表
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表
                     * @param _tags 标签列表
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
                     * 数据密钥的名称
                     */
                    std::string m_dataKeyName;
                    bool m_dataKeyNameHasBeenSet;

                    /**
                     * 如果导入的是明文数据密钥，则是base64 转换后的明文数据密钥，  如果导入的是密文数据密钥，则是由KMS GenerateDataKey接口生成的密文数据密钥。
                     */
                    std::string m_importKeyMaterial;
                    bool m_importKeyMaterialHasBeenSet;

                    /**
                     * 1:密文导入(由KMS接口生成的密文数据密钥)，2:明文导入。
                     */
                    uint64_t m_importType;
                    bool m_importTypeHasBeenSet;

                    /**
                     * 数据密钥 的描述，最大100字节
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 当导入密文数据密钥时，无需传入根密钥,如果传入会校验此KeyId是否和密文中一致。
当导入明文数据密钥，KeyId 不能为空，会根据指定的根密钥加密数据密钥。
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * KMS 独享版对应的 HSM 集群 ID。如果指定HsmClusterId，表明根密钥在此集群里，会校验KeyId是否和HsmClusterId对应。
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_IMPORTDATAKEYREQUEST_H_
