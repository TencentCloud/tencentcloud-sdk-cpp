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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_ENABLETRANSPARENTDATAENCRYPTIONREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_ENABLETRANSPARENTDATAENCRYPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * EnableTransparentDataEncryption请求参数结构体
                */
                class EnableTransparentDataEncryptionRequest : public AbstractModel
                {
                public:
                    EnableTransparentDataEncryptionRequest();
                    ~EnableTransparentDataEncryptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。目前支持通用版本包含：4.4、5.0，云盘版暂不支持。
                     * @return InstanceId 实例 ID，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。目前支持通用版本包含：4.4、5.0，云盘版暂不支持。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。目前支持通用版本包含：4.4、5.0，云盘版暂不支持。
                     * @param _instanceId 实例 ID，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。目前支持通用版本包含：4.4、5.0，云盘版暂不支持。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取 [密钥管理系统（Key Management Service，KMS）](https://cloud.tencent.com/document/product/573/18809)服务所在地域，例如 ap-shanghai。
                     * @return KmsRegion  [密钥管理系统（Key Management Service，KMS）](https://cloud.tencent.com/document/product/573/18809)服务所在地域，例如 ap-shanghai。
                     * 
                     */
                    std::string GetKmsRegion() const;

                    /**
                     * 设置 [密钥管理系统（Key Management Service，KMS）](https://cloud.tencent.com/document/product/573/18809)服务所在地域，例如 ap-shanghai。
                     * @param _kmsRegion  [密钥管理系统（Key Management Service，KMS）](https://cloud.tencent.com/document/product/573/18809)服务所在地域，例如 ap-shanghai。
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
                     * 获取密钥 ID。若不设置该参数，不指定具体的密钥 ID，由腾讯云自动生成密钥。
                     * @return KeyId 密钥 ID。若不设置该参数，不指定具体的密钥 ID，由腾讯云自动生成密钥。
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置密钥 ID。若不设置该参数，不指定具体的密钥 ID，由腾讯云自动生成密钥。
                     * @param _keyId 密钥 ID。若不设置该参数，不指定具体的密钥 ID，由腾讯云自动生成密钥。
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。目前支持通用版本包含：4.4、5.0，云盘版暂不支持。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     *  [密钥管理系统（Key Management Service，KMS）](https://cloud.tencent.com/document/product/573/18809)服务所在地域，例如 ap-shanghai。
                     */
                    std::string m_kmsRegion;
                    bool m_kmsRegionHasBeenSet;

                    /**
                     * 密钥 ID。若不设置该参数，不指定具体的密钥 ID，由腾讯云自动生成密钥。
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_ENABLETRANSPARENTDATAENCRYPTIONREQUEST_H_
