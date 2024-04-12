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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_SUMMARYOUTPUT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_SUMMARYOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 知识摘要输出配置
                */
                class SummaryOutput : public AbstractModel
                {
                public:
                    SummaryOutput();
                    ~SummaryOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出方式 1：流式 2：非流式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Method 输出方式 1：流式 2：非流式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMethod() const;

                    /**
                     * 设置输出方式 1：流式 2：非流式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _method 输出方式 1：流式 2：非流式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMethod(const uint64_t& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取输出要求 1：文本总结 2：自定义要求
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Requirement 输出要求 1：文本总结 2：自定义要求
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRequirement() const;

                    /**
                     * 设置输出要求 1：文本总结 2：自定义要求
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requirement 输出要求 1：文本总结 2：自定义要求
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequirement(const uint64_t& _requirement);

                    /**
                     * 判断参数 Requirement 是否已赋值
                     * @return Requirement 是否已赋值
                     * 
                     */
                    bool RequirementHasBeenSet() const;

                    /**
                     * 获取自定义要求指令
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequireCommand 自定义要求指令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequireCommand() const;

                    /**
                     * 设置自定义要求指令
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requireCommand 自定义要求指令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequireCommand(const std::string& _requireCommand);

                    /**
                     * 判断参数 RequireCommand 是否已赋值
                     * @return RequireCommand 是否已赋值
                     * 
                     */
                    bool RequireCommandHasBeenSet() const;

                private:

                    /**
                     * 输出方式 1：流式 2：非流式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 输出要求 1：文本总结 2：自定义要求
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_requirement;
                    bool m_requirementHasBeenSet;

                    /**
                     * 自定义要求指令
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requireCommand;
                    bool m_requireCommandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_SUMMARYOUTPUT_H_
