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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_ADDSUBSTRUCTURETASKSREQUEST_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_ADDSUBSTRUCTURETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cii/v20210408/model/CreateStructureTaskInfo.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * AddSubStructureTasks请求参数结构体
                */
                class AddSubStructureTasksRequest : public AbstractModel
                {
                public:
                    AddSubStructureTasksRequest();
                    ~AddSubStructureTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主任务id
                     * @return MainTaskId 主任务id
                     * 
                     */
                    std::string GetMainTaskId() const;

                    /**
                     * 设置主任务id
                     * @param _mainTaskId 主任务id
                     * 
                     */
                    void SetMainTaskId(const std::string& _mainTaskId);

                    /**
                     * 判断参数 MainTaskId 是否已赋值
                     * @return MainTaskId 是否已赋值
                     * 
                     */
                    bool MainTaskIdHasBeenSet() const;

                    /**
                     * 获取子任务信息数组
                     * @return TaskInfos 子任务信息数组
                     * 
                     */
                    std::vector<CreateStructureTaskInfo> GetTaskInfos() const;

                    /**
                     * 设置子任务信息数组
                     * @param _taskInfos 子任务信息数组
                     * 
                     */
                    void SetTaskInfos(const std::vector<CreateStructureTaskInfo>& _taskInfos);

                    /**
                     * 判断参数 TaskInfos 是否已赋值
                     * @return TaskInfos 是否已赋值
                     * 
                     */
                    bool TaskInfosHasBeenSet() const;

                private:

                    /**
                     * 主任务id
                     */
                    std::string m_mainTaskId;
                    bool m_mainTaskIdHasBeenSet;

                    /**
                     * 子任务信息数组
                     */
                    std::vector<CreateStructureTaskInfo> m_taskInfos;
                    bool m_taskInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_ADDSUBSTRUCTURETASKSREQUEST_H_
