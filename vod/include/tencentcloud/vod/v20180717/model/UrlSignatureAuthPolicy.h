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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_URLSIGNATUREAUTHPOLICY_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_URLSIGNATUREAUTHPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 基于签名的 Key 防盗链信息
                */
                class UrlSignatureAuthPolicy : public AbstractModel
                {
                public:
                    UrlSignatureAuthPolicy();
                    ~UrlSignatureAuthPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取[Key 防盗链](https://cloud.tencent.com/document/product/266/14047)设置状态，可选值：
<li>Enabled: 启用。</li>
<li>Disabled: 禁用。</li>
                     * @return Status [Key 防盗链](https://cloud.tencent.com/document/product/266/14047)设置状态，可选值：
<li>Enabled: 启用。</li>
<li>Disabled: 禁用。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置[Key 防盗链](https://cloud.tencent.com/document/product/266/14047)设置状态，可选值：
<li>Enabled: 启用。</li>
<li>Disabled: 禁用。</li>
                     * @param _status [Key 防盗链](https://cloud.tencent.com/document/product/266/14047)设置状态，可选值：
<li>Enabled: 启用。</li>
<li>Disabled: 禁用。</li>
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
                     * 获取[Key 防盗链](https://cloud.tencent.com/document/product/266/14047)中用于生成签名的密钥。
EncryptedKey 字符串的长度为8~40个字节，不能包含不可见字符。
                     * @return EncryptedKey [Key 防盗链](https://cloud.tencent.com/document/product/266/14047)中用于生成签名的密钥。
EncryptedKey 字符串的长度为8~40个字节，不能包含不可见字符。
                     * 
                     */
                    std::string GetEncryptedKey() const;

                    /**
                     * 设置[Key 防盗链](https://cloud.tencent.com/document/product/266/14047)中用于生成签名的密钥。
EncryptedKey 字符串的长度为8~40个字节，不能包含不可见字符。
                     * @param _encryptedKey [Key 防盗链](https://cloud.tencent.com/document/product/266/14047)中用于生成签名的密钥。
EncryptedKey 字符串的长度为8~40个字节，不能包含不可见字符。
                     * 
                     */
                    void SetEncryptedKey(const std::string& _encryptedKey);

                    /**
                     * 判断参数 EncryptedKey 是否已赋值
                     * @return EncryptedKey 是否已赋值
                     * 
                     */
                    bool EncryptedKeyHasBeenSet() const;

                private:

                    /**
                     * [Key 防盗链](https://cloud.tencent.com/document/product/266/14047)设置状态，可选值：
<li>Enabled: 启用。</li>
<li>Disabled: 禁用。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * [Key 防盗链](https://cloud.tencent.com/document/product/266/14047)中用于生成签名的密钥。
EncryptedKey 字符串的长度为8~40个字节，不能包含不可见字符。
                     */
                    std::string m_encryptedKey;
                    bool m_encryptedKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_URLSIGNATUREAUTHPOLICY_H_
