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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_ASYNCRECOGNITIONTASKS_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_ASYNCRECOGNITIONTASKS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/asr/v20190614/model/AsyncRecognitionTaskInfo.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * [音频流异步识别任务列表](https://cloud.tencent.com/document/product/1093/52060#3.-.E8.BE.93.E5.87.BA.E5.8F.82.E6.95.B0)
                */
                class AsyncRecognitionTasks : public AbstractModel
                {
                public:
                    AsyncRecognitionTasks();
                    ~AsyncRecognitionTasks() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tasks 任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AsyncRecognitionTaskInfo> GetTasks() const;

                    /**
                     * 设置任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tasks 任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTasks(const std::vector<AsyncRecognitionTaskInfo>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                private:

                    /**
                     * 任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AsyncRecognitionTaskInfo> m_tasks;
                    bool m_tasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_ASYNCRECOGNITIONTASKS_H_
