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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DRYRUNDIOFFLINETASKRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DRYRUNDIOFFLINETASKRESPONSE_H_

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
                * DryRunDIOfflineTask返回参数结构体
                */
                class DryRunDIOfflineTaskResponse : public AbstractModel
                {
                public:
                    DryRunDIOfflineTaskResponse();
                    ~DryRunDIOfflineTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据时间
                     * @return CurrentRunDate 数据时间
                     * 
                     */
                    std::string GetCurrentRunDate() const;

                    /**
                     * 判断参数 CurrentRunDate 是否已赋值
                     * @return CurrentRunDate 是否已赋值
                     * 
                     */
                    bool CurrentRunDateHasBeenSet() const;

                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取任务状态
                     * @return Status 任务状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务Id
                     * @return TaskId 任务Id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务实例唯一key
                     * @return TaskInstanceKey 任务实例唯一key
                     * 
                     */
                    std::string GetTaskInstanceKey() const;

                    /**
                     * 判断参数 TaskInstanceKey 是否已赋值
                     * @return TaskInstanceKey 是否已赋值
                     * 
                     */
                    bool TaskInstanceKeyHasBeenSet() const;

                private:

                    /**
                     * 数据时间
                     */
                    std::string m_currentRunDate;
                    bool m_currentRunDateHasBeenSet;

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务Id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务实例唯一key
                     */
                    std::string m_taskInstanceKey;
                    bool m_taskInstanceKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DRYRUNDIOFFLINETASKRESPONSE_H_
