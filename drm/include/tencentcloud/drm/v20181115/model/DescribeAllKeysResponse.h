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

#ifndef TENCENTCLOUD_DRM_V20181115_MODEL_DESCRIBEALLKEYSRESPONSE_H_
#define TENCENTCLOUD_DRM_V20181115_MODEL_DESCRIBEALLKEYSRESPONSE_H_

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
                * DescribeAllKeys返回参数结构体
                */
                class DescribeAllKeysResponse : public AbstractModel
                {
                public:
                    DescribeAllKeysResponse();
                    ~DescribeAllKeysResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取加密密钥列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keys 加密密钥列表。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionKey 用来加密密钥。
如果入参中带有RsaPublicKey，则SessionKey为使用Rsa公钥加密后的二进制数据，Base64编码字符串。
如果入参中没有RsaPublicKey，则SessionKey为原始数据的字符串形式。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContentId 内容ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContentId() const;

                    /**
                     * 判断参数 ContentId 是否已赋值
                     * @return ContentId 是否已赋值
                     * 
                     */
                    bool ContentIdHasBeenSet() const;

                private:

                    /**
                     * 加密密钥列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Key> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * 用来加密密钥。
如果入参中带有RsaPublicKey，则SessionKey为使用Rsa公钥加密后的二进制数据，Base64编码字符串。
如果入参中没有RsaPublicKey，则SessionKey为原始数据的字符串形式。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionKey;
                    bool m_sessionKeyHasBeenSet;

                    /**
                     * 内容ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contentId;
                    bool m_contentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DRM_V20181115_MODEL_DESCRIBEALLKEYSRESPONSE_H_
