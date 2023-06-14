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

#ifndef TENCENTCLOUD_DRM_V20181115_MODEL_KEYPARAM_H_
#define TENCENTCLOUD_DRM_V20181115_MODEL_KEYPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Drm
    {
        namespace V20181115
        {
            namespace Model
            {
                /**
                * 设置加密密钥所需的参数
                */
                class KeyParam : public AbstractModel
                {
                public:
                    KeyParam();
                    ~KeyParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取加密track类型。取值范围：
SD、HD、UHD1、UHD2、AUDIO
                     * @return Track 加密track类型。取值范围：
SD、HD、UHD1、UHD2、AUDIO
                     * 
                     */
                    std::string GetTrack() const;

                    /**
                     * 设置加密track类型。取值范围：
SD、HD、UHD1、UHD2、AUDIO
                     * @param _track 加密track类型。取值范围：
SD、HD、UHD1、UHD2、AUDIO
                     * 
                     */
                    void SetTrack(const std::string& _track);

                    /**
                     * 判断参数 Track 是否已赋值
                     * @return Track 是否已赋值
                     * 
                     */
                    bool TrackHasBeenSet() const;

                    /**
                     * 获取请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对解密密钥进行加密，并对加密结果进行base64编码。
                     * @return Key 请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对解密密钥进行加密，并对加密结果进行base64编码。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对解密密钥进行加密，并对加密结果进行base64编码。
                     * @param _key 请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对解密密钥进行加密，并对加密结果进行base64编码。
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取密钥ID。
                     * @return KeyId 密钥ID。
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置密钥ID。
                     * @param _keyId 密钥ID。
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
                     * 获取请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对解密密钥进行加密，并对加密结果进行base64编码。
                     * @return Iv 请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对解密密钥进行加密，并对加密结果进行base64编码。
                     * 
                     */
                    std::string GetIv() const;

                    /**
                     * 设置请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对解密密钥进行加密，并对加密结果进行base64编码。
                     * @param _iv 请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对解密密钥进行加密，并对加密结果进行base64编码。
                     * 
                     */
                    void SetIv(const std::string& _iv);

                    /**
                     * 判断参数 Iv 是否已赋值
                     * @return Iv 是否已赋值
                     * 
                     */
                    bool IvHasBeenSet() const;

                private:

                    /**
                     * 加密track类型。取值范围：
SD、HD、UHD1、UHD2、AUDIO
                     */
                    std::string m_track;
                    bool m_trackHasBeenSet;

                    /**
                     * 请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对解密密钥进行加密，并对加密结果进行base64编码。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 密钥ID。
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 请使用腾讯云DRM 提供的公钥，使用rsa加密算法，PKCS1填充方式对解密密钥进行加密，并对加密结果进行base64编码。
                     */
                    std::string m_iv;
                    bool m_ivHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DRM_V20181115_MODEL_KEYPARAM_H_
