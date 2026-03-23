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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_MCPTOOLANNOTATION_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_MCPTOOLANNOTATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * mcp工具注解
                */
                class McpToolAnnotation : public AbstractModel
                {
                public:
                    McpToolAnnotation();
                    ~McpToolAnnotation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取title for the tool
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Title title for the tool
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置title for the tool
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _title title for the tool
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取If true, the tool does not modify its environment
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReadOnlyHint If true, the tool does not modify its environment
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetReadOnlyHint() const;

                    /**
                     * 设置If true, the tool does not modify its environment
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _readOnlyHint If true, the tool does not modify its environment
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReadOnlyHint(const bool& _readOnlyHint);

                    /**
                     * 判断参数 ReadOnlyHint 是否已赋值
                     * @return ReadOnlyHint 是否已赋值
                     * 
                     */
                    bool ReadOnlyHintHasBeenSet() const;

                    /**
                     * 获取If true, the tool may perform destructive updates
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DestructiveHint If true, the tool may perform destructive updates
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDestructiveHint() const;

                    /**
                     * 设置If true, the tool may perform destructive updates
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _destructiveHint If true, the tool may perform destructive updates
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDestructiveHint(const bool& _destructiveHint);

                    /**
                     * 判断参数 DestructiveHint 是否已赋值
                     * @return DestructiveHint 是否已赋值
                     * 
                     */
                    bool DestructiveHintHasBeenSet() const;

                    /**
                     * 获取If true, repeated calls with same args have no additional effect
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdempotentHint If true, repeated calls with same args have no additional effect
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIdempotentHint() const;

                    /**
                     * 设置If true, repeated calls with same args have no additional effect
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _idempotentHint If true, repeated calls with same args have no additional effect
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdempotentHint(const bool& _idempotentHint);

                    /**
                     * 判断参数 IdempotentHint 是否已赋值
                     * @return IdempotentHint 是否已赋值
                     * 
                     */
                    bool IdempotentHintHasBeenSet() const;

                    /**
                     * 获取If true, tool interacts with external entities
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpenWorldHint If true, tool interacts with external entities
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetOpenWorldHint() const;

                    /**
                     * 设置If true, tool interacts with external entities
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _openWorldHint If true, tool interacts with external entities
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOpenWorldHint(const bool& _openWorldHint);

                    /**
                     * 判断参数 OpenWorldHint 是否已赋值
                     * @return OpenWorldHint 是否已赋值
                     * 
                     */
                    bool OpenWorldHintHasBeenSet() const;

                private:

                    /**
                     * title for the tool
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * If true, the tool does not modify its environment
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_readOnlyHint;
                    bool m_readOnlyHintHasBeenSet;

                    /**
                     * If true, the tool may perform destructive updates
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_destructiveHint;
                    bool m_destructiveHintHasBeenSet;

                    /**
                     * If true, repeated calls with same args have no additional effect
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_idempotentHint;
                    bool m_idempotentHintHasBeenSet;

                    /**
                     * If true, tool interacts with external entities
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_openWorldHint;
                    bool m_openWorldHintHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_MCPTOOLANNOTATION_H_
