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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPUSHTASKSRESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPUSHTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/PushTask.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribePushTasks返回参数结构体
                */
                class DescribePushTasksResponse : public AbstractModel
                {
                public:
                    DescribePushTasksResponse();
                    ~DescribePushTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取预热历史记录
                     * @return PushLogs 预热历史记录
                     * 
                     */
                    std::vector<PushTask> GetPushLogs() const;

                    /**
                     * 判断参数 PushLogs 是否已赋值
                     * @return PushLogs 是否已赋值
                     * 
                     */
                    bool PushLogsHasBeenSet() const;

                    /**
                     * 获取任务总数，用于分页
                     * @return TotalCount 任务总数，用于分页
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 预热历史记录
                     */
                    std::vector<PushTask> m_pushLogs;
                    bool m_pushLogsHasBeenSet;

                    /**
                     * 任务总数，用于分页
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPUSHTASKSRESPONSE_H_
