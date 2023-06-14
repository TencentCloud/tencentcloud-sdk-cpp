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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETASKRESPONSE_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/Task.h>
#include <tencentcloud/cfg/v20210820/model/TaskReportInfo.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTask返回参数结构体
                */
                class DescribeTaskResponse : public AbstractModel
                {
                public:
                    DescribeTaskResponse();
                    ~DescribeTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务信息
                     * @return Task 任务信息
                     * 
                     */
                    Task GetTask() const;

                    /**
                     * 判断参数 Task 是否已赋值
                     * @return Task 是否已赋值
                     * 
                     */
                    bool TaskHasBeenSet() const;

                    /**
                     * 获取任务对应的演练报告信息，null表示未导出报告
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportInfo 任务对应的演练报告信息，null表示未导出报告
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskReportInfo GetReportInfo() const;

                    /**
                     * 判断参数 ReportInfo 是否已赋值
                     * @return ReportInfo 是否已赋值
                     * 
                     */
                    bool ReportInfoHasBeenSet() const;

                private:

                    /**
                     * 任务信息
                     */
                    Task m_task;
                    bool m_taskHasBeenSet;

                    /**
                     * 任务对应的演练报告信息，null表示未导出报告
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskReportInfo m_reportInfo;
                    bool m_reportInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETASKRESPONSE_H_
