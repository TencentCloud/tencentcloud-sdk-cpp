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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_STOPPINGCONDITION_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_STOPPINGCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * 终止条件
                */
                class StoppingCondition : public AbstractModel
                {
                public:
                    StoppingCondition();
                    ~StoppingCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最长运行运行时间（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxRuntimeInSeconds 最长运行运行时间（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxRuntimeInSeconds() const;

                    /**
                     * 设置最长运行运行时间（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxRuntimeInSeconds 最长运行运行时间（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxRuntimeInSeconds(const uint64_t& _maxRuntimeInSeconds);

                    /**
                     * 判断参数 MaxRuntimeInSeconds 是否已赋值
                     * @return MaxRuntimeInSeconds 是否已赋值
                     * 
                     */
                    bool MaxRuntimeInSecondsHasBeenSet() const;

                    /**
                     * 获取最长等待运行时间（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxWaitTimeInSeconds 最长等待运行时间（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxWaitTimeInSeconds() const;

                    /**
                     * 设置最长等待运行时间（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxWaitTimeInSeconds 最长等待运行时间（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxWaitTimeInSeconds(const uint64_t& _maxWaitTimeInSeconds);

                    /**
                     * 判断参数 MaxWaitTimeInSeconds 是否已赋值
                     * @return MaxWaitTimeInSeconds 是否已赋值
                     * 
                     */
                    bool MaxWaitTimeInSecondsHasBeenSet() const;

                private:

                    /**
                     * 最长运行运行时间（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxRuntimeInSeconds;
                    bool m_maxRuntimeInSecondsHasBeenSet;

                    /**
                     * 最长等待运行时间（秒）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxWaitTimeInSeconds;
                    bool m_maxWaitTimeInSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_STOPPINGCONDITION_H_
