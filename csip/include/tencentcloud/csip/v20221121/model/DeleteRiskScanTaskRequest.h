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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DELETERISKSCANTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DELETERISKSCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TaskIdListKey.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DeleteRiskScanTask请求参数结构体
                */
                class DeleteRiskScanTaskRequest : public AbstractModel
                {
                public:
                    DeleteRiskScanTaskRequest();
                    ~DeleteRiskScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务id 列表
                     * @return TaskIdList 任务id 列表
                     * 
                     */
                    std::vector<TaskIdListKey> GetTaskIdList() const;

                    /**
                     * 设置任务id 列表
                     * @param _taskIdList 任务id 列表
                     * 
                     */
                    void SetTaskIdList(const std::vector<TaskIdListKey>& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     * 
                     */
                    bool TaskIdListHasBeenSet() const;

                private:

                    /**
                     * 任务id 列表
                     */
                    std::vector<TaskIdListKey> m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DELETERISKSCANTASKREQUEST_H_
