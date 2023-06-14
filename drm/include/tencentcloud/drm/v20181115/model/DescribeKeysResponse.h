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

#ifndef TENCENTCLOUD_DRM_V20181115_MODEL_DESCRIBEKEYSRESPONSE_H_
#define TENCENTCLOUD_DRM_V20181115_MODEL_DESCRIBEKEYSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/drm/v20181115/model/Key.h>


namespace TencentCloud
{
    namespace Drm
    {
        namespace V20181115
        {
            namespace Model
            {
                /**
                * DescribeKeys返回参数结构体
                */
                class DescribeKeysResponse : public AbstractModel
                {
                public:
                    DescribeKeysResponse();
                    ~DescribeKeysResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取加密密钥列表
                     * @return Keys 加密密钥列表
                     * 
                     */
                    std::vector<Key> GetKeys() const;

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取用来加密密钥。
如果入参中带有RsaPublicKey，则SessionKey为使用Rsa公钥加密后的二进制数据，Base64编码字符串。
如果入参中没有RsaPublicKey，则SessionKey为原始数据的字符串形式。
                     * @return SessionKey 用来加密密钥。
如果入参中带有RsaPublicKey，则SessionKey为使用Rsa公钥加密后的二进制数据，Base64编码字符串。
如果入参中没有RsaPublicKey，则SessionKey为原始数据的字符串形式。
                     * 
                     */
                    std::string GetSessionKey() const;

                    /**
                     * 判断参数 SessionKey 是否已赋值
                     * @return SessionKey 是否已赋值
                     * 
                     */
                    bool SessionKeyHasBeenSet() const;

                    /**
                     * 获取内容ID
                     * @return ContentId 内容ID
                     * 
                     */
                    std::string GetContentId() const;

                    /**
                     * 判断参数 ContentId 是否已赋值
                     * @return ContentId 是否已赋值
                     * 
                     */
                    bool ContentIdHasBeenSet() const;

                    /**
                     * 获取Widevine方案的Pssh数据，Base64编码。
Fairplay方案无该值。
                     * @return Pssh Widevine方案的Pssh数据，Base64编码。
Fairplay方案无该值。
                     * 
                     */
                    std::string GetPssh() const;

                    /**
                     * 判断参数 Pssh 是否已赋值
                     * @return Pssh 是否已赋值
                     * 
                     */
                    bool PsshHasBeenSet() const;

                private:

                    /**
                     * 加密密钥列表
                     */
                    std::vector<Key> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * 用来加密密钥。
如果入参中带有RsaPublicKey，则SessionKey为使用Rsa公钥加密后的二进制数据，Base64编码字符串。
如果入参中没有RsaPublicKey，则SessionKey为原始数据的字符串形式。
                     */
                    std::string m_sessionKey;
                    bool m_sessionKeyHasBeenSet;

                    /**
                     * 内容ID
                     */
                    std::string m_contentId;
                    bool m_contentIdHasBeenSet;

                    /**
                     * Widevine方案的Pssh数据，Base64编码。
Fairplay方案无该值。
                     */
                    std::string m_pssh;
                    bool m_psshHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DRM_V20181115_MODEL_DESCRIBEKEYSRESPONSE_H_
