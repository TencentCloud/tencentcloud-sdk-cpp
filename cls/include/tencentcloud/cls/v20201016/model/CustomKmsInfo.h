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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CUSTOMKMSINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CUSTOMKMSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 自定义 KMS 密钥
                */
                class CustomKmsInfo : public AbstractModel
                {
                public:
                    CustomKmsInfo();
                    ~CustomKmsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>KMS支持的地域，详见 腾讯云-密钥管理系统 官方文档</p><p>参数格式：ap-guangzhou</p>
                     * @return KmsRegion <p>KMS支持的地域，详见 腾讯云-密钥管理系统 官方文档</p><p>参数格式：ap-guangzhou</p>
                     * 
                     */
                    std::string GetKmsRegion() const;

                    /**
                     * 设置<p>KMS支持的地域，详见 腾讯云-密钥管理系统 官方文档</p><p>参数格式：ap-guangzhou</p>
                     * @param _kmsRegion <p>KMS支持的地域，详见 腾讯云-密钥管理系统 官方文档</p><p>参数格式：ap-guangzhou</p>
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
                     * 获取<p>KMS秘钥ID</p>
                     * @return KmsKeyId <p>KMS秘钥ID</p>
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置<p>KMS秘钥ID</p>
                     * @param _kmsKeyId <p>KMS秘钥ID</p>
                     * 
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                private:

                    /**
                     * <p>KMS支持的地域，详见 腾讯云-密钥管理系统 官方文档</p><p>参数格式：ap-guangzhou</p>
                     */
                    std::string m_kmsRegion;
                    bool m_kmsRegionHasBeenSet;

                    /**
                     * <p>KMS秘钥ID</p>
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CUSTOMKMSINFO_H_
