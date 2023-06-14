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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBETASKDETAILRESPONSE_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBETASKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/TaskInfo.h>
#include <tencentcloud/ivld/v20210903/model/Data.h>
#include <tencentcloud/ivld/v20210903/model/ImageData.h>
#include <tencentcloud/ivld/v20210903/model/AudioData.h>
#include <tencentcloud/ivld/v20210903/model/TextData.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * DescribeTaskDetail返回参数结构体
                */
                class DescribeTaskDetailResponse : public AbstractModel
                {
                public:
                    DescribeTaskDetailResponse();
                    ~DescribeTaskDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务信息，不包含任务结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskInfo 任务信息，不包含任务结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskInfo GetTaskInfo() const;

                    /**
                     * 判断参数 TaskInfo 是否已赋值
                     * @return TaskInfo 是否已赋值
                     * 
                     */
                    bool TaskInfoHasBeenSet() const;

                    /**
                     * 获取视频任务结果数据，只在视频任务结束时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskData 视频任务结果数据，只在视频任务结束时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Data GetTaskData() const;

                    /**
                     * 判断参数 TaskData 是否已赋值
                     * @return TaskData 是否已赋值
                     * 
                     */
                    bool TaskDataHasBeenSet() const;

                    /**
                     * 获取图片任务结果数据，只在图片任务结束时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageTaskData 图片任务结果数据，只在图片任务结束时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageData GetImageTaskData() const;

                    /**
                     * 判断参数 ImageTaskData 是否已赋值
                     * @return ImageTaskData 是否已赋值
                     * 
                     */
                    bool ImageTaskDataHasBeenSet() const;

                    /**
                     * 获取音频任务结果数据，只在音频任务结束时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioTaskData 音频任务结果数据，只在音频任务结束时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AudioData GetAudioTaskData() const;

                    /**
                     * 判断参数 AudioTaskData 是否已赋值
                     * @return AudioTaskData 是否已赋值
                     * 
                     */
                    bool AudioTaskDataHasBeenSet() const;

                    /**
                     * 获取文本任务结果数据，只在文本任务结束时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TextTaskData 文本任务结果数据，只在文本任务结束时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TextData GetTextTaskData() const;

                    /**
                     * 判断参数 TextTaskData 是否已赋值
                     * @return TextTaskData 是否已赋值
                     * 
                     */
                    bool TextTaskDataHasBeenSet() const;

                private:

                    /**
                     * 任务信息，不包含任务结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskInfo m_taskInfo;
                    bool m_taskInfoHasBeenSet;

                    /**
                     * 视频任务结果数据，只在视频任务结束时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Data m_taskData;
                    bool m_taskDataHasBeenSet;

                    /**
                     * 图片任务结果数据，只在图片任务结束时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageData m_imageTaskData;
                    bool m_imageTaskDataHasBeenSet;

                    /**
                     * 音频任务结果数据，只在音频任务结束时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AudioData m_audioTaskData;
                    bool m_audioTaskDataHasBeenSet;

                    /**
                     * 文本任务结果数据，只在文本任务结束时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TextData m_textTaskData;
                    bool m_textTaskDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBETASKDETAILRESPONSE_H_
