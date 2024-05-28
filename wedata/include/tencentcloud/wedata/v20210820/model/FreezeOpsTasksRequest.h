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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_FREEZEOPSTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_FREEZEOPSTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/SimpleTaskInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * FreezeOpsTasks请求参数结构体
                */
                class FreezeOpsTasksRequest : public AbstractModel
                {
                public:
                    FreezeOpsTasksRequest();
                    ~FreezeOpsTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务列表
                     * @return Tasks 任务列表
                     * 
                     */
                    std::vector<SimpleTaskInfo> GetTasks() const;

                    /**
                     * 设置任务列表
                     * @param _tasks 任务列表
                     * 
                     */
                    void SetTasks(const std::vector<SimpleTaskInfo>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取任务操作是否消息通知下游任务责任人
                     * @return OperateIsInform 任务操作是否消息通知下游任务责任人
                     * 
                     */
                    bool GetOperateIsInform() const;

                    /**
                     * 设置任务操作是否消息通知下游任务责任人
                     * @param _operateIsInform 任务操作是否消息通知下游任务责任人
                     * 
                     */
                    void SetOperateIsInform(const bool& _operateIsInform);

                    /**
                     * 判断参数 OperateIsInform 是否已赋值
                     * @return OperateIsInform 是否已赋值
                     * 
                     */
                    bool OperateIsInformHasBeenSet() const;

                    /**
                     * 获取是否终止已生成的实例
                     * @return KillInstance 是否终止已生成的实例
                     * 
                     */
                    bool GetKillInstance() const;

                    /**
                     * 设置是否终止已生成的实例
                     * @param _killInstance 是否终止已生成的实例
                     * 
                     */
                    void SetKillInstance(const bool& _killInstance);

                    /**
                     * 判断参数 KillInstance 是否已赋值
                     * @return KillInstance 是否已赋值
                     * 
                     */
                    bool KillInstanceHasBeenSet() const;

                private:

                    /**
                     * 任务列表
                     */
                    std::vector<SimpleTaskInfo> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 任务操作是否消息通知下游任务责任人
                     */
                    bool m_operateIsInform;
                    bool m_operateIsInformHasBeenSet;

                    /**
                     * 是否终止已生成的实例
                     */
                    bool m_killInstance;
                    bool m_killInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_FREEZEOPSTASKSREQUEST_H_
