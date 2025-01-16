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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEOFFLINETASKRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEOFFLINETASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateOfflineTask返回参数结构体
                */
                class CreateOfflineTaskResponse : public AbstractModel
                {
                public:
                    CreateOfflineTaskResponse();
                    ~CreateOfflineTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务ID
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
                     * 获取导入到编排空间的任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ArrangeSpaceTaskId 导入到编排空间的任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetArrangeSpaceTaskId() const;

                    /**
                     * 判断参数 ArrangeSpaceTaskId 是否已赋值
                     * @return ArrangeSpaceTaskId 是否已赋值
                     * 
                     */
                    bool ArrangeSpaceTaskIdHasBeenSet() const;

                    /**
                     * 获取结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 导入到编排空间的任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_arrangeSpaceTaskId;
                    bool m_arrangeSpaceTaskIdHasBeenSet;

                    /**
                     * 结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEOFFLINETASKRESPONSE_H_
