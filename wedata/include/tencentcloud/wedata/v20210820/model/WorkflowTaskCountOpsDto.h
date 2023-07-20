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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWTASKCOUNTOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWTASKCOUNTOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/PairDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 工作流任务统计
                */
                class WorkflowTaskCountOpsDto : public AbstractModel
                {
                public:
                    WorkflowTaskCountOpsDto();
                    ~WorkflowTaskCountOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作流任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Count 工作流任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置工作流任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _count 工作流任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取任务类型维度统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TypeCount 任务类型维度统计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PairDto> GetTypeCount() const;

                    /**
                     * 设置任务类型维度统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _typeCount 任务类型维度统计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTypeCount(const std::vector<PairDto>& _typeCount);

                    /**
                     * 判断参数 TypeCount 是否已赋值
                     * @return TypeCount 是否已赋值
                     * 
                     */
                    bool TypeCountHasBeenSet() const;

                    /**
                     * 获取任务周期类型维度统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleCount 任务周期类型维度统计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PairDto> GetCycleCount() const;

                    /**
                     * 设置任务周期类型维度统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleCount 任务周期类型维度统计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCycleCount(const std::vector<PairDto>& _cycleCount);

                    /**
                     * 判断参数 CycleCount 是否已赋值
                     * @return CycleCount 是否已赋值
                     * 
                     */
                    bool CycleCountHasBeenSet() const;

                private:

                    /**
                     * 工作流任务数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 任务类型维度统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PairDto> m_typeCount;
                    bool m_typeCountHasBeenSet;

                    /**
                     * 任务周期类型维度统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PairDto> m_cycleCount;
                    bool m_cycleCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWTASKCOUNTOPSDTO_H_
