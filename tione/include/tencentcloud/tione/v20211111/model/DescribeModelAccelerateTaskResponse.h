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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELACCELERATETASKRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELACCELERATETASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ModelAccelerateTask.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeModelAccelerateTask返回参数结构体
                */
                class DescribeModelAccelerateTaskResponse : public AbstractModel
                {
                public:
                    DescribeModelAccelerateTaskResponse();
                    ~DescribeModelAccelerateTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取模型加速任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelAccelerateTask 模型加速任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModelAccelerateTask GetModelAccelerateTask() const;

                    /**
                     * 判断参数 ModelAccelerateTask 是否已赋值
                     * @return ModelAccelerateTask 是否已赋值
                     * 
                     */
                    bool ModelAccelerateTaskHasBeenSet() const;

                    /**
                     * 获取模型加速时长，单位s
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelAccRuntimeInSecond 模型加速时长，单位s
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetModelAccRuntimeInSecond() const;

                    /**
                     * 判断参数 ModelAccRuntimeInSecond 是否已赋值
                     * @return ModelAccRuntimeInSecond 是否已赋值
                     * 
                     */
                    bool ModelAccRuntimeInSecondHasBeenSet() const;

                    /**
                     * 获取模型加速任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelAccStartTime 模型加速任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelAccStartTime() const;

                    /**
                     * 判断参数 ModelAccStartTime 是否已赋值
                     * @return ModelAccStartTime 是否已赋值
                     * 
                     */
                    bool ModelAccStartTimeHasBeenSet() const;

                    /**
                     * 获取模型加速任务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelAccEndTime 模型加速任务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelAccEndTime() const;

                    /**
                     * 判断参数 ModelAccEndTime 是否已赋值
                     * @return ModelAccEndTime 是否已赋值
                     * 
                     */
                    bool ModelAccEndTimeHasBeenSet() const;

                private:

                    /**
                     * 模型加速任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModelAccelerateTask m_modelAccelerateTask;
                    bool m_modelAccelerateTaskHasBeenSet;

                    /**
                     * 模型加速时长，单位s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_modelAccRuntimeInSecond;
                    bool m_modelAccRuntimeInSecondHasBeenSet;

                    /**
                     * 模型加速任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelAccStartTime;
                    bool m_modelAccStartTimeHasBeenSet;

                    /**
                     * 模型加速任务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelAccEndTime;
                    bool m_modelAccEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELACCELERATETASKRESPONSE_H_
