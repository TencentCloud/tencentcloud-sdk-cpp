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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETETASKDSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETETASKDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DeleteTaskDs请求参数结构体
                */
                class DeleteTaskDsRequest : public AbstractModel
                {
                public:
                    DeleteTaskDsRequest();
                    ~DeleteTaskDsRequest() = default;
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
                     * 获取是否删除脚本
                     * @return DeleteScript 是否删除脚本
                     * 
                     */
                    bool GetDeleteScript() const;

                    /**
                     * 设置是否删除脚本
                     * @param _deleteScript 是否删除脚本
                     * 
                     */
                    void SetDeleteScript(const bool& _deleteScript);

                    /**
                     * 判断参数 DeleteScript 是否已赋值
                     * @return DeleteScript 是否已赋值
                     * 
                     */
                    bool DeleteScriptHasBeenSet() const;

                    /**
                     * 获取任务操作是否消息通知下游任务责任人
                     * @return OperateInform 任务操作是否消息通知下游任务责任人
                     * 
                     */
                    bool GetOperateInform() const;

                    /**
                     * 设置任务操作是否消息通知下游任务责任人
                     * @param _operateInform 任务操作是否消息通知下游任务责任人
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
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
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
                     * 获取虚拟任务id
                     * @return VirtualTaskId 虚拟任务id
                     * 
                     */
                    std::string GetVirtualTaskId() const;

                    /**
                     * 设置虚拟任务id
                     * @param _virtualTaskId 虚拟任务id
                     * 
                     */
                    void SetVirtualTaskId(const std::string& _virtualTaskId);

                    /**
                     * 判断参数 VirtualTaskId 是否已赋值
                     * @return VirtualTaskId 是否已赋值
                     * 
                     */
                    bool VirtualTaskIdHasBeenSet() const;

                    /**
                     * 获取虚拟任务标记
                     * @return VirtualFlag 虚拟任务标记
                     * 
                     */
                    bool GetVirtualFlag() const;

                    /**
                     * 设置虚拟任务标记
                     * @param _virtualFlag 虚拟任务标记
                     * 
                     */
                    void SetVirtualFlag(const bool& _virtualFlag);

                    /**
                     * 判断参数 VirtualFlag 是否已赋值
                     * @return VirtualFlag 是否已赋值
                     * 
                     */
                    bool VirtualFlagHasBeenSet() const;

                    /**
                     * 获取任务删除方式
                     * @return DeleteMode 任务删除方式
                     * 
                     */
                    bool GetDeleteMode() const;

                    /**
                     * 设置任务删除方式
                     * @param _deleteMode 任务删除方式
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
                     * 是否删除脚本
                     */
                    bool m_deleteScript;
                    bool m_deleteScriptHasBeenSet;

                    /**
                     * 任务操作是否消息通知下游任务责任人
                     */
                    bool m_operateInform;
                    bool m_operateInformHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 虚拟任务id
                     */
                    std::string m_virtualTaskId;
                    bool m_virtualTaskIdHasBeenSet;

                    /**
                     * 虚拟任务标记
                     */
                    bool m_virtualFlag;
                    bool m_virtualFlagHasBeenSet;

                    /**
                     * 任务删除方式
                     */
                    bool m_deleteMode;
                    bool m_deleteModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETETASKDSREQUEST_H_
