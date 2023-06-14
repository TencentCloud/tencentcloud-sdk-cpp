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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEBATCHMODELACCTASKSRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEBATCHMODELACCTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * CreateBatchModelAccTasks返回参数结构体
                */
                class CreateBatchModelAccTasksResponse : public AbstractModel
                {
                public:
                    CreateBatchModelAccTasksResponse();
                    ~CreateBatchModelAccTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取模型优化任务ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelAccTaskIds 模型优化任务ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetModelAccTaskIds() const;

                    /**
                     * 判断参数 ModelAccTaskIds 是否已赋值
                     * @return ModelAccTaskIds 是否已赋值
                     * 
                     */
                    bool ModelAccTaskIdsHasBeenSet() const;

                private:

                    /**
                     * 模型优化任务ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_modelAccTaskIds;
                    bool m_modelAccTaskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEBATCHMODELACCTASKSRESPONSE_H_
