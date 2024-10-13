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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEVIDEODATABASEENTRYTASKDETAILRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEVIDEODATABASEENTRYTASKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/VideoDBEntryTaskResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeVideoDatabaseEntryTaskDetail返回参数结构体
                */
                class DescribeVideoDatabaseEntryTaskDetailResponse : public AbstractModel
                {
                public:
                    DescribeVideoDatabaseEntryTaskDetailResponse();
                    ~DescribeVideoDatabaseEntryTaskDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询的任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 查询的任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取查询的任务的状态，可能为WAITING、PROCESSING、FAIL、SUCCESS。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 查询的任务的状态，可能为WAITING、PROCESSING、FAIL、SUCCESS。
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
                     * 获取查询的任务的结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoDBEntryTaskResults 查询的任务的结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VideoDBEntryTaskResult> GetVideoDBEntryTaskResults() const;

                    /**
                     * 判断参数 VideoDBEntryTaskResults 是否已赋值
                     * @return VideoDBEntryTaskResults 是否已赋值
                     * 
                     */
                    bool VideoDBEntryTaskResultsHasBeenSet() const;

                private:

                    /**
                     * 查询的任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 查询的任务的状态，可能为WAITING、PROCESSING、FAIL、SUCCESS。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 查询的任务的结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VideoDBEntryTaskResult> m_videoDBEntryTaskResults;
                    bool m_videoDBEntryTaskResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEVIDEODATABASEENTRYTASKDETAILRESPONSE_H_
