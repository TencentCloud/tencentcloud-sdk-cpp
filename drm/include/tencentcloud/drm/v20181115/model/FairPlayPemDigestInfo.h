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

#ifndef TENCENTCLOUD_DRM_V20181115_MODEL_FAIRPLAYPEMDIGESTINFO_H_
#define TENCENTCLOUD_DRM_V20181115_MODEL_FAIRPLAYPEMDIGESTINFO_H_

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
                * FairPlay 私钥摘要信息。
                */
                class FairPlayPemDigestInfo : public AbstractModel
                {
                public:
                    FairPlayPemDigestInfo();
                    ~FairPlayPemDigestInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取fairplay 私钥pem id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FairPlayPemId fairplay 私钥pem id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFairPlayPemId() const;

                    /**
                     * 设置fairplay 私钥pem id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fairPlayPemId fairplay 私钥pem id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFairPlayPemId(const uint64_t& _fairPlayPemId);

                    /**
                     * 判断参数 FairPlayPemId 是否已赋值
                     * @return FairPlayPemId 是否已赋值
                     * 
                     */
                    bool FairPlayPemIdHasBeenSet() const;

                    /**
                     * 获取私钥的优先级。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Priority 私钥的优先级。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置私钥的优先级。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _priority 私钥的优先级。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取私钥的md5 信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Md5Pem 私钥的md5 信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMd5Pem() const;

                    /**
                     * 设置私钥的md5 信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _md5Pem 私钥的md5 信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMd5Pem(const std::string& _md5Pem);

                    /**
                     * 判断参数 Md5Pem 是否已赋值
                     * @return Md5Pem 是否已赋值
                     * 
                     */
                    bool Md5PemHasBeenSet() const;

                    /**
                     * 获取ASK的md5信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Md5Ask ASK的md5信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMd5Ask() const;

                    /**
                     * 设置ASK的md5信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _md5Ask ASK的md5信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMd5Ask(const std::string& _md5Ask);

                    /**
                     * 判断参数 Md5Ask 是否已赋值
                     * @return Md5Ask 是否已赋值
                     * 
                     */
                    bool Md5AskHasBeenSet() const;

                    /**
                     * 获取私钥解密密钥的md5值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Md5PemDecryptKey 私钥解密密钥的md5值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMd5PemDecryptKey() const;

                    /**
                     * 设置私钥解密密钥的md5值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _md5PemDecryptKey 私钥解密密钥的md5值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMd5PemDecryptKey(const std::string& _md5PemDecryptKey);

                    /**
                     * 判断参数 Md5PemDecryptKey 是否已赋值
                     * @return Md5PemDecryptKey 是否已赋值
                     * 
                     */
                    bool Md5PemDecryptKeyHasBeenSet() const;

                private:

                    /**
                     * fairplay 私钥pem id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_fairPlayPemId;
                    bool m_fairPlayPemIdHasBeenSet;

                    /**
                     * 私钥的优先级。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 私钥的md5 信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_md5Pem;
                    bool m_md5PemHasBeenSet;

                    /**
                     * ASK的md5信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_md5Ask;
                    bool m_md5AskHasBeenSet;

                    /**
                     * 私钥解密密钥的md5值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_md5PemDecryptKey;
                    bool m_md5PemDecryptKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DRM_V20181115_MODEL_FAIRPLAYPEMDIGESTINFO_H_
