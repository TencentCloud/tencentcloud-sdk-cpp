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

#ifndef TENCENTCLOUD_ECC_V20181213_MODEL_ECCRESPONSE_H_
#define TENCENTCLOUD_ECC_V20181213_MODEL_ECCRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecc/v20181213/model/CorrectData.h>


namespace TencentCloud
{
    namespace Ecc
    {
        namespace V20181213
        {
            namespace Model
            {
                /**
                * ECC返回参数结构体
                */
                class ECCResponse : public AbstractModel
                {
                public:
                    ECCResponse();
                    ~ECCResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取整体的批改结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 整体的批改结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CorrectData GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取任务 id，用于查询接口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务 id，用于查询接口
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
                     * 整体的批改结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CorrectData m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 任务 id，用于查询接口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECC_V20181213_MODEL_ECCRESPONSE_H_
