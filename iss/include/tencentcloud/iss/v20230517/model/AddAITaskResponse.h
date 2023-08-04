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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_ADDAITASKRESPONSE_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_ADDAITASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/AITaskInfo.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * AddAITask返回参数结构体
                */
                class AddAITaskResponse : public AbstractModel
                {
                public:
                    AddAITaskResponse();
                    ~AddAITaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取AI任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data AI任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AITaskInfo GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * AI任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AITaskInfo m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_ADDAITASKRESPONSE_H_
