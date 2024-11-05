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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_WHITEBOXKEYINFO_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_WHITEBOXKEYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * 白盒密钥信息
                */
                class WhiteboxKeyInfo : public AbstractModel
                {
                public:
                    WhiteboxKeyInfo();
                    ~WhiteboxKeyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取白盒密钥的全局唯一标识符
                     * @return KeyId 白盒密钥的全局唯一标识符
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置白盒密钥的全局唯一标识符
                     * @param _keyId 白盒密钥的全局唯一标识符
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
                     * 获取作为密钥更容易辨识，更容易被人看懂的别名， 不可为空，1-60个字母数字 - _ 的组合，首字符必须为字母或者数字. 不可重复
                     * @return Alias 作为密钥更容易辨识，更容易被人看懂的别名， 不可为空，1-60个字母数字 - _ 的组合，首字符必须为字母或者数字. 不可重复
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置作为密钥更容易辨识，更容易被人看懂的别名， 不可为空，1-60个字母数字 - _ 的组合，首字符必须为字母或者数字. 不可重复
                     * @param _alias 作为密钥更容易辨识，更容易被人看懂的别名， 不可为空，1-60个字母数字 - _ 的组合，首字符必须为字母或者数字. 不可重复
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取创建者
                     * @return CreatorUin 创建者
                     * 
                     */
                    uint64_t GetCreatorUin() const;

                    /**
                     * 设置创建者
                     * @param _creatorUin 创建者
                     * 
                     */
                    void SetCreatorUin(const uint64_t& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取密钥的描述信息
                     * @return Description 密钥的描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置密钥的描述信息
                     * @param _description 密钥的描述信息
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
                     * 获取密钥创建时间，Unix时间戳
                     * @return CreateTime 密钥创建时间，Unix时间戳
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置密钥创建时间，Unix时间戳
                     * @param _createTime 密钥创建时间，Unix时间戳
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取白盒密钥的状态， 取值为：Enabled | Disabled
                     * @return Status 白盒密钥的状态， 取值为：Enabled | Disabled
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置白盒密钥的状态， 取值为：Enabled | Disabled
                     * @param _status 白盒密钥的状态， 取值为：Enabled | Disabled
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
                     * 获取创建者
                     * @return OwnerUin 创建者
                     * 
                     */
                    uint64_t GetOwnerUin() const;

                    /**
                     * 设置创建者
                     * @param _ownerUin 创建者
                     * 
                     */
                    void SetOwnerUin(const uint64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取密钥所用的算法类型
                     * @return Algorithm 密钥所用的算法类型
                     * 
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置密钥所用的算法类型
                     * @param _algorithm 密钥所用的算法类型
                     * 
                     */
                    void SetAlgorithm(const std::string& _algorithm);

                    /**
                     * 判断参数 Algorithm 是否已赋值
                     * @return Algorithm 是否已赋值
                     * 
                     */
                    bool AlgorithmHasBeenSet() const;

                    /**
                     * 获取白盒加密密钥，base64编码
                     * @return EncryptKey 白盒加密密钥，base64编码
                     * 
                     */
                    std::string GetEncryptKey() const;

                    /**
                     * 设置白盒加密密钥，base64编码
                     * @param _encryptKey 白盒加密密钥，base64编码
                     * 
                     */
                    void SetEncryptKey(const std::string& _encryptKey);

                    /**
                     * 判断参数 EncryptKey 是否已赋值
                     * @return EncryptKey 是否已赋值
                     * 
                     */
                    bool EncryptKeyHasBeenSet() const;

                    /**
                     * 获取白盒解密密钥，base64编码
                     * @return DecryptKey 白盒解密密钥，base64编码
                     * 
                     */
                    std::string GetDecryptKey() const;

                    /**
                     * 设置白盒解密密钥，base64编码
                     * @param _decryptKey 白盒解密密钥，base64编码
                     * 
                     */
                    void SetDecryptKey(const std::string& _decryptKey);

                    /**
                     * 判断参数 DecryptKey 是否已赋值
                     * @return DecryptKey 是否已赋值
                     * 
                     */
                    bool DecryptKeyHasBeenSet() const;

                    /**
                     * 获取资源ID，格式：creatorUin/$creatorUin/$keyId
                     * @return ResourceId 资源ID，格式：creatorUin/$creatorUin/$keyId
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID，格式：creatorUin/$creatorUin/$keyId
                     * @param _resourceId 资源ID，格式：creatorUin/$creatorUin/$keyId
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取是否有设备指纹与当前密钥绑定
                     * @return DeviceFingerprintBind 是否有设备指纹与当前密钥绑定
                     * 
                     */
                    bool GetDeviceFingerprintBind() const;

                    /**
                     * 设置是否有设备指纹与当前密钥绑定
                     * @param _deviceFingerprintBind 是否有设备指纹与当前密钥绑定
                     * 
                     */
                    void SetDeviceFingerprintBind(const bool& _deviceFingerprintBind);

                    /**
                     * 判断参数 DeviceFingerprintBind 是否已赋值
                     * @return DeviceFingerprintBind 是否已赋值
                     * 
                     */
                    bool DeviceFingerprintBindHasBeenSet() const;

                private:

                    /**
                     * 白盒密钥的全局唯一标识符
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 作为密钥更容易辨识，更容易被人看懂的别名， 不可为空，1-60个字母数字 - _ 的组合，首字符必须为字母或者数字. 不可重复
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 创建者
                     */
                    uint64_t m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * 密钥的描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 密钥创建时间，Unix时间戳
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 白盒密钥的状态， 取值为：Enabled | Disabled
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建者
                     */
                    uint64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 密钥所用的算法类型
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * 白盒加密密钥，base64编码
                     */
                    std::string m_encryptKey;
                    bool m_encryptKeyHasBeenSet;

                    /**
                     * 白盒解密密钥，base64编码
                     */
                    std::string m_decryptKey;
                    bool m_decryptKeyHasBeenSet;

                    /**
                     * 资源ID，格式：creatorUin/$creatorUin/$keyId
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 是否有设备指纹与当前密钥绑定
                     */
                    bool m_deviceFingerprintBind;
                    bool m_deviceFingerprintBindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_WHITEBOXKEYINFO_H_
