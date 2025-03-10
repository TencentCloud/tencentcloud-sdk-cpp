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

#ifndef TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_LISTDEPLOYSTEPTASKSRESPONSE_H_
#define TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_LISTDEPLOYSTEPTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/controlcenter/v20230110/model/BaselineStepTaskInfo.h>


namespace TencentCloud
{
    namespace Controlcenter
    {
        namespace V20230110
        {
            namespace Model
            {
                /**
                * ListDeployStepTasks返回参数结构体
                */
                class ListDeployStepTasksResponse : public AbstractModel
                {
                public:
                    ListDeployStepTasksResponse();
                    ~ListDeployStepTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取账号工厂基线功能项应用信息列表。
                     * @return BaselineDeployStepTaskList 账号工厂基线功能项应用信息列表。
                     * 
                     */
                    std::vector<BaselineStepTaskInfo> GetBaselineDeployStepTaskList() const;

                    /**
                     * 判断参数 BaselineDeployStepTaskList 是否已赋值
                     * @return BaselineDeployStepTaskList 是否已赋值
                     * 
                     */
                    bool BaselineDeployStepTaskListHasBeenSet() const;

                    /**
                     * 获取总数。
                     * @return Total 总数。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 账号工厂基线功能项应用信息列表。
                     */
                    std::vector<BaselineStepTaskInfo> m_baselineDeployStepTaskList;
                    bool m_baselineDeployStepTaskListHasBeenSet;

                    /**
                     * 总数。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_LISTDEPLOYSTEPTASKSRESPONSE_H_
