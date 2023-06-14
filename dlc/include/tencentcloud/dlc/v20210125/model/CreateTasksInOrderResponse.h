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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATETASKSINORDERRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATETASKSINORDERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateTasksInOrder返回参数结构体
                */
                class CreateTasksInOrderResponse : public AbstractModel
                {
                public:
                    CreateTasksInOrderResponse();
                    ~CreateTasksInOrderResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取本批次提交的任务的批次Id
                     * @return BatchId 本批次提交的任务的批次Id
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取任务Id集合，按照执行顺序排列
                     * @return TaskIdSet 任务Id集合，按照执行顺序排列
                     * 
                     */
                    std::vector<std::string> GetTaskIdSet() const;

                    /**
                     * 判断参数 TaskIdSet 是否已赋值
                     * @return TaskIdSet 是否已赋值
                     * 
                     */
                    bool TaskIdSetHasBeenSet() const;

                private:

                    /**
                     * 本批次提交的任务的批次Id
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 任务Id集合，按照执行顺序排列
                     */
                    std::vector<std::string> m_taskIdSet;
                    bool m_taskIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATETASKSINORDERRESPONSE_H_
