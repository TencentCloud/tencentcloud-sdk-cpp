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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBECOMMANDTASKSRESPONSE_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBECOMMANDTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/CommandDetail.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * DescribeCommandTasks返回参数结构体
                */
                class DescribeCommandTasksResponse : public AbstractModel
                {
                public:
                    DescribeCommandTasksResponse();
                    ~DescribeCommandTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>拉取任务详情数</p>
                     * @return Total <p>拉取任务详情数</p>
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>任务描述</p>
                     * @return CommandDetails <p>任务描述</p>
                     * 
                     */
                    std::vector<CommandDetail> GetCommandDetails() const;

                    /**
                     * 判断参数 CommandDetails 是否已赋值
                     * @return CommandDetails 是否已赋值
                     * 
                     */
                    bool CommandDetailsHasBeenSet() const;

                    /**
                     * 获取<p>任务状态，RUNNING -执行中；FINISHED-执行完成； STOPPED-终止任务</p>
                     * @return Status <p>任务状态，RUNNING -执行中；FINISHED-执行完成； STOPPED-终止任务</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>拉取任务详情数</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>任务描述</p>
                     */
                    std::vector<CommandDetail> m_commandDetails;
                    bool m_commandDetailsHasBeenSet;

                    /**
                     * <p>任务状态，RUNNING -执行中；FINISHED-执行完成； STOPPED-终止任务</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBECOMMANDTASKSRESPONSE_H_
