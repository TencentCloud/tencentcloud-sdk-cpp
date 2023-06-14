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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_SECRETIDLASTUSED_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_SECRETIDLASTUSED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * 密钥最后使用时间
                */
                class SecretIdLastUsed : public AbstractModel
                {
                public:
                    SecretIdLastUsed();
                    ~SecretIdLastUsed() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取密钥ID
                     * @return SecretId 密钥ID
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置密钥ID
                     * @param _secretId 密钥ID
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取最后访问日期(有1天延迟)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUsedDate 最后访问日期(有1天延迟)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastUsedDate() const;

                    /**
                     * 设置最后访问日期(有1天延迟)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUsedDate 最后访问日期(有1天延迟)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastUsedDate(const std::string& _lastUsedDate);

                    /**
                     * 判断参数 LastUsedDate 是否已赋值
                     * @return LastUsedDate 是否已赋值
                     * 
                     */
                    bool LastUsedDateHasBeenSet() const;

                    /**
                     * 获取最后密钥访问日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastSecretUsedDate 最后密钥访问日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLastSecretUsedDate() const;

                    /**
                     * 设置最后密钥访问日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastSecretUsedDate 最后密钥访问日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastSecretUsedDate(const uint64_t& _lastSecretUsedDate);

                    /**
                     * 判断参数 LastSecretUsedDate 是否已赋值
                     * @return LastSecretUsedDate 是否已赋值
                     * 
                     */
                    bool LastSecretUsedDateHasBeenSet() const;

                private:

                    /**
                     * 密钥ID
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * 最后访问日期(有1天延迟)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastUsedDate;
                    bool m_lastUsedDateHasBeenSet;

                    /**
                     * 最后密钥访问日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_lastSecretUsedDate;
                    bool m_lastSecretUsedDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_SECRETIDLASTUSED_H_
