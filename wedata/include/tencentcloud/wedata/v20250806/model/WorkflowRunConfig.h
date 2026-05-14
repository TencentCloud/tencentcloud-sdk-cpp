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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWRUNCONFIG_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWRUNCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 工作流运行配置
                */
                class WorkflowRunConfig : public AbstractModel
                {
                public:
                    WorkflowRunConfig();
                    ~WorkflowRunConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>工作流运行最大并发数，取值范围：[1, 1000]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxConcurrentNum <p>工作流运行最大并发数，取值范围：[1, 1000]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxConcurrentNum() const;

                    /**
                     * 设置<p>工作流运行最大并发数，取值范围：[1, 1000]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxConcurrentNum <p>工作流运行最大并发数，取值范围：[1, 1000]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxConcurrentNum(const uint64_t& _maxConcurrentNum);

                    /**
                     * 判断参数 MaxConcurrentNum 是否已赋值
                     * @return MaxConcurrentNum 是否已赋值
                     * 
                     */
                    bool MaxConcurrentNumHasBeenSet() const;

                    /**
                     * 获取<p>1：开启  0：关闭<br>当工作流达到最大并发上限时，若开启，新工作流运行排队等待，直到其他运行释放并发，最大等待时长为48小时，超过则自动跳过不再执行；若关闭，新工作流直接跳过结束。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueuingMode <p>1：开启  0：关闭<br>当工作流达到最大并发上限时，若开启，新工作流运行排队等待，直到其他运行释放并发，最大等待时长为48小时，超过则自动跳过不再执行；若关闭，新工作流直接跳过结束。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetQueuingMode() const;

                    /**
                     * 设置<p>1：开启  0：关闭<br>当工作流达到最大并发上限时，若开启，新工作流运行排队等待，直到其他运行释放并发，最大等待时长为48小时，超过则自动跳过不再执行；若关闭，新工作流直接跳过结束。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queuingMode <p>1：开启  0：关闭<br>当工作流达到最大并发上限时，若开启，新工作流运行排队等待，直到其他运行释放并发，最大等待时长为48小时，超过则自动跳过不再执行；若关闭，新工作流直接跳过结束。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueuingMode(const uint64_t& _queuingMode);

                    /**
                     * 判断参数 QueuingMode 是否已赋值
                     * @return QueuingMode 是否已赋值
                     * 
                     */
                    bool QueuingModeHasBeenSet() const;

                private:

                    /**
                     * <p>工作流运行最大并发数，取值范围：[1, 1000]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxConcurrentNum;
                    bool m_maxConcurrentNumHasBeenSet;

                    /**
                     * <p>1：开启  0：关闭<br>当工作流达到最大并发上限时，若开启，新工作流运行排队等待，直到其他运行释放并发，最大等待时长为48小时，超过则自动跳过不再执行；若关闭，新工作流直接跳过结束。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_queuingMode;
                    bool m_queuingModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWRUNCONFIG_H_
