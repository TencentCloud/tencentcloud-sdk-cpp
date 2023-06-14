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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_RUNUSERCMDRESPONSE_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_RUNUSERCMDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bm/v20180423/model/SuccessTaskInfo.h>
#include <tencentcloud/bm/v20180423/model/FailedTaskInfo.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * RunUserCmd返回参数结构体
                */
                class RunUserCmdResponse : public AbstractModel
                {
                public:
                    RunUserCmdResponse();
                    ~RunUserCmdResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取运行成功的任务信息列表
                     * @return SuccessTaskInfoSet 运行成功的任务信息列表
                     * 
                     */
                    std::vector<SuccessTaskInfo> GetSuccessTaskInfoSet() const;

                    /**
                     * 判断参数 SuccessTaskInfoSet 是否已赋值
                     * @return SuccessTaskInfoSet 是否已赋值
                     * 
                     */
                    bool SuccessTaskInfoSetHasBeenSet() const;

                    /**
                     * 获取运行失败的任务信息列表
                     * @return FailedTaskInfoSet 运行失败的任务信息列表
                     * 
                     */
                    std::vector<FailedTaskInfo> GetFailedTaskInfoSet() const;

                    /**
                     * 判断参数 FailedTaskInfoSet 是否已赋值
                     * @return FailedTaskInfoSet 是否已赋值
                     * 
                     */
                    bool FailedTaskInfoSetHasBeenSet() const;

                private:

                    /**
                     * 运行成功的任务信息列表
                     */
                    std::vector<SuccessTaskInfo> m_successTaskInfoSet;
                    bool m_successTaskInfoSetHasBeenSet;

                    /**
                     * 运行失败的任务信息列表
                     */
                    std::vector<FailedTaskInfo> m_failedTaskInfoSet;
                    bool m_failedTaskInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_RUNUSERCMDRESPONSE_H_
