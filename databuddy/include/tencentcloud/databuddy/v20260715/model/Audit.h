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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_AUDIT_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_AUDIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 审计信息
                */
                class Audit : public AbstractModel
                {
                public:
                    Audit();
                    ~Audit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建者。注意：此字段可能返回null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creator 创建者。注意：此字段可能返回null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建者。注意：此字段可能返回null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creator 创建者。注意：此字段可能返回null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取创建时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 创建时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt 创建时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取最后修改者。注意：此字段可能返回null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifier 最后修改者。注意：此字段可能返回null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastModifier() const;

                    /**
                     * 设置最后修改者。注意：此字段可能返回null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastModifier 最后修改者。注意：此字段可能返回null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastModifier(const std::string& _lastModifier);

                    /**
                     * 判断参数 LastModifier 是否已赋值
                     * @return LastModifier 是否已赋值
                     * 
                     */
                    bool LastModifierHasBeenSet() const;

                    /**
                     * 获取最后修改时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifiedAt 最后修改时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastModifiedAt() const;

                    /**
                     * 设置最后修改时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastModifiedAt 最后修改时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastModifiedAt(const std::string& _lastModifiedAt);

                    /**
                     * 判断参数 LastModifiedAt 是否已赋值
                     * @return LastModifiedAt 是否已赋值
                     * 
                     */
                    bool LastModifiedAtHasBeenSet() const;

                    /**
                     * 获取创建者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorName 创建者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorName() const;

                    /**
                     * 设置创建者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorName 创建者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatorName(const std::string& _creatorName);

                    /**
                     * 判断参数 CreatorName 是否已赋值
                     * @return CreatorName 是否已赋值
                     * 
                     */
                    bool CreatorNameHasBeenSet() const;

                    /**
                     * 获取最后修改者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifierName 最后修改者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastModifierName() const;

                    /**
                     * 设置最后修改者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastModifierName 最后修改者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastModifierName(const std::string& _lastModifierName);

                    /**
                     * 判断参数 LastModifierName 是否已赋值
                     * @return LastModifierName 是否已赋值
                     * 
                     */
                    bool LastModifierNameHasBeenSet() const;

                private:

                    /**
                     * 创建者。注意：此字段可能返回null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 创建时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 最后修改者。注意：此字段可能返回null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastModifier;
                    bool m_lastModifierHasBeenSet;

                    /**
                     * 最后修改时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastModifiedAt;
                    bool m_lastModifiedAtHasBeenSet;

                    /**
                     * 创建者名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorName;
                    bool m_creatorNameHasBeenSet;

                    /**
                     * 最后修改者名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastModifierName;
                    bool m_lastModifierNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_AUDIT_H_
