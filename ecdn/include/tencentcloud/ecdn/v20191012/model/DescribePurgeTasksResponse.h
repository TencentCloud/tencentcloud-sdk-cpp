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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEPURGETASKSRESPONSE_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEPURGETASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecdn/v20191012/model/PurgeTask.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * DescribePurgeTasks返回参数结构体
                */
                class DescribePurgeTasksResponse : public AbstractModel
                {
                public:
                    DescribePurgeTasksResponse();
                    ~DescribePurgeTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取刷新历史记录。
                     * @return PurgeLogs 刷新历史记录。
                     * 
                     */
                    std::vector<PurgeTask> GetPurgeLogs() const;

                    /**
                     * 判断参数 PurgeLogs 是否已赋值
                     * @return PurgeLogs 是否已赋值
                     * 
                     */
                    bool PurgeLogsHasBeenSet() const;

                    /**
                     * 获取任务总数，用于分页。
                     * @return TotalCount 任务总数，用于分页。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 刷新历史记录。
                     */
                    std::vector<PurgeTask> m_purgeLogs;
                    bool m_purgeLogsHasBeenSet;

                    /**
                     * 任务总数，用于分页。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEPURGETASKSRESPONSE_H_
