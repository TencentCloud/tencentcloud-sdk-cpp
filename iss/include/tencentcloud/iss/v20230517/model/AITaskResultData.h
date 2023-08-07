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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_AITASKRESULTDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_AITASKRESULTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/AITaskResultInfo.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * AI识别结果
                */
                class AITaskResultData : public AbstractModel
                {
                public:
                    AITaskResultData();
                    ~AITaskResultData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AI 任务 ID
                     * @return TaskId AI 任务 ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置AI 任务 ID
                     * @param _taskId AI 任务 ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取在 BeginTime 和 EndTime 时间之内，有识别结果的 AI 调用次数（分页依据此数值）
                     * @return AIResultCount 在 BeginTime 和 EndTime 时间之内，有识别结果的 AI 调用次数（分页依据此数值）
                     * 
                     */
                    uint64_t GetAIResultCount() const;

                    /**
                     * 设置在 BeginTime 和 EndTime 时间之内，有识别结果的 AI 调用次数（分页依据此数值）
                     * @param _aIResultCount 在 BeginTime 和 EndTime 时间之内，有识别结果的 AI 调用次数（分页依据此数值）
                     * 
                     */
                    void SetAIResultCount(const uint64_t& _aIResultCount);

                    /**
                     * 判断参数 AIResultCount 是否已赋值
                     * @return AIResultCount 是否已赋值
                     * 
                     */
                    bool AIResultCountHasBeenSet() const;

                    /**
                     * 获取AI 任务执行结果详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AIResults AI 任务执行结果详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AITaskResultInfo GetAIResults() const;

                    /**
                     * 设置AI 任务执行结果详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aIResults AI 任务执行结果详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAIResults(const AITaskResultInfo& _aIResults);

                    /**
                     * 判断参数 AIResults 是否已赋值
                     * @return AIResults 是否已赋值
                     * 
                     */
                    bool AIResultsHasBeenSet() const;

                private:

                    /**
                     * AI 任务 ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 在 BeginTime 和 EndTime 时间之内，有识别结果的 AI 调用次数（分页依据此数值）
                     */
                    uint64_t m_aIResultCount;
                    bool m_aIResultCountHasBeenSet;

                    /**
                     * AI 任务执行结果详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AITaskResultInfo m_aIResults;
                    bool m_aIResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_AITASKRESULTDATA_H_
