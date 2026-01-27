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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_KMSCONFIGURATION_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_KMSCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * kms加密参数
                */
                class KMSConfiguration : public AbstractModel
                {
                public:
                    KMSConfiguration();
                    ~KMSConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义密钥,当不指定KeyId时，采用默认生成密钥（TKE-KMS）
                     * @return KeyId 自定义密钥,当不指定KeyId时，采用默认生成密钥（TKE-KMS）
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置自定义密钥,当不指定KeyId时，采用默认生成密钥（TKE-KMS）
                     * @param _keyId 自定义密钥,当不指定KeyId时，采用默认生成密钥（TKE-KMS）
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
                     * 获取默认生成密钥或自定义密钥地域信息
                     * @return KmsRegion 默认生成密钥或自定义密钥地域信息
                     * 
                     */
                    std::string GetKmsRegion() const;

                    /**
                     * 设置默认生成密钥或自定义密钥地域信息
                     * @param _kmsRegion 默认生成密钥或自定义密钥地域信息
                     * 
                     */
                    void SetKmsRegion(const std::string& _kmsRegion);

                    /**
                     * 判断参数 KmsRegion 是否已赋值
                     * @return KmsRegion 是否已赋值
                     * 
                     */
                    bool KmsRegionHasBeenSet() const;

                private:

                    /**
                     * 自定义密钥,当不指定KeyId时，采用默认生成密钥（TKE-KMS）
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 默认生成密钥或自定义密钥地域信息
                     */
                    std::string m_kmsRegion;
                    bool m_kmsRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_KMSCONFIGURATION_H_
