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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGERISK_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGERISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 容器安全镜像高危行为信息
                */
                class ImageRisk : public AbstractModel
                {
                public:
                    ImageRisk();
                    ~ImageRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取高危行为
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Behavior 高危行为
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetBehavior() const;

                    /**
                     * 设置高危行为
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Behavior 高危行为
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBehavior(const uint64_t& _behavior);

                    /**
                     * 判断参数 Behavior 是否已赋值
                     * @return Behavior 是否已赋值
                     */
                    bool BehaviorHasBeenSet() const;

                    /**
                     * 获取种类
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 种类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置种类
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Type 种类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Level 风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Desc 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Desc 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取解决方案
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstructionContent 解决方案
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstructionContent() const;

                    /**
                     * 设置解决方案
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstructionContent 解决方案
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstructionContent(const std::string& _instructionContent);

                    /**
                     * 判断参数 InstructionContent 是否已赋值
                     * @return InstructionContent 是否已赋值
                     */
                    bool InstructionContentHasBeenSet() const;

                private:

                    /**
                     * 高危行为
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_behavior;
                    bool m_behaviorHasBeenSet;

                    /**
                     * 种类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 解决方案
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instructionContent;
                    bool m_instructionContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGERISK_H_
