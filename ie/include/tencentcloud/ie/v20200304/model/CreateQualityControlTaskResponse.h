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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_CREATEQUALITYCONTROLTASKRESPONSE_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_CREATEQUALITYCONTROLTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * CreateQualityControlTask返回参数结构体
                */
                class CreateQualityControlTaskResponse : public AbstractModel
                {
                public:
                    CreateQualityControlTaskResponse();
                    ~CreateQualityControlTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取质检任务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 质检任务 ID
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

                private:

                    /**
                     * 质检任务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_CREATEQUALITYCONTROLTASKRESPONSE_H_
