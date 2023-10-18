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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQMIGRATIONTOPICDISTRIBUTION_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQMIGRATIONTOPICDISTRIBUTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * 迁移主题的阶段分布
                */
                class RocketMQMigrationTopicDistribution : public AbstractModel
                {
                public:
                    RocketMQMigrationTopicDistribution();
                    ~RocketMQMigrationTopicDistribution() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取迁移主题阶段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Stage 迁移主题阶段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStage() const;

                    /**
                     * 设置迁移主题阶段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stage 迁移主题阶段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStage(const std::string& _stage);

                    /**
                     * 判断参数 Stage 是否已赋值
                     * @return Stage 是否已赋值
                     * 
                     */
                    bool StageHasBeenSet() const;

                    /**
                     * 获取数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Count 数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _count 数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 迁移主题阶段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stage;
                    bool m_stageHasBeenSet;

                    /**
                     * 数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQMIGRATIONTOPICDISTRIBUTION_H_
