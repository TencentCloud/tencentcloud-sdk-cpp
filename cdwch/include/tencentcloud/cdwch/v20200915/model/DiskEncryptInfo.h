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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_DISKENCRYPTINFO_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_DISKENCRYPTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * 群磁盘加密信息。用于 DescribeInstances / DescribeInstance 返回实例的当前加密配置，供控制台、SDK、运维侧识别该集群是否启用磁盘加密、使用的是哪一把 KMS 根密钥
                */
                class DiskEncryptInfo : public AbstractModel
                {
                public:
                    DiskEncryptInfo();
                    ~DiskEncryptInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>加密类型</p><p>枚举值：</p><ul><li>CUSTOMER_KMS： 客户自定义的KMS密钥信息</li><li>TENCENT_KEY： 使用腾讯云自动创建的KMS密钥信息</li></ul>
                     * @return EncryptType <p>加密类型</p><p>枚举值：</p><ul><li>CUSTOMER_KMS： 客户自定义的KMS密钥信息</li><li>TENCENT_KEY： 使用腾讯云自动创建的KMS密钥信息</li></ul>
                     * 
                     */
                    std::string GetEncryptType() const;

                    /**
                     * 设置<p>加密类型</p><p>枚举值：</p><ul><li>CUSTOMER_KMS： 客户自定义的KMS密钥信息</li><li>TENCENT_KEY： 使用腾讯云自动创建的KMS密钥信息</li></ul>
                     * @param _encryptType <p>加密类型</p><p>枚举值：</p><ul><li>CUSTOMER_KMS： 客户自定义的KMS密钥信息</li><li>TENCENT_KEY： 使用腾讯云自动创建的KMS密钥信息</li></ul>
                     * 
                     */
                    void SetEncryptType(const std::string& _encryptType);

                    /**
                     * 判断参数 EncryptType 是否已赋值
                     * @return EncryptType 是否已赋值
                     * 
                     */
                    bool EncryptTypeHasBeenSet() const;

                    /**
                     * 获取<p>KMS 根密钥ID</p>
                     * @return KmsKeyId <p>KMS 根密钥ID</p>
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置<p>KMS 根密钥ID</p>
                     * @param _kmsKeyId <p>KMS 根密钥ID</p>
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
                     * 获取<p>KMS密钥地域</p>
                     * @return KmsRegion <p>KMS密钥地域</p>
                     * 
                     */
                    std::string GetKmsRegion() const;

                    /**
                     * 设置<p>KMS密钥地域</p>
                     * @param _kmsRegion <p>KMS密钥地域</p>
                     * 
                     */
                    void SetKmsRegion(const std::string& _kmsRegion);

                    /**
                     * 判断参数 KmsRegion 是否已赋值
                     * @return KmsRegion 是否已赋值
                     * 
                     */
                    bool KmsRegionHasBeenSet() const;

                    /**
                     * 获取<p>KMS 根密钥 key 名</p>
                     * @return KmsKeyName <p>KMS 根密钥 key 名</p>
                     * 
                     */
                    std::string GetKmsKeyName() const;

                    /**
                     * 设置<p>KMS 根密钥 key 名</p>
                     * @param _kmsKeyName <p>KMS 根密钥 key 名</p>
                     * 
                     */
                    void SetKmsKeyName(const std::string& _kmsKeyName);

                    /**
                     * 判断参数 KmsKeyName 是否已赋值
                     * @return KmsKeyName 是否已赋值
                     * 
                     */
                    bool KmsKeyNameHasBeenSet() const;

                private:

                    /**
                     * <p>加密类型</p><p>枚举值：</p><ul><li>CUSTOMER_KMS： 客户自定义的KMS密钥信息</li><li>TENCENT_KEY： 使用腾讯云自动创建的KMS密钥信息</li></ul>
                     */
                    std::string m_encryptType;
                    bool m_encryptTypeHasBeenSet;

                    /**
                     * <p>KMS 根密钥ID</p>
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * <p>KMS密钥地域</p>
                     */
                    std::string m_kmsRegion;
                    bool m_kmsRegionHasBeenSet;

                    /**
                     * <p>KMS 根密钥 key 名</p>
                     */
                    std::string m_kmsKeyName;
                    bool m_kmsKeyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_DISKENCRYPTINFO_H_
