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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_APIKEYINFO_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_APIKEYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * API密钥简略信息
                */
                class APIKeyInfo : public AbstractModel
                {
                public:
                    APIKeyInfo();
                    ~APIKeyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API密钥名称
                     * @return Name API密钥名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置API密钥名称
                     * @param _name API密钥名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取API密钥ID
                     * @return KeyId API密钥ID
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置API密钥ID
                     * @param _keyId API密钥ID
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
                     * 获取密钥状态。可以为API_KEY_STATUS_ACTIVE，或API_KEY_STATUS_INACTIVE
                     * @return Status 密钥状态。可以为API_KEY_STATUS_ACTIVE，或API_KEY_STATUS_INACTIVE
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置密钥状态。可以为API_KEY_STATUS_ACTIVE，或API_KEY_STATUS_INACTIVE
                     * @param _status 密钥状态。可以为API_KEY_STATUS_ACTIVE，或API_KEY_STATUS_INACTIVE
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
                     * 获取隐藏部分字符的API密钥，方便用户辨认
                     * @return MaskedKey 隐藏部分字符的API密钥，方便用户辨认
                     * 
                     */
                    std::string GetMaskedKey() const;

                    /**
                     * 设置隐藏部分字符的API密钥，方便用户辨认
                     * @param _maskedKey 隐藏部分字符的API密钥，方便用户辨认
                     * 
                     */
                    void SetMaskedKey(const std::string& _maskedKey);

                    /**
                     * 判断参数 MaskedKey 是否已赋值
                     * @return MaskedKey 是否已赋值
                     * 
                     */
                    bool MaskedKeyHasBeenSet() const;

                    /**
                     * 获取API密钥创建时间
                     * @return CreatedAt API密钥创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置API密钥创建时间
                     * @param _createdAt API密钥创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                private:

                    /**
                     * API密钥名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * API密钥ID
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 密钥状态。可以为API_KEY_STATUS_ACTIVE，或API_KEY_STATUS_INACTIVE
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 隐藏部分字符的API密钥，方便用户辨认
                     */
                    std::string m_maskedKey;
                    bool m_maskedKeyHasBeenSet;

                    /**
                     * API密钥创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_APIKEYINFO_H_
