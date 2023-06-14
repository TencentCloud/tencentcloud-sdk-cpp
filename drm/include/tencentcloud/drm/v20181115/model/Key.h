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

#ifndef TENCENTCLOUD_DRM_V20181115_MODEL_KEY_H_
#define TENCENTCLOUD_DRM_V20181115_MODEL_KEY_H_

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
                * DRM加密密钥
                */
                class Key : public AbstractModel
                {
                public:
                    Key();
                    ~Key() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取加密track类型。Widevine支持SD、HD、UHD1、UHD2、AUDIO。Fairplay只支持HD。
                     * @return Track 加密track类型。Widevine支持SD、HD、UHD1、UHD2、AUDIO。Fairplay只支持HD。
                     * 
                     */
                    std::string GetTrack() const;

                    /**
                     * 设置加密track类型。Widevine支持SD、HD、UHD1、UHD2、AUDIO。Fairplay只支持HD。
                     * @param _track 加密track类型。Widevine支持SD、HD、UHD1、UHD2、AUDIO。Fairplay只支持HD。
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
                     * 获取原始Key使用AES-128 ECB模式和SessionKey加密的后的二进制数据，Base64编码的字符串。
                     * @return Key 原始Key使用AES-128 ECB模式和SessionKey加密的后的二进制数据，Base64编码的字符串。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置原始Key使用AES-128 ECB模式和SessionKey加密的后的二进制数据，Base64编码的字符串。
                     * @param _key 原始Key使用AES-128 ECB模式和SessionKey加密的后的二进制数据，Base64编码的字符串。
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
                     * 获取原始IV使用AES-128 ECB模式和SessionKey加密的后的二进制数据，Base64编码的字符串。
                     * @return Iv 原始IV使用AES-128 ECB模式和SessionKey加密的后的二进制数据，Base64编码的字符串。
                     * 
                     */
                    std::string GetIv() const;

                    /**
                     * 设置原始IV使用AES-128 ECB模式和SessionKey加密的后的二进制数据，Base64编码的字符串。
                     * @param _iv 原始IV使用AES-128 ECB模式和SessionKey加密的后的二进制数据，Base64编码的字符串。
                     * 
                     */
                    void SetIv(const std::string& _iv);

                    /**
                     * 判断参数 Iv 是否已赋值
                     * @return Iv 是否已赋值
                     * 
                     */
                    bool IvHasBeenSet() const;

                    /**
                     * 获取该key生成时的时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InsertTimestamp 该key生成时的时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInsertTimestamp() const;

                    /**
                     * 设置该key生成时的时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _insertTimestamp 该key生成时的时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInsertTimestamp(const uint64_t& _insertTimestamp);

                    /**
                     * 判断参数 InsertTimestamp 是否已赋值
                     * @return InsertTimestamp 是否已赋值
                     * 
                     */
                    bool InsertTimestampHasBeenSet() const;

                private:

                    /**
                     * 加密track类型。Widevine支持SD、HD、UHD1、UHD2、AUDIO。Fairplay只支持HD。
                     */
                    std::string m_track;
                    bool m_trackHasBeenSet;

                    /**
                     * 密钥ID。
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 原始Key使用AES-128 ECB模式和SessionKey加密的后的二进制数据，Base64编码的字符串。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 原始IV使用AES-128 ECB模式和SessionKey加密的后的二进制数据，Base64编码的字符串。
                     */
                    std::string m_iv;
                    bool m_ivHasBeenSet;

                    /**
                     * 该key生成时的时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_insertTimestamp;
                    bool m_insertTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DRM_V20181115_MODEL_KEY_H_
