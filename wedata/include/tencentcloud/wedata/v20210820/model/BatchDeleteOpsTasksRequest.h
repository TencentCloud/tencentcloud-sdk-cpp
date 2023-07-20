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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHDELETEOPSTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHDELETEOPSTASKSREQUEST_H_

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
                * BatchDeleteOpsTasks请求参数结构体
                */
                class BatchDeleteOpsTasksRequest : public AbstractModel
                {
                public:
                    BatchDeleteOpsTasksRequest();
                    ~BatchDeleteOpsTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取批量删除的任务TaskId
                     * @return TaskIdList 批量删除的任务TaskId
                     * 
                     */
                    std::vector<std::string> GetTaskIdList() const;

                    /**
                     * 设置批量删除的任务TaskId
                     * @param _taskIdList 批量删除的任务TaskId
                     * 
                     */
                    void SetTaskIdList(const std::vector<std::string>& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     * 
                     */
                    bool TaskIdListHasBeenSet() const;

                    /**
                     * 获取true : 删除后下游任务可正常运行
false：删除后下游任务不可运行
                     * @return DeleteMode true : 删除后下游任务可正常运行
false：删除后下游任务不可运行
                     * 
                     */
                    bool GetDeleteMode() const;

                    /**
                     * 设置true : 删除后下游任务可正常运行
false：删除后下游任务不可运行
                     * @param _deleteMode true : 删除后下游任务可正常运行
false：删除后下游任务不可运行
                     * 
                     */
                    void SetDeleteMode(const bool& _deleteMode);

                    /**
                     * 判断参数 DeleteMode 是否已赋值
                     * @return DeleteMode 是否已赋值
                     * 
                     */
                    bool DeleteModeHasBeenSet() const;

                    /**
                     * 获取true：通知下游任务责任人
false:  不通知下游任务责任人
                     * @return EnableNotify true：通知下游任务责任人
false:  不通知下游任务责任人
                     * 
                     */
                    bool GetEnableNotify() const;

                    /**
                     * 设置true：通知下游任务责任人
false:  不通知下游任务责任人
                     * @param _enableNotify true：通知下游任务责任人
false:  不通知下游任务责任人
                     * 
                     */
                    void SetEnableNotify(const bool& _enableNotify);

                    /**
                     * 判断参数 EnableNotify 是否已赋值
                     * @return EnableNotify 是否已赋值
                     * 
                     */
                    bool EnableNotifyHasBeenSet() const;

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

                private:

                    /**
                     * 批量删除的任务TaskId
                     */
                    std::vector<std::string> m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                    /**
                     * true : 删除后下游任务可正常运行
false：删除后下游任务不可运行
                     */
                    bool m_deleteMode;
                    bool m_deleteModeHasBeenSet;

                    /**
                     * true：通知下游任务责任人
false:  不通知下游任务责任人
                     */
                    bool m_enableNotify;
                    bool m_enableNotifyHasBeenSet;

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHDELETEOPSTASKSREQUEST_H_
