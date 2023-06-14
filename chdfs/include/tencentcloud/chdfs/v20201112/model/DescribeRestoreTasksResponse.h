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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBERESTORETASKSRESPONSE_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBERESTORETASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chdfs/v20201112/model/RestoreTask.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * DescribeRestoreTasks返回参数结构体
                */
                class DescribeRestoreTasksResponse : public AbstractModel
                {
                public:
                    DescribeRestoreTasksResponse();
                    ~DescribeRestoreTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取回热任务列表
                     * @return RestoreTasks 回热任务列表
                     * 
                     */
                    std::vector<RestoreTask> GetRestoreTasks() const;

                    /**
                     * 判断参数 RestoreTasks 是否已赋值
                     * @return RestoreTasks 是否已赋值
                     * 
                     */
                    bool RestoreTasksHasBeenSet() const;

                private:

                    /**
                     * 回热任务列表
                     */
                    std::vector<RestoreTask> m_restoreTasks;
                    bool m_restoreTasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBERESTORETASKSRESPONSE_H_
