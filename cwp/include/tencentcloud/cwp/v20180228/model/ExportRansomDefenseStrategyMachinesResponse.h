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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRANSOMDEFENSESTRATEGYMACHINESRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRANSOMDEFENSESTRATEGYMACHINESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ExportRansomDefenseStrategyMachines返回参数结构体
                */
                class ExportRansomDefenseStrategyMachinesResponse : public AbstractModel
                {
                public:
                    ExportRansomDefenseStrategyMachinesResponse();
                    ~ExportRansomDefenseStrategyMachinesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID,需要到接口“异步导出任务”ExportTasks获取DownloadUrl下载地址
                     * @return TaskId 任务ID,需要到接口“异步导出任务”ExportTasks获取DownloadUrl下载地址
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 任务ID,需要到接口“异步导出任务”ExportTasks获取DownloadUrl下载地址
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRANSOMDEFENSESTRATEGYMACHINESRESPONSE_H_
