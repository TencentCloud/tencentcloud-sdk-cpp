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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_EXPANSIONPRIORITY_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_EXPANSIONPRIORITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 候选计算资源规格排序策略。LARGE_FIRST/SMALL_FIRST 表示按规格大小选择候选资源，GPU 场景按卡数判断大小。
                */
                class ExpansionPriority : public AbstractModel
                {
                public:
                    ExpansionPriority();
                    ~ExpansionPriority() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>候选规格排序方式。可选值：LARGE_FIRST（大规格优先）、SMALL_FIRST（小规格优先）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceSpecPriority <p>候选规格排序方式。可选值：LARGE_FIRST（大规格优先）、SMALL_FIRST（小规格优先）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceSpecPriority() const;

                    /**
                     * 设置<p>候选规格排序方式。可选值：LARGE_FIRST（大规格优先）、SMALL_FIRST（小规格优先）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceSpecPriority <p>候选规格排序方式。可选值：LARGE_FIRST（大规格优先）、SMALL_FIRST（小规格优先）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceSpecPriority(const std::string& _instanceSpecPriority);

                    /**
                     * 判断参数 InstanceSpecPriority 是否已赋值
                     * @return InstanceSpecPriority 是否已赋值
                     * 
                     */
                    bool InstanceSpecPriorityHasBeenSet() const;

                private:

                    /**
                     * <p>候选规格排序方式。可选值：LARGE_FIRST（大规格优先）、SMALL_FIRST（小规格优先）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceSpecPriority;
                    bool m_instanceSpecPriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_EXPANSIONPRIORITY_H_
