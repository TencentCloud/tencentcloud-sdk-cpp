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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBESNAPSHOTTASKRESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBESNAPSHOTTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/SnapshotResult.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeSnapshotTask返回参数结构体
                */
                class DescribeSnapshotTaskResponse : public AbstractModel
                {
                public:
                    DescribeSnapshotTaskResponse();
                    ~DescribeSnapshotTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskID 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskID() const;

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取任务状态
Running - 任务执行中
Finished - 任务已结束
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 任务状态
Running - 任务执行中
Finished - 任务已结束
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务创建时间，单位s
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 任务创建时间，单位s
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取任务完成时间，单位s
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinishTime 任务完成时间，单位s
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFinishTime() const;

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取任务结果信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 任务结果信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SnapshotResult GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * 任务状态
Running - 任务执行中
Finished - 任务已结束
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务创建时间，单位s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务完成时间，单位s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 任务结果信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SnapshotResult m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBESNAPSHOTTASKRESPONSE_H_
