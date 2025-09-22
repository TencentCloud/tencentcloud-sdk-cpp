/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETETASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * DeleteTask请求参数结构体
                */
                class DeleteTaskRequest : public AbstractModel
                {
                public:
                    DeleteTaskRequest();
                    ~DeleteTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取任务ID
和VirtualTaskId选填一个
                     * @return TaskId 任务ID
和VirtualTaskId选填一个
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
和VirtualTaskId选填一个
                     * @param _taskId 任务ID
和VirtualTaskId选填一个
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务操作是否消息通知下游任务责任人true：通知
false：不通知
不传默认false
                     * @return OperateInform 任务操作是否消息通知下游任务责任人true：通知
false：不通知
不传默认false
                     * 
                     */
                    bool GetOperateInform() const;

                    /**
                     * 设置任务操作是否消息通知下游任务责任人true：通知
false：不通知
不传默认false
                     * @param _operateInform 任务操作是否消息通知下游任务责任人true：通知
false：不通知
不传默认false
                     * 
                     */
                    void SetOperateInform(const bool& _operateInform);

                    /**
                     * 判断参数 OperateInform 是否已赋值
                     * @return OperateInform 是否已赋值
                     * 
                     */
                    bool OperateInformHasBeenSet() const;

                    /**
                     * 获取任务删除方式
true：不针对下游任务实例进行强制失败
false：针对下游任务实例进行强制失败
不传默认false

                     * @return DeleteMode 任务删除方式
true：不针对下游任务实例进行强制失败
false：针对下游任务实例进行强制失败
不传默认false

                     * 
                     */
                    bool GetDeleteMode() const;

                    /**
                     * 设置任务删除方式
true：不针对下游任务实例进行强制失败
false：针对下游任务实例进行强制失败
不传默认false

                     * @param _deleteMode 任务删除方式
true：不针对下游任务实例进行强制失败
false：针对下游任务实例进行强制失败
不传默认false

                     * 
                     */
                    void SetDeleteMode(const bool& _deleteMode);

                    /**
                     * 判断参数 DeleteMode 是否已赋值
                     * @return DeleteMode 是否已赋值
                     * 
                     */
                    bool DeleteModeHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务ID
和VirtualTaskId选填一个
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务操作是否消息通知下游任务责任人true：通知
false：不通知
不传默认false
                     */
                    bool m_operateInform;
                    bool m_operateInformHasBeenSet;

                    /**
                     * 任务删除方式
true：不针对下游任务实例进行强制失败
false：针对下游任务实例进行强制失败
不传默认false

                     */
                    bool m_deleteMode;
                    bool m_deleteModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETETASKREQUEST_H_
