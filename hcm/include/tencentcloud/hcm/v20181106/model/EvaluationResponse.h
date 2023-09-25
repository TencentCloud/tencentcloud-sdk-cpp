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

#ifndef TENCENTCLOUD_HCM_V20181106_MODEL_EVALUATIONRESPONSE_H_
#define TENCENTCLOUD_HCM_V20181106_MODEL_EVALUATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hcm/v20181106/model/Item.h>


namespace TencentCloud
{
    namespace Hcm
    {
        namespace V20181106
        {
            namespace Model
            {
                /**
                * Evaluation返回参数结构体
                */
                class EvaluationResponse : public AbstractModel
                {
                public:
                    EvaluationResponse();
                    ~EvaluationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取图片唯一标识，一张图片一个SessionId；
                     * @return SessionId 图片唯一标识，一张图片一个SessionId；
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取识别出的算式信息；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items 识别出的算式信息；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Item> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取任务 id，用于查询接口
                     * @return TaskId 任务 id，用于查询接口
                     * @deprecated
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * @deprecated
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 图片唯一标识，一张图片一个SessionId；
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 识别出的算式信息；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Item> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 任务 id，用于查询接口
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HCM_V20181106_MODEL_EVALUATIONRESPONSE_H_
