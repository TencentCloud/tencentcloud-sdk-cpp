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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEUSERCMDTASKSRESPONSE_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEUSERCMDTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bm/v20180423/model/UserCmdTask.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * DescribeUserCmdTasks返回参数结构体
                */
                class DescribeUserCmdTasksResponse : public AbstractModel
                {
                public:
                    DescribeUserCmdTasksResponse();
                    ~DescribeUserCmdTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取脚本任务信息数量
                     * @return TotalCount 脚本任务信息数量
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取脚本任务信息列表
                     * @return UserCmdTasks 脚本任务信息列表
                     * 
                     */
                    std::vector<UserCmdTask> GetUserCmdTasks() const;

                    /**
                     * 判断参数 UserCmdTasks 是否已赋值
                     * @return UserCmdTasks 是否已赋值
                     * 
                     */
                    bool UserCmdTasksHasBeenSet() const;

                private:

                    /**
                     * 脚本任务信息数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 脚本任务信息列表
                     */
                    std::vector<UserCmdTask> m_userCmdTasks;
                    bool m_userCmdTasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEUSERCMDTASKSRESPONSE_H_
